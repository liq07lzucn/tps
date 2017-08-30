// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_course.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoCourse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoCourse_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedCourse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoRepeatedCourse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fcourse_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fcourse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_course.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoCourse_descriptor_ = file->message_type(0);
  static const int RtTpsProtoCourse_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, courseuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, coursename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, patientuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, planlist_),
  };
  RtTpsProtoCourse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoCourse_descriptor_,
      RtTpsProtoCourse::default_instance_,
      RtTpsProtoCourse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoCourse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoCourse));
  RtTpsProtoRepeatedCourse_descriptor_ = file->message_type(1);
  static const int RtTpsProtoRepeatedCourse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedCourse, courselist_),
  };
  RtTpsProtoRepeatedCourse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoRepeatedCourse_descriptor_,
      RtTpsProtoRepeatedCourse::default_instance_,
      RtTpsProtoRepeatedCourse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedCourse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedCourse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoRepeatedCourse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fcourse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoCourse_descriptor_, &RtTpsProtoCourse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoRepeatedCourse_descriptor_, &RtTpsProtoRepeatedCourse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fcourse_2eproto() {
  delete RtTpsProtoCourse::default_instance_;
  delete RtTpsProtoCourse_reflection_;
  delete RtTpsProtoRepeatedCourse::default_instance_;
  delete RtTpsProtoRepeatedCourse_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fcourse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tps::proto::protobuf_AddDesc_rt_5ftps_5fproto_5fplan_2eproto();
  ::tps::proto::protobuf_AddDesc_rt_5ftps_5fproto_5fprescription_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031rt_tps_proto_course.proto\022\ttps.proto\032\027"
    "rt_tps_proto_plan.proto\032\037rt_tps_proto_pr"
    "escription.proto\"z\n\020RtTpsProtoCourse\022\021\n\t"
    "courseUID\030\001 \002(\t\022\022\n\ncourseName\030\002 \001(\t\022\022\n\np"
    "atientUID\030\003 \001(\t\022+\n\010planList\030\004 \003(\0132\031.tps."
    "proto.RtTpsProtoPlan\"K\n\030RtTpsProtoRepeat"
    "edCourse\022/\n\ncourseList\030\001 \003(\0132\033.tps.proto"
    ".RtTpsProtoCourse", 297);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_course.proto", &protobuf_RegisterTypes);
  RtTpsProtoCourse::default_instance_ = new RtTpsProtoCourse();
  RtTpsProtoRepeatedCourse::default_instance_ = new RtTpsProtoRepeatedCourse();
  RtTpsProtoCourse::default_instance_->InitAsDefaultInstance();
  RtTpsProtoRepeatedCourse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fcourse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fcourse_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fcourse_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fcourse_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fcourse_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoCourse::kCourseUIDFieldNumber;
const int RtTpsProtoCourse::kCourseNameFieldNumber;
const int RtTpsProtoCourse::kPatientUIDFieldNumber;
const int RtTpsProtoCourse::kPlanListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoCourse::RtTpsProtoCourse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoCourse::InitAsDefaultInstance() {
}

RtTpsProtoCourse::RtTpsProtoCourse(const RtTpsProtoCourse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoCourse::SharedCtor() {
  _cached_size_ = 0;
  courseuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  coursename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  patientuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoCourse::~RtTpsProtoCourse() {
  SharedDtor();
}

void RtTpsProtoCourse::SharedDtor() {
  if (courseuid_ != &::google::protobuf::internal::kEmptyString) {
    delete courseuid_;
  }
  if (coursename_ != &::google::protobuf::internal::kEmptyString) {
    delete coursename_;
  }
  if (patientuid_ != &::google::protobuf::internal::kEmptyString) {
    delete patientuid_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsProtoCourse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoCourse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoCourse_descriptor_;
}

const RtTpsProtoCourse& RtTpsProtoCourse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fcourse_2eproto();  return *default_instance_;
}

RtTpsProtoCourse* RtTpsProtoCourse::default_instance_ = NULL;

RtTpsProtoCourse* RtTpsProtoCourse::New() const {
  return new RtTpsProtoCourse;
}

void RtTpsProtoCourse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_courseuid()) {
      if (courseuid_ != &::google::protobuf::internal::kEmptyString) {
        courseuid_->clear();
      }
    }
    if (has_coursename()) {
      if (coursename_ != &::google::protobuf::internal::kEmptyString) {
        coursename_->clear();
      }
    }
    if (has_patientuid()) {
      if (patientuid_ != &::google::protobuf::internal::kEmptyString) {
        patientuid_->clear();
      }
    }
  }
  planlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoCourse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string courseUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_courseuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->courseuid().data(), this->courseuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_courseName;
        break;
      }
      
      // optional string courseName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_courseName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_coursename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->coursename().data(), this->coursename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_patientUID;
        break;
      }
      
      // optional string patientUID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_patientUID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_patientuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->patientuid().data(), this->patientuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_planList;
        break;
      }
      
      // repeated .tps.proto.RtTpsProtoPlan planList = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_planList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_planlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_planList;
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

