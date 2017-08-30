// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_constraint.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoConstraint_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoConstraint_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedConstraint_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoRepeatedConstraint_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fconstraint_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fconstraint_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_constraint.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoConstraint_descriptor_ = file->message_type(0);
  static const int RtTpsProtoConstraint_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, constraintuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, constraintname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, dosetype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, dose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, dosevolume_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, comments_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, isachieved_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, constraintplanningrole_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, constraintbiologicalrole_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, tendency_),
  };
  RtTpsProtoConstraint_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoConstraint_descriptor_,
      RtTpsProtoConstraint::default_instance_,
      RtTpsProtoConstraint_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoConstraint, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoConstraint));
  RtTpsProtoRepeatedConstraint_descriptor_ = file->message_type(1);
  static const int RtTpsProtoRepeatedConstraint_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedConstraint, constraintlist_),
  };
  RtTpsProtoRepeatedConstraint_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoRepeatedConstraint_descriptor_,
      RtTpsProtoRepeatedConstraint::default_instance_,
      RtTpsProtoRepeatedConstraint_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedConstraint, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedConstraint, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoRepeatedConstraint));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fconstraint_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoConstraint_descriptor_, &RtTpsProtoConstraint::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoRepeatedConstraint_descriptor_, &RtTpsProtoRepeatedConstraint::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fconstraint_2eproto() {
  delete RtTpsProtoConstraint::default_instance_;
  delete RtTpsProtoConstraint_reflection_;
  delete RtTpsProtoRepeatedConstraint::default_instance_;
  delete RtTpsProtoRepeatedConstraint_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fconstraint_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035rt_tps_proto_constraint.proto\022\ttps.pro"
    "to\"\363\001\n\024RtTpsProtoConstraint\022\025\n\rconstrain"
    "tUID\030\001 \002(\t\022\026\n\016constraintName\030\002 \001(\t\022\020\n\010do"
    "seType\030\003 \001(\005\022\014\n\004dose\030\004 \001(\002\022\022\n\ndoseVolume"
    "\030\005 \001(\002\022\020\n\010comments\030\006 \001(\t\022\022\n\nisAchieved\030\007"
    " \001(\010\022\036\n\026ConstraintPlanningRole\030\010 \001(\005\022 \n\030"
    "ConstraintBiologicalRole\030\t \001(\005\022\020\n\010Tenden"
    "cy\030\n \001(\005\"W\n\034RtTpsProtoRepeatedConstraint"
    "\0227\n\016constraintList\030\001 \003(\0132\037.tps.proto.RtT"
    "psProtoConstraint", 377);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_constraint.proto", &protobuf_RegisterTypes);
  RtTpsProtoConstraint::default_instance_ = new RtTpsProtoConstraint();
  RtTpsProtoRepeatedConstraint::default_instance_ = new RtTpsProtoRepeatedConstraint();
  RtTpsProtoConstraint::default_instance_->InitAsDefaultInstance();
  RtTpsProtoRepeatedConstraint::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fconstraint_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fconstraint_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fconstraint_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fconstraint_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fconstraint_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoConstraint::kConstraintUIDFieldNumber;
const int RtTpsProtoConstraint::kConstraintNameFieldNumber;
const int RtTpsProtoConstraint::kDoseTypeFieldNumber;
const int RtTpsProtoConstraint::kDoseFieldNumber;
const int RtTpsProtoConstraint::kDoseVolumeFieldNumber;
const int RtTpsProtoConstraint::kCommentsFieldNumber;
const int RtTpsProtoConstraint::kIsAchievedFieldNumber;
const int RtTpsProtoConstraint::kConstraintPlanningRoleFieldNumber;
const int RtTpsProtoConstraint::kConstraintBiologicalRoleFieldNumber;
const int RtTpsProtoConstraint::kTendencyFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoConstraint::RtTpsProtoConstraint()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoConstraint::InitAsDefaultInstance() {
}

