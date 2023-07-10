// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/connected_components.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto;
namespace cartographer {
namespace mapping {
namespace proto {
class ConnectedComponents;
class ConnectedComponentsDefaultTypeInternal;
extern ConnectedComponentsDefaultTypeInternal _ConnectedComponents_default_instance_;
class ConnectedComponents_ConnectedComponent;
class ConnectedComponents_ConnectedComponentDefaultTypeInternal;
extern ConnectedComponents_ConnectedComponentDefaultTypeInternal _ConnectedComponents_ConnectedComponent_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::proto::ConnectedComponents* Arena::CreateMaybeMessage<::cartographer::mapping::proto::ConnectedComponents>(Arena*);
template<> ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* Arena::CreateMaybeMessage<::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class ConnectedComponents_ConnectedComponent PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent) */ {
 public:
  inline ConnectedComponents_ConnectedComponent() : ConnectedComponents_ConnectedComponent(nullptr) {};
  virtual ~ConnectedComponents_ConnectedComponent();

  ConnectedComponents_ConnectedComponent(const ConnectedComponents_ConnectedComponent& from);
  ConnectedComponents_ConnectedComponent(ConnectedComponents_ConnectedComponent&& from) noexcept
    : ConnectedComponents_ConnectedComponent() {
    *this = ::std::move(from);
  }

  inline ConnectedComponents_ConnectedComponent& operator=(const ConnectedComponents_ConnectedComponent& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectedComponents_ConnectedComponent& operator=(ConnectedComponents_ConnectedComponent&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ConnectedComponents_ConnectedComponent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConnectedComponents_ConnectedComponent* internal_default_instance() {
    return reinterpret_cast<const ConnectedComponents_ConnectedComponent*>(
               &_ConnectedComponents_ConnectedComponent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConnectedComponents_ConnectedComponent& a, ConnectedComponents_ConnectedComponent& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectedComponents_ConnectedComponent* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectedComponents_ConnectedComponent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConnectedComponents_ConnectedComponent* New() const final {
    return CreateMaybeMessage<ConnectedComponents_ConnectedComponent>(nullptr);
  }

  ConnectedComponents_ConnectedComponent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConnectedComponents_ConnectedComponent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ConnectedComponents_ConnectedComponent& from);
  void MergeFrom(const ConnectedComponents_ConnectedComponent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConnectedComponents_ConnectedComponent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.proto.ConnectedComponents.ConnectedComponent";
  }
  protected:
  explicit ConnectedComponents_ConnectedComponent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrajectoryIdFieldNumber = 1,
  };
  // repeated int32 trajectory_id = 1;
  int trajectory_id_size() const;
  private:
  int _internal_trajectory_id_size() const;
  public:
  void clear_trajectory_id();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_trajectory_id(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_trajectory_id() const;
  void _internal_add_trajectory_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_trajectory_id();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 trajectory_id(int index) const;
  void set_trajectory_id(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_trajectory_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      trajectory_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_trajectory_id();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > trajectory_id_;
  mutable std::atomic<int> _trajectory_id_cached_byte_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto;
};
// -------------------------------------------------------------------

class ConnectedComponents PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.ConnectedComponents) */ {
 public:
  inline ConnectedComponents() : ConnectedComponents(nullptr) {};
  virtual ~ConnectedComponents();

  ConnectedComponents(const ConnectedComponents& from);
  ConnectedComponents(ConnectedComponents&& from) noexcept
    : ConnectedComponents() {
    *this = ::std::move(from);
  }

  inline ConnectedComponents& operator=(const ConnectedComponents& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectedComponents& operator=(ConnectedComponents&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ConnectedComponents& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConnectedComponents* internal_default_instance() {
    return reinterpret_cast<const ConnectedComponents*>(
               &_ConnectedComponents_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ConnectedComponents& a, ConnectedComponents& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectedComponents* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectedComponents* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConnectedComponents* New() const final {
    return CreateMaybeMessage<ConnectedComponents>(nullptr);
  }

  ConnectedComponents* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConnectedComponents>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ConnectedComponents& from);
  void MergeFrom(const ConnectedComponents& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConnectedComponents* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.proto.ConnectedComponents";
  }
  protected:
  explicit ConnectedComponents(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ConnectedComponents_ConnectedComponent ConnectedComponent;

  // accessors -------------------------------------------------------

  enum : int {
    kConnectedComponentFieldNumber = 1,
  };
  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  int connected_component_size() const;
  private:
  int _internal_connected_component_size() const;
  public:
  void clear_connected_component();
  ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* mutable_connected_component(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
      mutable_connected_component();
  private:
  const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& _internal_connected_component(int index) const;
  ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* _internal_add_connected_component();
  public:
  const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& connected_component(int index) const;
  ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* add_connected_component();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
      connected_component() const;

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent > connected_component_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConnectedComponents_ConnectedComponent

// repeated int32 trajectory_id = 1;
inline int ConnectedComponents_ConnectedComponent::_internal_trajectory_id_size() const {
  return trajectory_id_.size();
}
inline int ConnectedComponents_ConnectedComponent::trajectory_id_size() const {
  return _internal_trajectory_id_size();
}
inline void ConnectedComponents_ConnectedComponent::clear_trajectory_id() {
  trajectory_id_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectedComponents_ConnectedComponent::_internal_trajectory_id(int index) const {
  return trajectory_id_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectedComponents_ConnectedComponent::trajectory_id(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return _internal_trajectory_id(index);
}
inline void ConnectedComponents_ConnectedComponent::set_trajectory_id(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  trajectory_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline void ConnectedComponents_ConnectedComponent::_internal_add_trajectory_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  trajectory_id_.Add(value);
}
inline void ConnectedComponents_ConnectedComponent::add_trajectory_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_trajectory_id(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ConnectedComponents_ConnectedComponent::_internal_trajectory_id() const {
  return trajectory_id_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ConnectedComponents_ConnectedComponent::trajectory_id() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return _internal_trajectory_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ConnectedComponents_ConnectedComponent::_internal_mutable_trajectory_id() {
  return &trajectory_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ConnectedComponents_ConnectedComponent::mutable_trajectory_id() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return _internal_mutable_trajectory_id();
}

// -------------------------------------------------------------------

// ConnectedComponents

// repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
inline int ConnectedComponents::_internal_connected_component_size() const {
  return connected_component_.size();
}
inline int ConnectedComponents::connected_component_size() const {
  return _internal_connected_component_size();
}
inline void ConnectedComponents::clear_connected_component() {
  connected_component_.Clear();
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::mutable_connected_component(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
ConnectedComponents::mutable_connected_component() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return &connected_component_;
}
inline const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& ConnectedComponents::_internal_connected_component(int index) const {
  return connected_component_.Get(index);
}
inline const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& ConnectedComponents::connected_component(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return _internal_connected_component(index);
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::_internal_add_connected_component() {
  return connected_component_.Add();
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::add_connected_component() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return _internal_add_connected_component();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
ConnectedComponents::connected_component() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto
