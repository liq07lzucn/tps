// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto.pb.h"

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

const ::google::protobuf::Descriptor* RT_TPS_Proto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_Proto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto.proto");
  GOOGLE_CHECK(file != NULL);
  RT_TPS_Proto_descriptor_ = file->message_type(0);
  static const int RT_TPS_Proto_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_Proto, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_Proto, parent_uid_),
  };
  RT_TPS_Proto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_Proto_descriptor_,
      RT_TPS_Proto::default_instance_,
      RT_TPS_Proto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_Proto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_Proto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_Proto));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_Proto_descriptor_, &RT_TPS_Proto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_2eproto() {
  delete RT_TPS_Proto::default_instance_;
  delete RT_TPS_Proto_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022rt_tps_proto.proto\022\ttps.proto\"/\n\014RT_TP"
    "S_Proto\022\013\n\003uid\030\001 \001(\t\022\022\n\nparent_uid\030\003 \002(\t", 80);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto.proto", &protobuf_RegisterTypes);
  RT_TPS_Proto::default_instance_ = new RT_TPS_Proto();
  RT_TPS_Proto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_Proto::kUidFieldNumber;
const int RT_TPS_Proto::kParentUidFieldNumber;
#endif  // !_MSC_VER

RT_TPS_Proto::RT_TPS_Proto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_Proto::InitAsDefaultInstance() {
}

RT_TPS_Proto::RT_TPS_Proto(const RT_TPS_Proto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_Proto::SharedCtor() {
  _cached_size_ = 0;
  uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  parent_uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_Proto::~RT_TPS_Proto() {
  SharedDtor();
}

void RT_TPS_Proto::SharedDtor() {
  if (uid_ != &::google::protobuf::internal::kEmptyString) {
    delete uid_;
  }
  if (parent_uid_ != &::google::protobuf::internal::kEmptyString) {
    delete parent_uid_;
  }
  if (this != default_instance_) {
  }
}

void RT_TPS_Proto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_Proto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_Proto_descriptor_;
}

const RT_TPS_Proto& RT_TPS_Proto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_2eproto();  return *default_instance_;
}

RT_TPS_Proto* RT_TPS_Proto::default_instance_ = NULL;

RT_TPS_Proto* RT_TPS_Proto::New() const {
  return new RT_TPS_Proto;
}

void RT_TPS_Proto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_uid()) {
      if (uid_ != &::google::protobuf::internal::kEmptyString) {
        uid_->clear();
      }
    }
    if (has_parent_uid()) {
      if (parent_uid_ != &::google::protobuf::internal::kEmptyString) {
        parent_uid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_Proto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string uid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->uid().data(), this->uid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_parent_uid;
        break;
      }
      
      // required string parent_uid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_parent_uid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_parent_uid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->parent_uid().data(), this->parent_uid().length(),
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

void RT_TPS_Proto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->uid(), output);
  }
  
  // required string parent_uid = 3;
  if (has_parent_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->parent_uid().data(), this->parent_uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->parent_uid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_Proto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uid(), target);
  }
  
  // required string parent_uid = 3;
  if (has_parent_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->parent_uid().data(), this->parent_uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->parent_uid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_Proto::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string uid = 1;
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uid());
    }
    
    // required string parent_uid = 3;
    if (has_parent_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->parent_uid());
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

void RT_TPS_Proto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_Proto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_Proto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_Proto::MergeFrom(const RT_TPS_Proto& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uid()) {
      set_uid(from.uid());
    }
    if (from.has_parent_uid()) {
      set_parent_uid(from.parent_uid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_Proto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_Proto::CopyFrom(const RT_TPS_Proto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_Proto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  
  return true;
}

void RT_TPS_Proto::Swap(RT_TPS_Proto* other) {
  if (other != this) {
    std::swap(uid_, other->uid_);
    std::swap(parent_uid_, other->parent_uid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_Proto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_Proto_descriptor_;
  metadata.reflection = RT_TPS_Proto_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
