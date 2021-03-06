// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_create_phantom.proto

#ifndef PROTOBUF_rt_5ftps_5fcreate_5fphantom_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fcreate_5fphantom_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fcreate_5fphantom_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fcreate_5fphantom_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fcreate_5fphantom_2eproto();

class RT_TPS_CREATE_PHANTOM;

// ===================================================================

class RT_TPS_CREATE_PHANTOM : public ::google::protobuf::Message {
 public:
  RT_TPS_CREATE_PHANTOM();
  virtual ~RT_TPS_CREATE_PHANTOM();
  
  RT_TPS_CREATE_PHANTOM(const RT_TPS_CREATE_PHANTOM& from);
  
  inline RT_TPS_CREATE_PHANTOM& operator=(const RT_TPS_CREATE_PHANTOM& from) {
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
  static const RT_TPS_CREATE_PHANTOM& default_instance();
  
  void Swap(RT_TPS_CREATE_PHANTOM* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_CREATE_PHANTOM* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_CREATE_PHANTOM& from);
  void MergeFrom(const RT_TPS_CREATE_PHANTOM& from);
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
  
  // optional string patientUID = 1;
  inline bool has_patientuid() const;
  inline void clear_patientuid();
  static const int kPatientUIDFieldNumber = 1;
  inline const ::std::string& patientuid() const;
  inline void set_patientuid(const ::std::string& value);
  inline void set_patientuid(const char* value);
  inline void set_patientuid(const char* value, size_t size);
  inline ::std::string* mutable_patientuid();
  inline ::std::string* release_patientuid();
  
  // required string phantomName = 2;
  inline bool has_phantomname() const;
  inline void clear_phantomname();
  static const int kPhantomNameFieldNumber = 2;
  inline const ::std::string& phantomname() const;
  inline void set_phantomname(const ::std::string& value);
  inline void set_phantomname(const char* value);
  inline void set_phantomname(const char* value, size_t size);
  inline ::std::string* mutable_phantomname();
  inline ::std::string* release_phantomname();
  
  // optional string description = 3;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 3;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  
  // required float phantomWidth = 4;
  inline bool has_phantomwidth() const;
  inline void clear_phantomwidth();
  static const int kPhantomWidthFieldNumber = 4;
  inline float phantomwidth() const;
  inline void set_phantomwidth(float value);
  
  // required float phantomHeight = 5;
  inline bool has_phantomheight() const;
  inline void clear_phantomheight();
  static const int kPhantomHeightFieldNumber = 5;
  inline float phantomheight() const;
  inline void set_phantomheight(float value);
  
  // required float phantomLength = 6;
  inline bool has_phantomlength() const;
  inline void clear_phantomlength();
  static const int kPhantomLengthFieldNumber = 6;
  inline float phantomlength() const;
  inline void set_phantomlength(float value);
  
  // required float sliceSpacing = 7;
  inline bool has_slicespacing() const;
  inline void clear_slicespacing();
  static const int kSliceSpacingFieldNumber = 7;
  inline float slicespacing() const;
  inline void set_slicespacing(float value);
  
  // optional int32 xDimension = 8;
  inline bool has_xdimension() const;
  inline void clear_xdimension();
  static const int kXDimensionFieldNumber = 8;
  inline ::google::protobuf::int32 xdimension() const;
  inline void set_xdimension(::google::protobuf::int32 value);
  
  // optional int32 yDimension = 9;
  inline bool has_ydimension() const;
  inline void clear_ydimension();
  static const int kYDimensionFieldNumber = 9;
  inline ::google::protobuf::int32 ydimension() const;
  inline void set_ydimension(::google::protobuf::int32 value);
  
  // optional float xSpacing = 10;
  inline bool has_xspacing() const;
  inline void clear_xspacing();
  static const int kXSpacingFieldNumber = 10;
  inline float xspacing() const;
  inline void set_xspacing(float value);
  
  // optional float ySpacing = 11;
  inline bool has_yspacing() const;
  inline void clear_yspacing();
  static const int kYSpacingFieldNumber = 11;
  inline float yspacing() const;
  inline void set_yspacing(float value);
  
  // optional float ctvalue = 12;
  inline bool has_ctvalue() const;
  inline void clear_ctvalue();
  static const int kCtvalueFieldNumber = 12;
  inline float ctvalue() const;
  inline void set_ctvalue(float value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_CREATE_PHANTOM)
 private:
  inline void set_has_patientuid();
  inline void clear_has_patientuid();
  inline void set_has_phantomname();
  inline void clear_has_phantomname();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_phantomwidth();
  inline void clear_has_phantomwidth();
  inline void set_has_phantomheight();
  inline void clear_has_phantomheight();
  inline void set_has_phantomlength();
  inline void clear_has_phantomlength();
  inline void set_has_slicespacing();
  inline void clear_has_slicespacing();
  inline void set_has_xdimension();
  inline void clear_has_xdimension();
  inline void set_has_ydimension();
  inline void clear_has_ydimension();
  inline void set_has_xspacing();
  inline void clear_has_xspacing();
  inline void set_has_yspacing();
  inline void clear_has_yspacing();
  inline void set_has_ctvalue();
  inline void clear_has_ctvalue();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* patientuid_;
  ::std::string* phantomname_;
  ::std::string* description_;
  float phantomwidth_;
  float phantomheight_;
  float phantomlength_;
  float slicespacing_;
  ::google::protobuf::int32 xdimension_;
  ::google::protobuf::int32 ydimension_;
  float xspacing_;
  float yspacing_;
  float ctvalue_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fcreate_5fphantom_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fcreate_5fphantom_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fcreate_5fphantom_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_CREATE_PHANTOM* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_CREATE_PHANTOM

// optional string patientUID = 1;
inline bool RT_TPS_CREATE_PHANTOM::has_patientuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_patientuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_patientuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_patientuid() {
  if (patientuid_ != &::google::protobuf::internal::kEmptyString) {
    patientuid_->clear();
  }
  clear_has_patientuid();
}
inline const ::std::string& RT_TPS_CREATE_PHANTOM::patientuid() const {
  return *patientuid_;
}
inline void RT_TPS_CREATE_PHANTOM::set_patientuid(const ::std::string& value) {
  set_has_patientuid();
  if (patientuid_ == &::google::protobuf::internal::kEmptyString) {
    patientuid_ = new ::std::string;
  }
  patientuid_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_patientuid(const char* value) {
  set_has_patientuid();
  if (patientuid_ == &::google::protobuf::internal::kEmptyString) {
    patientuid_ = new ::std::string;
  }
  patientuid_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_patientuid(const char* value, size_t size) {
  set_has_patientuid();
  if (patientuid_ == &::google::protobuf::internal::kEmptyString) {
    patientuid_ = new ::std::string;
  }
  patientuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::mutable_patientuid() {
  set_has_patientuid();
  if (patientuid_ == &::google::protobuf::internal::kEmptyString) {
    patientuid_ = new ::std::string;
  }
  return patientuid_;
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::release_patientuid() {
  clear_has_patientuid();
  if (patientuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = patientuid_;
    patientuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string phantomName = 2;
inline bool RT_TPS_CREATE_PHANTOM::has_phantomname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_phantomname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_phantomname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_phantomname() {
  if (phantomname_ != &::google::protobuf::internal::kEmptyString) {
    phantomname_->clear();
  }
  clear_has_phantomname();
}
inline const ::std::string& RT_TPS_CREATE_PHANTOM::phantomname() const {
  return *phantomname_;
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomname(const ::std::string& value) {
  set_has_phantomname();
  if (phantomname_ == &::google::protobuf::internal::kEmptyString) {
    phantomname_ = new ::std::string;
  }
  phantomname_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomname(const char* value) {
  set_has_phantomname();
  if (phantomname_ == &::google::protobuf::internal::kEmptyString) {
    phantomname_ = new ::std::string;
  }
  phantomname_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomname(const char* value, size_t size) {
  set_has_phantomname();
  if (phantomname_ == &::google::protobuf::internal::kEmptyString) {
    phantomname_ = new ::std::string;
  }
  phantomname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::mutable_phantomname() {
  set_has_phantomname();
  if (phantomname_ == &::google::protobuf::internal::kEmptyString) {
    phantomname_ = new ::std::string;
  }
  return phantomname_;
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::release_phantomname() {
  clear_has_phantomname();
  if (phantomname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = phantomname_;
    phantomname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string description = 3;
inline bool RT_TPS_CREATE_PHANTOM::has_description() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_description() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_description() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_description() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& RT_TPS_CREATE_PHANTOM::description() const {
  return *description_;
}
inline void RT_TPS_CREATE_PHANTOM::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void RT_TPS_CREATE_PHANTOM::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  return description_;
}
inline ::std::string* RT_TPS_CREATE_PHANTOM::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required float phantomWidth = 4;
inline bool RT_TPS_CREATE_PHANTOM::has_phantomwidth() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_phantomwidth() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_phantomwidth() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_phantomwidth() {
  phantomwidth_ = 0;
  clear_has_phantomwidth();
}
inline float RT_TPS_CREATE_PHANTOM::phantomwidth() const {
  return phantomwidth_;
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomwidth(float value) {
  set_has_phantomwidth();
  phantomwidth_ = value;
}

// required float phantomHeight = 5;
inline bool RT_TPS_CREATE_PHANTOM::has_phantomheight() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_phantomheight() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_phantomheight() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_phantomheight() {
  phantomheight_ = 0;
  clear_has_phantomheight();
}
inline float RT_TPS_CREATE_PHANTOM::phantomheight() const {
  return phantomheight_;
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomheight(float value) {
  set_has_phantomheight();
  phantomheight_ = value;
}

// required float phantomLength = 6;
inline bool RT_TPS_CREATE_PHANTOM::has_phantomlength() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_phantomlength() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_phantomlength() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_phantomlength() {
  phantomlength_ = 0;
  clear_has_phantomlength();
}
inline float RT_TPS_CREATE_PHANTOM::phantomlength() const {
  return phantomlength_;
}
inline void RT_TPS_CREATE_PHANTOM::set_phantomlength(float value) {
  set_has_phantomlength();
  phantomlength_ = value;
}

// required float sliceSpacing = 7;
inline bool RT_TPS_CREATE_PHANTOM::has_slicespacing() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_slicespacing() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_slicespacing() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_slicespacing() {
  slicespacing_ = 0;
  clear_has_slicespacing();
}
inline float RT_TPS_CREATE_PHANTOM::slicespacing() const {
  return slicespacing_;
}
inline void RT_TPS_CREATE_PHANTOM::set_slicespacing(float value) {
  set_has_slicespacing();
  slicespacing_ = value;
}

// optional int32 xDimension = 8;
inline bool RT_TPS_CREATE_PHANTOM::has_xdimension() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_xdimension() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_xdimension() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_xdimension() {
  xdimension_ = 0;
  clear_has_xdimension();
}
inline ::google::protobuf::int32 RT_TPS_CREATE_PHANTOM::xdimension() const {
  return xdimension_;
}
inline void RT_TPS_CREATE_PHANTOM::set_xdimension(::google::protobuf::int32 value) {
  set_has_xdimension();
  xdimension_ = value;
}

// optional int32 yDimension = 9;
inline bool RT_TPS_CREATE_PHANTOM::has_ydimension() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_ydimension() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_ydimension() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_ydimension() {
  ydimension_ = 0;
  clear_has_ydimension();
}
inline ::google::protobuf::int32 RT_TPS_CREATE_PHANTOM::ydimension() const {
  return ydimension_;
}
inline void RT_TPS_CREATE_PHANTOM::set_ydimension(::google::protobuf::int32 value) {
  set_has_ydimension();
  ydimension_ = value;
}

// optional float xSpacing = 10;
inline bool RT_TPS_CREATE_PHANTOM::has_xspacing() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_xspacing() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_xspacing() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_xspacing() {
  xspacing_ = 0;
  clear_has_xspacing();
}
inline float RT_TPS_CREATE_PHANTOM::xspacing() const {
  return xspacing_;
}
inline void RT_TPS_CREATE_PHANTOM::set_xspacing(float value) {
  set_has_xspacing();
  xspacing_ = value;
}

// optional float ySpacing = 11;
inline bool RT_TPS_CREATE_PHANTOM::has_yspacing() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_yspacing() {
  _has_bits_[0] |= 0x00000400u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_yspacing() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_yspacing() {
  yspacing_ = 0;
  clear_has_yspacing();
}
inline float RT_TPS_CREATE_PHANTOM::yspacing() const {
  return yspacing_;
}
inline void RT_TPS_CREATE_PHANTOM::set_yspacing(float value) {
  set_has_yspacing();
  yspacing_ = value;
}

// optional float ctvalue = 12;
inline bool RT_TPS_CREATE_PHANTOM::has_ctvalue() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RT_TPS_CREATE_PHANTOM::set_has_ctvalue() {
  _has_bits_[0] |= 0x00000800u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_has_ctvalue() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void RT_TPS_CREATE_PHANTOM::clear_ctvalue() {
  ctvalue_ = 0;
  clear_has_ctvalue();
}
inline float RT_TPS_CREATE_PHANTOM::ctvalue() const {
  return ctvalue_;
}
inline void RT_TPS_CREATE_PHANTOM::set_ctvalue(float value) {
  set_has_ctvalue();
  ctvalue_ = value;
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

#endif  // PROTOBUF_rt_5ftps_5fcreate_5fphantom_2eproto__INCLUDED
