// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_proto_site.proto

#ifndef PROTOBUF_rt_5ftps_5fproto_5fsite_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fproto_5fsite_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fproto_5fsite_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fproto_5fsite_2eproto();

class RtTpsProtoSite;
class RtTpsProtoRepeatedSite;

// ===================================================================

class RtTpsProtoSite : public ::google::protobuf::Message {
 public:
  RtTpsProtoSite();
  virtual ~RtTpsProtoSite();
  
  RtTpsProtoSite(const RtTpsProtoSite& from);
  
  inline RtTpsProtoSite& operator=(const RtTpsProtoSite& from) {
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
  static const RtTpsProtoSite& default_instance();
  
  void Swap(RtTpsProtoSite* other);
  
  // implements Message ----------------------------------------------
  
  RtTpsProtoSite* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RtTpsProtoSite& from);
  void MergeFrom(const RtTpsProtoSite& from);
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
  
  // optional string siteUID = 1;
  inline bool has_siteuid() const;
  inline void clear_siteuid();
  static const int kSiteUIDFieldNumber = 1;
  inline const ::std::string& siteuid() const;
  inline void set_siteuid(const ::std::string& value);
  inline void set_siteuid(const char* value);
  inline void set_siteuid(const char* value, size_t size);
  inline ::std::string* mutable_siteuid();
  inline ::std::string* release_siteuid();
  
  // optional string siteName = 2;
  inline bool has_sitename() const;
  inline void clear_sitename();
  static const int kSiteNameFieldNumber = 2;
  inline const ::std::string& sitename() const;
  inline void set_sitename(const ::std::string& value);
  inline void set_sitename(const char* value);
  inline void set_sitename(const char* value, size_t size);
  inline ::std::string* mutable_sitename();
  inline ::std::string* release_sitename();
  
  // optional string courseUID = 3;
  inline bool has_courseuid() const;
  inline void clear_courseuid();
  static const int kCourseUIDFieldNumber = 3;
  inline const ::std::string& courseuid() const;
  inline void set_courseuid(const ::std::string& value);
  inline void set_courseuid(const char* value);
  inline void set_courseuid(const char* value, size_t size);
  inline ::std::string* mutable_courseuid();
  inline ::std::string* release_courseuid();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RtTpsProtoSite)
 private:
  inline void set_has_siteuid();
  inline void clear_has_siteuid();
  inline void set_has_sitename();
  inline void clear_has_sitename();
  inline void set_has_courseuid();
  inline void clear_has_courseuid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* siteuid_;
  ::std::string* sitename_;
  ::std::string* courseuid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fproto_5fsite_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fproto_5fsite_2eproto();
  
  void InitAsDefaultInstance();
  static RtTpsProtoSite* default_instance_;
};
// -------------------------------------------------------------------

class RtTpsProtoRepeatedSite : public ::google::protobuf::Message {
 public:
  RtTpsProtoRepeatedSite();
  virtual ~RtTpsProtoRepeatedSite();
  
  RtTpsProtoRepeatedSite(const RtTpsProtoRepeatedSite& from);
  
  inline RtTpsProtoRepeatedSite& operator=(const RtTpsProtoRepeatedSite& from) {
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
  static const RtTpsProtoRepeatedSite& default_instance();
  
  void Swap(RtTpsProtoRepeatedSite* other);
  
  // implements Message ----------------------------------------------
  
  RtTpsProtoRepeatedSite* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RtTpsProtoRepeatedSite& from);
  void MergeFrom(const RtTpsProtoRepeatedSite& from);
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
  
  // repeated .tps.proto.RtTpsProtoSite siteList = 1;
  inline int sitelist_size() const;
  inline void clear_sitelist();
  static const int kSiteListFieldNumber = 1;
  inline const ::tps::proto::RtTpsProtoSite& sitelist(int index) const;
  inline ::tps::proto::RtTpsProtoSite* mutable_sitelist(int index);
  inline ::tps::proto::RtTpsProtoSite* add_sitelist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RtTpsProtoSite >&
      sitelist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RtTpsProtoSite >*
      mutable_sitelist();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RtTpsProtoRepeatedSite)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RtTpsProtoSite > sitelist_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fproto_5fsite_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fproto_5fsite_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fproto_5fsite_2eproto();
  
  void InitAsDefaultInstance();
  static RtTpsProtoRepeatedSite* default_instance_;
};
// ===================================================================


// ===================================================================

// RtTpsProtoSite

