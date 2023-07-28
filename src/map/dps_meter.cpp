#include "dps_meter.hpp"

#include <stdlib.h>
#include <common/cbasetypes.hpp>
#include <math.h>
#include <iostream>
#include <thread>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <csignal>
#include <vector>
#include <mutex>
#include <algorithm>
#include <netinet/in.h>
#include <netinet/tcp.h>    /// Include this header for TCP_NODELAY
#include "dps_packets.pb.h" /// Protobuffer

struct ClientInfo
{
    int socket;
    int account_id;
};

int serverSocket;
std::vector<ClientInfo> connectedClients;
std::mutex clientMutex;
std::thread serverThread;

// Sends a message to a connected socket
void meter_send2socket(int socket, const char *buffer)
{
    send(socket, buffer, strlen(buffer), 0);
}

// Sends a message to the socket connected with a given account_id
void meter_send2account(int account_id, const char *buffer, size_t length)
{
    std::lock_guard<std::mutex> lock(clientMutex);

    auto it = std::find_if(connectedClients.begin(), connectedClients.end(),
                           [account_id](const ClientInfo &info)
                           { return info.account_id == account_id; });
    if (it != connectedClients.end())
    {
        std::cout << "Sending message to: " << account_id << std::endl;

        // Enable TCP_NODELAY option on the socket
        int enable = 1;
        setsockopt(it->socket, IPPROTO_TCP, TCP_NODELAY, &enable, sizeof(enable));

        // Send the message length as a 4-byte prefix
        int message_length = static_cast<int>(length);
        send(it->socket, reinterpret_cast<const char *>(&message_length), sizeof(message_length), 0);

        // Send the message
        send(it->socket, buffer, length, 0);
    }
}

int meter_send_damage(int account_id, int id, int src, int target, int damage, int map, bool crit, int timestamp)
{
    // Build protobuf message
    companion::DamageEvent message;
    message.set_id(id);
    message.set_source(src);
    message.set_target(target);
    message.set_damage(damage);
    message.set_map(map);
    message.set_critical(crit);
    message.set_timestamp(timestamp);

    // Serialize message
    std::string serialized_message;
    message.SerializeToString(&serialized_message);

    // Append event type
    std::string buffer;
    buffer.push_back(static_cast<char>(meter_events::TCPEV_DAMAGE));
    buffer.append(serialized_message);

    // Send the buffer to given the account
    meter_send2account(account_id, buffer.data(), buffer.length());

    return 1;
}

bool authenticate_socket(int clientSocket, int &account_id)
{
    char buffer[1024];
    int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);

    if (bytesRead > 0)
    {
        std::string receivedData(buffer, bytesRead);
        std::cout << "Received data: " << receivedData << std::endl;

        std::size_t delimiterPos = receivedData.find('|'); // expected: secret|account_id
        if (delimiterPos == std::string::npos || receivedData.length() < delimiterPos + 8)
        {
            std::cout << "Invalid data format." << std::endl;
            return false;
        }

        std::string receivedSecret = receivedData.substr(0, delimiterPos);
        std::string receivedAccountID = receivedData.substr(delimiterPos + 1, 7); // Extract the 7-character account ID

        std::string expectedSecret = "your_base64_secret"; // Replace with your actual secret

        if (receivedSecret == expectedSecret)
        {
            std::cout << "Authentication successful" << std::endl;
            meter_send2socket(clientSocket, "Authentication successful");
            account_id = std::stoi(receivedAccountID);
            return true;
        }
        else
        {
            std::cout << "Authentication failed. Invalid secret" << std::endl;
            meter_send2socket(clientSocket, "Authentication failed");
            return false;
        }
    }
    else if (bytesRead == 0)
    {
        // Client disconnected
        std::cout << "Client disconnected before sending the data." << std::endl;
        return false;
    }
    else
    {
        // Error occurred or timeout expired
        std::cout << "Error or timeout occurred while receiving data" << std::endl;
        return false;
    }
}

void remove_socket(int clientSocket)
{
    std::lock_guard<std::mutex> lock(clientMutex);
    auto it = std::find_if(connectedClients.begin(), connectedClients.end(),
                           [clientSocket](const ClientInfo &info)
                           {
                               return info.socket == clientSocket;
                           });
    if (it != connectedClients.end())
    {
        connectedClients.erase(it);
        close(clientSocket);
    }
}

void handle_authenticated_connection(int clientSocket, int account_id)
{
    char buffer[1024];
    int bytesRead;
    while ((bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0)) > 0)
    {
        // Handle received data from the client
        std::cout << buffer << std::endl;
        // Clear the buffer
        memset(buffer, '\0', sizeof(buffer));
    }

    if (bytesRead == 0)
    {
        // Client disconnected, close the socket
        std::cout << "Client disconnected" << std::endl;
        remove_socket(clientSocket);
    }
    else if (bytesRead == -1)
    {
        // Error occurred, handle it accordingly
        std::cout << "Error occurred while receiving data" << std::endl;
        remove_socket(clientSocket);
    }
}

void handle_tcp_connection(int clientSocket)
{
    std::cout << "Client attempting connection.." << std::endl;

    {
        std::lock_guard<std::mutex> lock(clientMutex);
        connectedClients.push_back({clientSocket, 0});
    }
    int users;
    {
        std::lock_guard<std::mutex> lock(clientMutex);
        users = connectedClients.size();
    }
    std::cout << "Connected users: " << users << std::endl;

    int account_id = 0;
    if (!authenticate_socket(clientSocket, account_id))
    {
        // Close the socket if authentication failed or an error occurred
        remove_socket(clientSocket);
    }
    else
    {
        // Set the account ID for the client
        {
            std::lock_guard<std::mutex> lock(clientMutex);
            auto it = std::find_if(connectedClients.begin(), connectedClients.end(),
                                   [clientSocket](const ClientInfo &info)
                                   {
                                       return info.socket == clientSocket;
                                   });
            if (it != connectedClients.end())
            {
                it->account_id = account_id;
            }
        }
        handle_authenticated_connection(clientSocket, account_id);
    }

    {
        std::lock_guard<std::mutex> lock(clientMutex);
        users = connectedClients.size();
    }
    std::cout << "Connected users: " << users << std::endl;
}

void start_meter_server()
{
    int port = 8080;
    int clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t clientAddrLen = sizeof(clientAddr);

    // Create the server socket
    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        std::cout << "Failed to create socket" << std::endl;
        return;
    }

    // Set up the server address
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(port);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    // Bind the server socket to the specified address and port
    if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) == -1)
    {
        std::cout << "Failed to bind socket" << std::endl;
        return;
    }

    // Start listening for client connections
    if (listen(serverSocket, 5) == -1)
    {
        std::cout << "Failed to listen for connections" << std::endl;
        return;
    }

    std::cout << "TCP Server is running on port " << port << std::endl;

    while (true)
    {
        // Accept a client connection
        if ((clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &clientAddrLen)) == -1)
        {
            std::cout << "Failed to accept client connection" << std::endl;
            continue;
        }

        // Handle the client connection in a separate thread
        std::thread clientThread(handle_tcp_connection, clientSocket);
        clientThread.detach();
    }

    // Close the server socket
    close(serverSocket);
}

void meter_terminate()
{
    close(serverSocket);
}

void meter_init()
{
    std::thread serverThread(start_meter_server);
    serverThread.detach();
}