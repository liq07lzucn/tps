// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_stringlist.pb.h"

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

const ::google::protobuf::Descriptor* RT_TPS_StringList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_StringList_reflection_ = NULL;
const ::google::protobuf::Descriptor* RT_TPS_String_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_String_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fstringlist_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fstringlist_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_stringlist.proto");
  GOOGLE_CHECK(file != NULL);
  RT_TPS_StringList_descriptor_ = file->message_type(0);
  static const int RT_TPS_StringList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_StringList, strcontent_),
  };
  RT_TPS_StringList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_StringList_descriptor_,
      RT_TPS_StringList::default_instance_,
      RT_TPS_StringList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_StringList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_StringList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_StringList));
  RT_TPS_String_descriptor_ = file->message_type(1);
  static const int RT_TPS_String_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_String, content_),
  };
  RT_TPS_String_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_String_descriptor_,
      RT_TPS_String::default_instance_,
      RT_TPS_String_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_String, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_String, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_String));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fstringlist_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_StringList_descriptor_, &RT_TPS_StringList::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_String_descriptor_, &RT_TPS_String::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fstringlist_2eproto() {
  delete RT_TPS_StringList::default_instance_;
  delete RT_TPS_StringList_reflection_;
  delete RT_TPS_String::default_instance_;
  delete RT_TPS_String_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fstringlist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027rt_tps_stringlist.proto\022\ttps.proto\"\'\n\021"
    "RT_TPS_StringList\022\022\n\nstrContent\030\001 \003(\t\" \n"
    "\rRT_TPS_String\022\017\n\007content\030\001 \001(\t", 111);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_stringlist.proto", &protobuf_RegisterTypes);
  RT_TPS_StringList::default_instance_ = new RT_TPS_StringList();
  RT_TPS_String::default_instance_ = new RT_TPS_String();
  RT_TPS_StringList::default_instance_->InitAsDefaultInstance();
  RT_TPS_String::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fstringlist_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fstringlist_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fstringlist_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fstringlist_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fstringlist_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_StringList::kStrContentFieldNumber;
#endif  // !_MSC_VER

RT_TPS_StringList::RT_TPS_StringList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_StringList::InitAsDefaultInstance() {
}

RT_TPS_StringList::RT_TPS_StringList(const RT_TPS_StringList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_StringList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_StringList::~RT_TPS_StringList() {
  SharedDtor();
}

void RT_TPS_StringList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RT_TPS_StringList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_StringList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_StringList_descriptor_;
}

const RT_TPS_StringList& RT_TPS_StringList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fstringlist_2eproto();  return *default_instance_;
}

RT_TPS_StringList* RT_TPS_StringList::default_instance_ = NULL;

RT_TPS_StringList* RT_TPS_StringList::New() const {
  return new RT_TPS_StringList;
}

void RT_TPS_StringList::Clear() {
  strcontent_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_StringList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string strContent = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_strContent:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_strcontent()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->strcontent(0).data(), this->strcontent(0).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_strContent;
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

void RT_TPS_StringList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string strContent = 1;
  for (int i = 0; i < this->strcontent_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->strcontent(i).data(), this->strcontent(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->strcontent(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_StringList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string strContent = 1;
  for (int i = 0; i < this->strcontent_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->strcontent(i).data(), this->strcontent(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->strcontent(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_StringList::ByteSize() const {
  int total_size = 0;
  
  // repeated string strContent = 1;
  total_size += 1 * this->strcontent_size();
  for (int i = 0; i < this->strcontent_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->strcontent(i));
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

void RT_TPS_StringList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_StringList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_StringList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_StringList::MergeFrom(const RT_TPS_StringList& from) {
  GOOGLE_CHECK_NE(&from, this);
  strcontent_.MergeFrom(from.strcontent_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_StringList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_StringList::CopyFrom(const RT_TPS_StringList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_StringList::IsInitialized() const {
  
  return true;
}

void RT_TPS_StringList::Swap(RT_TPS_StringList* other) {
  if (other != this) {
    strcontent_.Swap(&other->strcontent_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_StringList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_StringList_descriptor_;
  metadata.reflection = RT_TPS_StringList_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_String::kContentFieldNumber;
#endif  // !_MSC_VER

RT_TPS_String::RT_TPS_String()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_String::InitAsDefaultInstance() {
}

RT_TPS_String::RT_TPS_String(const RT_TPS_String& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_String::SharedCtor() {
  _cached_size_ = 0;
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_String::~RT_TPS_String() {
  SharedDtor();
}

void RT_TPS_String::SharedDtor() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (this != default_instance_) {
  }
}

void RT_TPS_String::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_String::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_String_descriptor_;
}

const RT_TPS_String& RT_TPS_String::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fstringlist_2eproto();  return *default_instance_;
}

RT_TPS_String* RT_TPS_String::default_instance_ = NULL;

RT_TPS_String* RT_TPS_String::New() const {
  return new RT_TPS_String;
}

void RT_TPS_String::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_content()) {
      if (content_ != &::google::protobuf::internal::kEmptyString) {
        content_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_String::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string content = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->content().data(), this->content().length(),
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

void RT_TPS_String::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string content = 1;
  if (has_content()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->content(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_String::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string content = 1;
  if (has_content()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->content(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_String::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string content = 1;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->content());
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

void RT_TPS_String::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_String* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_String*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_String::MergeFrom(const RT_TPS_String& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_content()) {
      set_content(from.content());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_String::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_String::CopyFrom(const RT_TPS_String& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_String::IsInitialized() const {
  
  return true;
}

void RT_TPS_String::Swap(RT_TPS_String* other) {
  if (other != this) {
    std::swap(content_, other->content_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_String::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_String_descriptor_;
  metadata.reflection = RT_TPS_String_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