// optional string siteUID = 1;
inline bool RtTpsProtoSite::has_siteuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RtTpsProtoSite::set_has_siteuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RtTpsProtoSite::clear_has_siteuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RtTpsProtoSite::clear_siteuid() {
  if (siteuid_ != &::google::protobuf::internal::kEmptyString) {
    siteuid_->clear();
  }
  clear_has_siteuid();
}
inline const ::std::string& RtTpsProtoSite::siteuid() const {
  return *siteuid_;
}
inline void RtTpsProtoSite::set_siteuid(const ::std::string& value) {
  set_has_siteuid();
  if (siteuid_ == &::google::protobuf::internal::kEmptyString) {
    siteuid_ = new ::std::string;
  }
  siteuid_->assign(value);
}
inline void RtTpsProtoSite::set_siteuid(const char* value) {
  set_has_siteuid();
  if (siteuid_ == &::google::protobuf::internal::kEmptyString) {
    siteuid_ = new ::std::string;
  }
  siteuid_->assign(value);
}
inline void RtTpsProtoSite::set_siteuid(const char* value, size_t size) {
  set_has_siteuid();
  if (siteuid_ == &::google::protobuf::internal::kEmptyString) {
    siteuid_ = new ::std::string;
  }
  siteuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsProtoSite::mutable_siteuid() {
  set_has_siteuid();
  if (siteuid_ == &::google::protobuf::internal::kEmptyString) {
    siteuid_ = new ::std::string;
  }
  return siteuid_;
}
inline ::std::string* RtTpsProtoSite::release_siteuid() {
  clear_has_siteuid();
  if (siteuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = siteuid_;
    siteuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string siteName = 2;
inline bool RtTpsProtoSite::has_sitename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RtTpsProtoSite::set_has_sitename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RtTpsProtoSite::clear_has_sitename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RtTpsProtoSite::clear_sitename() {
  if (sitename_ != &::google::protobuf::internal::kEmptyString) {
    sitename_->clear();
  }
  clear_has_sitename();
}
inline const ::std::string& RtTpsProtoSite::sitename() const {
  return *sitename_;
}
inline void RtTpsProtoSite::set_sitename(const ::std::string& value) {
  set_has_sitename();
  if (sitename_ == &::google::protobuf::internal::kEmptyString) {
    sitename_ = new ::std::string;
  }
  sitename_->assign(value);
}
inline void RtTpsProtoSite::set_sitename(const char* value) {
  set_has_sitename();
  if (sitename_ == &::google::protobuf::internal::kEmptyString) {
    sitename_ = new ::std::string;
  }
  sitename_->assign(value);
}
inline void RtTpsProtoSite::set_sitename(const char* value, size_t size) {
  set_has_sitename();
  if (sitename_ == &::google::protobuf::internal::kEmptyString) {
    sitename_ = new ::std::string;
  }
  sitename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsProtoSite::mutable_sitename() {
  set_has_sitename();
  if (sitename_ == &::google::protobuf::internal::kEmptyString) {
    sitename_ = new ::std::string;
  }
  return sitename_;
}
inline ::std::string* RtTpsProtoSite::release_sitename() {
  clear_has_sitename();
  if (sitename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sitename_;
    sitename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string courseUID = 3;
inline bool RtTpsProtoSite::has_courseuid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RtTpsProtoSite::set_has_courseuid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RtTpsProtoSite::clear_has_courseuid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RtTpsProtoSite::clear_courseuid() {
  if (courseuid_ != &::google::protobuf::internal::kEmptyString) {
    courseuid_->clear();
  }
  clear_has_courseuid();
}
inline const ::std::string& RtTpsProtoSite::courseuid() const {
  return *courseuid_;
}
inline void RtTpsProtoSite::set_courseuid(const ::std::string& value) {
  set_has_courseuid();
  if (courseuid_ == &::google::protobuf::internal::kEmptyString) {
    courseuid_ = new ::std::string;
  }
  courseuid_->assign(value);
}
inline void RtTpsProtoSite::set_courseuid(const char* value) {
  set_has_courseuid();
  if (courseuid_ == &::google::protobuf::internal::kEmptyString) {
    courseuid_ = new ::std::string;
  }
  courseuid_->assign(value);
}
inline void RtTpsProtoSite::set_courseuid(const char* value, size_t size) {
  set_has_courseuid();
  if (courseuid_ == &::google::protobuf::internal::kEmptyString) {
    courseuid_ = new ::std::string;
  }
  courseuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsProtoSite::mutable_courseuid() {
  set_has_courseuid();
  if (courseuid_ == &::google::protobuf::internal::kEmptyString) {
    courseuid_ = new ::std::string;
  }
  return courseuid_;
}
inline ::std::string* RtTpsProtoSite::release_courseuid() {
  clear_has_courseuid();
  if (courseuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = courseuid_;
    courseuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RtTpsProtoRepeatedSite

// repeated .tps.proto.RtTpsProtoSite siteList = 1;
inline int RtTpsProtoRepeatedSite::sitelist_size() const {
  return sitelist_.size();
}
inline void RtTpsProtoRepeatedSite::clear_sitelist() {
  sitelist_.Clear();
}
inline const ::tps::proto::RtTpsProtoSite& RtTpsProtoRepeatedSite::sitelist(int index) const {
  return sitelist_.Get(index);
}
inline ::tps::proto::RtTpsProtoSite* RtTpsProtoRepeatedSite::mutable_sitelist(int index) {
  return sitelist_.Mutable(index);
}
inline ::tps::proto::RtTpsProtoSite* RtTpsProtoRepeatedSite::add_sitelist() {
  return sitelist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RtTpsProtoSite >&
RtTpsProtoRepeatedSite::sitelist() const {
  return sitelist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RtTpsProtoSite >*
RtTpsProtoRepeatedSite::mutable_sitelist() {
  return &sitelist_;
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

#endif  // PROTOBUF_rt_5ftps_5fproto_5fsite_2eproto__INCLUDED