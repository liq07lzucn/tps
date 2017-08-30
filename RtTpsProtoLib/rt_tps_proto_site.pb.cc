// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_site.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoSite_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoSite_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedSite_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoRepeatedSite_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fsite_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_site.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoSite_descriptor_ = file->message_type(0);
  static const int RtTpsProtoSite_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSite, siteuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSite, sitename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSite, courseuid_),
  };
  RtTpsProtoSite_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoSite_descriptor_,
      RtTpsProtoSite::default_instance_,
      RtTpsProtoSite_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSite, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSite, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoSite));
  RtTpsProtoRepeatedSite_descriptor_ = file->message_type(1);
  static const int RtTpsProtoRepeatedSite_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedSite, sitelist_),
  };
  RtTpsProtoRepeatedSite_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoRepeatedSite_descriptor_,
      RtTpsProtoRepeatedSite::default_instance_,
      RtTpsProtoRepeatedSite_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedSite, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedSite, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoRepeatedSite));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fsite_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoSite_descriptor_, &RtTpsProtoSite::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoRepeatedSite_descriptor_, &RtTpsProtoRepeatedSite::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fsite_2eproto() {
  delete RtTpsProtoSite::default_instance_;
  delete RtTpsProtoSite_reflection_;
  delete RtTpsProtoRepeatedSite::default_instance_;
  delete RtTpsProtoRepeatedSite_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027rt_tps_proto_site.proto\022\ttps.proto\"F\n\016"
    "RtTpsProtoSite\022\017\n\007siteUID\030\001 \001(\t\022\020\n\010siteN"
    "ame\030\002 \001(\t\022\021\n\tcourseUID\030\003 \001(\t\"E\n\026RtTpsPro"
    "toRepeatedSite\022+\n\010siteList\030\001 \003(\0132\031.tps.p"
    "roto.RtTpsProtoSite", 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_site.proto", &protobuf_RegisterTypes);
  RtTpsProtoSite::default_instance_ = new RtTpsProtoSite();
  RtTpsProtoRepeatedSite::default_instance_ = new RtTpsProtoRepeatedSite();
  RtTpsProtoSite::default_instance_->InitAsDefaultInstance();
  RtTpsProtoRepeatedSite::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fsite_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fsite_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fsite_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fsite_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoSite::kSiteUIDFieldNumber;
const int RtTpsProtoSite::kSiteNameFieldNumber;
const int RtTpsProtoSite::kCourseUIDFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoSite::RtTpsProtoSite()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoSite::InitAsDefaultInstance() {
}

RtTpsProtoSite::RtTpsProtoSite(const RtTpsProtoSite& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoSite::SharedCtor() {
  _cached_size_ = 0;
  siteuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sitename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  courseuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoSite::~RtTpsProtoSite() {
  SharedDtor();
}

void RtTpsProtoSite::SharedDtor() {
  if (siteuid_ != &::google::protobuf::internal::kEmptyString) {
    delete siteuid_;
  }
  if (sitename_ != &::google::protobuf::internal::kEmptyString) {
    delete sitename_;
  }
  if (courseuid_ != &::google::protobuf::internal::kEmptyString) {
    delete courseuid_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsProtoSite::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoSite::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoSite_descriptor_;
}

const RtTpsProtoSite& RtTpsProtoSite::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();  return *default_instance_;
}

RtTpsProtoSite* RtTpsProtoSite::default_instance_ = NULL;

RtTpsProtoSite* RtTpsProtoSite::New() const {
  return new RtTpsProtoSite;
}

void RtTpsProtoSite::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_siteuid()) {
      if (siteuid_ != &::google::protobuf::internal::kEmptyString) {
        siteuid_->clear();
      }
    }
    if (has_sitename()) {
      if (sitename_ != &::google::protobuf::internal::kEmptyString) {
        sitename_->clear();
      }
    }
    if (has_courseuid()) {
      if (courseuid_ != &::google::protobuf::internal::kEmptyString) {
        courseuid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoSite::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string siteUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_siteuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->siteuid().data(), this->siteuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_siteName;
        break;
      }
      
      // optional string siteName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_siteName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sitename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->sitename().data(), this->sitename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_courseUID;
        break;
      }
      
      // optional string courseUID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_courseUID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_courseuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->courseuid().data(), this->courseuid().length(),
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

void RtTpsProtoSite::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string siteUID = 1;
  if (has_siteuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->siteuid().data(), this->siteuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->siteuid(), output);
  }
  
  // optional string siteName = 2;
  if (has_sitename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sitename().data(), this->sitename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->sitename(), output);
  }
  
  // optional string courseUID = 3;
  if (has_courseuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->courseuid().data(), this->courseuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->courseuid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoSite::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string siteUID = 1;
  if (has_siteuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->siteuid().data(), this->siteuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->siteuid(), target);
  }
  
  // optional string siteName = 2;
  if (has_sitename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sitename().data(), this->sitename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sitename(), target);
  }
  
  // optional string courseUID = 3;
  if (has_courseuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->courseuid().data(), this->courseuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->courseuid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoSite::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string siteUID = 1;
    if (has_siteuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->siteuid());
    }
    
    // optional string siteName = 2;
    if (has_sitename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sitename());
    }
    
    // optional string courseUID = 3;
    if (has_courseuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->courseuid());
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

