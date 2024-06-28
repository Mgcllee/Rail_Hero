// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: LogicPacket.proto
// Protobuf C++ Version: 5.27.2

#include "LogicPacket.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace examchatserverPacket {

inline constexpr S2CPCLoginUserRes::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : userid_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        result_{0u},
        usersn_{0u},
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

inline constexpr C2SPCLoginUserReq::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : userid_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
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
}  // namespace examchatserverPacket
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_LogicPacket_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_LogicPacket_2eproto = nullptr;
const ::uint32_t
    TableStruct_LogicPacket_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::C2SPCLoginUserReq, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::C2SPCLoginUserReq, _impl_.userid_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::S2CPCLoginUserRes, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::S2CPCLoginUserRes, _impl_.result_),
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::S2CPCLoginUserRes, _impl_.usersn_),
        PROTOBUF_FIELD_OFFSET(::examchatserverPacket::S2CPCLoginUserRes, _impl_.userid_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::examchatserverPacket::C2SPCLoginUserReq)},
        {9, -1, -1, sizeof(::examchatserverPacket::S2CPCLoginUserRes)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::examchatserverPacket::_C2SPCLoginUserReq_default_instance_._instance,
    &::examchatserverPacket::_S2CPCLoginUserRes_default_instance_._instance,
};
const char descriptor_table_protodef_LogicPacket_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\021LogicPacket.proto\022\024examchatserverPacke"
    "t\"#\n\021C2SPCLoginUserReq\022\016\n\006UserID\030\001 \001(\t\"C"
    "\n\021S2CPCLoginUserRes\022\016\n\006Result\030\001 \001(\r\022\016\n\006U"
    "serSn\030\002 \001(\r\022\016\n\006UserID\030\003 \001(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_LogicPacket_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_LogicPacket_2eproto = {
    false,
    false,
    155,
    descriptor_table_protodef_LogicPacket_2eproto,
    "LogicPacket.proto",
    &descriptor_table_LogicPacket_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_LogicPacket_2eproto::offsets,
    file_level_enum_descriptors_LogicPacket_2eproto,
    file_level_service_descriptors_LogicPacket_2eproto,
};
namespace examchatserverPacket {
// ===================================================================

class C2SPCLoginUserReq::_Internal {
 public:
};

C2SPCLoginUserReq::C2SPCLoginUserReq(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:examchatserverPacket.C2SPCLoginUserReq)
}
inline PROTOBUF_NDEBUG_INLINE C2SPCLoginUserReq::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::examchatserverPacket::C2SPCLoginUserReq& from_msg)
      : userid_(arena, from.userid_),
        _cached_size_{0} {}

C2SPCLoginUserReq::C2SPCLoginUserReq(
    ::google::protobuf::Arena* arena,
    const C2SPCLoginUserReq& from)
    : ::google::protobuf::Message(arena) {
  C2SPCLoginUserReq* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:examchatserverPacket.C2SPCLoginUserReq)
}
inline PROTOBUF_NDEBUG_INLINE C2SPCLoginUserReq::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : userid_(arena),
        _cached_size_{0} {}

inline void C2SPCLoginUserReq::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
C2SPCLoginUserReq::~C2SPCLoginUserReq() {
  // @@protoc_insertion_point(destructor:examchatserverPacket.C2SPCLoginUserReq)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void C2SPCLoginUserReq::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.userid_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
C2SPCLoginUserReq::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_._cached_size_),
              false,
          },
          &C2SPCLoginUserReq::MergeImpl,
          &C2SPCLoginUserReq::kDescriptorMethods,
          &descriptor_table_LogicPacket_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 53, 2> C2SPCLoginUserReq::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_C2SPCLoginUserReq_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::examchatserverPacket::C2SPCLoginUserReq>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string UserID = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.userid_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string UserID = 1;
    {PROTOBUF_FIELD_OFFSET(C2SPCLoginUserReq, _impl_.userid_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\46\6\0\0\0\0\0\0"
    "examchatserverPacket.C2SPCLoginUserReq"
    "UserID"
  }},
};

PROTOBUF_NOINLINE void C2SPCLoginUserReq::Clear() {
// @@protoc_insertion_point(message_clear_start:examchatserverPacket.C2SPCLoginUserReq)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.userid_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* C2SPCLoginUserReq::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:examchatserverPacket.C2SPCLoginUserReq)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string UserID = 1;
  if (!this->_internal_userid().empty()) {
    const std::string& _s = this->_internal_userid();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "examchatserverPacket.C2SPCLoginUserReq.UserID");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:examchatserverPacket.C2SPCLoginUserReq)
  return target;
}

