// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_drrsetting.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsDRRSetting_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsDRRSetting_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fdrrsetting_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fdrrsetting_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_drrsetting.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsDRRSetting_descriptor_ = file->message_type(0);
  static const int RtTpsDRRSetting_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, ct2densitytablename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, ct2densitytableuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, electronenergy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, seriesuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, normalgroupuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, ctthresholdmin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, ctthresholdmax_),
  };
  RtTpsDRRSetting_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsDRRSetting_descriptor_,
      RtTpsDRRSetting::default_instance_,
      RtTpsDRRSetting_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsDRRSetting, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsDRRSetting));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fdrrsetting_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsDRRSetting_descriptor_, &RtTpsDRRSetting::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fdrrsetting_2eproto() {
  delete RtTpsDRRSetting::default_instance_;
  delete RtTpsDRRSetting_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fdrrsetting_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027rt_tps_drrsetting.proto\022\ttps.proto\"\275\001\n"
    "\017RtTpsDRRSetting\022\033\n\023CT2DensityTableName\030"
    "\001 \001(\t\022\032\n\022CT2DensityTableUid\030\002 \001(\t\022\026\n\016Ele"
    "ctronEnergy\030\003 \001(\002\022\021\n\tseriesUid\030\004 \001(\t\022\026\n\016"
    "normalgroupUid\030\005 \001(\t\022\026\n\016ctthresholdMin\030\006"
    " \001(\002\022\026\n\016ctthresholdMax\030\007 \001(\002", 228);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_drrsetting.proto", &protobuf_RegisterTypes);
  RtTpsDRRSetting::default_instance_ = new RtTpsDRRSetting();
  RtTpsDRRSetting::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fdrrsetting_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fdrrsetting_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fdrrsetting_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fdrrsetting_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fdrrsetting_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsDRRSetting::kCT2DensityTableNameFieldNumber;
const int RtTpsDRRSetting::kCT2DensityTableUidFieldNumber;
const int RtTpsDRRSetting::kElectronEnergyFieldNumber;
const int RtTpsDRRSetting::kSeriesUidFieldNumber;
const int RtTpsDRRSetting::kNormalgroupUidFieldNumber;
const int RtTpsDRRSetting::kCtthresholdMinFieldNumber;
const int RtTpsDRRSetting::kCtthresholdMaxFieldNumber;
#endif  // !_MSC_VER

RtTpsDRRSetting::RtTpsDRRSetting()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsDRRSetting::InitAsDefaultInstance() {
}

RtTpsDRRSetting::RtTpsDRRSetting(const RtTpsDRRSetting& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsDRRSetting::SharedCtor() {
  _cached_size_ = 0;
  ct2densitytablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ct2densitytableuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  electronenergy_ = 0;
  seriesuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  normalgroupuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ctthresholdmin_ = 0;
  ctthresholdmax_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsDRRSetting::~RtTpsDRRSetting() {
  SharedDtor();
}

void RtTpsDRRSetting::SharedDtor() {
  if (ct2densitytablename_ != &::google::protobuf::internal::kEmptyString) {
    delete ct2densitytablename_;
  }
  if (ct2densitytableuid_ != &::google::protobuf::internal::kEmptyString) {
    delete ct2densitytableuid_;
  }
  if (seriesuid_ != &::google::protobuf::internal::kEmptyString) {
    delete seriesuid_;
  }
  if (normalgroupuid_ != &::google::protobuf::internal::kEmptyString) {
    delete normalgroupuid_;
  }
  if (this != default_instance_) {
  }
}

void RtTpsDRRSetting::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsDRRSetting::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsDRRSetting_descriptor_;
}

const RtTpsDRRSetting& RtTpsDRRSetting::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fdrrsetting_2eproto();  return *default_instance_;
}

RtTpsDRRSetting* RtTpsDRRSetting::default_instance_ = NULL;

RtTpsDRRSetting* RtTpsDRRSetting::New() const {
  return new RtTpsDRRSetting;
}

void RtTpsDRRSetting::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ct2densitytablename()) {
      if (ct2densitytablename_ != &::google::protobuf::internal::kEmptyString) {
        ct2densitytablename_->clear();
      }
    }
    if (has_ct2densitytableuid()) {
      if (ct2densitytableuid_ != &::google::protobuf::internal::kEmptyString) {
        ct2densitytableuid_->clear();
      }
    }
    electronenergy_ = 0;
    if (has_seriesuid()) {
      if (seriesuid_ != &::google::protobuf::internal::kEmptyString) {
        seriesuid_->clear();
      }
    }
    if (has_normalgroupuid()) {
      if (normalgroupuid_ != &::google::protobuf::internal::kEmptyString) {
        normalgroupuid_->clear();
      }
    }
    ctthresholdmin_ = 0;
    ctthresholdmax_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsDRRSetting::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string CT2DensityTableName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ct2densitytablename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ct2densitytablename().data(), this->ct2densitytablename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_CT2DensityTableUid;
        break;
      }
      
      // optional string CT2DensityTableUid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_CT2DensityTableUid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ct2densitytableuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ct2densitytableuid().data(), this->ct2densitytableuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_ElectronEnergy;
        break;
      }
      
      // optional float ElectronEnergy = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ElectronEnergy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &electronenergy_)));
          set_has_electronenergy();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_seriesUid;
        break;
      }
      
      // optional string seriesUid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_seriesUid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_seriesuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->seriesuid().data(), this->seriesuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_normalgroupUid;
        break;
      }
      
      // optional string normalgroupUid = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_normalgroupUid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_normalgroupuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->normalgroupuid().data(), this->normalgroupuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_ctthresholdMin;
        break;
      }
      
      // optional float ctthresholdMin = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ctthresholdMin:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ctthresholdmin_)));
          set_has_ctthresholdmin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_ctthresholdMax;
        break;
      }
      
      // optional float ctthresholdMax = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_ctthresholdMax:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ctthresholdmax_)));
          set_has_ctthresholdmax();
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

