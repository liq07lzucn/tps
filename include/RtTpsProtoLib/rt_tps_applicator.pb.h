// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_applicator.proto

#ifndef PROTOBUF_rt_5ftps_5fapplicator_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fapplicator_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fapplicator_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fapplicator_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fapplicator_2eproto();

class RT_TPS_Applicator;
class RT_TPS_ApplicatorList;

// ===================================================================

class RT_TPS_Applicator : public ::google::protobuf::Message {
 public:
  RT_TPS_Applicator();
  virtual ~RT_TPS_Applicator();
  
  RT_TPS_Applicator(const RT_TPS_Applicator& from);
  
  inline RT_TPS_Applicator& operator=(const RT_TPS_Applicator& from) {
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
  static const RT_TPS_Applicator& default_instance();
  
  void Swap(RT_TPS_Applicator* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_Applicator* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_Applicator& from);
  void MergeFrom(const RT_TPS_Applicator& from);
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
  
  // required string applicator_uid = 1;
  inline bool has_applicator_uid() const;
  inline void clear_applicator_uid();
  static const int kApplicatorUidFieldNumber = 1;
  inline const ::std::string& applicator_uid() const;
  inline void set_applicator_uid(const ::std::string& value);
  inline void set_applicator_uid(const char* value);
  inline void set_applicator_uid(const char* value, size_t size);
  inline ::std::string* mutable_applicator_uid();
  inline ::std::string* release_applicator_uid();
  
  // optional string unit_uid = 2;
  inline bool has_unit_uid() const;
  inline void clear_unit_uid();
  static const int kUnitUidFieldNumber = 2;
  inline const ::std::string& unit_uid() const;
  inline void set_unit_uid(const ::std::string& value);
  inline void set_unit_uid(const char* value);
  inline void set_unit_uid(const char* value, size_t size);
  inline ::std::string* mutable_unit_uid();
  inline ::std::string* release_unit_uid();
  
  // optional string applicator_name = 3;
  inline bool has_applicator_name() const;
  inline void clear_applicator_name();
  static const int kApplicatorNameFieldNumber = 3;
  inline const ::std::string& applicator_name() const;
  inline void set_applicator_name(const ::std::string& value);
  inline void set_applicator_name(const char* value);
  inline void set_applicator_name(const char* value, size_t size);
  inline ::std::string* mutable_applicator_name();
  inline ::std::string* release_applicator_name();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_Applicator)
 private:
  inline void set_has_applicator_uid();
  inline void clear_has_applicator_uid();
  inline void set_has_unit_uid();
  inline void clear_has_unit_uid();
  inline void set_has_applicator_name();
  inline void clear_has_applicator_name();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* applicator_uid_;
  ::std::string* unit_uid_;
  ::std::string* applicator_name_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fapplicator_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fapplicator_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fapplicator_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_Applicator* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_ApplicatorList : public ::google::protobuf::Message {
 public:
  RT_TPS_ApplicatorList();
  virtual ~RT_TPS_ApplicatorList();
  
  RT_TPS_ApplicatorList(const RT_TPS_ApplicatorList& from);
  
  inline RT_TPS_ApplicatorList& operator=(const RT_TPS_ApplicatorList& from) {
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
  static const RT_TPS_ApplicatorList& default_instance();
  
  void Swap(RT_TPS_ApplicatorList* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_ApplicatorList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_ApplicatorList& from);
  void MergeFrom(const RT_TPS_ApplicatorList& from);
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
  
  // repeated .tps.proto.RT_TPS_Applicator applicator_list = 1;
  inline int applicator_list_size() const;
  inline void clear_applicator_list();
  static const int kApplicatorListFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_Applicator& applicator_list(int index) const;
  inline ::tps::proto::RT_TPS_Applicator* mutable_applicator_list(int index);
  inline ::tps::proto::RT_TPS_Applicator* add_applicator_list();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_Applicator >&
      applicator_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_Applicator >*
      mutable_applicator_list();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_ApplicatorList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_Applicator > applicator_list_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fapplicator_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fapplicator_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fapplicator_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_ApplicatorList* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_Applicator

// required string applicator_uid = 1;
inline bool RT_TPS_Applicator::has_applicator_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_Applicator::set_has_applicator_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_Applicator::clear_has_applicator_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_Applicator::clear_applicator_uid() {
  if (applicator_uid_ != &::google::protobuf::internal::kEmptyString) {
    applicator_uid_->clear();
  }
  clear_has_applicator_uid();
}
inline const ::std::string& RT_TPS_Applicator::applicator_uid() const {
  return *applicator_uid_;
}
inline void RT_TPS_Applicator::set_applicator_uid(const ::std::string& value) {
  set_has_applicator_uid();
  if (applicator_uid_ == &::google::protobuf::internal::kEmptyString) {
    applicator_uid_ = new ::std::string;
  }
  applicator_uid_->assign(value);
}
inline void RT_TPS_Applicator::set_applicator_uid(const char* value) {
  set_has_applicator_uid();
  if (applicator_uid_ == &::google::protobuf::internal::kEmptyString) {
    applicator_uid_ = new ::std::string;
  }
  applicator_uid_->assign(value);
}
inline void RT_TPS_Applicator::set_applicator_uid(const char* value, size_t size) {
  set_has_applicator_uid();
  if (applicator_uid_ == &::google::protobuf::internal::kEmptyString) {
    applicator_uid_ = new ::std::string;
  }
  applicator_uid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_Applicator::mutable_applicator_uid() {
  set_has_applicator_uid();
  if (applicator_uid_ == &::google::protobuf::internal::kEmptyString) {
    applicator_uid_ = new ::std::string;
  }
  return applicator_uid_;
}
inline ::std::string* RT_TPS_Applicator::release_applicator_uid() {
  clear_has_applicator_uid();
  if (applicator_uid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = applicator_uid_;
    applicator_uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string unit_uid = 2;
inline bool RT_TPS_Applicator::has_unit_uid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_Applicator::set_has_unit_uid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_Applicator::clear_has_unit_uid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_Applicator::clear_unit_uid() {
  if (unit_uid_ != &::google::protobuf::internal::kEmptyString) {
    unit_uid_->clear();
  }
  clear_has_unit_uid();
}
inline const ::std::string& RT_TPS_Applicator::unit_uid() const {
  return *unit_uid_;
}
inline void RT_TPS_Applicator::set_unit_uid(const ::std::string& value) {
  set_has_unit_uid();
  if (unit_uid_ == &::google::protobuf::internal::kEmptyString) {
    unit_uid_ = new ::std::string;
  }
  unit_uid_->assign(value);
}
inline void RT_TPS_Applicator::set_unit_uid(const char* value) {
  set_has_unit_uid();
  if (unit_uid_ == &::google::protobuf::internal::kEmptyString) {
    unit_uid_ = new ::std::string;
  }
  unit_uid_->assign(value);
}
inline void RT_TPS_Applicator::set_unit_uid(const char* value, size_t size) {
  set_has_unit_uid();
  if (unit_uid_ == &::google::protobuf::internal::kEmptyString) {
    unit_uid_ = new ::std::string;
  }
  unit_uid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_Applicator::mutable_unit_uid() {
  set_has_unit_uid();
  if (unit_uid_ == &::google::protobuf::internal::kEmptyString) {
    unit_uid_ = new ::std::string;
  }
  return unit_uid_;
}
inline ::std::string* RT_TPS_Applicator::release_unit_uid() {
  clear_has_unit_uid();
  if (unit_uid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = unit_uid_;
    unit_uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string applicator_name = 3;
inline bool RT_TPS_Applicator::has_applicator_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_Applicator::set_has_applicator_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_Applicator::clear_has_applicator_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_Applicator::clear_applicator_name() {
  if (applicator_name_ != &::google::protobuf::internal::kEmptyString) {
    applicator_name_->clear();
  }
  clear_has_applicator_name();
}
inline const ::std::string& RT_TPS_Applicator::applicator_name() const {
  return *applicator_name_;
}
inline void RT_TPS_Applicator::set_applicator_name(const ::std::string& value) {
  set_has_applicator_name();
  if (applicator_name_ == &::google::protobuf::internal::kEmptyString) {
    applicator_name_ = new ::std::string;
  }
  applicator_name_->assign(value);
}
inline void RT_TPS_Applicator::set_applicator_name(const char* value) {
  set_has_applicator_name();
  if (applicator_name_ == &::google::protobuf::internal::kEmptyString) {
    applicator_name_ = new ::std::string;
  }
  applicator_name_->assign(value);
}
inline void RT_TPS_Applicator::set_applicator_name(const char* value, size_t size) {
  set_has_applicator_name();
  if (applicator_name_ == &::google::protobuf::internal::kEmptyString) {
    applicator_name_ = new ::std::string;
  }
  applicator_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_Applicator::mutable_applicator_name() {
  set_has_applicator_name();
  if (applicator_name_ == &::google::protobuf::internal::kEmptyString) {
    applicator_name_ = new ::std::string;
  }
  return applicator_name_;
}
inline ::std::string* RT_TPS_Applicator::release_applicator_name() {
  clear_has_applicator_name();
  if (applicator_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = applicator_name_;
    applicator_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RT_TPS_ApplicatorList

// repeated .tps.proto.RT_TPS_Applicator applicator_list = 1;
inline int RT_TPS_ApplicatorList::applicator_list_size() const {
  return applicator_list_.size();
}
inline void RT_TPS_ApplicatorList::clear_applicator_list() {
  applicator_list_.Clear();
}
inline const ::tps::proto::RT_TPS_Applicator& RT_TPS_ApplicatorList::applicator_list(int index) const {
  return applicator_list_.Get(index);
}
inline ::tps::proto::RT_TPS_Applicator* RT_TPS_ApplicatorList::mutable_applicator_list(int index) {
  return applicator_list_.Mutable(index);
}
inline ::tps::proto::RT_TPS_Applicator* RT_TPS_ApplicatorList::add_applicator_list() {
  return applicator_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_Applicator >&
RT_TPS_ApplicatorList::applicator_list() const {
  return applicator_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_Applicator >*
RT_TPS_ApplicatorList::mutable_applicator_list() {
  return &applicator_list_;
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

#endif  // PROTOBUF_rt_5ftps_5fapplicator_2eproto__INCLUDED