RtTpsProtoConstraint::RtTpsProtoConstraint(const RtTpsProtoConstraint& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoConstraint::SharedCtor() {
  _cached_size_ = 0;
  constraintuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  constraintname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  dosetype_ = 0;
  dose_ = 0;
  dosevolume_ = 0;
  comments_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  isachieved_ = false;
  constraintplanningrole_ = 0;
  constraintbiologicalrole_ = 0;
  tendency_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoConstraint::~RtTpsProtoConstraint() {
  SharedDtor();
}

void RtTpsProtoConstraint::SharedDtor() {
  if (constraintuid_ != &::google::protobuf::internal::kEmptyString) {
    delete constraintuid_;
  }
  if (constraintname_ != &::google::protobuf::internal::kEmptyString) {
    delete constraintname_;
  }
  if (comments_ != &::google::protobuf::internal::kEmptyString) {
    delete comments_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsProtoConstraint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoConstraint::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoConstraint_descriptor_;
}

const RtTpsProtoConstraint& RtTpsProtoConstraint::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fconstraint_2eproto();  return *default_instance_;
}

RtTpsProtoConstraint* RtTpsProtoConstraint::default_instance_ = NULL;

RtTpsProtoConstraint* RtTpsProtoConstraint::New() const {
  return new RtTpsProtoConstraint;
}

void RtTpsProtoConstraint::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_constraintuid()) {
      if (constraintuid_ != &::google::protobuf::internal::kEmptyString) {
        constraintuid_->clear();
      }
    }
    if (has_constraintname()) {
      if (constraintname_ != &::google::protobuf::internal::kEmptyString) {
        constraintname_->clear();
      }
    }
    dosetype_ = 0;
    dose_ = 0;
    dosevolume_ = 0;
    if (has_comments()) {
      if (comments_ != &::google::protobuf::internal::kEmptyString) {
        comments_->clear();
      }
    }
    isachieved_ = false;
    constraintplanningrole_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    constraintbiologicalrole_ = 0;
    tendency_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoConstraint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string constraintUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_constraintuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->constraintuid().data(), this->constraintuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_constraintName;
        break;
      }
      
      // optional string constraintName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_constraintName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_constraintname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->constraintname().data(), this->constraintname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_doseType;
        break;
      }
      
      // optional int32 doseType = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_doseType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dosetype_)));
          set_has_dosetype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_dose;
        break;
      }
      
      // optional float dose = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_dose:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &dose_)));
          set_has_dose();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_doseVolume;
        break;
      }
      
      // optional float doseVolume = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_doseVolume:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &dosevolume_)));
          set_has_dosevolume();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_comments;
        break;
      }
      
      // optional string comments = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_comments:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_comments()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->comments().data(), this->comments().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_isAchieved;
        break;
      }
      
      // optional bool isAchieved = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isAchieved:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isachieved_)));
          set_has_isachieved();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_ConstraintPlanningRole;
        break;
      }
      
      // optional int32 ConstraintPlanningRole = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ConstraintPlanningRole:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &constraintplanningrole_)));
          set_has_constraintplanningrole();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_ConstraintBiologicalRole;
        break;
      }
      
      // optional int32 ConstraintBiologicalRole = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ConstraintBiologicalRole:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &constraintbiologicalrole_)));
          set_has_constraintbiologicalrole();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_Tendency;
        break;
      }
      
      // optional int32 Tendency = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Tendency:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tendency_)));
          set_has_tendency();
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

void RtTpsProtoConstraint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string constraintUID = 1;
  if (has_constraintuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->constraintuid().data(), this->constraintuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->constraintuid(), output);
  }
  
  // optional string constraintName = 2;
  if (has_constraintname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->constraintname().data(), this->constraintname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->constraintname(), output);
  }
  
  // optional int32 doseType = 3;
  if (has_dosetype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->dosetype(), output);
  }
  
  // optional float dose = 4;
  if (has_dose()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->dose(), output);
  }
  
  // optional float doseVolume = 5;
  if (has_dosevolume()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->dosevolume(), output);
  }
  
  // optional string comments = 6;
  if (has_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->comments().data(), this->comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->comments(), output);
  }
  
  // optional bool isAchieved = 7;
  if (has_isachieved()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->isachieved(), output);
  }
  
  // optional int32 ConstraintPlanningRole = 8;
  if (has_constraintplanningrole()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->constraintplanningrole(), output);
  }
  
  // optional int32 ConstraintBiologicalRole = 9;
  if (has_constraintbiologicalrole()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->constraintbiologicalrole(), output);
  }
  
  // optional int32 Tendency = 10;
  if (has_tendency()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->tendency(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoConstraint::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string constraintUID = 1;
  if (has_constraintuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->constraintuid().data(), this->constraintuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->constraintuid(), target);
  }
  
  // optional string constraintName = 2;
  if (has_constraintname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->constraintname().data(), this->constraintname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->constraintname(), target);
  }
  
  // optional int32 doseType = 3;
  if (has_dosetype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->dosetype(), target);
  }
  
  // optional float dose = 4;
  if (has_dose()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->dose(), target);
  }
  
  // optional float doseVolume = 5;
  if (has_dosevolume()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->dosevolume(), target);
  }
  
  // optional string comments = 6;
  if (has_comments()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->comments().data(), this->comments().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->comments(), target);
  }
  
  // optional bool isAchieved = 7;
  if (has_isachieved()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->isachieved(), target);
  }
  
  // optional int32 ConstraintPlanningRole = 8;
  if (has_constraintplanningrole()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->constraintplanningrole(), target);
  }
  
  // optional int32 ConstraintBiologicalRole = 9;
  if (has_constraintbiologicalrole()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->constraintbiologicalrole(), target);
  }
  
  // optional int32 Tendency = 10;
  if (has_tendency()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->tendency(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoConstraint::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string constraintUID = 1;
    if (has_constraintuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->constraintuid());
    }
    
    // optional string constraintName = 2;
    if (has_constraintname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->constraintname());
    }
    
    // optional int32 doseType = 3;
    if (has_dosetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dosetype());
    }
    
    // optional float dose = 4;
    if (has_dose()) {
      total_size += 1 + 4;
    }
    
    // optional float doseVolume = 5;
    if (has_dosevolume()) {
      total_size += 1 + 4;
    }
    
    // optional string comments = 6;
    if (has_comments()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->comments());
    }
    
    // optional bool isAchieved = 7;
    if (has_isachieved()) {
      total_size += 1 + 1;
    }
    
    // optional int32 ConstraintPlanningRole = 8;
    if (has_constraintplanningrole()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->constraintplanningrole());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 ConstraintBiologicalRole = 9;
    if (has_constraintbiologicalrole()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->constraintbiologicalrole());
    }
    
    // optional int32 Tendency = 10;
    if (has_tendency()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tendency());
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