void RtTpsDRRSetting::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string CT2DensityTableName = 1;
  if (has_ct2densitytablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ct2densitytablename().data(), this->ct2densitytablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ct2densitytablename(), output);
  }
  
  // optional string CT2DensityTableUid = 2;
  if (has_ct2densitytableuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ct2densitytableuid().data(), this->ct2densitytableuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->ct2densitytableuid(), output);
  }
  
  // optional float ElectronEnergy = 3;
  if (has_electronenergy()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->electronenergy(), output);
  }
  
  // optional string seriesUid = 4;
  if (has_seriesuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->seriesuid().data(), this->seriesuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->seriesuid(), output);
  }
  
  // optional string normalgroupUid = 5;
  if (has_normalgroupuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->normalgroupuid().data(), this->normalgroupuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->normalgroupuid(), output);
  }
  
  // optional float ctthresholdMin = 6;
  if (has_ctthresholdmin()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->ctthresholdmin(), output);
  }
  
  // optional float ctthresholdMax = 7;
  if (has_ctthresholdmax()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->ctthresholdmax(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsDRRSetting::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string CT2DensityTableName = 1;
  if (has_ct2densitytablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ct2densitytablename().data(), this->ct2densitytablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ct2densitytablename(), target);
  }
  
  // optional string CT2DensityTableUid = 2;
  if (has_ct2densitytableuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ct2densitytableuid().data(), this->ct2densitytableuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->ct2densitytableuid(), target);
  }
  
  // optional float ElectronEnergy = 3;
  if (has_electronenergy()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->electronenergy(), target);
  }
  
  // optional string seriesUid = 4;
  if (has_seriesuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->seriesuid().data(), this->seriesuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->seriesuid(), target);
  }
  
  // optional string normalgroupUid = 5;
  if (has_normalgroupuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->normalgroupuid().data(), this->normalgroupuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->normalgroupuid(), target);
  }
  
  // optional float ctthresholdMin = 6;
  if (has_ctthresholdmin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->ctthresholdmin(), target);
  }
  
  // optional float ctthresholdMax = 7;
  if (has_ctthresholdmax()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->ctthresholdmax(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsDRRSetting::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string CT2DensityTableName = 1;
    if (has_ct2densitytablename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ct2densitytablename());
    }
    
    // optional string CT2DensityTableUid = 2;
    if (has_ct2densitytableuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ct2densitytableuid());
    }
    
    // optional float ElectronEnergy = 3;
    if (has_electronenergy()) {
      total_size += 1 + 4;
    }
    
    // optional string seriesUid = 4;
    if (has_seriesuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->seriesuid());
    }
    
    // optional string normalgroupUid = 5;
    if (has_normalgroupuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->normalgroupuid());
    }
    
    // optional float ctthresholdMin = 6;
    if (has_ctthresholdmin()) {
      total_size += 1 + 4;
    }
    
    // optional float ctthresholdMax = 7;
    if (has_ctthresholdmax()) {
      total_size += 1 + 4;
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

void RtTpsDRRSetting::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsDRRSetting* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsDRRSetting*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsDRRSetting::MergeFrom(const RtTpsDRRSetting& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ct2densitytablename()) {
      set_ct2densitytablename(from.ct2densitytablename());
    }
    if (from.has_ct2densitytableuid()) {
      set_ct2densitytableuid(from.ct2densitytableuid());
    }
    if (from.has_electronenergy()) {
      set_electronenergy(from.electronenergy());
    }
    if (from.has_seriesuid()) {
      set_seriesuid(from.seriesuid());
    }
    if (from.has_normalgroupuid()) {
      set_normalgroupuid(from.normalgroupuid());
    }
    if (from.has_ctthresholdmin()) {
      set_ctthresholdmin(from.ctthresholdmin());
    }
    if (from.has_ctthresholdmax()) {
      set_ctthresholdmax(from.ctthresholdmax());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsDRRSetting::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsDRRSetting::CopyFrom(const RtTpsDRRSetting& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsDRRSetting::IsInitialized() const {
  
  return true;
}

void RtTpsDRRSetting::Swap(RtTpsDRRSetting* other) {
  if (other != this) {
    std::swap(ct2densitytablename_, other->ct2densitytablename_);
    std::swap(ct2densitytableuid_, other->ct2densitytableuid_);
    std::swap(electronenergy_, other->electronenergy_);
    std::swap(seriesuid_, other->seriesuid_);
    std::swap(normalgroupuid_, other->normalgroupuid_);
    std::swap(ctthresholdmin_, other->ctthresholdmin_);
    std::swap(ctthresholdmax_, other->ctthresholdmax_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsDRRSetting::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsDRRSetting_descriptor_;
  metadata.reflection = RtTpsDRRSetting_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)