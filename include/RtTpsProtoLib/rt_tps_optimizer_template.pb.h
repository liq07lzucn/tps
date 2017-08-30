// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_optimizer_template.proto

#ifndef PROTOBUF_rt_5ftps_5foptimizer_5ftemplate_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5foptimizer_5ftemplate_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace tps {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
void protobuf_AssignDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5foptimizer_5ftemplate_2eproto();

class RT_TPS_SimpleOptgoal;
class RT_TPS_OptimizerTemplate;
class RT_TPS_OptimizerTemplate_List;

// ===================================================================

class RT_TPS_SimpleOptgoal : public ::google::protobuf::Message {
 public:
  RT_TPS_SimpleOptgoal();
  virtual ~RT_TPS_SimpleOptgoal();
  
  RT_TPS_SimpleOptgoal(const RT_TPS_SimpleOptgoal& from);
  
  inline RT_TPS_SimpleOptgoal& operator=(const RT_TPS_SimpleOptgoal& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RT_TPS_SimpleOptgoal& default_instance();
  
  void Swap(RT_TPS_SimpleOptgoal* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_SimpleOptgoal* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_SimpleOptgoal& from);
  void MergeFrom(const RT_TPS_SimpleOptgoal& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 fuctionType = 1;
  inline bool has_fuctiontype() const;
  inline void clear_fuctiontype();
  static const int kFuctionTypeFieldNumber = 1;
  inline ::google::protobuf::int32 fuctiontype() const;
  inline void set_fuctiontype(::google::protobuf::int32 value);
  
  // optional int32 minMaxFlag = 2;
  inline bool has_minmaxflag() const;
  inline void clear_minmaxflag();
  static const int kMinMaxFlagFieldNumber = 2;
  inline ::google::protobuf::int32 minmaxflag() const;
  inline void set_minmaxflag(::google::protobuf::int32 value);
  
  // optional float dose = 3;
  inline bool has_dose() const;
  inline void clear_dose();
  static const int kDoseFieldNumber = 3;
  inline float dose() const;
  inline void set_dose(float value);
  
  // optional float volume = 4;
  inline bool has_volume() const;
  inline void clear_volume();
  static const int kVolumeFieldNumber = 4;
  inline float volume() const;
  inline void set_volume(float value);
  
  // optional float eud = 5;
  inline bool has_eud() const;
  inline void clear_eud();
  static const int kEudFieldNumber = 5;
  inline float eud() const;
  inline void set_eud(float value);
  
  // optional float weight = 6;
  inline bool has_weight() const;
  inline void clear_weight();
  static const int kWeightFieldNumber = 6;
  inline float weight() const;
  inline void set_weight(float value);
  
  // optional bool isHard = 7;
  inline bool has_ishard() const;
  inline void clear_ishard();
  static const int kIsHardFieldNumber = 7;
  inline bool ishard() const;
  inline void set_ishard(bool value);
  
  // optional string target = 8;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 8;
  inline const ::std::string& target() const;
  inline void set_target(const ::std::string& value);
  inline void set_target(const char* value);
  inline void set_target(const char* value, size_t size);
  inline ::std::string* mutable_target();
  inline ::std::string* release_target();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_SimpleOptgoal)
 private:
  inline void set_has_fuctiontype();
  inline void clear_has_fuctiontype();
  inline void set_has_minmaxflag();
  inline void clear_has_minmaxflag();
  inline void set_has_dose();
  inline void clear_has_dose();
  inline void set_has_volume();
  inline void clear_has_volume();
  inline void set_has_eud();
  inline void clear_has_eud();
  inline void set_has_weight();
  inline void clear_has_weight();
  inline void set_has_ishard();
  inline void clear_has_ishard();
  inline void set_has_target();
  inline void clear_has_target();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 fuctiontype_;
  ::google::protobuf::int32 minmaxflag_;
  float dose_;
  float volume_;
  float eud_;
  float weight_;
  ::std::string* target_;
  bool ishard_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_SimpleOptgoal* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_OptimizerTemplate : public ::google::protobuf::Message {
 public:
  RT_TPS_OptimizerTemplate();
  virtual ~RT_TPS_OptimizerTemplate();
  
  RT_TPS_OptimizerTemplate(const RT_TPS_OptimizerTemplate& from);
  
  inline RT_TPS_OptimizerTemplate& operator=(const RT_TPS_OptimizerTemplate& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RT_TPS_OptimizerTemplate& default_instance();
  
  void Swap(RT_TPS_OptimizerTemplate* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_OptimizerTemplate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_OptimizerTemplate& from);
  void MergeFrom(const RT_TPS_OptimizerTemplate& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string templateUID = 1;
  inline bool has_templateuid() const;
  inline void clear_templateuid();
  static const int kTemplateUIDFieldNumber = 1;
  inline const ::std::string& templateuid() const;
  inline void set_templateuid(const ::std::string& value);
  inline void set_templateuid(const char* value);
  inline void set_templateuid(const char* value, size_t size);
  inline ::std::string* mutable_templateuid();
  inline ::std::string* release_templateuid();
  
  // optional string templateName = 2;
  inline bool has_templatename() const;
  inline void clear_templatename();
  static const int kTemplateNameFieldNumber = 2;
  inline const ::std::string& templatename() const;
  inline void set_templatename(const ::std::string& value);
  inline void set_templatename(const char* value);
  inline void set_templatename(const char* value, size_t size);
  inline ::std::string* mutable_templatename();
  inline ::std::string* release_templatename();
  
  // optional string templateDescription = 3;
  inline bool has_templatedescription() const;
  inline void clear_templatedescription();
  static const int kTemplateDescriptionFieldNumber = 3;
  inline const ::std::string& templatedescription() const;
  inline void set_templatedescription(const ::std::string& value);
  inline void set_templatedescription(const char* value);
  inline void set_templatedescription(const char* value, size_t size);
  inline ::std::string* mutable_templatedescription();
  inline ::std::string* release_templatedescription();
  
  // repeated .tps.proto.RT_TPS_SimpleOptgoal optGoals = 4;
  inline int optgoals_size() const;
  inline void clear_optgoals();
  static const int kOptGoalsFieldNumber = 4;
  inline const ::tps::proto::RT_TPS_SimpleOptgoal& optgoals(int index) const;
  inline ::tps::proto::RT_TPS_SimpleOptgoal* mutable_optgoals(int index);
  inline ::tps::proto::RT_TPS_SimpleOptgoal* add_optgoals();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_SimpleOptgoal >&
      optgoals() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_SimpleOptgoal >*
      mutable_optgoals();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_OptimizerTemplate)
 private:
  inline void set_has_templateuid();
  inline void clear_has_templateuid();
  inline void set_has_templatename();
  inline void clear_has_templatename();
  inline void set_has_templatedescription();
  inline void clear_has_templatedescription();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* templateuid_;
  ::std::string* templatename_;
  ::std::string* templatedescription_;
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_SimpleOptgoal > optgoals_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_OptimizerTemplate* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_OptimizerTemplate_List : public ::google::protobuf::Message {
 public:
  RT_TPS_OptimizerTemplate_List();
  virtual ~RT_TPS_OptimizerTemplate_List();
  
  RT_TPS_OptimizerTemplate_List(const RT_TPS_OptimizerTemplate_List& from);
  
  inline RT_TPS_OptimizerTemplate_List& operator=(const RT_TPS_OptimizerTemplate_List& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RT_TPS_OptimizerTemplate_List& default_instance();
  
  void Swap(RT_TPS_OptimizerTemplate_List* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_OptimizerTemplate_List* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_OptimizerTemplate_List& from);
  void MergeFrom(const RT_TPS_OptimizerTemplate_List& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .tps.proto.RT_TPS_OptimizerTemplate optimizerTemplates = 1;
  inline int optimizertemplates_size() const;
  inline void clear_optimizertemplates();
  static const int kOptimizerTemplatesFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_OptimizerTemplate& optimizertemplates(int index) const;
  inline ::tps::proto::RT_TPS_OptimizerTemplate* mutable_optimizertemplates(int index);
  inline ::tps::proto::RT_TPS_OptimizerTemplate* add_optimizertemplates();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptimizerTemplate >&
      optimizertemplates() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptimizerTemplate >*
      mutable_optimizertemplates();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_OptimizerTemplate_List)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptimizerTemplate > optimizertemplates_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptimizer_5ftemplate_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_OptimizerTemplate_List* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_SimpleOptgoal

// optional int32 fuctionType = 1;
inline bool RT_TPS_SimpleOptgoal::has_fuctiontype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_fuctiontype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_fuctiontype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_SimpleOptgoal::clear_fuctiontype() {
  fuctiontype_ = 0;
  clear_has_fuctiontype();
}
inline ::google::protobuf::int32 RT_TPS_SimpleOptgoal::fuctiontype() const {
  return fuctiontype_;
}
inline void RT_TPS_SimpleOptgoal::set_fuctiontype(::google::protobuf::int32 value) {
  set_has_fuctiontype();
  fuctiontype_ = value;
}

// optional int32 minMaxFlag = 2;
inline bool RT_TPS_SimpleOptgoal::has_minmaxflag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_minmaxflag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_minmaxflag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_SimpleOptgoal::clear_minmaxflag() {
  minmaxflag_ = 0;
  clear_has_minmaxflag();
}
inline ::google::protobuf::int32 RT_TPS_SimpleOptgoal::minmaxflag() const {
  return minmaxflag_;
}
inline void RT_TPS_SimpleOptgoal::set_minmaxflag(::google::protobuf::int32 value) {
  set_has_minmaxflag();
  minmaxflag_ = value;
}

// optional float dose = 3;
inline bool RT_TPS_SimpleOptgoal::has_dose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_dose() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_dose() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_SimpleOptgoal::clear_dose() {
  dose_ = 0;
  clear_has_dose();
}
inline float RT_TPS_SimpleOptgoal::dose() const {
  return dose_;
}
inline void RT_TPS_SimpleOptgoal::set_dose(float value) {
  set_has_dose();
  dose_ = value;
}

// optional float volume = 4;
inline bool RT_TPS_SimpleOptgoal::has_volume() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_volume() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_volume() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_SimpleOptgoal::clear_volume() {
  volume_ = 0;
  clear_has_volume();
}
inline float RT_TPS_SimpleOptgoal::volume() const {
  return volume_;
}
inline void RT_TPS_SimpleOptgoal::set_volume(float value) {
  set_has_volume();
  volume_ = value;
}

// optional float eud = 5;
inline bool RT_TPS_SimpleOptgoal::has_eud() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_eud() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_eud() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_SimpleOptgoal::clear_eud() {
  eud_ = 0;
  clear_has_eud();
}
inline float RT_TPS_SimpleOptgoal::eud() const {
  return eud_;
}
inline void RT_TPS_SimpleOptgoal::set_eud(float value) {
  set_has_eud();
  eud_ = value;
}

// optional float weight = 6;
inline bool RT_TPS_SimpleOptgoal::has_weight() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_weight() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_weight() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_SimpleOptgoal::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
inline float RT_TPS_SimpleOptgoal::weight() const {
  return weight_;
}
inline void RT_TPS_SimpleOptgoal::set_weight(float value) {
  set_has_weight();
  weight_ = value;
}

// optional bool isHard = 7;
inline bool RT_TPS_SimpleOptgoal::has_ishard() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_ishard() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_ishard() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_SimpleOptgoal::clear_ishard() {
  ishard_ = false;
  clear_has_ishard();
}
inline bool RT_TPS_SimpleOptgoal::ishard() const {
  return ishard_;
}
inline void RT_TPS_SimpleOptgoal::set_ishard(bool value) {
  set_has_ishard();
  ishard_ = value;
}

// optional string target = 8;
inline bool RT_TPS_SimpleOptgoal::has_target() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_SimpleOptgoal::set_has_target() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_SimpleOptgoal::clear_has_target() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_SimpleOptgoal::clear_target() {
  if (target_ != &::google::protobuf::internal::kEmptyString) {
    target_->clear();
  }
  clear_has_target();
}
inline const ::std::string& RT_TPS_SimpleOptgoal::target() const {
  return *target_;
}
inline void RT_TPS_SimpleOptgoal::set_target(const ::std::string& value) {
  set_has_target();
  if (target_ == &::google::protobuf::internal::kEmptyString) {
    target_ = new ::std::string;
  }
  target_->assign(value);
}
inline void RT_TPS_SimpleOptgoal::set_target(const char* value) {
  set_has_target();
  if (target_ == &::google::protobuf::internal::kEmptyString) {
    target_ = new ::std::string;
  }
  target_->assign(value);
}
inline void RT_TPS_SimpleOptgoal::set_target(const char* value, size_t size) {
  set_has_target();
  if (target_ == &::google::protobuf::internal::kEmptyString) {
    target_ = new ::std::string;
  }
  target_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_SimpleOptgoal::mutable_target() {
  set_has_target();
  if (target_ == &::google::protobuf::internal::kEmptyString) {
    target_ = new ::std::string;
  }
  return target_;
}
inline ::std::string* RT_TPS_SimpleOptgoal::release_target() {
  clear_has_target();
  if (target_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = target_;
    target_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RT_TPS_OptimizerTemplate

// optional string templateUID = 1;
inline bool RT_TPS_OptimizerTemplate::has_templateuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_OptimizerTemplate::set_has_templateuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_OptimizerTemplate::clear_has_templateuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_OptimizerTemplate::clear_templateuid() {
  if (templateuid_ != &::google::protobuf::internal::kEmptyString) {
    templateuid_->clear();
  }
  clear_has_templateuid();
}
inline const ::std::string& RT_TPS_OptimizerTemplate::templateuid() const {
  return *templateuid_;
}
inline void RT_TPS_OptimizerTemplate::set_templateuid(const ::std::string& value) {
  set_has_templateuid();
  if (templateuid_ == &::google::protobuf::internal::kEmptyString) {
    templateuid_ = new ::std::string;
  }
  templateuid_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templateuid(const char* value) {
  set_has_templateuid();
  if (templateuid_ == &::google::protobuf::internal::kEmptyString) {
    templateuid_ = new ::std::string;
  }
  templateuid_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templateuid(const char* value, size_t size) {
  set_has_templateuid();
  if (templateuid_ == &::google::protobuf::internal::kEmptyString) {
    templateuid_ = new ::std::string;
  }
  templateuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_OptimizerTemplate::mutable_templateuid() {
  set_has_templateuid();
  if (templateuid_ == &::google::protobuf::internal::kEmptyString) {
    templateuid_ = new ::std::string;
  }
  return templateuid_;
}
inline ::std::string* RT_TPS_OptimizerTemplate::release_templateuid() {
  clear_has_templateuid();
  if (templateuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = templateuid_;
    templateuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string templateName = 2;
inline bool RT_TPS_OptimizerTemplate::has_templatename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_OptimizerTemplate::set_has_templatename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_OptimizerTemplate::clear_has_templatename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_OptimizerTemplate::clear_templatename() {
  if (templatename_ != &::google::protobuf::internal::kEmptyString) {
    templatename_->clear();
  }
  clear_has_templatename();
}
inline const ::std::string& RT_TPS_OptimizerTemplate::templatename() const {
  return *templatename_;
}
inline void RT_TPS_OptimizerTemplate::set_templatename(const ::std::string& value) {
  set_has_templatename();
  if (templatename_ == &::google::protobuf::internal::kEmptyString) {
    templatename_ = new ::std::string;
  }
  templatename_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templatename(const char* value) {
  set_has_templatename();
  if (templatename_ == &::google::protobuf::internal::kEmptyString) {
    templatename_ = new ::std::string;
  }
  templatename_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templatename(const char* value, size_t size) {
  set_has_templatename();
  if (templatename_ == &::google::protobuf::internal::kEmptyString) {
    templatename_ = new ::std::string;
  }
  templatename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_OptimizerTemplate::mutable_templatename() {
  set_has_templatename();
  if (templatename_ == &::google::protobuf::internal::kEmptyString) {
    templatename_ = new ::std::string;
  }
  return templatename_;
}
inline ::std::string* RT_TPS_OptimizerTemplate::release_templatename() {
  clear_has_templatename();
  if (templatename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = templatename_;
    templatename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string templateDescription = 3;
inline bool RT_TPS_OptimizerTemplate::has_templatedescription() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_OptimizerTemplate::set_has_templatedescription() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_OptimizerTemplate::clear_has_templatedescription() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_OptimizerTemplate::clear_templatedescription() {
  if (templatedescription_ != &::google::protobuf::internal::kEmptyString) {
    templatedescription_->clear();
  }
  clear_has_templatedescription();
}
inline const ::std::string& RT_TPS_OptimizerTemplate::templatedescription() const {
  return *templatedescription_;
}
inline void RT_TPS_OptimizerTemplate::set_templatedescription(const ::std::string& value) {
  set_has_templatedescription();
  if (templatedescription_ == &::google::protobuf::internal::kEmptyString) {
    templatedescription_ = new ::std::string;
  }
  templatedescription_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templatedescription(const char* value) {
  set_has_templatedescription();
  if (templatedescription_ == &::google::protobuf::internal::kEmptyString) {
    templatedescription_ = new ::std::string;
  }
  templatedescription_->assign(value);
}
inline void RT_TPS_OptimizerTemplate::set_templatedescription(const char* value, size_t size) {
  set_has_templatedescription();
  if (templatedescription_ == &::google::protobuf::internal::kEmptyString) {
    templatedescription_ = new ::std::string;
  }
  templatedescription_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_OptimizerTemplate::mutable_templatedescription() {
  set_has_templatedescription();
  if (templatedescription_ == &::google::protobuf::internal::kEmptyString) {
    templatedescription_ = new ::std::string;
  }
  return templatedescription_;
}
inline ::std::string* RT_TPS_OptimizerTemplate::release_templatedescription() {
  clear_has_templatedescription();
  if (templatedescription_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = templatedescription_;
    templatedescription_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .tps.proto.RT_TPS_SimpleOptgoal optGoals = 4;
inline int RT_TPS_OptimizerTemplate::optgoals_size() const {
  return optgoals_.size();
}
inline void RT_TPS_OptimizerTemplate::clear_optgoals() {
  optgoals_.Clear();
}
inline const ::tps::proto::RT_TPS_SimpleOptgoal& RT_TPS_OptimizerTemplate::optgoals(int index) const {
  return optgoals_.Get(index);
}
inline ::tps::proto::RT_TPS_SimpleOptgoal* RT_TPS_OptimizerTemplate::mutable_optgoals(int index) {
  return optgoals_.Mutable(index);
}
inline ::tps::proto::RT_TPS_SimpleOptgoal* RT_TPS_OptimizerTemplate::add_optgoals() {
  return optgoals_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_SimpleOptgoal >&
RT_TPS_OptimizerTemplate::optgoals() const {
  return optgoals_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_SimpleOptgoal >*
RT_TPS_OptimizerTemplate::mutable_optgoals() {
  return &optgoals_;
}

// -------------------------------------------------------------------

// RT_TPS_OptimizerTemplate_List

// repeated .tps.proto.RT_TPS_OptimizerTemplate optimizerTemplates = 1;
inline int RT_TPS_OptimizerTemplate_List::optimizertemplates_size() const {
  return optimizertemplates_.size();
}
inline void RT_TPS_OptimizerTemplate_List::clear_optimizertemplates() {
  optimizertemplates_.Clear();
}
inline const ::tps::proto::RT_TPS_OptimizerTemplate& RT_TPS_OptimizerTemplate_List::optimizertemplates(int index) const {
  return optimizertemplates_.Get(index);
}
inline ::tps::proto::RT_TPS_OptimizerTemplate* RT_TPS_OptimizerTemplate_List::mutable_optimizertemplates(int index) {
  return optimizertemplates_.Mutable(index);
}
inline ::tps::proto::RT_TPS_OptimizerTemplate* RT_TPS_OptimizerTemplate_List::add_optimizertemplates() {
  return optimizertemplates_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptimizerTemplate >&
RT_TPS_OptimizerTemplate_List::optimizertemplates() const {
  return optimizertemplates_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptimizerTemplate >*
RT_TPS_OptimizerTemplate_List::mutable_optimizertemplates() {
  return &optimizertemplates_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rt_5ftps_5foptimizer_5ftemplate_2eproto__INCLUDED