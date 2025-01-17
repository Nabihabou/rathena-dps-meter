// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_packet_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_packet_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h> // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_packet_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal
{
    class AnyMetadata;
} // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_packet_2eproto
{
    static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
    static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
    static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
    static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
    static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
    static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_packet_2eproto;
namespace companion
{
    class Credentials;
    class CredentialsDefaultTypeInternal;
    extern CredentialsDefaultTypeInternal _Credentials_default_instance_;
    class DamageEvent;
    class DamageEventDefaultTypeInternal;
    extern DamageEventDefaultTypeInternal _DamageEvent_default_instance_;
} // namespace companion
PROTOBUF_NAMESPACE_OPEN
template <>
::companion::Credentials *Arena::CreateMaybeMessage<::companion::Credentials>(Arena *);
template <>
::companion::DamageEvent *Arena::CreateMaybeMessage<::companion::DamageEvent>(Arena *);
PROTOBUF_NAMESPACE_CLOSE
namespace companion
{

    // ===================================================================

    class DamageEvent PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:companion.DamageEvent) */
    {
    public:
        inline DamageEvent() : DamageEvent(nullptr){};
        virtual ~DamageEvent();

        DamageEvent(const DamageEvent &from);
        DamageEvent(DamageEvent &&from) noexcept
            : DamageEvent()
        {
            *this = ::std::move(from);
        }

        inline DamageEvent &operator=(const DamageEvent &from)
        {
            CopyFrom(from);
            return *this;
        }
        inline DamageEvent &operator=(DamageEvent &&from) noexcept
        {
            if (GetArena() == from.GetArena())
            {
                if (this != &from)
                    InternalSwap(&from);
            }
            else
            {
                CopyFrom(from);
            }
            return *this;
        }

        static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
        {
            return GetDescriptor();
        }
        static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
        {
            return GetMetadataStatic().descriptor;
        }
        static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
        {
            return GetMetadataStatic().reflection;
        }
        static const DamageEvent &default_instance();

        static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
        static inline const DamageEvent *internal_default_instance()
        {
            return reinterpret_cast<const DamageEvent *>(
                &_DamageEvent_default_instance_);
        }
        static constexpr int kIndexInFileMessages =
            0;

        friend void swap(DamageEvent &a, DamageEvent &b)
        {
            a.Swap(&b);
        }
        inline void Swap(DamageEvent *other)
        {
            if (other == this)
                return;
            if (GetArena() == other->GetArena())
            {
                InternalSwap(other);
            }
            else
            {
                ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
            }
        }
        void UnsafeArenaSwap(DamageEvent *other)
        {
            if (other == this)
                return;
            GOOGLE_DCHECK(GetArena() == other->GetArena());
            InternalSwap(other);
        }

        // implements Message ----------------------------------------------

        inline DamageEvent *New() const final
        {
            return CreateMaybeMessage<DamageEvent>(nullptr);
        }

        DamageEvent *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
        {
            return CreateMaybeMessage<DamageEvent>(arena);
        }
        void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
        void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
        void CopyFrom(const DamageEvent &from);
        void MergeFrom(const DamageEvent &from);
        PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
        bool IsInitialized() const final;

        size_t ByteSizeLong() const final;
        const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
        ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
            ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
        int GetCachedSize() const final { return _cached_size_.Get(); }

    private:
        inline void SharedCtor();
        inline void SharedDtor();
        void SetCachedSize(int size) const final;
        void InternalSwap(DamageEvent *other);
        friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
        static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
        {
            return "companion.DamageEvent";
        }

    protected:
        explicit DamageEvent(::PROTOBUF_NAMESPACE_ID::Arena *arena);

    private:
        static void ArenaDtor(void *object);
        inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

    public:
        ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

    private:
        static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
        {
            ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_packet_2eproto);
            return ::descriptor_table_packet_2eproto.file_level_metadata[kIndexInFileMessages];
        }

    public:
        // nested types ----------------------------------------------------

        // accessors -------------------------------------------------------

        enum : int
        {
            kIdFieldNumber = 1,
            kSourceFieldNumber = 2,
            kDamageFieldNumber = 4,
            kTargetFieldNumber = 3,
            kMapFieldNumber = 5,
            kTimestampFieldNumber = 7,
            kCriticalFieldNumber = 6,
        };
        // int32 id = 1;
        void clear_id();
        ::PROTOBUF_NAMESPACE_ID::int32 id() const;
        void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
        void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

    public:
        // int32 source = 2;
        void clear_source();
        ::PROTOBUF_NAMESPACE_ID::int32 source() const;
        void set_source(::PROTOBUF_NAMESPACE_ID::int32 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int32 _internal_source() const;
        void _internal_set_source(::PROTOBUF_NAMESPACE_ID::int32 value);

    public:
        // int64 damage = 4;
        void clear_damage();
        ::PROTOBUF_NAMESPACE_ID::int64 damage() const;
        void set_damage(::PROTOBUF_NAMESPACE_ID::int64 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int64 _internal_damage() const;
        void _internal_set_damage(::PROTOBUF_NAMESPACE_ID::int64 value);

    public:
        // int32 target = 3;
        void clear_target();
        ::PROTOBUF_NAMESPACE_ID::int32 target() const;
        void set_target(::PROTOBUF_NAMESPACE_ID::int32 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int32 _internal_target() const;
        void _internal_set_target(::PROTOBUF_NAMESPACE_ID::int32 value);

    public:
        // int32 map = 5;
        void clear_map();
        ::PROTOBUF_NAMESPACE_ID::int32 map() const;
        void set_map(::PROTOBUF_NAMESPACE_ID::int32 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int32 _internal_map() const;
        void _internal_set_map(::PROTOBUF_NAMESPACE_ID::int32 value);

    public:
        // int64 timestamp = 7;
        void clear_timestamp();
        ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
        void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

    private:
        ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
        void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

    public:
        // bool critical = 6;
        void clear_critical();
        bool critical() const;
        void set_critical(bool value);

    private:
        bool _internal_critical() const;
        void _internal_set_critical(bool value);

    public:
        // @@protoc_insertion_point(class_scope:companion.DamageEvent)
    private:
        class _Internal;

        template <typename T>
        friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
        typedef void InternalArenaConstructable_;
        typedef void DestructorSkippable_;
        ::PROTOBUF_NAMESPACE_ID::int32 id_;
        ::PROTOBUF_NAMESPACE_ID::int32 source_;
        ::PROTOBUF_NAMESPACE_ID::int64 damage_;
        ::PROTOBUF_NAMESPACE_ID::int32 target_;
        ::PROTOBUF_NAMESPACE_ID::int32 map_;
        ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
        bool critical_;
        mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
        friend struct ::TableStruct_packet_2eproto;
    };
    // -------------------------------------------------------------------

    class Credentials PROTOBUF_FINAL : public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:companion.Credentials) */
    {
    public:
        inline Credentials() : Credentials(nullptr){};
        virtual ~Credentials();

        Credentials(const Credentials &from);
        Credentials(Credentials &&from) noexcept
            : Credentials()
        {
            *this = ::std::move(from);
        }

        inline Credentials &operator=(const Credentials &from)
        {
            CopyFrom(from);
            return *this;
        }
        inline Credentials &operator=(Credentials &&from) noexcept
        {
            if (GetArena() == from.GetArena())
            {
                if (this != &from)
                    InternalSwap(&from);
            }
            else
            {
                CopyFrom(from);
            }
            return *this;
        }

        static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor()
        {
            return GetDescriptor();
        }
        static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor()
        {
            return GetMetadataStatic().descriptor;
        }
        static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection()
        {
            return GetMetadataStatic().reflection;
        }
        static const Credentials &default_instance();

        static void InitAsDefaultInstance(); // FOR INTERNAL USE ONLY
        static inline const Credentials *internal_default_instance()
        {
            return reinterpret_cast<const Credentials *>(
                &_Credentials_default_instance_);
        }
        static constexpr int kIndexInFileMessages =
            1;

        friend void swap(Credentials &a, Credentials &b)
        {
            a.Swap(&b);
        }
        inline void Swap(Credentials *other)
        {
            if (other == this)
                return;
            if (GetArena() == other->GetArena())
            {
                InternalSwap(other);
            }
            else
            {
                ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
            }
        }
        void UnsafeArenaSwap(Credentials *other)
        {
            if (other == this)
                return;
            GOOGLE_DCHECK(GetArena() == other->GetArena());
            InternalSwap(other);
        }

        // implements Message ----------------------------------------------

        inline Credentials *New() const final
        {
            return CreateMaybeMessage<Credentials>(nullptr);
        }

        Credentials *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final
        {
            return CreateMaybeMessage<Credentials>(arena);
        }
        void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
        void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
        void CopyFrom(const Credentials &from);
        void MergeFrom(const Credentials &from);
        PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
        bool IsInitialized() const final;

        size_t ByteSizeLong() const final;
        const char *_InternalParse(const char *ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
        ::PROTOBUF_NAMESPACE_ID::uint8 *_InternalSerialize(
            ::PROTOBUF_NAMESPACE_ID::uint8 *target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream *stream) const final;
        int GetCachedSize() const final { return _cached_size_.Get(); }

    private:
        inline void SharedCtor();
        inline void SharedDtor();
        void SetCachedSize(int size) const final;
        void InternalSwap(Credentials *other);
        friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
        static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName()
        {
            return "companion.Credentials";
        }

    protected:
        explicit Credentials(::PROTOBUF_NAMESPACE_ID::Arena *arena);

    private:
        static void ArenaDtor(void *object);
        inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena *arena);

    public:
        ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

    private:
        static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic()
        {
            ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_packet_2eproto);
            return ::descriptor_table_packet_2eproto.file_level_metadata[kIndexInFileMessages];
        }

    public:
        // nested types ----------------------------------------------------

        // accessors -------------------------------------------------------

        enum : int
        {
            kUsernameFieldNumber = 1,
            kPasswordFieldNumber = 2,
        };
        // string username = 1;
        void clear_username();
        const std::string &username() const;
        void set_username(const std::string &value);
        void set_username(std::string &&value);
        void set_username(const char *value);
        void set_username(const char *value, size_t size);
        std::string *mutable_username();
        std::string *release_username();
        void set_allocated_username(std::string *username);
        GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                           "    string fields are deprecated and will be removed in a"
                                           "    future release.")
        std::string *unsafe_arena_release_username();
        GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                           "    string fields are deprecated and will be removed in a"
                                           "    future release.")
        void unsafe_arena_set_allocated_username(
            std::string *username);

    private:
        const std::string &_internal_username() const;
        void _internal_set_username(const std::string &value);
        std::string *_internal_mutable_username();

    public:
        // string password = 2;
        void clear_password();
        const std::string &password() const;
        void set_password(const std::string &value);
        void set_password(std::string &&value);
        void set_password(const char *value);
        void set_password(const char *value, size_t size);
        std::string *mutable_password();
        std::string *release_password();
        void set_allocated_password(std::string *password);
        GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                           "    string fields are deprecated and will be removed in a"
                                           "    future release.")
        std::string *unsafe_arena_release_password();
        GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
                                           "    string fields are deprecated and will be removed in a"
                                           "    future release.")
        void unsafe_arena_set_allocated_password(
            std::string *password);

    private:
        const std::string &_internal_password() const;
        void _internal_set_password(const std::string &value);
        std::string *_internal_mutable_password();

    public:
        // @@protoc_insertion_point(class_scope:companion.Credentials)
    private:
        class _Internal;

        template <typename T>
        friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
        typedef void InternalArenaConstructable_;
        typedef void DestructorSkippable_;
        ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
        ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
        mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
        friend struct ::TableStruct_packet_2eproto;
    };
    // ===================================================================

    // ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif // __GNUC__
    // DamageEvent

    // int32 id = 1;
    inline void DamageEvent::clear_id()
    {
        id_ = 0;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::_internal_id() const
    {
        return id_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::id() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.id)
        return _internal_id();
    }
    inline void DamageEvent::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value)
    {

        id_ = value;
    }
    inline void DamageEvent::set_id(::PROTOBUF_NAMESPACE_ID::int32 value)
    {
        _internal_set_id(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.id)
    }

    // int32 source = 2;
    inline void DamageEvent::clear_source()
    {
        source_ = 0;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::_internal_source() const
    {
        return source_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::source() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.source)
        return _internal_source();
    }
    inline void DamageEvent::_internal_set_source(::PROTOBUF_NAMESPACE_ID::int32 value)
    {

        source_ = value;
    }
    inline void DamageEvent::set_source(::PROTOBUF_NAMESPACE_ID::int32 value)
    {
        _internal_set_source(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.source)
    }

    // int32 target = 3;
    inline void DamageEvent::clear_target()
    {
        target_ = 0;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::_internal_target() const
    {
        return target_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::target() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.target)
        return _internal_target();
    }
    inline void DamageEvent::_internal_set_target(::PROTOBUF_NAMESPACE_ID::int32 value)
    {

        target_ = value;
    }
    inline void DamageEvent::set_target(::PROTOBUF_NAMESPACE_ID::int32 value)
    {
        _internal_set_target(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.target)
    }

    // int64 damage = 4;
    inline void DamageEvent::clear_damage()
    {
        damage_ = PROTOBUF_LONGLONG(0);
    }
    inline ::PROTOBUF_NAMESPACE_ID::int64 DamageEvent::_internal_damage() const
    {
        return damage_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int64 DamageEvent::damage() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.damage)
        return _internal_damage();
    }
    inline void DamageEvent::_internal_set_damage(::PROTOBUF_NAMESPACE_ID::int64 value)
    {

        damage_ = value;
    }
    inline void DamageEvent::set_damage(::PROTOBUF_NAMESPACE_ID::int64 value)
    {
        _internal_set_damage(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.damage)
    }

    // int32 map = 5;
    inline void DamageEvent::clear_map()
    {
        map_ = 0;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::_internal_map() const
    {
        return map_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int32 DamageEvent::map() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.map)
        return _internal_map();
    }
    inline void DamageEvent::_internal_set_map(::PROTOBUF_NAMESPACE_ID::int32 value)
    {

        map_ = value;
    }
    inline void DamageEvent::set_map(::PROTOBUF_NAMESPACE_ID::int32 value)
    {
        _internal_set_map(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.map)
    }

    // bool critical = 6;
    inline void DamageEvent::clear_critical()
    {
        critical_ = false;
    }
    inline bool DamageEvent::_internal_critical() const
    {
        return critical_;
    }
    inline bool DamageEvent::critical() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.critical)
        return _internal_critical();
    }
    inline void DamageEvent::_internal_set_critical(bool value)
    {

        critical_ = value;
    }
    inline void DamageEvent::set_critical(bool value)
    {
        _internal_set_critical(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.critical)
    }

    // int64 timestamp = 7;
    inline void DamageEvent::clear_timestamp()
    {
        timestamp_ = PROTOBUF_LONGLONG(0);
    }
    inline ::PROTOBUF_NAMESPACE_ID::int64 DamageEvent::_internal_timestamp() const
    {
        return timestamp_;
    }
    inline ::PROTOBUF_NAMESPACE_ID::int64 DamageEvent::timestamp() const
    {
        // @@protoc_insertion_point(field_get:companion.DamageEvent.timestamp)
        return _internal_timestamp();
    }
    inline void DamageEvent::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value)
    {

        timestamp_ = value;
    }
    inline void DamageEvent::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value)
    {
        _internal_set_timestamp(value);
        // @@protoc_insertion_point(field_set:companion.DamageEvent.timestamp)
    }

    // -------------------------------------------------------------------

    // Credentials

    // string username = 1;
    inline void Credentials::clear_username()
    {
        username_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline const std::string &Credentials::username() const
    {
        // @@protoc_insertion_point(field_get:companion.Credentials.username)
        return _internal_username();
    }
    inline void Credentials::set_username(const std::string &value)
    {
        _internal_set_username(value);
        // @@protoc_insertion_point(field_set:companion.Credentials.username)
    }
    inline std::string *Credentials::mutable_username()
    {
        // @@protoc_insertion_point(field_mutable:companion.Credentials.username)
        return _internal_mutable_username();
    }
    inline const std::string &Credentials::_internal_username() const
    {
        return username_.Get();
    }
    inline void Credentials::_internal_set_username(const std::string &value)
    {

        username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
    }
    inline void Credentials::set_username(std::string &&value)
    {

        username_.Set(
            &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
        // @@protoc_insertion_point(field_set_rvalue:companion.Credentials.username)
    }
    inline void Credentials::set_username(const char *value)
    {
        GOOGLE_DCHECK(value != nullptr);

        username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
                      GetArena());
        // @@protoc_insertion_point(field_set_char:companion.Credentials.username)
    }
    inline void Credentials::set_username(const char *value,
                                          size_t size)
    {

        username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(reinterpret_cast<const char *>(value), size), GetArena());
        // @@protoc_insertion_point(field_set_pointer:companion.Credentials.username)
    }
    inline std::string *Credentials::_internal_mutable_username()
    {

        return username_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline std::string *Credentials::release_username()
    {
        // @@protoc_insertion_point(field_release:companion.Credentials.username)
        return username_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline void Credentials::set_allocated_username(std::string *username)
    {
        if (username != nullptr)
        {
        }
        else
        {
        }
        username_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username,
                               GetArena());
        // @@protoc_insertion_point(field_set_allocated:companion.Credentials.username)
    }
    inline std::string *Credentials::unsafe_arena_release_username()
    {
        // @@protoc_insertion_point(field_unsafe_arena_release:companion.Credentials.username)
        GOOGLE_DCHECK(GetArena() != nullptr);

        return username_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                            GetArena());
    }
    inline void Credentials::unsafe_arena_set_allocated_username(
        std::string *username)
    {
        GOOGLE_DCHECK(GetArena() != nullptr);
        if (username != nullptr)
        {
        }
        else
        {
        }
        username_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                          username, GetArena());
        // @@protoc_insertion_point(field_unsafe_arena_set_allocated:companion.Credentials.username)
    }

    // string password = 2;
    inline void Credentials::clear_password()
    {
        password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline const std::string &Credentials::password() const
    {
        // @@protoc_insertion_point(field_get:companion.Credentials.password)
        return _internal_password();
    }
    inline void Credentials::set_password(const std::string &value)
    {
        _internal_set_password(value);
        // @@protoc_insertion_point(field_set:companion.Credentials.password)
    }
    inline std::string *Credentials::mutable_password()
    {
        // @@protoc_insertion_point(field_mutable:companion.Credentials.password)
        return _internal_mutable_password();
    }
    inline const std::string &Credentials::_internal_password() const
    {
        return password_.Get();
    }
    inline void Credentials::_internal_set_password(const std::string &value)
    {

        password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
    }
    inline void Credentials::set_password(std::string &&value)
    {

        password_.Set(
            &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
        // @@protoc_insertion_point(field_set_rvalue:companion.Credentials.password)
    }
    inline void Credentials::set_password(const char *value)
    {
        GOOGLE_DCHECK(value != nullptr);

        password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
                      GetArena());
        // @@protoc_insertion_point(field_set_char:companion.Credentials.password)
    }
    inline void Credentials::set_password(const char *value,
                                          size_t size)
    {

        password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(reinterpret_cast<const char *>(value), size), GetArena());
        // @@protoc_insertion_point(field_set_pointer:companion.Credentials.password)
    }
    inline std::string *Credentials::_internal_mutable_password()
    {

        return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline std::string *Credentials::release_password()
    {
        // @@protoc_insertion_point(field_release:companion.Credentials.password)
        return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    }
    inline void Credentials::set_allocated_password(std::string *password)
    {
        if (password != nullptr)
        {
        }
        else
        {
        }
        password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
                               GetArena());
        // @@protoc_insertion_point(field_set_allocated:companion.Credentials.password)
    }
    inline std::string *Credentials::unsafe_arena_release_password()
    {
        // @@protoc_insertion_point(field_unsafe_arena_release:companion.Credentials.password)
        GOOGLE_DCHECK(GetArena() != nullptr);

        return password_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                            GetArena());
    }
    inline void Credentials::unsafe_arena_set_allocated_password(
        std::string *password)
    {
        GOOGLE_DCHECK(GetArena() != nullptr);
        if (password != nullptr)
        {
        }
        else
        {
        }
        password_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                          password, GetArena());
        // @@protoc_insertion_point(field_unsafe_arena_set_allocated:companion.Credentials.password)
    }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif // __GNUC__
    // -------------------------------------------------------------------

    // @@protoc_insertion_point(namespace_scope)

} // namespace companion

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_packet_2eproto
