// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: LogicPacket.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_LogicPacket_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_LogicPacket_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_LogicPacket_2eproto;
namespace examchatserverPacket {
class C2SPCLoginUserReq;
struct C2SPCLoginUserReqDefaultTypeInternal;
extern C2SPCLoginUserReqDefaultTypeInternal _C2SPCLoginUserReq_default_instance_;
class S2CPCLoginUserRes;
struct S2CPCLoginUserResDefaultTypeInternal;
extern S2CPCLoginUserResDefaultTypeInternal _S2CPCLoginUserRes_default_instance_;
}  // namespace examchatserverPacket
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace examchatserverPacket {

// ===================================================================


// -------------------------------------------------------------------

class S2CPCLoginUserRes final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:examchatserverPacket.S2CPCLoginUserRes) */ {
 public:
  inline S2CPCLoginUserRes() : S2CPCLoginUserRes(nullptr) {}
  ~S2CPCLoginUserRes() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR S2CPCLoginUserRes(
      ::google::protobuf::internal::ConstantInitialized);

  inline S2CPCLoginUserRes(const S2CPCLoginUserRes& from) : S2CPCLoginUserRes(nullptr, from) {}
  inline S2CPCLoginUserRes(S2CPCLoginUserRes&& from) noexcept
      : S2CPCLoginUserRes(nullptr, std::move(from)) {}
  inline S2CPCLoginUserRes& operator=(const S2CPCLoginUserRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline S2CPCLoginUserRes& operator=(S2CPCLoginUserRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const S2CPCLoginUserRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const S2CPCLoginUserRes* internal_default_instance() {
    return reinterpret_cast<const S2CPCLoginUserRes*>(
        &_S2CPCLoginUserRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(S2CPCLoginUserRes& a, S2CPCLoginUserRes& b) { a.Swap(&b); }
  inline void Swap(S2CPCLoginUserRes* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(S2CPCLoginUserRes* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  S2CPCLoginUserRes* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<S2CPCLoginUserRes>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const S2CPCLoginUserRes& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const S2CPCLoginUserRes& from) { S2CPCLoginUserRes::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(S2CPCLoginUserRes* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "examchatserverPacket.S2CPCLoginUserRes"; }

 protected:
  explicit S2CPCLoginUserRes(::google::protobuf::Arena* arena);
  S2CPCLoginUserRes(::google::protobuf::Arena* arena, const S2CPCLoginUserRes& from);
  S2CPCLoginUserRes(::google::protobuf::Arena* arena, S2CPCLoginUserRes&& from) noexcept
      : S2CPCLoginUserRes(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kUserIDFieldNumber = 3,
    kResultFieldNumber = 1,
    kUserSnFieldNumber = 2,
  };
  // string UserID = 3;
  void clear_userid() ;
  const std::string& userid() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_userid(Arg_&& arg, Args_... args);
  std::string* mutable_userid();
  PROTOBUF_NODISCARD std::string* release_userid();
  void set_allocated_userid(std::string* value);

  private:
  const std::string& _internal_userid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_userid(
      const std::string& value);
  std::string* _internal_mutable_userid();

  public:
  // uint32 Result = 1;
  void clear_result() ;
  ::uint32_t result() const;
  void set_result(::uint32_t value);

  private:
  ::uint32_t _internal_result() const;
  void _internal_set_result(::uint32_t value);

  public:
  // uint32 UserSn = 2;
  void clear_usersn() ;
  ::uint32_t usersn() const;
  void set_usersn(::uint32_t value);

  private:
  ::uint32_t _internal_usersn() const;
  void _internal_set_usersn(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:examchatserverPacket.S2CPCLoginUserRes)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      53, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_S2CPCLoginUserRes_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const S2CPCLoginUserRes& from_msg);
    ::google::protobuf::internal::ArenaStringPtr userid_;
    ::uint32_t result_;
    ::uint32_t usersn_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LogicPacket_2eproto;
};
// -------------------------------------------------------------------

class C2SPCLoginUserReq final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:examchatserverPacket.C2SPCLoginUserReq) */ {
 public:
  inline C2SPCLoginUserReq() : C2SPCLoginUserReq(nullptr) {}
  ~C2SPCLoginUserReq() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR C2SPCLoginUserReq(
      ::google::protobuf::internal::ConstantInitialized);

  inline C2SPCLoginUserReq(const C2SPCLoginUserReq& from) : C2SPCLoginUserReq(nullptr, from) {}
  inline C2SPCLoginUserReq(C2SPCLoginUserReq&& from) noexcept
      : C2SPCLoginUserReq(nullptr, std::move(from)) {}
  inline C2SPCLoginUserReq& operator=(const C2SPCLoginUserReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline C2SPCLoginUserReq& operator=(C2SPCLoginUserReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const C2SPCLoginUserReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const C2SPCLoginUserReq* internal_default_instance() {
    return reinterpret_cast<const C2SPCLoginUserReq*>(
        &_C2SPCLoginUserReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(C2SPCLoginUserReq& a, C2SPCLoginUserReq& b) { a.Swap(&b); }
  inline void Swap(C2SPCLoginUserReq* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C2SPCLoginUserReq* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  C2SPCLoginUserReq* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<C2SPCLoginUserReq>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const C2SPCLoginUserReq& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const C2SPCLoginUserReq& from) { C2SPCLoginUserReq::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(C2SPCLoginUserReq* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "examchatserverPacket.C2SPCLoginUserReq"; }

 protected:
  explicit C2SPCLoginUserReq(::google::protobuf::Arena* arena);
  C2SPCLoginUserReq(::google::protobuf::Arena* arena, const C2SPCLoginUserReq& from);
  C2SPCLoginUserReq(::google::protobuf::Arena* arena, C2SPCLoginUserReq&& from) noexcept
      : C2SPCLoginUserReq(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kUserIDFieldNumber = 1,
  };
  // string UserID = 1;
  void clear_userid() ;
  const std::string& userid() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_userid(Arg_&& arg, Args_... args);
  std::string* mutable_userid();
  PROTOBUF_NODISCARD std::string* release_userid();
  void set_allocated_userid(std::string* value);

  private:
  const std::string& _internal_userid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_userid(
      const std::string& value);
  std::string* _internal_mutable_userid();

  public:
  // @@protoc_insertion_point(class_scope:examchatserverPacket.C2SPCLoginUserReq)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      53, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_C2SPCLoginUserReq_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const C2SPCLoginUserReq& from_msg);
    ::google::protobuf::internal::ArenaStringPtr userid_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LogicPacket_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// C2SPCLoginUserReq

// string UserID = 1;
inline void C2SPCLoginUserReq::clear_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.ClearToEmpty();
}
inline const std::string& C2SPCLoginUserReq::userid() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:examchatserverPacket.C2SPCLoginUserReq.UserID)
  return _internal_userid();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void C2SPCLoginUserReq::set_userid(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:examchatserverPacket.C2SPCLoginUserReq.UserID)
}
inline std::string* C2SPCLoginUserReq::mutable_userid() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_userid();
  // @@protoc_insertion_point(field_mutable:examchatserverPacket.C2SPCLoginUserReq.UserID)
  return _s;
}
inline const std::string& C2SPCLoginUserReq::_internal_userid() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.userid_.Get();
}
inline void C2SPCLoginUserReq::_internal_set_userid(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.Set(value, GetArena());
}
inline std::string* C2SPCLoginUserReq::_internal_mutable_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.userid_.Mutable( GetArena());
}
inline std::string* C2SPCLoginUserReq::release_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:examchatserverPacket.C2SPCLoginUserReq.UserID)
  return _impl_.userid_.Release();
}
inline void C2SPCLoginUserReq::set_allocated_userid(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.userid_.IsDefault()) {
          _impl_.userid_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:examchatserverPacket.C2SPCLoginUserReq.UserID)
}

// -------------------------------------------------------------------

// S2CPCLoginUserRes

// uint32 Result = 1;
inline void S2CPCLoginUserRes::clear_result() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.result_ = 0u;
}
inline ::uint32_t S2CPCLoginUserRes::result() const {
  // @@protoc_insertion_point(field_get:examchatserverPacket.S2CPCLoginUserRes.Result)
  return _internal_result();
}
inline void S2CPCLoginUserRes::set_result(::uint32_t value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:examchatserverPacket.S2CPCLoginUserRes.Result)
}
inline ::uint32_t S2CPCLoginUserRes::_internal_result() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.result_;
}
inline void S2CPCLoginUserRes::_internal_set_result(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.result_ = value;
}

