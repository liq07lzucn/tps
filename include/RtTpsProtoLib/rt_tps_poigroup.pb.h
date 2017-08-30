// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_poigroup.proto

#ifndef PROTOBUF_rt_5ftps_5fpoigroup_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fpoigroup_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fpoigroup_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fpoigroup_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fpoigroup_2eproto();

class RT_TPS_PoiGroup;
class RT_TPS_PoiInformation;
class RT_TPS_BeamContributionDose;

// ===================================================================

class RT_TPS_PoiGroup : public ::google::protobuf::Message {
 public:
  RT_TPS_PoiGroup();
  virtual ~RT_TPS_PoiGroup();
  
  RT_TPS_PoiGroup(const RT_TPS_PoiGroup& from);
  
  inline RT_TPS_PoiGroup& operator=(const RT_TPS_PoiGroup& from) {
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
  static const RT_TPS_PoiGroup& default_instance();
  
  void Swap(RT_TPS_PoiGroup* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_PoiGroup* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_PoiGroup& from);
  void MergeFrom(const RT_TPS_PoiGroup& from);
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
  
  // repeated .tps.proto.RT_TPS_PoiInformation poiInfoList = 1;
  inline int poiinfolist_size() const;
  inline void clear_poiinfolist();
  static const int kPoiInfoListFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_PoiInformation& poiinfolist(int index) const;
  inline ::tps::proto::RT_TPS_PoiInformation* mutable_poiinfolist(int index);
  inline ::tps::proto::RT_TPS_PoiInformation* add_poiinfolist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_PoiInformation >&
      poiinfolist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_PoiInformation >*
      mutable_poiinfolist();
  
  // optional string groupID = 2;
  inline bool has_groupid() const;
  inline void clear_groupid();
  static const int kGroupIDFieldNumber = 2;
  inline const ::std::string& groupid() const;
  inline void set_groupid(const ::std::string& value);
  inline void set_groupid(const char* value);
  inline void set_groupid(const char* value, size_t size);
  inline ::std::string* mutable_groupid();
  inline ::std::string* release_groupid();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_PoiGroup)
 private:
  inline void set_has_groupid();
  inline void clear_has_groupid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_PoiInformation > poiinfolist_;
  ::std::string* groupid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fpoigroup_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_PoiGroup* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_PoiInformation : public ::google::protobuf::Message {
 public:
  RT_TPS_PoiInformation();
  virtual ~RT_TPS_PoiInformation();
  
  RT_TPS_PoiInformation(const RT_TPS_PoiInformation& from);
  
  inline RT_TPS_PoiInformation& operator=(const RT_TPS_PoiInformation& from) {
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
  static const RT_TPS_PoiInformation& default_instance();
  
  void Swap(RT_TPS_PoiInformation* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_PoiInformation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_PoiInformation& from);
  void MergeFrom(const RT_TPS_PoiInformation& from);
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
  
  // optional string poiUid = 1;
  inline bool has_poiuid() const;
  inline void clear_poiuid();
  static const int kPoiUidFieldNumber = 1;
  inline const ::std::string& poiuid() const;
  inline void set_poiuid(const ::std::string& value);
  inline void set_poiuid(const char* value);
  inline void set_poiuid(const char* value, size_t size);
  inline ::std::string* mutable_poiuid();
  inline ::std::string* release_poiuid();
  
  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional int32 role = 3;
  inline bool has_role() const;
  inline void clear_role();
  static const int kRoleFieldNumber = 3;
  inline ::google::protobuf::int32 role() const;
  inline void set_role(::google::protobuf::int32 value);
  
  // repeated float color = 4;
  inline int color_size() const;
  inline void clear_color();
  static const int kColorFieldNumber = 4;
  inline float color(int index) const;
  inline void set_color(int index, float value);
  inline void add_color(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      color() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_color();
  
  // optional bool isVisible = 5;
  inline bool has_isvisible() const;
  inline void clear_isvisible();
  static const int kIsVisibleFieldNumber = 5;
  inline bool isvisible() const;
  inline void set_isvisible(bool value);
  
  // optional int32 lockType = 6;
  inline bool has_locktype() const;
  inline void clear_locktype();
  static const int kLockTypeFieldNumber = 6;
  inline ::google::protobuf::int32 locktype() const;
  inline void set_locktype(::google::protobuf::int32 value);
  
  // optional float xCoordInPat = 7;
  inline bool has_xcoordinpat() const;
  inline void clear_xcoordinpat();
  static const int kXCoordInPatFieldNumber = 7;
  inline float xcoordinpat() const;
  inline void set_xcoordinpat(float value);
  
  // optional float yCoordInPat = 8;
  inline bool has_ycoordinpat() const;
  inline void clear_ycoordinpat();
  static const int kYCoordInPatFieldNumber = 8;
  inline float ycoordinpat() const;
  inline void set_ycoordinpat(float value);
  
  // optional float zCoordInPat = 9;
  inline bool has_zcoordinpat() const;
  inline void clear_zcoordinpat();
  static const int kZCoordInPatFieldNumber = 9;
  inline float zcoordinpat() const;
  inline void set_zcoordinpat(float value);
  
  // optional float dose = 10;
  inline bool has_dose() const;
  inline void clear_dose();
  static const int kDoseFieldNumber = 10;
  inline float dose() const;
  inline void set_dose(float value);
  
  // optional float xCoordInCol = 11;
  inline bool has_xcoordincol() const;
  inline void clear_xcoordincol();
  static const int kXCoordInColFieldNumber = 11;
  inline float xcoordincol() const;
  inline void set_xcoordincol(float value);
  
  // optional float yCoordInCol = 12;
  inline bool has_ycoordincol() const;
  inline void clear_ycoordincol();
  static const int kYCoordInColFieldNumber = 12;
  inline float ycoordincol() const;
  inline void set_ycoordincol(float value);
  
  // optional float pointDepth = 13;
  inline bool has_pointdepth() const;
  inline void clear_pointdepth();
  static const int kPointDepthFieldNumber = 13;
  inline float pointdepth() const;
  inline void set_pointdepth(float value);
  
  // optional string relatedBeamUID = 14;
  inline bool has_relatedbeamuid() const;
  inline void clear_relatedbeamuid();
  static const int kRelatedBeamUIDFieldNumber = 14;
  inline const ::std::string& relatedbeamuid() const;
  inline void set_relatedbeamuid(const ::std::string& value);
  inline void set_relatedbeamuid(const char* value);
  inline void set_relatedbeamuid(const char* value, size_t size);
  inline ::std::string* mutable_relatedbeamuid();
  inline ::std::string* release_relatedbeamuid();
  
  // optional float doseAtRelatedBeam = 15;
  inline bool has_doseatrelatedbeam() const;
  inline void clear_doseatrelatedbeam();
  static const int kDoseAtRelatedBeamFieldNumber = 15;
  inline float doseatrelatedbeam() const;
  inline void set_doseatrelatedbeam(float value);
  
  // optional string planUid = 16;
  inline bool has_planuid() const;
  inline void clear_planuid();
  static const int kPlanUidFieldNumber = 16;
  inline const ::std::string& planuid() const;
  inline void set_planuid(const ::std::string& value);
  inline void set_planuid(const char* value);
  inline void set_planuid(const char* value, size_t size);
  inline ::std::string* mutable_planuid();
  inline ::std::string* release_planuid();
  
  // repeated .tps.proto.RT_TPS_BeamContributionDose beamDoseList = 17;
  inline int beamdoselist_size() const;
  inline void clear_beamdoselist();
  static const int kBeamDoseListFieldNumber = 17;
  inline const ::tps::proto::RT_TPS_BeamContributionDose& beamdoselist(int index) const;
  inline ::tps::proto::RT_TPS_BeamContributionDose* mutable_beamdoselist(int index);
  inline ::tps::proto::RT_TPS_BeamContributionDose* add_beamdoselist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_BeamContributionDose >&
      beamdoselist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_BeamContributionDose >*
      mutable_beamdoselist();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_PoiInformation)
 private:
  inline void set_has_poiuid();
  inline void clear_has_poiuid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_role();
  inline void clear_has_role();
  inline void set_has_isvisible();
  inline void clear_has_isvisible();
  inline void set_has_locktype();
  inline void clear_has_locktype();
  inline void set_has_xcoordinpat();
  inline void clear_has_xcoordinpat();
  inline void set_has_ycoordinpat();
  inline void clear_has_ycoordinpat();
  inline void set_has_zcoordinpat();
  inline void clear_has_zcoordinpat();
  inline void set_has_dose();
  inline void clear_has_dose();
  inline void set_has_xcoordincol();
  inline void clear_has_xcoordincol();
  inline void set_has_ycoordincol();
  inline void clear_has_ycoordincol();
  inline void set_has_pointdepth();
  inline void clear_has_pointdepth();
  inline void set_has_relatedbeamuid();
  inline void clear_has_relatedbeamuid();
  inline void set_has_doseatrelatedbeam();
  inline void clear_has_doseatrelatedbeam();
  inline void set_has_planuid();
  inline void clear_has_planuid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* poiuid_;
  ::std::string* name_;
  ::google::protobuf::RepeatedField< float > color_;
  ::google::protobuf::int32 role_;
  bool isvisible_;
  ::google::protobuf::int32 locktype_;
  float xcoordinpat_;
  float ycoordinpat_;
  float zcoordinpat_;
  float dose_;
  float xcoordincol_;
  float ycoordincol_;
  float pointdepth_;
  ::std::string* relatedbeamuid_;
  ::std::string* planuid_;
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_BeamContributionDose > beamdoselist_;
  float doseatrelatedbeam_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(17 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fpoigroup_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_PoiInformation* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_BeamContributionDose : public ::google::protobuf::Message {
 public:
  RT_TPS_BeamContributionDose();
  virtual ~RT_TPS_BeamContributionDose();
  
  RT_TPS_BeamContributionDose(const RT_TPS_BeamContributionDose& from);
  
  inline RT_TPS_BeamContributionDose& operator=(const RT_TPS_BeamContributionDose& from) {
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
  static const RT_TPS_BeamContributionDose& default_instance();
  
  void Swap(RT_TPS_BeamContributionDose* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_BeamContributionDose* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_BeamContributionDose& from);
  void MergeFrom(const RT_TPS_BeamContributionDose& from);
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
  
  // optional string beamUid = 1;
  inline bool has_beamuid() const;
  inline void clear_beamuid();
  static const int kBeamUidFieldNumber = 1;
  inline const ::std::string& beamuid() const;
  inline void set_beamuid(const ::std::string& value);
  inline void set_beamuid(const char* value);
  inline void set_beamuid(const char* value, size_t size);
  inline ::std::string* mutable_beamuid();
  inline ::std::string* release_beamuid();
  
  // optional float contributionDose = 2;
  inline bool has_contributiondose() const;
  inline void clear_contributiondose();
  static const int kContributionDoseFieldNumber = 2;
  inline float contributiondose() const;
  inline void set_contributiondose(float value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_BeamContributionDose)
 private:
  inline void set_has_beamuid();
  inline void clear_has_beamuid();
  inline void set_has_contributiondose();
  inline void clear_has_contributiondose();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* beamuid_;
  float contributiondose_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fpoigroup_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fpoigroup_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_BeamContributionDose* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_PoiGroup

// repeated .tps.proto.RT_TPS_PoiInformation poiInfoList = 1;
inline int RT_TPS_PoiGroup::poiinfolist_size() const {
  return poiinfolist_.size();
}
inline void RT_TPS_PoiGroup::clear_poiinfolist() {
  poiinfolist_.Clear();
}
inline const ::tps::proto::RT_TPS_PoiInformation& RT_TPS_PoiGroup::poiinfolist(int index) const {
  return poiinfolist_.Get(index);
}
inline ::tps::proto::RT_TPS_PoiInformation* RT_TPS_PoiGroup::mutable_poiinfolist(int index) {
  return poiinfolist_.Mutable(index);
}
inline ::tps::proto::RT_TPS_PoiInformation* RT_TPS_PoiGroup::add_poiinfolist() {
  return poiinfolist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_PoiInformation >&
RT_TPS_PoiGroup::poiinfolist() const {
  return poiinfolist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_PoiInformation >*
RT_TPS_PoiGroup::mutable_poiinfolist() {
  return &poiinfolist_;
}

// optional string groupID = 2;
inline bool RT_TPS_PoiGroup::has_groupid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_PoiGroup::set_has_groupid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_PoiGroup::clear_has_groupid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_PoiGroup::clear_groupid() {
  if (groupid_ != &::google::protobuf::internal::kEmptyString) {
    groupid_->clear();
  }
  clear_has_groupid();
}
inline const ::std::string& RT_TPS_PoiGroup::groupid() const {
  return *groupid_;
}
inline void RT_TPS_PoiGroup::set_groupid(const ::std::string& value) {
  set_has_groupid();
  if (groupid_ == &::google::protobuf::internal::kEmptyString) {
    groupid_ = new ::std::string;
  }
  groupid_->assign(value);
}
inline void RT_TPS_PoiGroup::set_groupid(const char* value) {
  set_has_groupid();
  if (groupid_ == &::google::protobuf::internal::kEmptyString) {
    groupid_ = new ::std::string;
  }
  groupid_->assign(value);
}
inline void RT_TPS_PoiGroup::set_groupid(const char* value, size_t size) {
  set_has_groupid();
  if (groupid_ == &::google::protobuf::internal::kEmptyString) {
    groupid_ = new ::std::string;
  }
  groupid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_PoiGroup::mutable_groupid() {
  set_has_groupid();
  if (groupid_ == &::google::protobuf::internal::kEmptyString) {
    groupid_ = new ::std::string;
  }
  return groupid_;
}
inline ::std::string* RT_TPS_PoiGroup::release_groupid() {
  clear_has_groupid();
  if (groupid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = groupid_;
    groupid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RT_TPS_PoiInformation

// optional string poiUid = 1;
inline bool RT_TPS_PoiInformation::has_poiuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_poiuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_PoiInformation::clear_has_poiuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_PoiInformation::clear_poiuid() {
  if (poiuid_ != &::google::protobuf::internal::kEmptyString) {
    poiuid_->clear();
  }
  clear_has_poiuid();
}
inline const ::std::string& RT_TPS_PoiInformation::poiuid() const {
  return *poiuid_;
}
inline void RT_TPS_PoiInformation::set_poiuid(const ::std::string& value) {
  set_has_poiuid();
  if (poiuid_ == &::google::protobuf::internal::kEmptyString) {
    poiuid_ = new ::std::string;
  }
  poiuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_poiuid(const char* value) {
  set_has_poiuid();
  if (poiuid_ == &::google::protobuf::internal::kEmptyString) {
    poiuid_ = new ::std::string;
  }
  poiuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_poiuid(const char* value, size_t size) {
  set_has_poiuid();
  if (poiuid_ == &::google::protobuf::internal::kEmptyString) {
    poiuid_ = new ::std::string;
  }
  poiuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_PoiInformation::mutable_poiuid() {
  set_has_poiuid();
  if (poiuid_ == &::google::protobuf::internal::kEmptyString) {
    poiuid_ = new ::std::string;
  }
  return poiuid_;
}
inline ::std::string* RT_TPS_PoiInformation::release_poiuid() {
  clear_has_poiuid();
  if (poiuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = poiuid_;
    poiuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string name = 2;
inline bool RT_TPS_PoiInformation::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_PoiInformation::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_PoiInformation::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& RT_TPS_PoiInformation::name() const {
  return *name_;
}
inline void RT_TPS_PoiInformation::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void RT_TPS_PoiInformation::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void RT_TPS_PoiInformation::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_PoiInformation::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* RT_TPS_PoiInformation::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 role = 3;
inline bool RT_TPS_PoiInformation::has_role() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_role() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_PoiInformation::clear_has_role() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_PoiInformation::clear_role() {
  role_ = 0;
  clear_has_role();
}
inline ::google::protobuf::int32 RT_TPS_PoiInformation::role() const {
  return role_;
}
inline void RT_TPS_PoiInformation::set_role(::google::protobuf::int32 value) {
  set_has_role();
  role_ = value;
}

// repeated float color = 4;
inline int RT_TPS_PoiInformation::color_size() const {
  return color_.size();
}
inline void RT_TPS_PoiInformation::clear_color() {
  color_.Clear();
}
inline float RT_TPS_PoiInformation::color(int index) const {
  return color_.Get(index);
}
inline void RT_TPS_PoiInformation::set_color(int index, float value) {
  color_.Set(index, value);
}
inline void RT_TPS_PoiInformation::add_color(float value) {
  color_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
RT_TPS_PoiInformation::color() const {
  return color_;
}
inline ::google::protobuf::RepeatedField< float >*
RT_TPS_PoiInformation::mutable_color() {
  return &color_;
}

// optional bool isVisible = 5;
inline bool RT_TPS_PoiInformation::has_isvisible() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_isvisible() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_PoiInformation::clear_has_isvisible() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_PoiInformation::clear_isvisible() {
  isvisible_ = false;
  clear_has_isvisible();
}
inline bool RT_TPS_PoiInformation::isvisible() const {
  return isvisible_;
}
inline void RT_TPS_PoiInformation::set_isvisible(bool value) {
  set_has_isvisible();
  isvisible_ = value;
}

// optional int32 lockType = 6;
inline bool RT_TPS_PoiInformation::has_locktype() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_locktype() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_PoiInformation::clear_has_locktype() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_PoiInformation::clear_locktype() {
  locktype_ = 0;
  clear_has_locktype();
}
inline ::google::protobuf::int32 RT_TPS_PoiInformation::locktype() const {
  return locktype_;
}
inline void RT_TPS_PoiInformation::set_locktype(::google::protobuf::int32 value) {
  set_has_locktype();
  locktype_ = value;
}

// optional float xCoordInPat = 7;
inline bool RT_TPS_PoiInformation::has_xcoordinpat() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_xcoordinpat() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_PoiInformation::clear_has_xcoordinpat() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_PoiInformation::clear_xcoordinpat() {
  xcoordinpat_ = 0;
  clear_has_xcoordinpat();
}
inline float RT_TPS_PoiInformation::xcoordinpat() const {
  return xcoordinpat_;
}
inline void RT_TPS_PoiInformation::set_xcoordinpat(float value) {
  set_has_xcoordinpat();
  xcoordinpat_ = value;
}

// optional float yCoordInPat = 8;
inline bool RT_TPS_PoiInformation::has_ycoordinpat() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_ycoordinpat() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_PoiInformation::clear_has_ycoordinpat() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_PoiInformation::clear_ycoordinpat() {
  ycoordinpat_ = 0;
  clear_has_ycoordinpat();
}
inline float RT_TPS_PoiInformation::ycoordinpat() const {
  return ycoordinpat_;
}
inline void RT_TPS_PoiInformation::set_ycoordinpat(float value) {
  set_has_ycoordinpat();
  ycoordinpat_ = value;
}

// optional float zCoordInPat = 9;
inline bool RT_TPS_PoiInformation::has_zcoordinpat() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_zcoordinpat() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_PoiInformation::clear_has_zcoordinpat() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_PoiInformation::clear_zcoordinpat() {
  zcoordinpat_ = 0;
  clear_has_zcoordinpat();
}
inline float RT_TPS_PoiInformation::zcoordinpat() const {
  return zcoordinpat_;
}
inline void RT_TPS_PoiInformation::set_zcoordinpat(float value) {
  set_has_zcoordinpat();
  zcoordinpat_ = value;
}

// optional float dose = 10;
inline bool RT_TPS_PoiInformation::has_dose() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_dose() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_PoiInformation::clear_has_dose() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_PoiInformation::clear_dose() {
  dose_ = 0;
  clear_has_dose();
}
inline float RT_TPS_PoiInformation::dose() const {
  return dose_;
}
inline void RT_TPS_PoiInformation::set_dose(float value) {
  set_has_dose();
  dose_ = value;
}

// optional float xCoordInCol = 11;
inline bool RT_TPS_PoiInformation::has_xcoordincol() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_xcoordincol() {
  _has_bits_[0] |= 0x00000400u;
}
inline void RT_TPS_PoiInformation::clear_has_xcoordincol() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void RT_TPS_PoiInformation::clear_xcoordincol() {
  xcoordincol_ = 0;
  clear_has_xcoordincol();
}
inline float RT_TPS_PoiInformation::xcoordincol() const {
  return xcoordincol_;
}
inline void RT_TPS_PoiInformation::set_xcoordincol(float value) {
  set_has_xcoordincol();
  xcoordincol_ = value;
}

// optional float yCoordInCol = 12;
inline bool RT_TPS_PoiInformation::has_ycoordincol() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_ycoordincol() {
  _has_bits_[0] |= 0x00000800u;
}
inline void RT_TPS_PoiInformation::clear_has_ycoordincol() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void RT_TPS_PoiInformation::clear_ycoordincol() {
  ycoordincol_ = 0;
  clear_has_ycoordincol();
}
inline float RT_TPS_PoiInformation::ycoordincol() const {
  return ycoordincol_;
}
inline void RT_TPS_PoiInformation::set_ycoordincol(float value) {
  set_has_ycoordincol();
  ycoordincol_ = value;
}

// optional float pointDepth = 13;
inline bool RT_TPS_PoiInformation::has_pointdepth() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_pointdepth() {
  _has_bits_[0] |= 0x00001000u;
}
inline void RT_TPS_PoiInformation::clear_has_pointdepth() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void RT_TPS_PoiInformation::clear_pointdepth() {
  pointdepth_ = 0;
  clear_has_pointdepth();
}
inline float RT_TPS_PoiInformation::pointdepth() const {
  return pointdepth_;
}
inline void RT_TPS_PoiInformation::set_pointdepth(float value) {
  set_has_pointdepth();
  pointdepth_ = value;
}

// optional string relatedBeamUID = 14;
inline bool RT_TPS_PoiInformation::has_relatedbeamuid() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_relatedbeamuid() {
  _has_bits_[0] |= 0x00002000u;
}
inline void RT_TPS_PoiInformation::clear_has_relatedbeamuid() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void RT_TPS_PoiInformation::clear_relatedbeamuid() {
  if (relatedbeamuid_ != &::google::protobuf::internal::kEmptyString) {
    relatedbeamuid_->clear();
  }
  clear_has_relatedbeamuid();
}
inline const ::std::string& RT_TPS_PoiInformation::relatedbeamuid() const {
  return *relatedbeamuid_;
}
inline void RT_TPS_PoiInformation::set_relatedbeamuid(const ::std::string& value) {
  set_has_relatedbeamuid();
  if (relatedbeamuid_ == &::google::protobuf::internal::kEmptyString) {
    relatedbeamuid_ = new ::std::string;
  }
  relatedbeamuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_relatedbeamuid(const char* value) {
  set_has_relatedbeamuid();
  if (relatedbeamuid_ == &::google::protobuf::internal::kEmptyString) {
    relatedbeamuid_ = new ::std::string;
  }
  relatedbeamuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_relatedbeamuid(const char* value, size_t size) {
  set_has_relatedbeamuid();
  if (relatedbeamuid_ == &::google::protobuf::internal::kEmptyString) {
    relatedbeamuid_ = new ::std::string;
  }
  relatedbeamuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_PoiInformation::mutable_relatedbeamuid() {
  set_has_relatedbeamuid();
  if (relatedbeamuid_ == &::google::protobuf::internal::kEmptyString) {
    relatedbeamuid_ = new ::std::string;
  }
  return relatedbeamuid_;
}
inline ::std::string* RT_TPS_PoiInformation::release_relatedbeamuid() {
  clear_has_relatedbeamuid();
  if (relatedbeamuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = relatedbeamuid_;
    relatedbeamuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional float doseAtRelatedBeam = 15;
inline bool RT_TPS_PoiInformation::has_doseatrelatedbeam() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_doseatrelatedbeam() {
  _has_bits_[0] |= 0x00004000u;
}
inline void RT_TPS_PoiInformation::clear_has_doseatrelatedbeam() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void RT_TPS_PoiInformation::clear_doseatrelatedbeam() {
  doseatrelatedbeam_ = 0;
  clear_has_doseatrelatedbeam();
}
inline float RT_TPS_PoiInformation::doseatrelatedbeam() const {
  return doseatrelatedbeam_;
}
inline void RT_TPS_PoiInformation::set_doseatrelatedbeam(float value) {
  set_has_doseatrelatedbeam();
  doseatrelatedbeam_ = value;
}

// optional string planUid = 16;
inline bool RT_TPS_PoiInformation::has_planuid() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void RT_TPS_PoiInformation::set_has_planuid() {
  _has_bits_[0] |= 0x00008000u;
}
inline void RT_TPS_PoiInformation::clear_has_planuid() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void RT_TPS_PoiInformation::clear_planuid() {
  if (planuid_ != &::google::protobuf::internal::kEmptyString) {
    planuid_->clear();
  }
  clear_has_planuid();
}
inline const ::std::string& RT_TPS_PoiInformation::planuid() const {
  return *planuid_;
}
inline void RT_TPS_PoiInformation::set_planuid(const ::std::string& value) {
  set_has_planuid();
  if (planuid_ == &::google::protobuf::internal::kEmptyString) {
    planuid_ = new ::std::string;
  }
  planuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_planuid(const char* value) {
  set_has_planuid();
  if (planuid_ == &::google::protobuf::internal::kEmptyString) {
    planuid_ = new ::std::string;
  }
  planuid_->assign(value);
}
inline void RT_TPS_PoiInformation::set_planuid(const char* value, size_t size) {
  set_has_planuid();
  if (planuid_ == &::google::protobuf::internal::kEmptyString) {
    planuid_ = new ::std::string;
  }
  planuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_PoiInformation::mutable_planuid() {
  set_has_planuid();
  if (planuid_ == &::google::protobuf::internal::kEmptyString) {
    planuid_ = new ::std::string;
  }
  return planuid_;
}
inline ::std::string* RT_TPS_PoiInformation::release_planuid() {
  clear_has_planuid();
  if (planuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = planuid_;
    planuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .tps.proto.RT_TPS_BeamContributionDose beamDoseList = 17;
inline int RT_TPS_PoiInformation::beamdoselist_size() const {
  return beamdoselist_.size();
}
inline void RT_TPS_PoiInformation::clear_beamdoselist() {
  beamdoselist_.Clear();
}
inline const ::tps::proto::RT_TPS_BeamContributionDose& RT_TPS_PoiInformation::beamdoselist(int index) const {
  return beamdoselist_.Get(index);
}
inline ::tps::proto::RT_TPS_BeamContributionDose* RT_TPS_PoiInformation::mutable_beamdoselist(int index) {
  return beamdoselist_.Mutable(index);
}
inline ::tps::proto::RT_TPS_BeamContributionDose* RT_TPS_PoiInformation::add_beamdoselist() {
  return beamdoselist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_BeamContributionDose >&
RT_TPS_PoiInformation::beamdoselist() const {
  return beamdoselist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_BeamContributionDose >*
RT_TPS_PoiInformation::mutable_beamdoselist() {
  return &beamdoselist_;
}

// -------------------------------------------------------------------

// RT_TPS_BeamContributionDose

// optional string beamUid = 1;
inline bool RT_TPS_BeamContributionDose::has_beamuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_BeamContributionDose::set_has_beamuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_BeamContributionDose::clear_has_beamuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_BeamContributionDose::clear_beamuid() {
  if (beamuid_ != &::google::protobuf::internal::kEmptyString) {
    beamuid_->clear();
  }
  clear_has_beamuid();
}
inline const ::std::string& RT_TPS_BeamContributionDose::beamuid() const {
  return *beamuid_;
}
inline void RT_TPS_BeamContributionDose::set_beamuid(const ::std::string& value) {
  set_has_beamuid();
  if (beamuid_ == &::google::protobuf::internal::kEmptyString) {
    beamuid_ = new ::std::string;
  }
  beamuid_->assign(value);
}
inline void RT_TPS_BeamContributionDose::set_beamuid(const char* value) {
  set_has_beamuid();
  if (beamuid_ == &::google::protobuf::internal::kEmptyString) {
    beamuid_ = new ::std::string;
  }
  beamuid_->assign(value);
}
inline void RT_TPS_BeamContributionDose::set_beamuid(const char* value, size_t size) {
  set_has_beamuid();
  if (beamuid_ == &::google::protobuf::internal::kEmptyString) {
    beamuid_ = new ::std::string;
  }
  beamuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_BeamContributionDose::mutable_beamuid() {
  set_has_beamuid();
  if (beamuid_ == &::google::protobuf::internal::kEmptyString) {
    beamuid_ = new ::std::string;
  }
  return beamuid_;
}
inline ::std::string* RT_TPS_BeamContributionDose::release_beamuid() {
  clear_has_beamuid();
  if (beamuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = beamuid_;
    beamuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional float contributionDose = 2;
inline bool RT_TPS_BeamContributionDose::has_contributiondose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_BeamContributionDose::set_has_contributiondose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_BeamContributionDose::clear_has_contributiondose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_BeamContributionDose::clear_contributiondose() {
  contributiondose_ = 0;
  clear_has_contributiondose();
}
inline float RT_TPS_BeamContributionDose::contributiondose() const {
  return contributiondose_;
}
inline void RT_TPS_BeamContributionDose::set_contributiondose(float value) {
  set_has_contributiondose();
  contributiondose_ = value;
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

#endif  // PROTOBUF_rt_5ftps_5fpoigroup_2eproto__INCLUDED