void RtTpsProtoSite::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoSite* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoSite*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoSite::MergeFrom(const RtTpsProtoSite& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_siteuid()) {
      set_siteuid(from.siteuid());
    }
    if (from.has_sitename()) {
      set_sitename(from.sitename());
    }
    if (from.has_courseuid()) {
      set_courseuid(from.courseuid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoSite::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoSite::CopyFrom(const RtTpsProtoSite& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoSite::IsInitialized() const {
  
  return true;
}

void RtTpsProtoSite::Swap(RtTpsProtoSite* other) {
  if (other != this) {
    std::swap(siteuid_, other->siteuid_);
    std::swap(sitename_, other->sitename_);
    std::swap(courseuid_, other->courseuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoSite::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoSite_descriptor_;
  metadata.reflection = RtTpsProtoSite_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoRepeatedSite::kSiteListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoRepeatedSite::RtTpsProtoRepeatedSite()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoRepeatedSite::InitAsDefaultInstance() {
}

RtTpsProtoRepeatedSite::RtTpsProtoRepeatedSite(const RtTpsProtoRepeatedSite& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoRepeatedSite::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoRepeatedSite::~RtTpsProtoRepeatedSite() {
  SharedDtor();
}

void RtTpsProtoRepeatedSite::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoRepeatedSite::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedSite::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoRepeatedSite_descriptor_;
}

const RtTpsProtoRepeatedSite& RtTpsProtoRepeatedSite::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();  return *default_instance_;
}

RtTpsProtoRepeatedSite* RtTpsProtoRepeatedSite::default_instance_ = NULL;

RtTpsProtoRepeatedSite* RtTpsProtoRepeatedSite::New() const {
  return new RtTpsProtoRepeatedSite;
}

void RtTpsProtoRepeatedSite::Clear() {
  sitelist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoRepeatedSite::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RtTpsProtoSite siteList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_siteList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_sitelist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_siteList;
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

void RtTpsProtoRepeatedSite::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RtTpsProtoSite siteList = 1;
  for (int i = 0; i < this->sitelist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->sitelist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoRepeatedSite::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RtTpsProtoSite siteList = 1;
  for (int i = 0; i < this->sitelist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->sitelist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoRepeatedSite::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RtTpsProtoSite siteList = 1;
  total_size += 1 * this->sitelist_size();
  for (int i = 0; i < this->sitelist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->sitelist(i));
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

void RtTpsProtoRepeatedSite::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoRepeatedSite* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoRepeatedSite*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoRepeatedSite::MergeFrom(const RtTpsProtoRepeatedSite& from) {
  GOOGLE_CHECK_NE(&from, this);
  sitelist_.MergeFrom(from.sitelist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoRepeatedSite::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoRepeatedSite::CopyFrom(const RtTpsProtoRepeatedSite& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoRepeatedSite::IsInitialized() const {
  
  return true;
}

void RtTpsProtoRepeatedSite::Swap(RtTpsProtoRepeatedSite* other) {
  if (other != this) {
    sitelist_.Swap(&other->sitelist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoRepeatedSite::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoRepeatedSite_descriptor_;
  metadata.reflection = RtTpsProtoRepeatedSite_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