::size_t C2SPCLoginUserReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:examchatserverPacket.C2SPCLoginUserReq)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string UserID = 1;
  if (!this->_internal_userid().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_userid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void C2SPCLoginUserReq::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<C2SPCLoginUserReq*>(&to_msg);
  auto& from = static_cast<const C2SPCLoginUserReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:examchatserverPacket.C2SPCLoginUserReq)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_userid().empty()) {
    _this->_internal_set_userid(from._internal_userid());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void C2SPCLoginUserReq::CopyFrom(const C2SPCLoginUserReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:examchatserverPacket.C2SPCLoginUserReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void C2SPCLoginUserReq::InternalSwap(C2SPCLoginUserReq* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.userid_, &other->_impl_.userid_, arena);
}

::google::protobuf::Metadata C2SPCLoginUserReq::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class S2CPCLoginUserRes::_Internal {
 public:
};

S2CPCLoginUserRes::S2CPCLoginUserRes(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:examchatserverPacket.S2CPCLoginUserRes)
}
inline PROTOBUF_NDEBUG_INLINE S2CPCLoginUserRes::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::examchatserverPacket::S2CPCLoginUserRes& from_msg)
      : userid_(arena, from.userid_),
        _cached_size_{0} {}

S2CPCLoginUserRes::S2CPCLoginUserRes(
    ::google::protobuf::Arena* arena,
    const S2CPCLoginUserRes& from)
    : ::google::protobuf::Message(arena) {
  S2CPCLoginUserRes* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, result_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, result_),
           offsetof(Impl_, usersn_) -
               offsetof(Impl_, result_) +
               sizeof(Impl_::usersn_));

  // @@protoc_insertion_point(copy_constructor:examchatserverPacket.S2CPCLoginUserRes)
}
inline PROTOBUF_NDEBUG_INLINE S2CPCLoginUserRes::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : userid_(arena),
        _cached_size_{0} {}

inline void S2CPCLoginUserRes::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, result_),
           0,
           offsetof(Impl_, usersn_) -
               offsetof(Impl_, result_) +
               sizeof(Impl_::usersn_));
}
S2CPCLoginUserRes::~S2CPCLoginUserRes() {
  // @@protoc_insertion_point(destructor:examchatserverPacket.S2CPCLoginUserRes)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void S2CPCLoginUserRes::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.userid_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
S2CPCLoginUserRes::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_._cached_size_),
              false,
          },
          &S2CPCLoginUserRes::MergeImpl,
          &S2CPCLoginUserRes::kDescriptorMethods,
          &descriptor_table_LogicPacket_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 53, 2> S2CPCLoginUserRes::_table_ = {
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
    &_S2CPCLoginUserRes_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::examchatserverPacket::S2CPCLoginUserRes>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint32 Result = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.result_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.result_)}},
    // uint32 UserSn = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(S2CPCLoginUserRes, _impl_.usersn_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.usersn_)}},
    // string UserID = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userid_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 Result = 1;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.result_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 UserSn = 2;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.usersn_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // string UserID = 3;
    {PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.userid_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\46\0\0\6\0\0\0\0"
    "examchatserverPacket.S2CPCLoginUserRes"
    "UserID"
  }},
};

PROTOBUF_NOINLINE void S2CPCLoginUserRes::Clear() {
// @@protoc_insertion_point(message_clear_start:examchatserverPacket.S2CPCLoginUserRes)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.userid_.ClearToEmpty();
  ::memset(&_impl_.result_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.usersn_) -
      reinterpret_cast<char*>(&_impl_.result_)) + sizeof(_impl_.usersn_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* S2CPCLoginUserRes::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:examchatserverPacket.S2CPCLoginUserRes)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint32 Result = 1;
  if (this->_internal_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_result(), target);
  }

  // uint32 UserSn = 2;
  if (this->_internal_usersn() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_usersn(), target);
  }

  // string UserID = 3;
  if (!this->_internal_userid().empty()) {
    const std::string& _s = this->_internal_userid();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "examchatserverPacket.S2CPCLoginUserRes.UserID");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:examchatserverPacket.S2CPCLoginUserRes)
  return target;
}

::size_t S2CPCLoginUserRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:examchatserverPacket.S2CPCLoginUserRes)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string UserID = 3;
  if (!this->_internal_userid().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_userid());
  }

  // uint32 Result = 1;
  if (this->_internal_result() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_result());
  }

  // uint32 UserSn = 2;
  if (this->_internal_usersn() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_usersn());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void S2CPCLoginUserRes::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<S2CPCLoginUserRes*>(&to_msg);
  auto& from = static_cast<const S2CPCLoginUserRes&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:examchatserverPacket.S2CPCLoginUserRes)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_userid().empty()) {
    _this->_internal_set_userid(from._internal_userid());
  }
  if (from._internal_result() != 0) {
    _this->_impl_.result_ = from._impl_.result_;
  }
  if (from._internal_usersn() != 0) {
    _this->_impl_.usersn_ = from._impl_.usersn_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void S2CPCLoginUserRes::CopyFrom(const S2CPCLoginUserRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:examchatserverPacket.S2CPCLoginUserRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void S2CPCLoginUserRes::InternalSwap(S2CPCLoginUserRes* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.userid_, &other->_impl_.userid_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.usersn_)
      + sizeof(S2CPCLoginUserRes::_impl_.usersn_)
      - PROTOBUF_FIELD_OFFSET(S2CPCLoginUserRes, _impl_.result_)>(
          reinterpret_cast<char*>(&_impl_.result_),
          reinterpret_cast<char*>(&other->_impl_.result_));
}

::google::protobuf::Metadata S2CPCLoginUserRes::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace examchatserverPacket
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_LogicPacket_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"