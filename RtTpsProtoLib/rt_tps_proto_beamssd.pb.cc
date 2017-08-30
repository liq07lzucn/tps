// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_proto_beamssd.pb.h"

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

const ::google::protobuf::Descriptor* RtTpsProtoBeamSSD_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoBeamSSD_reflection_ = NULL;
const ::google::protobuf::Descriptor* RtTpsProtoSegmentSSD_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RtTpsProtoSegmentSSD_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rt_5ftps_5fproto_5fbeamssd_2eproto() {
  protobuf_AddDesc_rt_5ftps_5fproto_5fbeamssd_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rt_tps_proto_beamssd.proto");
  GOOGLE_CHECK(file != NULL);
  RtTpsProtoBeamSSD_descriptor_ = file->message_type(0);
  static const int RtTpsProtoBeamSSD_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, ssdrangemin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, ssdrangemax_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, originalx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, originaly_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, originalz_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, segmentssd_list_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, ssd_),
  };
  RtTpsProtoBeamSSD_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoBeamSSD_descriptor_,
      RtTpsProtoBeamSSD::default_instance_,
      RtTpsProtoBeamSSD_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoBeamSSD, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoBeamSSD));
  RtTpsProtoSegmentSSD_descriptor_ = file->message_type(1);
  static const int RtTpsProtoSegmentSSD_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSegmentSSD, startssd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSegmentSSD, endssd_),
  };
  RtTpsProtoSegmentSSD_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RtTpsProtoSegmentSSD_descriptor_,
      RtTpsProtoSegmentSSD::default_instance_,
      RtTpsProtoSegmentSSD_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSegmentSSD, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RtTpsProtoSegmentSSD, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RtTpsProtoSegmentSSD));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rt_5ftps_5fproto_5fbeamssd_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoBeamSSD_descriptor_, &RtTpsProtoBeamSSD::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RtTpsProtoSegmentSSD_descriptor_, &RtTpsProtoSegmentSSD::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rt_5ftps_5fproto_5fbeamssd_2eproto() {
  delete RtTpsProtoBeamSSD::default_instance_;
  delete RtTpsProtoBeamSSD_reflection_;
  delete RtTpsProtoSegmentSSD::default_instance_;
  delete RtTpsProtoSegmentSSD_reflection_;
}

void protobuf_AddDesc_rt_5ftps_5fproto_5fbeamssd_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032rt_tps_proto_beamssd.proto\022\ttps.proto\""
    "\275\001\n\021RtTpsProtoBeamSSD\022\023\n\013SsdRangeMin\030\001 \001"
    "(\002\022\023\n\013SsdRangeMax\030\002 \001(\002\022\021\n\tOriginalx\030\003 \001"
    "(\002\022\021\n\tOriginaly\030\004 \001(\002\022\021\n\tOriginalz\030\005 \001(\002"
    "\0228\n\017segmentssd_list\030\006 \003(\0132\037.tps.proto.Rt"
    "TpsProtoSegmentSSD\022\013\n\003Ssd\030\007 \001(\002\"8\n\024RtTps"
    "ProtoSegmentSSD\022\020\n\010StartSSD\030\001 \001(\002\022\016\n\006End"
    "SSD\030\002 \001(\002", 289);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rt_tps_proto_beamssd.proto", &protobuf_RegisterTypes);
  RtTpsProtoBeamSSD::default_instance_ = new RtTpsProtoBeamSSD();
  RtTpsProtoSegmentSSD::default_instance_ = new RtTpsProtoSegmentSSD();
  RtTpsProtoBeamSSD::default_instance_->InitAsDefaultInstance();
  RtTpsProtoSegmentSSD::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fproto_5fbeamssd_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rt_5ftps_5fproto_5fbeamssd_2eproto {
  StaticDescriptorInitializer_rt_5ftps_5fproto_5fbeamssd_2eproto() {
    protobuf_AddDesc_rt_5ftps_5fproto_5fbeamssd_2eproto();
  }
} static_descriptor_initializer_rt_5ftps_5fproto_5fbeamssd_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoBeamSSD::kSsdRangeMinFieldNumber;
const int RtTpsProtoBeamSSD::kSsdRangeMaxFieldNumber;
const int RtTpsProtoBeamSSD::kOriginalxFieldNumber;
const int RtTpsProtoBeamSSD::kOriginalyFieldNumber;
const int RtTpsProtoBeamSSD::kOriginalzFieldNumber;
const int RtTpsProtoBeamSSD::kSegmentssdListFieldNumber;
const int RtTpsProtoBeamSSD::kSsdFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoBeamSSD::RtTpsProtoBeamSSD()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoBeamSSD::InitAsDefaultInstance() {
}

