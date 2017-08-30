// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_lightsettings.pb.h"

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

const ::google::protobuf::Descriptor* RT_TPS_LightSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RT_TPS_LightSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5flightsettings_2eproto() {
  protobuf_AddDesc_rt_5ftps_5flightsettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_lightsettings.proto");
  GOOGLE_CHECK(file != NULL);
  RT_TPS_LightSettings_descriptor_ = file->message_type(0);
  static const int RT_TPS_LightSettings_offsets_[19] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, rotatex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, rotatey_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, rotatez_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, specfactor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, ambfactor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, difffactor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, shininess_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, lightx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, lighty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, lightz_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, displaymode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, smoothness_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, usecameralight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, startstripindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, endstripindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, showmeshvertex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, mprtransparency3d_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, mprsection_),
  };
  RT_TPS_LightSettings_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RT_TPS_LightSettings_descriptor_,
      RT_TPS_LightSettings::default_instance_,
      RT_TPS_LightSettings_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_LightSettings, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RT_TPS_LightSettings));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5flightsettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RT_TPS_LightSettings_descriptor_, &RT_TPS_LightSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5flightsettings_2eproto() {
  delete RT_TPS_LightSettings::default_instance_;
  delete RT_TPS_LightSettings_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5flightsettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032rt_tps_lightsettings.proto\022\ttps.proto\""
    "\216\003\n\024RT_TPS_LightSettings\022\r\n\005scale\030\001 \001(\002\022"
    "\017\n\007rotateX\030\002 \001(\002\022\017\n\007rotateY\030\003 \001(\002\022\017\n\007rot"
    "ateZ\030\004 \001(\002\022\022\n\nspecfactor\030\005 \001(\002\022\021\n\tambfac"
    "tor\030\006 \001(\002\022\022\n\ndifffactor\030\007 \001(\002\022\021\n\tshinine"
    "ss\030\010 \001(\002\022\016\n\006lightX\030\t \001(\002\022\016\n\006lightY\030\n \001(\002"
    "\022\016\n\006lightZ\030\013 \001(\002\022\023\n\013displayMode\030\014 \001(\005\022\022\n"
    "\nsmoothness\030\r \001(\005\022\026\n\016useCameraLight\030\016 \001("
    "\010\022\027\n\017startStripIndex\030\017 \001(\005\022\025\n\rendStripIn"
    "dex\030\020 \001(\005\022\026\n\016showMeshVertex\030\021 \001(\010\022\031\n\021mpr"
    "Transparency3D\030\022 \001(\002\022\022\n\nmprSection\030\023 \001(\005", 440);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_lightsettings.proto", &protobuf_RegisterTypes);
  RT_TPS_LightSettings::default_instance_ = new RT_TPS_LightSettings();
  RT_TPS_LightSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5flightsettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5flightsettings_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5flightsettings_2eproto() {
    protobuf_AddDesc_rt_5ftps_5flightsettings_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5flightsettings_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RT_TPS_LightSettings::kScaleFieldNumber;
const int RT_TPS_LightSettings::kRotateXFieldNumber;
const int RT_TPS_LightSettings::kRotateYFieldNumber;
const int RT_TPS_LightSettings::kRotateZFieldNumber;
const int RT_TPS_LightSettings::kSpecfactorFieldNumber;
const int RT_TPS_LightSettings::kAmbfactorFieldNumber;
const int RT_TPS_LightSettings::kDifffactorFieldNumber;
const int RT_TPS_LightSettings::kShininessFieldNumber;
const int RT_TPS_LightSettings::kLightXFieldNumber;
const int RT_TPS_LightSettings::kLightYFieldNumber;
const int RT_TPS_LightSettings::kLightZFieldNumber;
const int RT_TPS_LightSettings::kDisplayModeFieldNumber;
const int RT_TPS_LightSettings::kSmoothnessFieldNumber;
const int RT_TPS_LightSettings::kUseCameraLightFieldNumber;
const int RT_TPS_LightSettings::kStartStripIndexFieldNumber;
const int RT_TPS_LightSettings::kEndStripIndexFieldNumber;
const int RT_TPS_LightSettings::kShowMeshVertexFieldNumber;
const int RT_TPS_LightSettings::kMprTransparency3DFieldNumber;
const int RT_TPS_LightSettings::kMprSectionFieldNumber;
#endif  // !_MSC_VER

RT_TPS_LightSettings::RT_TPS_LightSettings()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RT_TPS_LightSettings::InitAsDefaultInstance() {
}

RT_TPS_LightSettings::RT_TPS_LightSettings(const RT_TPS_LightSettings& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RT_TPS_LightSettings::SharedCtor() {
  _cached_size_ = 0;
  scale_ = 0;
  rotatex_ = 0;
  rotatey_ = 0;
  rotatez_ = 0;
  specfactor_ = 0;
  ambfactor_ = 0;
  difffactor_ = 0;
  shininess_ = 0;
  lightx_ = 0;
  lighty_ = 0;
  lightz_ = 0;
  displaymode_ = 0;
  smoothness_ = 0;
  usecameralight_ = false;
  startstripindex_ = 0;
  endstripindex_ = 0;
  showmeshvertex_ = false;
  mprtransparency3d_ = 0;
  mprsection_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RT_TPS_LightSettings::~RT_TPS_LightSettings() {
  SharedDtor();
}

void RT_TPS_LightSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RT_TPS_LightSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RT_TPS_LightSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RT_TPS_LightSettings_descriptor_;
}

const RT_TPS_LightSettings& RT_TPS_LightSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5flightsettings_2eproto();  return *default_instance_;
}

RT_TPS_LightSettings* RT_TPS_LightSettings::default_instance_ = NULL;

RT_TPS_LightSettings* RT_TPS_LightSettings::New() const {
  return new RT_TPS_LightSettings;
}

void RT_TPS_LightSettings::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    scale_ = 0;
    rotatex_ = 0;
    rotatey_ = 0;
    rotatez_ = 0;
    specfactor_ = 0;
    ambfactor_ = 0;
    difffactor_ = 0;
    shininess_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    lightx_ = 0;
    lighty_ = 0;
    lightz_ = 0;
    displaymode_ = 0;
    smoothness_ = 0;
    usecameralight_ = false;
    startstripindex_ = 0;
    endstripindex_ = 0;
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    showmeshvertex_ = false;
    mprtransparency3d_ = 0;
    mprsection_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RT_TPS_LightSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float scale = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &scale_)));
          set_has_scale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_rotateX;
        break;
      }
      
      // optional float rotateX = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_rotateX:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rotatex_)));
          set_has_rotatex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_rotateY;
        break;
      }
      
      // optional float rotateY = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_rotateY:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rotatey_)));
          set_has_rotatey();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_rotateZ;
        break;
      }
      
      // optional float rotateZ = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_rotateZ:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &rotatez_)));
          set_has_rotatez();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_specfactor;
        break;
      }
      
      // optional float specfactor = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_specfactor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &specfactor_)));
          set_has_specfactor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_ambfactor;
        break;
      }
      
      // optional float ambfactor = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ambfactor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ambfactor_)));
          set_has_ambfactor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_difffactor;
        break;
      }
      
      // optional float difffactor = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_difffactor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &difffactor_)));
          set_has_difffactor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(69)) goto parse_shininess;
        break;
      }
      
      // optional float shininess = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_shininess:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &shininess_)));
          set_has_shininess();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(77)) goto parse_lightX;
        break;
      }
      
      // optional float lightX = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_lightX:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &lightx_)));
          set_has_lightx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(85)) goto parse_lightY;
        break;
      }
      
      // optional float lightY = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_lightY:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &lighty_)));
          set_has_lighty();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(93)) goto parse_lightZ;
        break;
      }
      
      // optional float lightZ = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_lightZ:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &lightz_)));
          set_has_lightz();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_displayMode;
        break;
      }
      
      // optional int32 displayMode = 12;
      case 12: {
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
        if (input->ExpectTag(104)) goto parse_smoothness;
        break;
      }
      
      // optional int32 smoothness = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_smoothness:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &smoothness_)));
          set_has_smoothness();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_useCameraLight;
        break;
      }
      
      // optional bool useCameraLight = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_useCameraLight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &usecameralight_)));
          set_has_usecameralight();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(120)) goto parse_startStripIndex;
        break;
      }
      
      // optional int32 startStripIndex = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_startStripIndex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &startstripindex_)));
          set_has_startstripindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(128)) goto parse_endStripIndex;
        break;
      }
      
      // optional int32 endStripIndex = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_endStripIndex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &endstripindex_)));
          set_has_endstripindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(136)) goto parse_showMeshVertex;
        break;
      }
      
      // optional bool showMeshVertex = 17;
      case 17: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_showMeshVertex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &showmeshvertex_)));
          set_has_showmeshvertex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(149)) goto parse_mprTransparency3D;
        break;
      }
      
      // optional float mprTransparency3D = 18;
      case 18: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_mprTransparency3D:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &mprtransparency3d_)));
          set_has_mprtransparency3d();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(152)) goto parse_mprSection;
        break;
      }
      
      // optional int32 mprSection = 19;
      case 19: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mprSection:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mprsection_)));
          set_has_mprsection();
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

