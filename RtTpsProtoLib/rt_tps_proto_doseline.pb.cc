// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_doseline.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoDoseLine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoDoseLine_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedDoseLine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoRepeatedDoseLine_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fdoseline_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_doseline.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoDoseLine_descriptor_ = file->message_type(0);
  static const int RtTpsProtoDoseLine_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, doselineuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, doseratio_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, doselinecolor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, isvisible_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, isvisible3d_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, planuid_),
  };
  RtTpsProtoDoseLine_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoDoseLine_descriptor_,
      RtTpsProtoDoseLine::default_instance_,
      RtTpsProtoDoseLine_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLine, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoDoseLine));
  RtTpsProtoRepeatedDoseLine_descriptor_ = file->message_type(1);
  static const int RtTpsProtoRepeatedDoseLine_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLine, doselinelist_),
  };
  RtTpsProtoRepeatedDoseLine_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoRepeatedDoseLine_descriptor_,
      RtTpsProtoRepeatedDoseLine::default_instance_,
      RtTpsProtoRepeatedDoseLine_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLine, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLine, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoRepeatedDoseLine));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fdoseline_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoDoseLine_descriptor_, &RtTpsProtoDoseLine::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoRepeatedDoseLine_descriptor_, &RtTpsProtoRepeatedDoseLine::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fdoseline_2eproto() {
  delete RtTpsProtoDoseLine::default_instance_;
  delete RtTpsProtoDoseLine_reflection_;
  delete RtTpsProtoRepeatedDoseLine::default_instance_;
  delete RtTpsProtoRepeatedDoseLine_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033rt_tps_proto_doseline.proto\022\ttps.proto"
    "\"\214\001\n\022RtTpsProtoDoseLine\022\023\n\013doseLineUID\030\001"
    " \002(\t\022\021\n\tdoseRatio\030\002 \001(\002\022\025\n\rdoseLineColor"
    "\030\003 \003(\002\022\021\n\tisVisible\030\004 \001(\010\022\023\n\013isVisible3D"
    "\030\005 \001(\010\022\017\n\007planUID\030\006 \001(\t\"Q\n\032RtTpsProtoRep"
    "eatedDoseLine\0223\n\014doseLineList\030\001 \003(\0132\035.tp"
    "s.proto.RtTpsProtoDoseLine", 266);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_doseline.proto", &protobuf_RegisterTypes);
  RtTpsProtoDoseLine::default_instance_ = new RtTpsProtoDoseLine();
  RtTpsProtoRepeatedDoseLine::default_instance_ = new RtTpsProtoRepeatedDoseLine();
  RtTpsProtoDoseLine::default_instance_->InitAsDefaultInstance();
  RtTpsProtoRepeatedDoseLine::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fdoseline_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fdoseline_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fdoseline_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fdoseline_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoDoseLine::kDoseLineUIDFieldNumber;
const int RtTpsProtoDoseLine::kDoseRatioFieldNumber;
const int RtTpsProtoDoseLine::kDoseLineColorFieldNumber;
const int RtTpsProtoDoseLine::kIsVisibleFieldNumber;
const int RtTpsProtoDoseLine::kIsVisible3DFieldNumber;
const int RtTpsProtoDoseLine::kPlanUIDFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoDoseLine::RtTpsProtoDoseLine()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoDoseLine::InitAsDefaultInstance() {
}

