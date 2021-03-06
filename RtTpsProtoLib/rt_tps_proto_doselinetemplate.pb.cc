// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_doselinetemplate.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoDoseLineTemplate_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoDoseLineTemplate_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedDoseLineTemplate_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoRepeatedDoseLineTemplate_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_doselinetemplate.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoDoseLineTemplate_descriptor_ = file->message_type(0);
  static const int RtTpsProtoDoseLineTemplate_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, doselinetemplateuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, doselinetemplatename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, doselinetemplatedescription_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, displaymode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, hundredpercentdefinition_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, specifieddose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, doselinelist_),
  };
  RtTpsProtoDoseLineTemplate_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoDoseLineTemplate_descriptor_,
      RtTpsProtoDoseLineTemplate::default_instance_,
      RtTpsProtoDoseLineTemplate_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoDoseLineTemplate, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoDoseLineTemplate));
  RtTpsProtoRepeatedDoseLineTemplate_descriptor_ = file->message_type(1);
  static const int RtTpsProtoRepeatedDoseLineTemplate_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLineTemplate, doselinetemplatelist_),
  };
  RtTpsProtoRepeatedDoseLineTemplate_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoRepeatedDoseLineTemplate_descriptor_,
      RtTpsProtoRepeatedDoseLineTemplate::default_instance_,
      RtTpsProtoRepeatedDoseLineTemplate_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLineTemplate, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoRepeatedDoseLineTemplate, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoRepeatedDoseLineTemplate));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoDoseLineTemplate_descriptor_, &RtTpsProtoDoseLineTemplate::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoRepeatedDoseLineTemplate_descriptor_, &RtTpsProtoRepeatedDoseLineTemplate::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fdoselinetemplate_2eproto() {
  delete RtTpsProtoDoseLineTemplate::default_instance_;
  delete RtTpsProtoDoseLineTemplate_reflection_;
  delete RtTpsProtoRepeatedDoseLineTemplate::default_instance_;
  delete RtTpsProtoRepeatedDoseLineTemplate_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tps::proto::protobuf_AddDesc_rt_5ftps_5fproto_5fdoseline_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#rt_tps_proto_doselinetemplate.proto\022\tt"
    "ps.proto\032\033rt_tps_proto_doseline.proto\"\377\001"
    "\n\032RtTpsProtoDoseLineTemplate\022\033\n\023doseLine"
    "TemplateUID\030\001 \002(\t\022\034\n\024doseLineTemplateNam"
    "e\030\002 \001(\t\022#\n\033doseLineTemplateDescription\030\003"
    " \001(\t\022\023\n\013displayMode\030\004 \001(\005\022 \n\030hundredPerc"
    "entDefinition\030\005 \001(\005\022\025\n\rspecifiedDose\030\006 \001"
    "(\001\0223\n\014doseLineList\030\007 \003(\0132\035.tps.proto.RtT"
    "psProtoDoseLine\"i\n\"RtTpsProtoRepeatedDos"
    "eLineTemplate\022C\n\024doseLineTemplateList\030\001 "
    "\003(\0132%.tps.proto.RtTpsProtoDoseLineTempla"
    "te", 442);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_doselinetemplate.proto", &protobuf_RegisterTypes);
  RtTpsProtoDoseLineTemplate::default_instance_ = new RtTpsProtoDoseLineTemplate();
  RtTpsProtoRepeatedDoseLineTemplate::default_instance_ = new RtTpsProtoRepeatedDoseLineTemplate();
  RtTpsProtoDoseLineTemplate::default_instance_->InitAsDefaultInstance();
  RtTpsProtoRepeatedDoseLineTemplate::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fdoselinetemplate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fdoselinetemplate_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fdoselinetemplate_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fdoselinetemplate_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoDoseLineTemplate::kDoseLineTemplateUIDFieldNumber;