void RtTpsProtoCourse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string courseUID = 1;
  if (has_courseuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->courseuid().data(), this->courseuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->courseuid(), output);
  }
  
  // optional string courseName = 2;
  if (has_coursename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->coursename().data(), this->coursename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->coursename(), output);
  }
  
  // optional string patientUID = 3;
  if (has_patientuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->patientuid().data(), this->patientuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->patientuid(), output);
  }
  
  // repeated .tps.proto.RtTpsProtoPlan planList = 4;
  for (int i = 0; i < this->planlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->planlist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoCourse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string courseUID = 1;
  if (has_courseuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->courseuid().data(), this->courseuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->courseuid(), target);
  }
  
  // optional string courseName = 2;
  if (has_coursename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->coursename().data(), this->coursename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->coursename(), target);
  }
  
  // optional string patientUID = 3;
  if (has_patientuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->patientuid().data(), this->patientuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->patientuid(), target);
  }
  
  // repeated .tps.proto.RtTpsProtoPlan planList = 4;
  for (int i = 0; i < this->planlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->planlist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoCourse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string courseUID = 1;
    if (has_courseuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->courseuid());
    }
    
    // optional string courseName = 2;
    if (has_coursename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->coursename());
    }
    
    // optional string patientUID = 3;
    if (has_patientuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->patientuid());
    }
    
  }
  // repeated .tps.proto.RtTpsProtoPlan planList = 4;
  total_size += 1 * this->planlist_size();
  for (int i = 0; i < this->planlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->planlist(i));
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

void RtTpsProtoCourse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoCourse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoCourse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoCourse::MergeFrom(const RtTpsProtoCourse& from) {
  GOOGLE_CHECK_NE(&from, this);
  planlist_.MergeFrom(from.planlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_courseuid()) {
      set_courseuid(from.courseuid());
    }
    if (from.has_coursename()) {
      set_coursename(from.coursename());
    }
    if (from.has_patientuid()) {
      set_patientuid(from.patientuid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoCourse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoCourse::CopyFrom(const RtTpsProtoCourse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoCourse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < planlist_size(); i++) {
    if (!this->planlist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoCourse::Swap(RtTpsProtoCourse* other) {
  if (other != this) {
    std::swap(courseuid_, other->courseuid_);
    std::swap(coursename_, other->coursename_);
    std::swap(patientuid_, other->patientuid_);
    planlist_.Swap(&other->planlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoCourse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoCourse_descriptor_;
  metadata.reflection = RtTpsProtoCourse_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoRepeatedCourse::kCourseListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoRepeatedCourse::RtTpsProtoRepeatedCourse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoRepeatedCourse::InitAsDefaultInstance() {
}

RtTpsProtoRepeatedCourse::RtTpsProtoRepeatedCourse(const RtTpsProtoRepeatedCourse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoRepeatedCourse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoRepeatedCourse::~RtTpsProtoRepeatedCourse() {
  SharedDtor();
}

void RtTpsProtoRepeatedCourse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoRepeatedCourse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedCourse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoRepeatedCourse_descriptor_;
}

const RtTpsProtoRepeatedCourse& RtTpsProtoRepeatedCourse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fcourse_2eproto();  return *default_instance_;
}

RtTpsProtoRepeatedCourse* RtTpsProtoRepeatedCourse::default_instance_ = NULL;

RtTpsProtoRepeatedCourse* RtTpsProtoRepeatedCourse::New() const {
  return new RtTpsProtoRepeatedCourse;
}

void RtTpsProtoRepeatedCourse::Clear() {
  courselist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoRepeatedCourse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RtTpsProtoCourse courseList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_courseList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_courselist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_courseList;
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

void RtTpsProtoRepeatedCourse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RtTpsProtoCourse courseList = 1;
  for (int i = 0; i < this->courselist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->courselist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoRepeatedCourse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RtTpsProtoCourse courseList = 1;
  for (int i = 0; i < this->courselist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->courselist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoRepeatedCourse::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RtTpsProtoCourse courseList = 1;
  total_size += 1 * this->courselist_size();
  for (int i = 0; i < this->courselist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->courselist(i));
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

void RtTpsProtoRepeatedCourse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoRepeatedCourse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoRepeatedCourse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoRepeatedCourse::MergeFrom(const RtTpsProtoRepeatedCourse& from) {
  GOOGLE_CHECK_NE(&from, this);
  courselist_.MergeFrom(from.courselist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoRepeatedCourse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoRepeatedCourse::CopyFrom(const RtTpsProtoRepeatedCourse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoRepeatedCourse::IsInitialized() const {
  
  for (int i = 0; i < courselist_size(); i++) {
    if (!this->courselist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoRepeatedCourse::Swap(RtTpsProtoRepeatedCourse* other) {
  if (other != this) {
    courselist_.Swap(&other->courselist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoRepeatedCourse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoRepeatedCourse_descriptor_;
  metadata.reflection = RtTpsProtoRepeatedCourse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)