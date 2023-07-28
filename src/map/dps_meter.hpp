enum meter_events
{
    TCPEV_DAMAGE = 0,
    TCPEV_BROADCAST
};

void meter_init();
void meter_terminate();
int meter_send_damage(int account_id, int id, int src, int target, int damage, int map, bool crit, int timestamp);