const int RtTpsProtoDoseLineTemplate::kDoseLineTemplateNameFieldNumber;
const int RtTpsProtoDoseLineTemplate::kDoseLineTemplateDescriptionFieldNumber;
const int RtTpsProtoDoseLineTemplate::kDisplayModeFieldNumber;
const int RtTpsProtoDoseLineTemplate::kHundredPercentDefinitionFieldNumber;
const int RtTpsProtoDoseLineTemplate::kSpecifiedDoseFieldNumber;
const int RtTpsProtoDoseLineTemplate::kDoseLineListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoDoseLineTemplate::RtTpsProtoDoseLineTemplate()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoDoseLineTemplate::InitAsDefaultInstance() {
}

RtTpsProtoDoseLineTemplate::RtTpsProtoDoseLineTemplate(const RtTpsProtoDoseLineTemplate& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoDoseLineTemplate::SharedCtor() {
  _cached_size_ = 0;
  doselinetemplateuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  doselinetemplatename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  doselinetemplatedescription_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  displaymode_ = 0;
  hundredpercentdefinition_ = 0;
  specifieddose_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoDoseLineTemplate::~RtTpsProtoDoseLineTemplate() {
  SharedDtor();
}

void RtTpsProtoDoseLineTemplate::SharedDtor() {
  if (doselinetemplateuid_ != &::google::protobuf::internal::kEmptyString) {
    delete doselinetemplateuid_;
  }
  if (doselinetemplatename_ != &::google::protobuf::internal::kEmptyString) {
    delete doselinetemplatename_;
  }
  if (doselinetemplatedescription_ != &::google::protobuf::internal::kEmptyString) {
    delete doselinetemplatedescription_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsProtoDoseLineTemplate::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoDoseLineTemplate::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoDoseLineTemplate_descriptor_;
}

const RtTpsProtoDoseLineTemplate& RtTpsProtoDoseLineTemplate::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto();  return *default_instance_;
}

RtTpsProtoDoseLineTemplate* RtTpsProtoDoseLineTemplate::default_instance_ = NULL;

RtTpsProtoDoseLineTemplate* RtTpsProtoDoseLineTemplate::New() const {
  return new RtTpsProtoDoseLineTemplate;
}

void RtTpsProtoDoseLineTemplate::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_doselinetemplateuid()) {
      if (doselinetemplateuid_ != &::google::protobuf::internal::kEmptyString) {
        doselinetemplateuid_->clear();
      }
    }
    if (has_doselinetemplatename()) {
      if (doselinetemplatename_ != &::google::protobuf::internal::kEmptyString) {
        doselinetemplatename_->clear();
      }
    }
    if (has_doselinetemplatedescription()) {
      if (doselinetemplatedescription_ != &::google::protobuf::internal::kEmptyString) {
        doselinetemplatedescription_->clear();
      }
    }
    displaymode_ = 0;
    hundredpercentdefinition_ = 0;
    specifieddose_ = 0;
  }
  doselinelist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoDoseLineTemplate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string doseLineTemplateUID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doselinetemplateuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->doselinetemplateuid().data(), this->doselinetemplateuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_doseLineTemplateName;
        break;
      }
      
      // optional string doseLineTemplateName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_doseLineTemplateName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doselinetemplatename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->doselinetemplatename().data(), this->doselinetemplatename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_doseLineTemplateDescription;
        break;
      }
      
      // optional string doseLineTemplateDescription = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_doseLineTemplateDescription:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doselinetemplatedescription()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->doselinetemplatedescription().data(), this->doselinetemplatedescription().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_displayMode;
        break;
      }
      
      // optional int32 displayMode = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_displayMode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &displaymode_)));
          set_has_displaymode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_hundredPercentDefinition;
        break;
      }
      
      // optional int32 hundredPercentDefinition = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hundredPercentDefinition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hundredpercentdefinition_)));
          set_has_hundredpercentdefinition();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(49)) goto parse_specifiedDose;
        break;
      }
      
      // optional double specifiedDose = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_specifiedDose:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &specifieddose_)));
          set_has_specifieddose();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_doseLineList;
        break;
      }
      
      // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_doseLineList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_doselinelist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_doseLineList;
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