void RT_TPS_LightSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float scale = 1;
  if (has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->scale(), output);
  }
  
  // optional float rotateX = 2;
  if (has_rotatex()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->rotatex(), output);
  }
  
  // optional float rotateY = 3;
  if (has_rotatey()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->rotatey(), output);
  }
  
  // optional float rotateZ = 4;
  if (has_rotatez()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->rotatez(), output);
  }
  
  // optional float specfactor = 5;
  if (has_specfactor()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->specfactor(), output);
  }
  
  // optional float ambfactor = 6;
  if (has_ambfactor()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->ambfactor(), output);
  }
  
  // optional float difffactor = 7;
  if (has_difffactor()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->difffactor(), output);
  }
  
  // optional float shininess = 8;
  if (has_shininess()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->shininess(), output);
  }
  
  // optional float lightX = 9;
  if (has_lightx()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->lightx(), output);
  }
  
  // optional float lightY = 10;
  if (has_lighty()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->lighty(), output);
  }
  
  // optional float lightZ = 11;
  if (has_lightz()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->lightz(), output);
  }
  
  // optional int32 displayMode = 12;
  if (has_displaymode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->displaymode(), output);
  }
  
  // optional int32 smoothness = 13;
  if (has_smoothness()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->smoothness(), output);
  }
  
  // optional bool useCameraLight = 14;
  if (has_usecameralight()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->usecameralight(), output);
  }
  
  // optional int32 startStripIndex = 15;
  if (has_startstripindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->startstripindex(), output);
  }
  
  // optional int32 endStripIndex = 16;
  if (has_endstripindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(16, this->endstripindex(), output);
  }
  
  // optional bool showMeshVertex = 17;
  if (has_showmeshvertex()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(17, this->showmeshvertex(), output);
  }
  
  // optional float mprTransparency3D = 18;
  if (has_mprtransparency3d()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(18, this->mprtransparency3d(), output);
  }
  
  // optional int32 mprSection = 19;
  if (has_mprsection()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(19, this->mprsection(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RT_TPS_LightSettings::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float scale = 1;
  if (has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->scale(), target);
  }
  
  // optional float rotateX = 2;
  if (has_rotatex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->rotatex(), target);
  }
  
  // optional float rotateY = 3;
  if (has_rotatey()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->rotatey(), target);
  }
  
  // optional float rotateZ = 4;
  if (has_rotatez()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->rotatez(), target);
  }
  
  // optional float specfactor = 5;
  if (has_specfactor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->specfactor(), target);
  }
  
  // optional float ambfactor = 6;
  if (has_ambfactor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->ambfactor(), target);
  }
  
  // optional float difffactor = 7;
  if (has_difffactor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->difffactor(), target);
  }
  
  // optional float shininess = 8;
  if (has_shininess()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->shininess(), target);
  }
  
  // optional float lightX = 9;
  if (has_lightx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->lightx(), target);
  }
  
  // optional float lightY = 10;
  if (has_lighty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->lighty(), target);
  }
  
  // optional float lightZ = 11;
  if (has_lightz()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->lightz(), target);
  }
  
  // optional int32 displayMode = 12;
  if (has_displaymode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->displaymode(), target);
  }
  
  // optional int32 smoothness = 13;
  if (has_smoothness()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->smoothness(), target);
  }
  
  // optional bool useCameraLight = 14;
  if (has_usecameralight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->usecameralight(), target);
  }
  
  // optional int32 startStripIndex = 15;
  if (has_startstripindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->startstripindex(), target);
  }
  
  // optional int32 endStripIndex = 16;
  if (has_endstripindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(16, this->endstripindex(), target);
  }
  
  // optional bool showMeshVertex = 17;
  if (has_showmeshvertex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(17, this->showmeshvertex(), target);
  }
  
  // optional float mprTransparency3D = 18;
  if (has_mprtransparency3d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(18, this->mprtransparency3d(), target);
  }
  
  // optional int32 mprSection = 19;
  if (has_mprsection()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(19, this->mprsection(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RT_TPS_LightSettings::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float scale = 1;
    if (has_scale()) {
      total_size += 1 + 4;
    }
    
    // optional float rotateX = 2;
    if (has_rotatex()) {
      total_size += 1 + 4;
    }
    
    // optional float rotateY = 3;
    if (has_rotatey()) {
      total_size += 1 + 4;
    }
    
    // optional float rotateZ = 4;
    if (has_rotatez()) {
      total_size += 1 + 4;
    }
    
    // optional float specfactor = 5;
    if (has_specfactor()) {
      total_size += 1 + 4;
    }
    
    // optional float ambfactor = 6;
    if (has_ambfactor()) {
      total_size += 1 + 4;
    }
    
    // optional float difffactor = 7;
    if (has_difffactor()) {
      total_size += 1 + 4;
    }
    
    // optional float shininess = 8;
    if (has_shininess()) {
      total_size += 1 + 4;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional float lightX = 9;
    if (has_lightx()) {
      total_size += 1 + 4;
    }
    
    // optional float lightY = 10;
    if (has_lighty()) {
      total_size += 1 + 4;
    }
    
    // optional float lightZ = 11;
    if (has_lightz()) {
      total_size += 1 + 4;
    }
    
    // optional int32 displayMode = 12;
    if (has_displaymode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->displaymode());
    }
    
    // optional int32 smoothness = 13;
    if (has_smoothness()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->smoothness());
    }
    
    // optional bool useCameraLight = 14;
    if (has_usecameralight()) {
      total_size += 1 + 1;
    }
    
    // optional int32 startStripIndex = 15;
    if (has_startstripindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->startstripindex());
    }
    
    // optional int32 endStripIndex = 16;
    if (has_endstripindex()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->endstripindex());
    }
    
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // optional bool showMeshVertex = 17;
    if (has_showmeshvertex()) {
      total_size += 2 + 1;
    }
    
    // optional float mprTransparency3D = 18;
    if (has_mprtransparency3d()) {
      total_size += 2 + 4;
    }
    
    // optional int32 mprSection = 19;
    if (has_mprsection()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mprsection());
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