// uint32 UserSn = 2;
inline void S2CPCLoginUserRes::clear_usersn() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.usersn_ = 0u;
}
inline ::uint32_t S2CPCLoginUserRes::usersn() const {
  // @@protoc_insertion_point(field_get:examchatserverPacket.S2CPCLoginUserRes.UserSn)
  return _internal_usersn();
}
inline void S2CPCLoginUserRes::set_usersn(::uint32_t value) {
  _internal_set_usersn(value);
  // @@protoc_insertion_point(field_set:examchatserverPacket.S2CPCLoginUserRes.UserSn)
}
inline ::uint32_t S2CPCLoginUserRes::_internal_usersn() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.usersn_;
}
inline void S2CPCLoginUserRes::_internal_set_usersn(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.usersn_ = value;
}

// string UserID = 3;
inline void S2CPCLoginUserRes::clear_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.ClearToEmpty();
}
inline const std::string& S2CPCLoginUserRes::userid() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:examchatserverPacket.S2CPCLoginUserRes.UserID)
  return _internal_userid();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void S2CPCLoginUserRes::set_userid(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:examchatserverPacket.S2CPCLoginUserRes.UserID)
}
inline std::string* S2CPCLoginUserRes::mutable_userid() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_userid();
  // @@protoc_insertion_point(field_mutable:examchatserverPacket.S2CPCLoginUserRes.UserID)
  return _s;
}
inline const std::string& S2CPCLoginUserRes::_internal_userid() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.userid_.Get();
}
inline void S2CPCLoginUserRes::_internal_set_userid(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.Set(value, GetArena());
}
inline std::string* S2CPCLoginUserRes::_internal_mutable_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.userid_.Mutable( GetArena());
}
inline std::string* S2CPCLoginUserRes::release_userid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:examchatserverPacket.S2CPCLoginUserRes.UserID)
  return _impl_.userid_.Release();
}
inline void S2CPCLoginUserRes::set_allocated_userid(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.userid_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.userid_.IsDefault()) {
          _impl_.userid_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:examchatserverPacket.S2CPCLoginUserRes.UserID)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace examchatserverPacket


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_LogicPacket_2eproto_2epb_2eh