void RtTpsProtoDoseLineTemplate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string doseLineTemplateUID = 1;
  if (has_doselinetemplateuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplateuid().data(), this->doselinetemplateuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->doselinetemplateuid(), output);
  }
  
  // optional string doseLineTemplateName = 2;
  if (has_doselinetemplatename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplatename().data(), this->doselinetemplatename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->doselinetemplatename(), output);
  }
  
  // optional string doseLineTemplateDescription = 3;
  if (has_doselinetemplatedescription()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplatedescription().data(), this->doselinetemplatedescription().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->doselinetemplatedescription(), output);
  }
  
  // optional int32 displayMode = 4;
  if (has_displaymode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->displaymode(), output);
  }
  
  // optional int32 hundredPercentDefinition = 5;
  if (has_hundredpercentdefinition()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->hundredpercentdefinition(), output);
  }
  
  // optional double specifiedDose = 6;
  if (has_specifieddose()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->specifieddose(), output);
  }
  
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 7;
  for (int i = 0; i < this->doselinelist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->doselinelist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoDoseLineTemplate::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string doseLineTemplateUID = 1;
  if (has_doselinetemplateuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplateuid().data(), this->doselinetemplateuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->doselinetemplateuid(), target);
  }
  
  // optional string doseLineTemplateName = 2;
  if (has_doselinetemplatename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplatename().data(), this->doselinetemplatename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->doselinetemplatename(), target);
  }
  
  // optional string doseLineTemplateDescription = 3;
  if (has_doselinetemplatedescription()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->doselinetemplatedescription().data(), this->doselinetemplatedescription().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->doselinetemplatedescription(), target);
  }
  
  // optional int32 displayMode = 4;
  if (has_displaymode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->displaymode(), target);
  }
  
  // optional int32 hundredPercentDefinition = 5;
  if (has_hundredpercentdefinition()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->hundredpercentdefinition(), target);
  }
  
  // optional double specifiedDose = 6;
  if (has_specifieddose()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->specifieddose(), target);
  }
  
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 7;
  for (int i = 0; i < this->doselinelist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->doselinelist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoDoseLineTemplate::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string doseLineTemplateUID = 1;
    if (has_doselinetemplateuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->doselinetemplateuid());
    }
    
    // optional string doseLineTemplateName = 2;
    if (has_doselinetemplatename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->doselinetemplatename());
    }
    
    // optional string doseLineTemplateDescription = 3;
    if (has_doselinetemplatedescription()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->doselinetemplatedescription());
    }
    
    // optional int32 displayMode = 4;
    if (has_displaymode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->displaymode());
    }
    
    // optional int32 hundredPercentDefinition = 5;
    if (has_hundredpercentdefinition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hundredpercentdefinition());
    }
    
    // optional double specifiedDose = 6;
    if (has_specifieddose()) {
      total_size += 1 + 8;
    }
    
  }
  // repeated .tps.proto.RtTpsProtoDoseLine doseLineList = 7;
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