RtTpsProtoDoseLine::RtTpsProtoDoseLine(const RtTpsProtoDoseLine& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoDoseLine::SharedCtor() {
  _cached_size_ = 0;
  doselineuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  doseratio_ = 0;
  isvisible_ = false;
  isvisible3d_ = false;
  planuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoDoseLine::~RtTpsProtoDoseLine() {
  SharedDtor();
}

void RtTpsProtoDoseLine::SharedDtor() {
  if (doselineuid_ != &::google::protobuf::internal::kEmptyString) {
    delete doselineuid_;
  }
  if (planuid_ != &::google::protobuf::internal::kEmptyString) {
    delete planuid_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsProtoDoseLine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoDoseLine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoDoseLine_descriptor_;
}

const RtTpsProtoDoseLine& RtTpsProtoDoseLine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto();  return *default_instance_;
}

RtTpsProtoDoseLine* RtTpsProtoDoseLine::default_instance_ = NULL;

RtTpsProtoDoseLine* RtTpsProtoDoseLine::New() const {
  return new RtTpsProtoDoseLine;
}

void RtTpsProtoDoseLine::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_doselineuid()) {
      if (doselineuid_ != &::google::protobuf::internal::kEmptyString) {
        doselineuid_->clear();
      }
    }
    doseratio_ = 0;
    isvisible_ = false;
    isvisible3d_ = false;
    if (has_planuid()) {
      if (planuid_ != &::google::protobuf::internal::kEmptyString) {
        planuid_->clear();
      }
    }
  }
  doselinecolor_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoDoseLine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string doseLineUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doselineuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->doselineuid().data(), this->doselineuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_doseRatio;
        break;
      }
      
      // optional float doseRatio = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_doseRatio:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &doseratio_)));
          set_has_doseratio();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_doseLineColor;
        break;
      }
      
      // repeated float doseLineColor = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_doseLineColor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 29, input, this->mutable_doselinecolor())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_doselinecolor())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_doseLineColor;
        if (input->ExpectTag(32)) goto parse_isVisible;
        break;
      }
      
      // optional bool isVisible = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isVisible:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isvisible_)));
          set_has_isvisible();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_isVisible3D;
        break;
      }
      
      // optional bool isVisible3D = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isVisible3D:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isvisible3d_)));
          set_has_isvisible3d();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_planUID;
        break;
      }
      
      // optional string planUID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_planUID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_planuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->planuid().data(), this->planuid().length(),
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