RtTpsProtoBeamSSD::RtTpsProtoBeamSSD(const RtTpsProtoBeamSSD& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoBeamSSD::SharedCtor() {
  _cached_size_ = 0;
  ssdrangemin_ = 0;
  ssdrangemax_ = 0;
  originalx_ = 0;
  originaly_ = 0;
  originalz_ = 0;
  ssd_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoBeamSSD::~RtTpsProtoBeamSSD() {
  SharedDtor();
}

void RtTpsProtoBeamSSD::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoBeamSSD::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoBeamSSD::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoBeamSSD_descriptor_;
}

const RtTpsProtoBeamSSD& RtTpsProtoBeamSSD::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fbeamssd_2eproto();  return *default_instance_;
}

RtTpsProtoBeamSSD* RtTpsProtoBeamSSD::default_instance_ = NULL;

RtTpsProtoBeamSSD* RtTpsProtoBeamSSD::New() const {
  return new RtTpsProtoBeamSSD;
}

void RtTpsProtoBeamSSD::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ssdrangemin_ = 0;
    ssdrangemax_ = 0;
    originalx_ = 0;
    originaly_ = 0;
    originalz_ = 0;
    ssd_ = 0;
  }
  segmentssd_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoBeamSSD::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float SsdRangeMin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ssdrangemin_)));
          set_has_ssdrangemin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_SsdRangeMax;
        break;
      }
      
      // optional float SsdRangeMax = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_SsdRangeMax:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ssdrangemax_)));
          set_has_ssdrangemax();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_Originalx;
        break;
      }
      
      // optional float Originalx = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_Originalx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &originalx_)));
          set_has_originalx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_Originaly;
        break;
      }
      
      // optional float Originaly = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_Originaly:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &originaly_)));
          set_has_originaly();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_Originalz;
        break;
      }
      
      // optional float Originalz = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_Originalz:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &originalz_)));
          set_has_originalz();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_segmentssd_list;
        break;
      }
      
      // repeated .tps.proto.RtTpsProtoSegmentSSD segmentssd_list = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_segmentssd_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_segmentssd_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_segmentssd_list;
        if (input->ExpectTag(61)) goto parse_Ssd;
        break;
      }
      
      // optional float Ssd = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_Ssd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &ssd_)));
          set_has_ssd();
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