void RtTpsProtoDoseLineTemplate::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoDoseLineTemplate* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoDoseLineTemplate*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoDoseLineTemplate::MergeFrom(const RtTpsProtoDoseLineTemplate& from) {
  GOOGLE_CHECK_NE(&from, this);
  doselinelist_.MergeFrom(from.doselinelist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_doselinetemplateuid()) {
      set_doselinetemplateuid(from.doselinetemplateuid());
    }
    if (from.has_doselinetemplatename()) {
      set_doselinetemplatename(from.doselinetemplatename());
    }
    if (from.has_doselinetemplatedescription()) {
      set_doselinetemplatedescription(from.doselinetemplatedescription());
    }
    if (from.has_displaymode()) {
      set_displaymode(from.displaymode());
    }
    if (from.has_hundredpercentdefinition()) {
      set_hundredpercentdefinition(from.hundredpercentdefinition());
    }
    if (from.has_specifieddose()) {
      set_specifieddose(from.specifieddose());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoDoseLineTemplate::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoDoseLineTemplate::CopyFrom(const RtTpsProtoDoseLineTemplate& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoDoseLineTemplate::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < doselinelist_size(); i++) {
    if (!this->doselinelist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoDoseLineTemplate::Swap(RtTpsProtoDoseLineTemplate* other) {
  if (other != this) {
    std::swap(doselinetemplateuid_, other->doselinetemplateuid_);
    std::swap(doselinetemplatename_, other->doselinetemplatename_);
    std::swap(doselinetemplatedescription_, other->doselinetemplatedescription_);
    std::swap(displaymode_, other->displaymode_);
    std::swap(hundredpercentdefinition_, other->hundredpercentdefinition_);
    std::swap(specifieddose_, other->specifieddose_);
    doselinelist_.Swap(&other->doselinelist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoDoseLineTemplate::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoDoseLineTemplate_descriptor_;
  metadata.reflection = RtTpsProtoDoseLineTemplate_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoRepeatedDoseLineTemplate::kDoseLineTemplateListFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoRepeatedDoseLineTemplate::RtTpsProtoRepeatedDoseLineTemplate()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoRepeatedDoseLineTemplate::InitAsDefaultInstance() {
}

RtTpsProtoRepeatedDoseLineTemplate::RtTpsProtoRepeatedDoseLineTemplate(const RtTpsProtoRepeatedDoseLineTemplate& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoRepeatedDoseLineTemplate::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoRepeatedDoseLineTemplate::~RtTpsProtoRepeatedDoseLineTemplate() {
  SharedDtor();
}

void RtTpsProtoRepeatedDoseLineTemplate::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoRepeatedDoseLineTemplate::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoRepeatedDoseLineTemplate::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoRepeatedDoseLineTemplate_descriptor_;
}

const RtTpsProtoRepeatedDoseLineTemplate& RtTpsProtoRepeatedDoseLineTemplate::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fdoselinetemplate_2eproto();  return *default_instance_;
}

RtTpsProtoRepeatedDoseLineTemplate* RtTpsProtoRepeatedDoseLineTemplate::default_instance_ = NULL;

RtTpsProtoRepeatedDoseLineTemplate* RtTpsProtoRepeatedDoseLineTemplate::New() const {
  return new RtTpsProtoRepeatedDoseLineTemplate;
}

void RtTpsProtoRepeatedDoseLineTemplate::Clear() {
  doselinetemplatelist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoRepeatedDoseLineTemplate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tps.proto.RtTpsProtoDoseLineTemplate doseLineTemplateList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_doseLineTemplateList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_doselinetemplatelist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_doseLineTemplateList;
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

void RtTpsProtoRepeatedDoseLineTemplate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .tps.proto.RtTpsProtoDoseLineTemplate doseLineTemplateList = 1;
  for (int i = 0; i < this->doselinetemplatelist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->doselinetemplatelist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoRepeatedDoseLineTemplate::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .tps.proto.RtTpsProtoDoseLineTemplate doseLineTemplateList = 1;
  for (int i = 0; i < this->doselinetemplatelist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->doselinetemplatelist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoRepeatedDoseLineTemplate::ByteSize() const {
  int total_size = 0;
  
  // repeated .tps.proto.RtTpsProtoDoseLineTemplate doseLineTemplateList = 1;
  total_size += 1 * this->doselinetemplatelist_size();
  for (int i = 0; i < this->doselinetemplatelist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->doselinetemplatelist(i));
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

void RtTpsProtoRepeatedDoseLineTemplate::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoRepeatedDoseLineTemplate* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoRepeatedDoseLineTemplate*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoRepeatedDoseLineTemplate::MergeFrom(const RtTpsProtoRepeatedDoseLineTemplate& from) {
  GOOGLE_CHECK_NE(&from, this);
  doselinetemplatelist_.MergeFrom(from.doselinetemplatelist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoRepeatedDoseLineTemplate::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoRepeatedDoseLineTemplate::CopyFrom(const RtTpsProtoRepeatedDoseLineTemplate& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoRepeatedDoseLineTemplate::IsInitialized() const {
  
  for (int i = 0; i < doselinetemplatelist_size(); i++) {
    if (!this->doselinetemplatelist(i).IsInitialized()) return false;
  }
  return true;
}

void RtTpsProtoRepeatedDoseLineTemplate::Swap(RtTpsProtoRepeatedDoseLineTemplate* other) {
  if (other != this) {
    doselinetemplatelist_.Swap(&other->doselinetemplatelist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoRepeatedDoseLineTemplate::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoRepeatedDoseLineTemplate_descriptor_;
  metadata.reflection = RtTpsProtoRepeatedDoseLineTemplate_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
