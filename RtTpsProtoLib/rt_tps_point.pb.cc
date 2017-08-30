// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_point.pb.h"

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

const ::google::protobuf::Descriptor* RT_TPS_POINT_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_POINT_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fpoint_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fpoint_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_point.proto");
  GOOGLE_CHECK(file != NULL);
  RT_TPS_POINT_descriptor_ = file->message_type(0);
  static const int RT_TPS_POINT_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT, label_),
  };
  RT_TPS_POINT_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_POINT_descriptor_,
      RT_TPS_POINT::default_instance_,
      RT_TPS_POINT_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_POINT, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_POINT));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fpoint_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_POINT_descriptor_, &RT_TPS_POINT::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fpoint_2eproto() {
  delete RT_TPS_POINT::default_instance_;
  delete RT_TPS_POINT_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fpoint_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022rt_tps_point.proto\022\ttps.proto\"3\n\014RT_TP"
    "S_POINT\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022\r\n\005label\030\003"
    " \001(\t", 84);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_point.proto", &protobuf_RegisterTypes);
  RT_TPS_POINT::default_instance_ = new RT_TPS_POINT();
  RT_TPS_POINT::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fpoint_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fpoint_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fpoint_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fpoint_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fpoint_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_POINT::kXFieldNumber;
const int RT_TPS_POINT::kYFieldNumber;
const int RT_TPS_POINT::kLabelFieldNumber;
#endif  // !_MSC_VER

RT_TPS_POINT::RT_TPS_POINT()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_POINT::InitAsDefaultInstance() {
}

RT_TPS_POINT::RT_TPS_POINT(const RT_TPS_POINT& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_POINT::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_POINT::~RT_TPS_POINT() {
  SharedDtor();
}

void RT_TPS_POINT::SharedDtor() {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    delete label_;
  }
  if (this != default_instance_) {
  }
}

void RT_TPS_POINT::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_POINT::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_POINT_descriptor_;
}

const RT_TPS_POINT& RT_TPS_POINT::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fpoint_2eproto();  return *default_instance_;
}

RT_TPS_POINT* RT_TPS_POINT::default_instance_ = NULL;

RT_TPS_POINT* RT_TPS_POINT::New() const {
  return new RT_TPS_POINT;
}

void RT_TPS_POINT::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
    if (has_label()) {
      if (label_ != &::google::protobuf::internal::kEmptyString) {
        label_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_POINT::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }
      
      // required double y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_label;
        break;
      }
      
      // optional string label = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_label:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->label().data(), this->label().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
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

void RT_TPS_POINT::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }
  
  // required double y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }
  
  // optional string label = 3;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->label(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_POINT::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }
  
  // required double y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }
  
  // optional string label = 3;
  if (has_label()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->label(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_POINT::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double x = 1;
    if (has_x()) {
      total_size += 1 + 8;
    }
    
    // required double y = 2;
    if (has_y()) {
      total_size += 1 + 8;
    }
    
    // optional string label = 3;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->label());
    }
    
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

void RT_TPS_POINT::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_POINT* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_POINT*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_POINT::MergeFrom(const RT_TPS_POINT& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_label()) {
      set_label(from.label());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_POINT::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_POINT::CopyFrom(const RT_TPS_POINT& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_POINT::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void RT_TPS_POINT::Swap(RT_TPS_POINT* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(label_, other->label_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_POINT::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_POINT_descriptor_;
  metadata.reflection = RT_TPS_POINT_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