void RtTpsProtoBeamSSD::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float SsdRangeMin = 1;
  if (has_ssdrangemin()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->ssdrangemin(), output);
  }
  
  // optional float SsdRangeMax = 2;
  if (has_ssdrangemax()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->ssdrangemax(), output);
  }
  
  // optional float Originalx = 3;
  if (has_originalx()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->originalx(), output);
  }
  
  // optional float Originaly = 4;
  if (has_originaly()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->originaly(), output);
  }
  
  // optional float Originalz = 5;
  if (has_originalz()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->originalz(), output);
  }
  
  // repeated .tps.proto.RtTpsProtoSegmentSSD segmentssd_list = 6;
  for (int i = 0; i < this->segmentssd_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->segmentssd_list(i), output);
  }
  
  // optional float Ssd = 7;
  if (has_ssd()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->ssd(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoBeamSSD::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float SsdRangeMin = 1;
  if (has_ssdrangemin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->ssdrangemin(), target);
  }
  
  // optional float SsdRangeMax = 2;
  if (has_ssdrangemax()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->ssdrangemax(), target);
  }
  
  // optional float Originalx = 3;
  if (has_originalx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->originalx(), target);
  }
  
  // optional float Originaly = 4;
  if (has_originaly()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->originaly(), target);
  }
  
  // optional float Originalz = 5;
  if (has_originalz()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->originalz(), target);
  }
  
  // repeated .tps.proto.RtTpsProtoSegmentSSD segmentssd_list = 6;
  for (int i = 0; i < this->segmentssd_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->segmentssd_list(i), target);
  }
  
  // optional float Ssd = 7;
  if (has_ssd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->ssd(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoBeamSSD::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float SsdRangeMin = 1;
    if (has_ssdrangemin()) {
      total_size += 1 + 4;
    }
    
    // optional float SsdRangeMax = 2;
    if (has_ssdrangemax()) {
      total_size += 1 + 4;
    }
    
    // optional float Originalx = 3;
    if (has_originalx()) {
      total_size += 1 + 4;
    }
    
    // optional float Originaly = 4;
    if (has_originaly()) {
      total_size += 1 + 4;
    }
    
    // optional float Originalz = 5;
    if (has_originalz()) {
      total_size += 1 + 4;
    }
    
    // optional float Ssd = 7;
    if (has_ssd()) {
      total_size += 1 + 4;
    }
    
  }
  // repeated .tps.proto.RtTpsProtoSegmentSSD segmentssd_list = 6;
  total_size += 1 * this->segmentssd_list_size();
  for (int i = 0; i < this->segmentssd_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->segmentssd_list(i));
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

void RtTpsProtoBeamSSD::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoBeamSSD* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoBeamSSD*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoBeamSSD::MergeFrom(const RtTpsProtoBeamSSD& from) {
  GOOGLE_CHECK_NE(&from, this);
  segmentssd_list_.MergeFrom(from.segmentssd_list_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ssdrangemin()) {
      set_ssdrangemin(from.ssdrangemin());
    }
    if (from.has_ssdrangemax()) {
      set_ssdrangemax(from.ssdrangemax());
    }
    if (from.has_originalx()) {
      set_originalx(from.originalx());
    }
    if (from.has_originaly()) {
      set_originaly(from.originaly());
    }
    if (from.has_originalz()) {
      set_originalz(from.originalz());
    }
    if (from.has_ssd()) {
      set_ssd(from.ssd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoBeamSSD::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoBeamSSD::CopyFrom(const RtTpsProtoBeamSSD& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoBeamSSD::IsInitialized() const {
  
  return true;
}

void RtTpsProtoBeamSSD::Swap(RtTpsProtoBeamSSD* other) {
  if (other != this) {
    std::swap(ssdrangemin_, other->ssdrangemin_);
    std::swap(ssdrangemax_, other->ssdrangemax_);
    std::swap(originalx_, other->originalx_);
    std::swap(originaly_, other->originaly_);
    std::swap(originalz_, other->originalz_);
    segmentssd_list_.Swap(&other->segmentssd_list_);
    std::swap(ssd_, other->ssd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoBeamSSD::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoBeamSSD_descriptor_;
  metadata.reflection = RtTpsProtoBeamSSD_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RtTpsProtoSegmentSSD::kStartSSDFieldNumber;
const int RtTpsProtoSegmentSSD::kEndSSDFieldNumber;
#endif  // !_MSC_VER

RtTpsProtoSegmentSSD::RtTpsProtoSegmentSSD()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RtTpsProtoSegmentSSD::InitAsDefaultInstance() {
}

RtTpsProtoSegmentSSD::RtTpsProtoSegmentSSD(const RtTpsProtoSegmentSSD& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RtTpsProtoSegmentSSD::SharedCtor() {
  _cached_size_ = 0;
  startssd_ = 0;
  endssd_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RtTpsProtoSegmentSSD::~RtTpsProtoSegmentSSD() {
  SharedDtor();
}

void RtTpsProtoSegmentSSD::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RtTpsProtoSegmentSSD::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RtTpsProtoSegmentSSD::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RtTpsProtoSegmentSSD_descriptor_;
}

const RtTpsProtoSegmentSSD& RtTpsProtoSegmentSSD::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fproto_5fbeamssd_2eproto();  return *default_instance_;
}

RtTpsProtoSegmentSSD* RtTpsProtoSegmentSSD::default_instance_ = NULL;

RtTpsProtoSegmentSSD* RtTpsProtoSegmentSSD::New() const {
  return new RtTpsProtoSegmentSSD;
}

void RtTpsProtoSegmentSSD::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    startssd_ = 0;
    endssd_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RtTpsProtoSegmentSSD::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float StartSSD = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &startssd_)));
          set_has_startssd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_EndSSD;
        break;
      }
      
      // optional float EndSSD = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_EndSSD:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &endssd_)));
          set_has_endssd();
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

void RtTpsProtoSegmentSSD::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float StartSSD = 1;
  if (has_startssd()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->startssd(), output);
  }
  
  // optional float EndSSD = 2;
  if (has_endssd()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->endssd(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RtTpsProtoSegmentSSD::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float StartSSD = 1;
  if (has_startssd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->startssd(), target);
  }
  
  // optional float EndSSD = 2;
  if (has_endssd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->endssd(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RtTpsProtoSegmentSSD::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float StartSSD = 1;
    if (has_startssd()) {
      total_size += 1 + 4;
    }
    
    // optional float EndSSD = 2;
    if (has_endssd()) {
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

void RtTpsProtoSegmentSSD::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RtTpsProtoSegmentSSD* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RtTpsProtoSegmentSSD*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RtTpsProtoSegmentSSD::MergeFrom(const RtTpsProtoSegmentSSD& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_startssd()) {
      set_startssd(from.startssd());
    }
    if (from.has_endssd()) {
      set_endssd(from.endssd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RtTpsProtoSegmentSSD::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RtTpsProtoSegmentSSD::CopyFrom(const RtTpsProtoSegmentSSD& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RtTpsProtoSegmentSSD::IsInitialized() const {
  
  return true;
}

void RtTpsProtoSegmentSSD::Swap(RtTpsProtoSegmentSSD* other) {
  if (other != this) {
    std::swap(startssd_, other->startssd_);
    std::swap(endssd_, other->endssd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RtTpsProtoSegmentSSD::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RtTpsProtoSegmentSSD_descriptor_;
  metadata.reflection = RtTpsProtoSegmentSSD_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