void RtTpsProtoDoseLine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string doseLineUID = 1;
  if (has_doselineuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselineuid().data(), this->doselineuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->doselineuid(), output);
  }
  
  // optional float doseRatio = 2;
  if (has_doseratio()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->doseratio(), output);
  }
  
  // repeated float doseLineColor = 3;
  for (int i = 0; i < this->doselinecolor_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      3, this->doselinecolor(i), output);
  }
  
  // optional bool isVisible = 4;
  if (has_isvisible()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->isvisible(), output);
  }
  
  // optional bool isVisible3D = 5;
  if (has_isvisible3d()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->isvisible3d(), output);
  }
  
  // optional string planUID = 6;
  if (has_planuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planuid().data(), this->planuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->planuid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoDoseLine::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string doseLineUID = 1;
  if (has_doselineuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselineuid().data(), this->doselineuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->doselineuid(), target);
  }
  
  // optional float doseRatio = 2;
  if (has_doseratio()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->doseratio(), target);
  }
  
  // repeated float doseLineColor = 3;
  for (int i = 0; i < this->doselinecolor_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(3, this->doselinecolor(i), target);
  }
  
  // optional bool isVisible = 4;
  if (has_isvisible()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->isvisible(), target);
  }
  
  // optional bool isVisible3D = 5;
  if (has_isvisible3d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->isvisible3d(), target);
  }
  
  // optional string planUID = 6;
  if (has_planuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planuid().data(), this->planuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->planuid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoDoseLine::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string doseLineUID = 1;
    if (has_doselineuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->doselineuid());
    }
    
    // optional float doseRatio = 2;
    if (has_doseratio()) {
      total_size += 1 + 4;
    }
    
    // optional bool isVisible = 4;
    if (has_isvisible()) {
      total_size += 1 + 1;
    }
    
    // optional bool isVisible3D = 5;
    if (has_isvisible3d()) {
      total_size += 1 + 1;
    }
    
    // optional string planUID = 6;
    if (has_planuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planuid());
    }
    
  }
  // repeated float doseLineColor = 3;
  {
    int data_size = 0;
    data_size = 4 * this->doselinecolor_size();
    total_size += 1 * this->doselinecolor_size() + data_size;
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

void RtTpsProtoDoseLine::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoDoseLine* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoDoseLine*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoDoseLine::MergeFrom(const RtTpsProtoDoseLine& from) {
  GOOGLE_CHECK_NE(&from, this);
  doselinecolor_.MergeFrom(from.doselinecolor_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_doselineuid()) {
      set_doselineuid(from.doselineuid());
    }
    if (from.has_doseratio()) {
      set_doseratio(from.doseratio());
    }
    if (from.has_isvisible()) {
      set_isvisible(from.isvisible());
    }
    if (from.has_isvisible3d()) {
      set_isvisible3d(from.isvisible3d());
    }
    if (from.has_planuid()) {
      set_planuid(from.planuid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoDoseLine::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoDoseLine::CopyFrom(const RtTpsProtoDoseLine& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoDoseLine::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RtTpsProtoDoseLine::Swap(RtTpsProtoDoseLine* other) {
  if (other != this) {
    std::swap(doselineuid_, other->doselineuid_);
    std::swap(doseratio_, other->doseratio_);
    doselinecolor_.Swap(&other->doselinecolor_);
    std::swap(isvisible_, other->isvisible_);
    std::swap(isvisible3d_, other->isvisible3d_);
    std::swap(planuid_, other->planuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoDoseLine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoDoseLine_descriptor_;
  metadata.reflection = RtTpsProtoDoseLine_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoRepeatedDoseLine::kDoseLineListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoRepeatedDoseLine::RtTpsProtoRepeatedDoseLine()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoRepeatedDoseLine::InitAsDefaultInstance() {
}

RtTpsProtoRepeatedDoseLine::RtTpsProtoRepeatedDoseLine(const RtTpsProtoRepeatedDoseLine& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoRepeatedDoseLine::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoRepeatedDoseLine::~RtTpsProtoRepeatedDoseLine() {
  SharedDtor();
}

void RtTpsProtoRepeatedDoseLine::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoRepeatedDoseLine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedDoseLine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoRepeatedDoseLine_descriptor_;
}

const RtTpsProtoRepeatedDoseLine& RtTpsProtoRepeatedDoseLine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto();  return *default_instance_;
}

RtTpsProtoRepeatedDoseLine* RtTpsProtoRepeatedDoseLine::default_instance_ = NULL;

RtTpsProtoRepeatedDoseLine* RtTpsProtoRepeatedDoseLine::New() const {
  return new RtTpsProtoRepeatedDoseLine;
}

void RtTpsProtoRepeatedDoseLine::Clear() {
  doselinelist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoRepeatedDoseLine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_doseLineList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_doselinelist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_doseLineList;
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

void RtTpsProtoRepeatedDoseLine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 1;
  for (int i = 0; i < this->doselinelist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->doselinelist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoRepeatedDoseLine::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 1;
  for (int i = 0; i < this->doselinelist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->doselinelist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoRepeatedDoseLine::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 1;
  total_size += 1 * this->doselinelist_size();
  for (int i = 0; i < this->doselinelist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->doselinelist(i));
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

void RtTpsProtoRepeatedDoseLine::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoRepeatedDoseLine* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoRepeatedDoseLine*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoRepeatedDoseLine::MergeFrom(const RtTpsProtoRepeatedDoseLine& from) {
  GOOGLE_CHECK_NE(&from, this);
  doselinelist_.MergeFrom(from.doselinelist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoRepeatedDoseLine::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoRepeatedDoseLine::CopyFrom(const RtTpsProtoRepeatedDoseLine& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoRepeatedDoseLine::IsInitialized() const {
  
  for (int i = 0; i < doselinelist_size(); i++) {
    if (!this->doselinelist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoRepeatedDoseLine::Swap(RtTpsProtoRepeatedDoseLine* other) {
  if (other != this) {
    doselinelist_.Swap(&other->doselinelist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoRepeatedDoseLine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoRepeatedDoseLine_descriptor_;
  metadata.reflection = RtTpsProtoRepeatedDoseLine_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)