void RT_TPS_LightSettings::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RT_TPS_LightSettings* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_LightSettings*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RT_TPS_LightSettings::MergeFrom(const RT_TPS_LightSettings& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_scale()) {
      set_scale(from.scale());
    }
    if (from.has_rotatex()) {
      set_rotatex(from.rotatex());
    }
    if (from.has_rotatey()) {
      set_rotatey(from.rotatey());
    }
    if (from.has_rotatez()) {
      set_rotatez(from.rotatez());
    }
    if (from.has_specfactor()) {
      set_specfactor(from.specfactor());
    }
    if (from.has_ambfactor()) {
      set_ambfactor(from.ambfactor());
    }
    if (from.has_difffactor()) {
      set_difffactor(from.difffactor());
    }
    if (from.has_shininess()) {
      set_shininess(from.shininess());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_lightx()) {
      set_lightx(from.lightx());
    }
    if (from.has_lighty()) {
      set_lighty(from.lighty());
    }
    if (from.has_lightz()) {
      set_lightz(from.lightz());
    }
    if (from.has_displaymode()) {
      set_displaymode(from.displaymode());
    }
    if (from.has_smoothness()) {
      set_smoothness(from.smoothness());
    }
    if (from.has_usecameralight()) {
      set_usecameralight(from.usecameralight());
    }
    if (from.has_startstripindex()) {
      set_startstripindex(from.startstripindex());
    }
    if (from.has_endstripindex()) {
      set_endstripindex(from.endstripindex());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from.has_showmeshvertex()) {
      set_showmeshvertex(from.showmeshvertex());
    }
    if (from.has_mprtransparency3d()) {
      set_mprtransparency3d(from.mprtransparency3d());
    }
    if (from.has_mprsection()) {
      set_mprsection(from.mprsection());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RT_TPS_LightSettings::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RT_TPS_LightSettings::CopyFrom(const RT_TPS_LightSettings& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RT_TPS_LightSettings::IsInitialized() const {
  
  return true;
}

void RT_TPS_LightSettings::Swap(RT_TPS_LightSettings* other) {
  if (other != this) {
    std::swap(scale_, other->scale_);
    std::swap(rotatex_, other->rotatex_);
    std::swap(rotatey_, other->rotatey_);
    std::swap(rotatez_, other->rotatez_);
    std::swap(specfactor_, other->specfactor_);
    std::swap(ambfactor_, other->ambfactor_);
    std::swap(difffactor_, other->difffactor_);
    std::swap(shininess_, other->shininess_);
    std::swap(lightx_, other->lightx_);
    std::swap(lighty_, other->lighty_);
    std::swap(lightz_, other->lightz_);
    std::swap(displaymode_, other->displaymode_);
    std::swap(smoothness_, other->smoothness_);
    std::swap(usecameralight_, other->usecameralight_);
    std::swap(startstripindex_, other->startstripindex_);
    std::swap(endstripindex_, other->endstripindex_);
    std::swap(showmeshvertex_, other->showmeshvertex_);
    std::swap(mprtransparency3d_, other->mprtransparency3d_);
    std::swap(mprsection_, other->mprsection_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RT_TPS_LightSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RT_TPS_LightSettings_descriptor_;
  metadata.reflection = RT_TPS_LightSettings_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)