void RtTpsProtoConstraint::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoConstraint* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoConstraint*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoConstraint::MergeFrom(const RtTpsProtoConstraint& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_constraintuid()) {
      set_constraintuid(from.constraintuid());
    }
    if (from.has_constraintname()) {
      set_constraintname(from.constraintname());
    }
    if (from.has_dosetype()) {
      set_dosetype(from.dosetype());
    }
    if (from.has_dose()) {
      set_dose(from.dose());
    }
    if (from.has_dosevolume()) {
      set_dosevolume(from.dosevolume());
    }
    if (from.has_comments()) {
      set_comments(from.comments());
    }
    if (from.has_isachieved()) {
      set_isachieved(from.isachieved());
    }
    if (from.has_constraintplanningrole()) {
      set_constraintplanningrole(from.constraintplanningrole());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_constraintbiologicalrole()) {
      set_constraintbiologicalrole(from.constraintbiologicalrole());
    }
    if (from.has_tendency()) {
      set_tendency(from.tendency());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoConstraint::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoConstraint::CopyFrom(const RtTpsProtoConstraint& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoConstraint::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RtTpsProtoConstraint::Swap(RtTpsProtoConstraint* other) {
  if (other != this) {
    std::swap(constraintuid_, other->constraintuid_);
    std::swap(constraintname_, other->constraintname_);
    std::swap(dosetype_, other->dosetype_);
    std::swap(dose_, other->dose_);
    std::swap(dosevolume_, other->dosevolume_);
    std::swap(comments_, other->comments_);
    std::swap(isachieved_, other->isachieved_);
    std::swap(constraintplanningrole_, other->constraintplanningrole_);
    std::swap(constraintbiologicalrole_, other->constraintbiologicalrole_);
    std::swap(tendency_, other->tendency_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoConstraint::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoConstraint_descriptor_;
  metadata.reflection = RtTpsProtoConstraint_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoRepeatedConstraint::kConstraintListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoRepeatedConstraint::RtTpsProtoRepeatedConstraint()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoRepeatedConstraint::InitAsDefaultInstance() {
}

RtTpsProtoRepeatedConstraint::RtTpsProtoRepeatedConstraint(const RtTpsProtoRepeatedConstraint& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoRepeatedConstraint::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoRepeatedConstraint::~RtTpsProtoRepeatedConstraint() {
  SharedDtor();
}

void RtTpsProtoRepeatedConstraint::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoRepeatedConstraint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedConstraint::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoRepeatedConstraint_descriptor_;
}

const RtTpsProtoRepeatedConstraint& RtTpsProtoRepeatedConstraint::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fconstraint_2eproto();  return *default_instance_;
}

RtTpsProtoRepeatedConstraint* RtTpsProtoRepeatedConstraint::default_instance_ = NULL;

RtTpsProtoRepeatedConstraint* RtTpsProtoRepeatedConstraint::New() const {
  return new RtTpsProtoRepeatedConstraint;
}

void RtTpsProtoRepeatedConstraint::Clear() {
  constraintlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoRepeatedConstraint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RtTpsProtoConstraint constraintList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_constraintList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_constraintlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_constraintList;
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

void RtTpsProtoRepeatedConstraint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RtTpsProtoConstraint constraintList = 1;
  for (int i = 0; i < this->constraintlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->constraintlist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoRepeatedConstraint::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RtTpsProtoConstraint constraintList = 1;
  for (int i = 0; i < this->constraintlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->constraintlist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoRepeatedConstraint::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RtTpsProtoConstraint constraintList = 1;
  total_size += 1 * this->constraintlist_size();
  for (int i = 0; i < this->constraintlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->constraintlist(i));
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

void RtTpsProtoRepeatedConstraint::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoRepeatedConstraint* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoRepeatedConstraint*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoRepeatedConstraint::MergeFrom(const RtTpsProtoRepeatedConstraint& from) {
  GOOGLE_CHECK_NE(&from, this);
  constraintlist_.MergeFrom(from.constraintlist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoRepeatedConstraint::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoRepeatedConstraint::CopyFrom(const RtTpsProtoRepeatedConstraint& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoRepeatedConstraint::IsInitialized() const {
  
  for (int i = 0; i < constraintlist_size(); i++) {
    if (!this->constraintlist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoRepeatedConstraint::Swap(RtTpsProtoRepeatedConstraint* other) {
  if (other != this) {
    constraintlist_.Swap(&other->constraintlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoRepeatedConstraint::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoRepeatedConstraint_descriptor_;
  metadata.reflection = RtTpsProtoRepeatedConstraint_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)