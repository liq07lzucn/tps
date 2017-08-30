// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_header.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoHeader_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fheader_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fheader_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_header.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoHeader_descriptor_ = file->message_type(0);
  static const int RtTpsProtoHeader_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoHeader, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoHeader, innercode_),
  };
  RtTpsProtoHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoHeader_descriptor_,
      RtTpsProtoHeader::default_instance_,
      RtTpsProtoHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoHeader));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fheader_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoHeader_descriptor_, &RtTpsProtoHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fheader_2eproto() {
  delete RtTpsProtoHeader::default_instance_;
  delete RtTpsProtoHeader_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fheader_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031rt_tps_proto_header.proto\022\ttps.proto\"3"
    "\n\020RtTpsProtoHeader\022\014\n\004code\030\001 \002(\005\022\021\n\tinne"
    "rCode\030\002 \001(\005", 91);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_header.proto", &protobuf_RegisterTypes);
  RtTpsProtoHeader::default_instance_ = new RtTpsProtoHeader();
  RtTpsProtoHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fheader_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fheader_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fheader_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fheader_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fheader_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoHeader::kCodeFieldNumber;
const int RtTpsProtoHeader::kInnerCodeFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoHeader::RtTpsProtoHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoHeader::InitAsDefaultInstance() {
}

RtTpsProtoHeader::RtTpsProtoHeader(const RtTpsProtoHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoHeader::SharedCtor() {
  _cached_size_ = 0;
  code_ = 0;
  innercode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoHeader::~RtTpsProtoHeader() {
  SharedDtor();
}

void RtTpsProtoHeader::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoHeader_descriptor_;
}

const RtTpsProtoHeader& RtTpsProtoHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fheader_2eproto();  return *default_instance_;
}

RtTpsProtoHeader* RtTpsProtoHeader::default_instance_ = NULL;

RtTpsProtoHeader* RtTpsProtoHeader::New() const {
  return new RtTpsProtoHeader;
}

void RtTpsProtoHeader::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    code_ = 0;
    innercode_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 code = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
          set_has_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_innerCode;
        break;
      }
      
      // optional int32 innerCode = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_innerCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &innercode_)));
          set_has_innercode();
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

void RtTpsProtoHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 code = 1;
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }
  
  // optional int32 innerCode = 2;
  if (has_innercode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->innercode(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 code = 1;
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }
  
  // optional int32 innerCode = 2;
  if (has_innercode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->innercode(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoHeader::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 code = 1;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->code());
    }
    
    // optional int32 innerCode = 2;
    if (has_innercode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->innercode());
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

void RtTpsProtoHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoHeader::MergeFrom(const RtTpsProtoHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_code()) {
      set_code(from.code());
    }
    if (from.has_innercode()) {
      set_innercode(from.innercode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoHeader::CopyFrom(const RtTpsProtoHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RtTpsProtoHeader::Swap(RtTpsProtoHeader* other) {
  if (other != this) {
    std::swap(code_, other->code_);
    std::swap(innercode_, other->innercode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoHeader_descriptor_;
  metadata.reflection = RtTpsProtoHeader_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)