// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogicPacket.proto

#include "LogicPacket.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace User {

inline constexpr S2CPCLoginUserRes::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : username_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        size_{0u},
        type_{static_cast< ::User::NUM >(0)},
        userid_{0u},
        userlevel_{0u},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR S2CPCLoginUserRes::S2CPCLoginUserRes(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct S2CPCLoginUserResDefaultTypeInternal {
  PROTOBUF_CONSTEXPR S2CPCLoginUserResDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~S2CPCLoginUserResDefaultTypeInternal() {}
  union {
    S2CPCLoginUserRes _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 S2CPCLoginUserResDefaultTypeInternal _S2CPCLoginUserRes_default_instance_;

inline constexpr Default::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : size_{0u},
        type_{static_cast< ::User::NUM >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Default::Default(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct DefaultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DefaultDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DefaultDefaultTypeInternal() {}
  union {
    Default _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DefaultDefaultTypeInternal _Default_default_instance_;

inline constexpr C2SPCLoginUserReq::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : size_{0u},
        type_{static_cast< ::User::NUM >(0)},
        userid_{0u},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR C2SPCLoginUserReq::C2SPCLoginUserReq(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct C2SPCLoginUserReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR C2SPCLoginUserReqDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~C2SPCLoginUserReqDefaultTypeInternal() {}
  union {
    C2SPCLoginUserReq _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 C2SPCLoginUserReqDefaultTypeInternal _C2SPCLoginUserReq_default_instance_;
}  // namespace User
static ::_pb::Metadata file_level_metadata_LogicPacket_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_LogicPacket_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_LogicPacket_2eproto = nullptr;
const ::uint32_t TableStruct_LogicPacket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::User::Default, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::User::Default, _impl_.size_),
    PROTOBUF_FIELD_OFFSET(::User::Default, _impl_.type_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::User::C2SPCLoginUserReq, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::User::C2SPCLoginUserReq, _impl_.size_),
    PROTOBUF_FIELD_OFFSET(::User::C2SPCLoginUserReq, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::User::C2SPCLoginUserReq, _impl_.userid_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _impl_.size_),
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _impl_.userid_),
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _impl_.username_),
    PROTOBUF_FIELD_OFFSET(::User::S2CPCLoginUserRes, _impl_.userlevel_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::User::Default)},
        {10, -1, -1, sizeof(::User::C2SPCLoginUserReq)},
        {21, -1, -1, sizeof(::User::S2CPCLoginUserRes)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::User::_Default_default_instance_._instance,
    &::User::_C2SPCLoginUserReq_default_instance_._instance,
    &::User::_S2CPCLoginUserRes_default_instance_._instance,
};
const char descriptor_table_protodef_LogicPacket_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\021LogicPacket.proto\022\004User\"0\n\007Default\022\014\n\004"
    "Size\030\001 \001(\r\022\027\n\004Type\030\002 \001(\0162\t.User.NUM\"J\n\021C"
    "2SPCLoginUserReq\022\014\n\004Size\030\001 \001(\r\022\027\n\004Type\030\002"
    " \001(\0162\t.User.NUM\022\016\n\006UserID\030\003 \001(\r\"o\n\021S2CPC"
    "LoginUserRes\022\014\n\004Size\030\001 \001(\r\022\027\n\004Type\030\002 \001(\016"
    "2\t.User.NUM\022\016\n\006UserID\030\003 \001(\r\022\020\n\010UserName\030"
    "\004 \001(\t\022\021\n\tUserLevel\030\005 \001(\r*/\n\003NUM\022\023\n\017C2SLo"
    "ginUserReq\020\000\022\023\n\017S2SLoginUserReq\020\001b\006proto"
    "3"
};
static ::absl::once_flag descriptor_table_LogicPacket_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_LogicPacket_2eproto = {
    false,
    false,
    321,
    descriptor_table_protodef_LogicPacket_2eproto,
    "LogicPacket.proto",
    &descriptor_table_LogicPacket_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_LogicPacket_2eproto::offsets,
    file_level_metadata_LogicPacket_2eproto,
    file_level_enum_descriptors_LogicPacket_2eproto,
    file_level_service_descriptors_LogicPacket_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_LogicPacket_2eproto_getter() {
  return &descriptor_table_LogicPacket_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_LogicPacket_2eproto(&descriptor_table_LogicPacket_2eproto);
namespace User {
const ::google::protobuf::EnumDescriptor* NUM_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_LogicPacket_2eproto);
  return file_level_enum_descriptors_LogicPacket_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t NUM_internal_data_[] = {
    131072u, 0u, };
bool NUM_IsValid(int value) {
  return 0 <= value && value <= 1;
}
// ===================================================================

class Default::_Internal {
 public:
};

Default::Default(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:User.Default)
}
Default::Default(
    ::google::protobuf::Arena* arena, const Default& from)
    : Default(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE Default::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Default::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, size_),
           0,
           offsetof(Impl_, type_) -
               offsetof(Impl_, size_) +
               sizeof(Impl_::type_));
}
Default::~Default() {
  // @@protoc_insertion_point(destructor:User.Default)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Default::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Default::Clear() {
// @@protoc_insertion_point(message_clear_start:User.Default)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.size_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.type_) -
      reinterpret_cast<char*>(&_impl_.size_)) + sizeof(_impl_.type_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Default::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> Default::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Default_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // .User.NUM Type = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Default, _impl_.type_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Default, _impl_.type_)}},
    // uint32 Size = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Default, _impl_.size_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Default, _impl_.size_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 Size = 1;
    {PROTOBUF_FIELD_OFFSET(Default, _impl_.size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // .User.NUM Type = 2;
    {PROTOBUF_FIELD_OFFSET(Default, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Default::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:User.Default)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_size(), target);
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:User.Default)
  return target;
}

::size_t Default::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:User.Default)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_size());
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Default::_class_data_ = {
    Default::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Default::GetClassData() const {
  return &_class_data_;
}

void Default::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Default*>(&to_msg);
  auto& from = static_cast<const Default&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:User.Default)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_size() != 0) {
    _this->_internal_set_size(from._internal_size());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Default::CopyFrom(const Default& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:User.Default)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Default::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Default::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Default::InternalSwap(Default* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Default, _impl_.type_)
      + sizeof(Default::_impl_.type_)
      - PROTOBUF_FIELD_OFFSET(Default, _impl_.size_)>(
          reinterpret_cast<char*>(&_impl_.size_),
          reinterpret_cast<char*>(&other->_impl_.size_));
}

