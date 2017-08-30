// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_pointlist.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tps {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* RT_TPS_POINT_LIST_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_POINT_LIST_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fpointlist_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fpointlist_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_pointlist.proto");
  GOOGLE_CHECK(file != NULL);
  RT_TPS_POINT_LIST_descriptor_ = file->message_type(0);
  static const int RT_TPS_POINT_LIST_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT_LIST, points_),
  };
  RT_TPS_POINT_LIST_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_POINT_LIST_descriptor_,
      RT_TPS_POINT_LIST::default_instance_,
      RT_TPS_POINT_LIST_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT_LIST, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT_LIST, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_POINT_LIST));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fpointlist_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_POINT_LIST_descriptor_, &RT_TPS_POINT_LIST::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fpointlist_2eproto() {
  delete RT_TPS_POINT_LIST::default_instance_;
  delete RT_TPS_POINT_LIST_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fpointlist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tps::proto::protobuf_AddDesc_rt_5ftps_5fpoint_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026rt_tps_pointlist.proto\022\ttps.proto\032\022rt_"
    "tps_point.proto\"<\n\021RT_TPS_POINT_LIST\022\'\n\006"
    "points\030\001 \003(\0132\027.tps.proto.RT_TPS_POINT", 117);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_pointlist.proto", &protobuf_RegisterTypes);
  RT_TPS_POINT_LIST::default_instance_ = new RT_TPS_POINT_LIST();
  RT_TPS_POINT_LIST::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fpointlist_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fpointlist_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fpointlist_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fpointlist_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fpointlist_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_POINT_LIST::kPointsFieldNumber;
#endif  // !_MSC_VER

RT_TPS_POINT_LIST::RT_TPS_POINT_LIST()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_POINT_LIST::InitAsDefaultInstance() {
}

RT_TPS_POINT_LIST::RT_TPS_POINT_LIST(const RT_TPS_POINT_LIST& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_POINT_LIST::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_POINT_LIST::~RT_TPS_POINT_LIST() {
  SharedDtor();
}

void RT_TPS_POINT_LIST::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RT_TPS_POINT_LIST::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_POINT_LIST::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_POINT_LIST_descriptor_;
}

const RT_TPS_POINT_LIST& RT_TPS_POINT_LIST::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fpointlist_2eproto();  return *default_instance_;
}

RT_TPS_POINT_LIST* RT_TPS_POINT_LIST::default_instance_ = NULL;

RT_TPS_POINT_LIST* RT_TPS_POINT_LIST::New() const {
  return new RT_TPS_POINT_LIST;
}

void RT_TPS_POINT_LIST::Clear() {
  points_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_POINT_LIST::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RT_TPS_POINT points = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_points:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_points()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_points;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RT_TPS_POINT_LIST::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RT_TPS_POINT points = 1;
  for (int i = 0; i < this->points_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->points(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_POINT_LIST::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RT_TPS_POINT points = 1;
  for (int i = 0; i < this->points_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->points(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_POINT_LIST::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RT_TPS_POINT points = 1;
  total_size += 1 * this->points_size();
  for (int i = 0; i < this->points_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->points(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RT_TPS_POINT_LIST::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_POINT_LIST* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_POINT_LIST*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_POINT_LIST::MergeFrom(const RT_TPS_POINT_LIST& from) {
  GOOGLE_CHECK_NE(&from, this);
  points_.MergeFrom(from.points_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_POINT_LIST::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_POINT_LIST::CopyFrom(const RT_TPS_POINT_LIST& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_POINT_LIST::IsInitialized() const {
  
  for (int i = 0; i < points_size(); i++) {
    if (!this->points(i).IsInitialized()) return false;
  }
  return true;
}

void RT_TPS_POINT_LIST::Swap(RT_TPS_POINT_LIST* other) {
  if (other != this) {
    points_.Swap(&other->points_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_POINT_LIST::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_POINT_LIST_descriptor_;
  metadata.reflection = RT_TPS_POINT_LIST_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