::google::protobuf::Metadata Default::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_LogicPacket_2eproto_getter, &descriptor_table_LogicPacket_2eproto_once,
      file_level_metadata_LogicPacket_2eproto[0]);
}
// ===================================================================

class C2SPCLoginUserReq::_Internal {
 public:
};

C2SPCLoginUserReq::C2SPCLoginUserReq(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:User.C2SPCLoginUserReq)
}
C2SPCLoginUserReq::C2SPCLoginUserReq(
    ::google::protobuf::Arena* arena, const C2SPCLoginUserReq& from)
    : C2SPCLoginUserReq(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE C2SPCLoginUserReq::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void C2SPCLoginUserReq::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, size_),
           0,
           offsetof(Impl_, userid_) -
               offsetof(Impl_, size_) +
               sizeof(Impl_::userid_));
}
C2SPCLoginUserReq::~C2SPCLoginUserReq() {
  // @@protoc_insertion_point(destructor:User.C2SPCLoginUserReq)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void C2SPCLoginUserReq::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void C2SPCLoginUserReq::Clear() {
// @@protoc_insertion_point(message_clear_start:User.C2SPCLoginUserReq)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.size_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.userid_) -
      reinterpret_cast<char*>(&_impl_.size_)) + sizeof(_impl_.userid_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* C2SPCLoginUserReq::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> C2SPCLoginUserReq::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_C2SPCLoginUserReq_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint32 Size = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2SPCLoginUserReq, _impl_.size_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.size_)}},
    // .User.NUM Type = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2SPCLoginUserReq, _impl_.type_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.type_)}},
    // uint32 UserID = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2SPCLoginUserReq, _impl_.userid_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.userid_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 Size = 1;
    {PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // .User.NUM Type = 2;
    {PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // uint32 UserID = 3;
    {PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.userid_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* C2SPCLoginUserReq::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:User.C2SPCLoginUserReq)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_size(), target);
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_type(), target);
  }

  // uint32 UserID = 3;
  if (this->_internal_userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_userid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:User.C2SPCLoginUserReq)
  return target;
}

::size_t C2SPCLoginUserReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:User.C2SPCLoginUserReq)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_size());
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // uint32 UserID = 3;
  if (this->_internal_userid() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_userid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData C2SPCLoginUserReq::_class_data_ = {
    C2SPCLoginUserReq::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* C2SPCLoginUserReq::GetClassData() const {
  return &_class_data_;
}

void C2SPCLoginUserReq::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<C2SPCLoginUserReq*>(&to_msg);
  auto& from = static_cast<const C2SPCLoginUserReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:User.C2SPCLoginUserReq)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_size() != 0) {
    _this->_internal_set_size(from._internal_size());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  if (from._internal_userid() != 0) {
    _this->_internal_set_userid(from._internal_userid());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void C2SPCLoginUserReq::CopyFrom(const C2SPCLoginUserReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:User.C2SPCLoginUserReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool C2SPCLoginUserReq::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* C2SPCLoginUserReq::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void C2SPCLoginUserReq::InternalSwap(C2SPCLoginUserReq* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.userid_)
      + sizeof(C2SPCLoginUserReq::_impl_.userid_)
      - PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.size_)>(
          reinterpret_cast<char*>(&_impl_.size_),
          reinterpret_cast<char*>(&other->_impl_.size_));
}

::google::protobuf::Metadata C2SPCLoginUserReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_LogicPacket_2eproto_getter, &descriptor_table_LogicPacket_2eproto_once,
      file_level_metadata_LogicPacket_2eproto[1]);
}
// ===================================================================

class S2CPCLoginUserRes::_Internal {
 public:
};

S2CPCLoginUserRes::S2CPCLoginUserRes(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:User.S2CPCLoginUserRes)
}
inline PROTOBUF_NDEBUG_INLINE S2CPCLoginUserRes::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : username_(arena, from.username_),
        _cached_size_{0} {}

S2CPCLoginUserRes::S2CPCLoginUserRes(
    ::google::protobuf::Arena* arena,
    const S2CPCLoginUserRes& from)
    : ::google::protobuf::Message(arena) {
  S2CPCLoginUserRes* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, size_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, size_),
           offsetof(Impl_, userlevel_) -
               offsetof(Impl_, size_) +
               sizeof(Impl_::userlevel_));

  // @@protoc_insertion_point(copy_constructor:User.S2CPCLoginUserRes)
}
inline PROTOBUF_NDEBUG_INLINE S2CPCLoginUserRes::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : username_(arena),
        _cached_size_{0} {}

inline void S2CPCLoginUserRes::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, size_),
           0,
           offsetof(Impl_, userlevel_) -
               offsetof(Impl_, size_) +
               sizeof(Impl_::userlevel_));
}
S2CPCLoginUserRes::~S2CPCLoginUserRes() {
  // @@protoc_insertion_point(destructor:User.S2CPCLoginUserRes)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void S2CPCLoginUserRes::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.username_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void S2CPCLoginUserRes::Clear() {
// @@protoc_insertion_point(message_clear_start:User.S2CPCLoginUserRes)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.username_.ClearToEmpty();
  ::memset(&_impl_.size_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.userlevel_) -
      reinterpret_cast<char*>(&_impl_.size_)) + sizeof(_impl_.userlevel_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* S2CPCLoginUserRes::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 0, 39, 2> S2CPCLoginUserRes::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_S2CPCLoginUserRes_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint32 Size = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.size_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.size_)}},
    // .User.NUM Type = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.type_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.type_)}},
    // uint32 UserID = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.userid_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userid_)}},
    // string UserName = 4;
    {::_pbi::TcParser::FastUS1,
     {34, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.username_)}},
    // uint32 UserLevel = 5;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.userlevel_), 63>(),
     {40, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userlevel_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 Size = 1;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // .User.NUM Type = 2;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // uint32 UserID = 3;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userid_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // string UserName = 4;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.username_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // uint32 UserLevel = 5;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userlevel_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
    "\26\0\0\0\10\0\0\0"
    "User.S2CPCLoginUserRes"
    "UserName"
  }},
};

::uint8_t* S2CPCLoginUserRes::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:User.S2CPCLoginUserRes)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_size(), target);
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_type(), target);
  }

  // uint32 UserID = 3;
  if (this->_internal_userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_userid(), target);
  }

  // string UserName = 4;
  if (!this->_internal_username().empty()) {
    const std::string& _s = this->_internal_username();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "User.S2CPCLoginUserRes.UserName");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // uint32 UserLevel = 5;
  if (this->_internal_userlevel() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_userlevel(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:User.S2CPCLoginUserRes)
  return target;
}

::size_t S2CPCLoginUserRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:User.S2CPCLoginUserRes)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string UserName = 4;
  if (!this->_internal_username().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_username());
  }

  // uint32 Size = 1;
  if (this->_internal_size() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_size());
  }

  // .User.NUM Type = 2;
  if (this->_internal_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // uint32 UserID = 3;
  if (this->_internal_userid() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_userid());
  }

  // uint32 UserLevel = 5;
  if (this->_internal_userlevel() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_userlevel());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData S2CPCLoginUserRes::_class_data_ = {
    S2CPCLoginUserRes::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* S2CPCLoginUserRes::GetClassData() const {
  return &_class_data_;
}

void S2CPCLoginUserRes::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<S2CPCLoginUserRes*>(&to_msg);
  auto& from = static_cast<const S2CPCLoginUserRes&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:User.S2CPCLoginUserRes)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_username().empty()) {
    _this->_internal_set_username(from._internal_username());
  }
  if (from._internal_size() != 0) {
    _this->_internal_set_size(from._internal_size());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  if (from._internal_userid() != 0) {
    _this->_internal_set_userid(from._internal_userid());
  }
  if (from._internal_userlevel() != 0) {
    _this->_internal_set_userlevel(from._internal_userlevel());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void S2CPCLoginUserRes::CopyFrom(const S2CPCLoginUserRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:User.S2CPCLoginUserRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool S2CPCLoginUserRes::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* S2CPCLoginUserRes::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void S2CPCLoginUserRes::InternalSwap(S2CPCLoginUserRes* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.username_, &other->_impl_.username_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userlevel_)
      + sizeof(S2CPCLoginUserRes::_impl_.userlevel_)
      - PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.size_)>(
          reinterpret_cast<char*>(&_impl_.size_),
          reinterpret_cast<char*>(&other->_impl_.size_));
}

::google::protobuf::Metadata S2CPCLoginUserRes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_LogicPacket_2eproto_getter, &descriptor_table_LogicPacket_2eproto_once,
      file_level_metadata_LogicPacket_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace User
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
