// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_optoutput.proto

#ifndef PROTOBUF_rt_5ftps_5foptoutput_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5foptoutput_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5foptoutput_2eproto();
void protobuf_AssignDesc_rt_5ftps_5foptoutput_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5foptoutput_2eproto();

class RT_TPS_OptOutput;
class RT_TPS_OptResultValue;
class RT_TPS_EudValueList;
class RT_TPS_ObjectValueList;

// ===================================================================

class RT_TPS_OptOutput : public ::google::protobuf::Message {
 public:
  RT_TPS_OptOutput();
  virtual ~RT_TPS_OptOutput();
  
  RT_TPS_OptOutput(const RT_TPS_OptOutput& from);
  
  inline RT_TPS_OptOutput& operator=(const RT_TPS_OptOutput& from) {
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
  static const RT_TPS_OptOutput& default_instance();
  
  void Swap(RT_TPS_OptOutput* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_OptOutput* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_OptOutput& from);
  void MergeFrom(const RT_TPS_OptOutput& from);
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
  
  // optional string ngUid = 1;
  inline bool has_nguid() const;
  inline void clear_nguid();
  static const int kNgUidFieldNumber = 1;
  inline const ::std::string& nguid() const;
  inline void set_nguid(const ::std::string& value);
  inline void set_nguid(const char* value);
  inline void set_nguid(const char* value, size_t size);
  inline ::std::string* mutable_nguid();
  inline ::std::string* release_nguid();
  
  // optional int32 iterationNumber = 2;
  inline bool has_iterationnumber() const;
  inline void clear_iterationnumber();
  static const int kIterationNumberFieldNumber = 2;
  inline ::google::protobuf::int32 iterationnumber() const;
  inline void set_iterationnumber(::google::protobuf::int32 value);
  
  // optional float iterationResult = 3;
  inline bool has_iterationresult() const;
  inline void clear_iterationresult();
  static const int kIterationResultFieldNumber = 3;
  inline float iterationresult() const;
  inline void set_iterationresult(float value);
  
  // optional float progressValue = 4;
  inline bool has_progressvalue() const;
  inline void clear_progressvalue();
  static const int kProgressValueFieldNumber = 4;
  inline float progressvalue() const;
  inline void set_progressvalue(float value);
  
  // optional float ngMU = 5;
  inline bool has_ngmu() const;
  inline void clear_ngmu();
  static const int kNgMUFieldNumber = 5;
  inline float ngmu() const;
  inline void set_ngmu(float value);
  
  // optional int32 ngSegmentCount = 6;
  inline bool has_ngsegmentcount() const;
  inline void clear_ngsegmentcount();
  static const int kNgSegmentCountFieldNumber = 6;
  inline ::google::protobuf::int32 ngsegmentcount() const;
  inline void set_ngsegmentcount(::google::protobuf::int32 value);
  
  // optional int32 timeLeft = 7;
  inline bool has_timeleft() const;
  inline void clear_timeleft();
  static const int kTimeLeftFieldNumber = 7;
  inline ::google::protobuf::int32 timeleft() const;
  inline void set_timeleft(::google::protobuf::int32 value);
  
  // optional int32 timeDelived = 8;
  inline bool has_timedelived() const;
  inline void clear_timedelived();
  static const int kTimeDelivedFieldNumber = 8;
  inline ::google::protobuf::int32 timedelived() const;
  inline void set_timedelived(::google::protobuf::int32 value);
  
  // optional .tps.proto.RT_TPS_EudValueList eudValue = 9;
  inline bool has_eudvalue() const;
  inline void clear_eudvalue();
  static const int kEudValueFieldNumber = 9;
  inline const ::tps::proto::RT_TPS_EudValueList& eudvalue() const;
  inline ::tps::proto::RT_TPS_EudValueList* mutable_eudvalue();
  inline ::tps::proto::RT_TPS_EudValueList* release_eudvalue();
  
  // optional int32 optReturnValue = 10;
  inline bool has_optreturnvalue() const;
  inline void clear_optreturnvalue();
  static const int kOptReturnValueFieldNumber = 10;
  inline ::google::protobuf::int32 optreturnvalue() const;
  inline void set_optreturnvalue(::google::protobuf::int32 value);
  
  // optional .tps.proto.RT_TPS_ObjectValueList objectValue = 11;
  inline bool has_objectvalue() const;
  inline void clear_objectvalue();
  static const int kObjectValueFieldNumber = 11;
  inline const ::tps::proto::RT_TPS_ObjectValueList& objectvalue() const;
  inline ::tps::proto::RT_TPS_ObjectValueList* mutable_objectvalue();
  inline ::tps::proto::RT_TPS_ObjectValueList* release_objectvalue();
  
  // optional int32 algstatus = 12;
  inline bool has_algstatus() const;
  inline void clear_algstatus();
  static const int kAlgstatusFieldNumber = 12;
  inline ::google::protobuf::int32 algstatus() const;
  inline void set_algstatus(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_OptOutput)
 private:
  inline void set_has_nguid();
  inline void clear_has_nguid();
  inline void set_has_iterationnumber();
  inline void clear_has_iterationnumber();
  inline void set_has_iterationresult();
  inline void clear_has_iterationresult();
  inline void set_has_progressvalue();
  inline void clear_has_progressvalue();
  inline void set_has_ngmu();
  inline void clear_has_ngmu();
  inline void set_has_ngsegmentcount();
  inline void clear_has_ngsegmentcount();
  inline void set_has_timeleft();
  inline void clear_has_timeleft();
  inline void set_has_timedelived();
  inline void clear_has_timedelived();
  inline void set_has_eudvalue();
  inline void clear_has_eudvalue();
  inline void set_has_optreturnvalue();
  inline void clear_has_optreturnvalue();
  inline void set_has_objectvalue();
  inline void clear_has_objectvalue();
  inline void set_has_algstatus();
  inline void clear_has_algstatus();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* nguid_;
  ::google::protobuf::int32 iterationnumber_;
  float iterationresult_;
  float progressvalue_;
  float ngmu_;
  ::google::protobuf::int32 ngsegmentcount_;
  ::google::protobuf::int32 timeleft_;
  ::tps::proto::RT_TPS_EudValueList* eudvalue_;
  ::google::protobuf::int32 timedelived_;
  ::google::protobuf::int32 optreturnvalue_;
  ::tps::proto::RT_TPS_ObjectValueList* objectvalue_;
  ::google::protobuf::int32 algstatus_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptoutput_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_OptOutput* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_OptResultValue : public ::google::protobuf::Message {
 public:
  RT_TPS_OptResultValue();
  virtual ~RT_TPS_OptResultValue();
  
  RT_TPS_OptResultValue(const RT_TPS_OptResultValue& from);
  
  inline RT_TPS_OptResultValue& operator=(const RT_TPS_OptResultValue& from) {
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
  static const RT_TPS_OptResultValue& default_instance();
  
  void Swap(RT_TPS_OptResultValue* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_OptResultValue* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_OptResultValue& from);
  void MergeFrom(const RT_TPS_OptResultValue& from);
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
  
  // required string optUid = 1;
  inline bool has_optuid() const;
  inline void clear_optuid();
  static const int kOptUidFieldNumber = 1;
  inline const ::std::string& optuid() const;
  inline void set_optuid(const ::std::string& value);
  inline void set_optuid(const char* value);
  inline void set_optuid(const char* value, size_t size);
  inline ::std::string* mutable_optuid();
  inline ::std::string* release_optuid();
  
  // required float resultValue = 2;
  inline bool has_resultvalue() const;
  inline void clear_resultvalue();
  static const int kResultValueFieldNumber = 2;
  inline float resultvalue() const;
  inline void set_resultvalue(float value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_OptResultValue)
 private:
  inline void set_has_optuid();
  inline void clear_has_optuid();
  inline void set_has_resultvalue();
  inline void clear_has_resultvalue();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* optuid_;
  float resultvalue_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptoutput_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_OptResultValue* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_EudValueList : public ::google::protobuf::Message {
 public:
  RT_TPS_EudValueList();
  virtual ~RT_TPS_EudValueList();
  
  RT_TPS_EudValueList(const RT_TPS_EudValueList& from);
  
  inline RT_TPS_EudValueList& operator=(const RT_TPS_EudValueList& from) {
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
  static const RT_TPS_EudValueList& default_instance();
  
  void Swap(RT_TPS_EudValueList* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_EudValueList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_EudValueList& from);
  void MergeFrom(const RT_TPS_EudValueList& from);
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
  
  // repeated .tps.proto.RT_TPS_OptResultValue eudValuelist = 1;
  inline int eudvaluelist_size() const;
  inline void clear_eudvaluelist();
  static const int kEudValuelistFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_OptResultValue& eudvaluelist(int index) const;
  inline ::tps::proto::RT_TPS_OptResultValue* mutable_eudvaluelist(int index);
  inline ::tps::proto::RT_TPS_OptResultValue* add_eudvaluelist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >&
      eudvaluelist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >*
      mutable_eudvaluelist();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_EudValueList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue > eudvaluelist_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptoutput_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_EudValueList* default_instance_;
};
// -------------------------------------------------------------------

class RT_TPS_ObjectValueList : public ::google::protobuf::Message {
 public:
  RT_TPS_ObjectValueList();
  virtual ~RT_TPS_ObjectValueList();
  
  RT_TPS_ObjectValueList(const RT_TPS_ObjectValueList& from);
  
  inline RT_TPS_ObjectValueList& operator=(const RT_TPS_ObjectValueList& from) {
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
  static const RT_TPS_ObjectValueList& default_instance();
  
  void Swap(RT_TPS_ObjectValueList* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_ObjectValueList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_ObjectValueList& from);
  void MergeFrom(const RT_TPS_ObjectValueList& from);
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
  
  // repeated .tps.proto.RT_TPS_OptResultValue objectValuelist = 1;
  inline int objectvaluelist_size() const;
  inline void clear_objectvaluelist();
  static const int kObjectValuelistFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_OptResultValue& objectvaluelist(int index) const;
  inline ::tps::proto::RT_TPS_OptResultValue* mutable_objectvaluelist(int index);
  inline ::tps::proto::RT_TPS_OptResultValue* add_objectvaluelist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >&
      objectvaluelist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >*
      mutable_objectvaluelist();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_ObjectValueList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue > objectvaluelist_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5foptoutput_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5foptoutput_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_ObjectValueList* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_OptOutput

// optional string ngUid = 1;
inline bool RT_TPS_OptOutput::has_nguid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_OptOutput::set_has_nguid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_OptOutput::clear_has_nguid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_OptOutput::clear_nguid() {
  if (nguid_ != &::google::protobuf::internal::kEmptyString) {
    nguid_->clear();
  }
  clear_has_nguid();
}
inline const ::std::string& RT_TPS_OptOutput::nguid() const {
  return *nguid_;
}
inline void RT_TPS_OptOutput::set_nguid(const ::std::string& value) {
  set_has_nguid();
  if (nguid_ == &::google::protobuf::internal::kEmptyString) {
    nguid_ = new ::std::string;
  }
  nguid_->assign(value);
}
inline void RT_TPS_OptOutput::set_nguid(const char* value) {
  set_has_nguid();
  if (nguid_ == &::google::protobuf::internal::kEmptyString) {
    nguid_ = new ::std::string;
  }
  nguid_->assign(value);
}
inline void RT_TPS_OptOutput::set_nguid(const char* value, size_t size) {
  set_has_nguid();
  if (nguid_ == &::google::protobuf::internal::kEmptyString) {
    nguid_ = new ::std::string;
  }
  nguid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_OptOutput::mutable_nguid() {
  set_has_nguid();
  if (nguid_ == &::google::protobuf::internal::kEmptyString) {
    nguid_ = new ::std::string;
  }
  return nguid_;
}
inline ::std::string* RT_TPS_OptOutput::release_nguid() {
  clear_has_nguid();
  if (nguid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nguid_;
    nguid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 iterationNumber = 2;
inline bool RT_TPS_OptOutput::has_iterationnumber() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_OptOutput::set_has_iterationnumber() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_OptOutput::clear_has_iterationnumber() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_OptOutput::clear_iterationnumber() {
  iterationnumber_ = 0;
  clear_has_iterationnumber();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::iterationnumber() const {
  return iterationnumber_;
}
inline void RT_TPS_OptOutput::set_iterationnumber(::google::protobuf::int32 value) {
  set_has_iterationnumber();
  iterationnumber_ = value;
}

// optional float iterationResult = 3;
inline bool RT_TPS_OptOutput::has_iterationresult() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_OptOutput::set_has_iterationresult() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_OptOutput::clear_has_iterationresult() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_OptOutput::clear_iterationresult() {
  iterationresult_ = 0;
  clear_has_iterationresult();
}
inline float RT_TPS_OptOutput::iterationresult() const {
  return iterationresult_;
}
inline void RT_TPS_OptOutput::set_iterationresult(float value) {
  set_has_iterationresult();
  iterationresult_ = value;
}

// optional float progressValue = 4;
inline bool RT_TPS_OptOutput::has_progressvalue() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_OptOutput::set_has_progressvalue() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_OptOutput::clear_has_progressvalue() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_OptOutput::clear_progressvalue() {
  progressvalue_ = 0;
  clear_has_progressvalue();
}
inline float RT_TPS_OptOutput::progressvalue() const {
  return progressvalue_;
}
inline void RT_TPS_OptOutput::set_progressvalue(float value) {
  set_has_progressvalue();
  progressvalue_ = value;
}

// optional float ngMU = 5;
inline bool RT_TPS_OptOutput::has_ngmu() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_OptOutput::set_has_ngmu() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_OptOutput::clear_has_ngmu() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_OptOutput::clear_ngmu() {
  ngmu_ = 0;
  clear_has_ngmu();
}
inline float RT_TPS_OptOutput::ngmu() const {
  return ngmu_;
}
inline void RT_TPS_OptOutput::set_ngmu(float value) {
  set_has_ngmu();
  ngmu_ = value;
}

// optional int32 ngSegmentCount = 6;
inline bool RT_TPS_OptOutput::has_ngsegmentcount() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_OptOutput::set_has_ngsegmentcount() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_OptOutput::clear_has_ngsegmentcount() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_OptOutput::clear_ngsegmentcount() {
  ngsegmentcount_ = 0;
  clear_has_ngsegmentcount();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::ngsegmentcount() const {
  return ngsegmentcount_;
}
inline void RT_TPS_OptOutput::set_ngsegmentcount(::google::protobuf::int32 value) {
  set_has_ngsegmentcount();
  ngsegmentcount_ = value;
}

// optional int32 timeLeft = 7;
inline bool RT_TPS_OptOutput::has_timeleft() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_OptOutput::set_has_timeleft() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_OptOutput::clear_has_timeleft() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_OptOutput::clear_timeleft() {
  timeleft_ = 0;
  clear_has_timeleft();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::timeleft() const {
  return timeleft_;
}
inline void RT_TPS_OptOutput::set_timeleft(::google::protobuf::int32 value) {
  set_has_timeleft();
  timeleft_ = value;
}

// optional int32 timeDelived = 8;
inline bool RT_TPS_OptOutput::has_timedelived() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_OptOutput::set_has_timedelived() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_OptOutput::clear_has_timedelived() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_OptOutput::clear_timedelived() {
  timedelived_ = 0;
  clear_has_timedelived();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::timedelived() const {
  return timedelived_;
}
inline void RT_TPS_OptOutput::set_timedelived(::google::protobuf::int32 value) {
  set_has_timedelived();
  timedelived_ = value;
}

// optional .tps.proto.RT_TPS_EudValueList eudValue = 9;
inline bool RT_TPS_OptOutput::has_eudvalue() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_OptOutput::set_has_eudvalue() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_OptOutput::clear_has_eudvalue() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_OptOutput::clear_eudvalue() {
  if (eudvalue_ != NULL) eudvalue_->::tps::proto::RT_TPS_EudValueList::Clear();
  clear_has_eudvalue();
}
inline const ::tps::proto::RT_TPS_EudValueList& RT_TPS_OptOutput::eudvalue() const {
  return eudvalue_ != NULL ? *eudvalue_ : *default_instance_->eudvalue_;
}
inline ::tps::proto::RT_TPS_EudValueList* RT_TPS_OptOutput::mutable_eudvalue() {
  set_has_eudvalue();
  if (eudvalue_ == NULL) eudvalue_ = new ::tps::proto::RT_TPS_EudValueList;
  return eudvalue_;
}
inline ::tps::proto::RT_TPS_EudValueList* RT_TPS_OptOutput::release_eudvalue() {
  clear_has_eudvalue();
  ::tps::proto::RT_TPS_EudValueList* temp = eudvalue_;
  eudvalue_ = NULL;
  return temp;
}

// optional int32 optReturnValue = 10;
inline bool RT_TPS_OptOutput::has_optreturnvalue() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_OptOutput::set_has_optreturnvalue() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_OptOutput::clear_has_optreturnvalue() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_OptOutput::clear_optreturnvalue() {
  optreturnvalue_ = 0;
  clear_has_optreturnvalue();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::optreturnvalue() const {
  return optreturnvalue_;
}
inline void RT_TPS_OptOutput::set_optreturnvalue(::google::protobuf::int32 value) {
  set_has_optreturnvalue();
  optreturnvalue_ = value;
}

// optional .tps.proto.RT_TPS_ObjectValueList objectValue = 11;
inline bool RT_TPS_OptOutput::has_objectvalue() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RT_TPS_OptOutput::set_has_objectvalue() {
  _has_bits_[0] |= 0x00000400u;
}
inline void RT_TPS_OptOutput::clear_has_objectvalue() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void RT_TPS_OptOutput::clear_objectvalue() {
  if (objectvalue_ != NULL) objectvalue_->::tps::proto::RT_TPS_ObjectValueList::Clear();
  clear_has_objectvalue();
}
inline const ::tps::proto::RT_TPS_ObjectValueList& RT_TPS_OptOutput::objectvalue() const {
  return objectvalue_ != NULL ? *objectvalue_ : *default_instance_->objectvalue_;
}
inline ::tps::proto::RT_TPS_ObjectValueList* RT_TPS_OptOutput::mutable_objectvalue() {
  set_has_objectvalue();
  if (objectvalue_ == NULL) objectvalue_ = new ::tps::proto::RT_TPS_ObjectValueList;
  return objectvalue_;
}
inline ::tps::proto::RT_TPS_ObjectValueList* RT_TPS_OptOutput::release_objectvalue() {
  clear_has_objectvalue();
  ::tps::proto::RT_TPS_ObjectValueList* temp = objectvalue_;
  objectvalue_ = NULL;
  return temp;
}

// optional int32 algstatus = 12;
inline bool RT_TPS_OptOutput::has_algstatus() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RT_TPS_OptOutput::set_has_algstatus() {
  _has_bits_[0] |= 0x00000800u;
}
inline void RT_TPS_OptOutput::clear_has_algstatus() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void RT_TPS_OptOutput::clear_algstatus() {
  algstatus_ = 0;
  clear_has_algstatus();
}
inline ::google::protobuf::int32 RT_TPS_OptOutput::algstatus() const {
  return algstatus_;
}
inline void RT_TPS_OptOutput::set_algstatus(::google::protobuf::int32 value) {
  set_has_algstatus();
  algstatus_ = value;
}

// -------------------------------------------------------------------

// RT_TPS_OptResultValue

// required string optUid = 1;
inline bool RT_TPS_OptResultValue::has_optuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_OptResultValue::set_has_optuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_OptResultValue::clear_has_optuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_OptResultValue::clear_optuid() {
  if (optuid_ != &::google::protobuf::internal::kEmptyString) {
    optuid_->clear();
  }
  clear_has_optuid();
}
inline const ::std::string& RT_TPS_OptResultValue::optuid() const {
  return *optuid_;
}
inline void RT_TPS_OptResultValue::set_optuid(const ::std::string& value) {
  set_has_optuid();
  if (optuid_ == &::google::protobuf::internal::kEmptyString) {
    optuid_ = new ::std::string;
  }
  optuid_->assign(value);
}
inline void RT_TPS_OptResultValue::set_optuid(const char* value) {
  set_has_optuid();
  if (optuid_ == &::google::protobuf::internal::kEmptyString) {
    optuid_ = new ::std::string;
  }
  optuid_->assign(value);
}
inline void RT_TPS_OptResultValue::set_optuid(const char* value, size_t size) {
  set_has_optuid();
  if (optuid_ == &::google::protobuf::internal::kEmptyString) {
    optuid_ = new ::std::string;
  }
  optuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_OptResultValue::mutable_optuid() {
  set_has_optuid();
  if (optuid_ == &::google::protobuf::internal::kEmptyString) {
    optuid_ = new ::std::string;
  }
  return optuid_;
}
inline ::std::string* RT_TPS_OptResultValue::release_optuid() {
  clear_has_optuid();
  if (optuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = optuid_;
    optuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required float resultValue = 2;
inline bool RT_TPS_OptResultValue::has_resultvalue() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_OptResultValue::set_has_resultvalue() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_OptResultValue::clear_has_resultvalue() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_OptResultValue::clear_resultvalue() {
  resultvalue_ = 0;
  clear_has_resultvalue();
}
inline float RT_TPS_OptResultValue::resultvalue() const {
  return resultvalue_;
}
inline void RT_TPS_OptResultValue::set_resultvalue(float value) {
  set_has_resultvalue();
  resultvalue_ = value;
}

// -------------------------------------------------------------------

// RT_TPS_EudValueList

// repeated .tps.proto.RT_TPS_OptResultValue eudValuelist = 1;
inline int RT_TPS_EudValueList::eudvaluelist_size() const {
  return eudvaluelist_.size();
}
inline void RT_TPS_EudValueList::clear_eudvaluelist() {
  eudvaluelist_.Clear();
}
inline const ::tps::proto::RT_TPS_OptResultValue& RT_TPS_EudValueList::eudvaluelist(int index) const {
  return eudvaluelist_.Get(index);
}
inline ::tps::proto::RT_TPS_OptResultValue* RT_TPS_EudValueList::mutable_eudvaluelist(int index) {
  return eudvaluelist_.Mutable(index);
}
inline ::tps::proto::RT_TPS_OptResultValue* RT_TPS_EudValueList::add_eudvaluelist() {
  return eudvaluelist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >&
RT_TPS_EudValueList::eudvaluelist() const {
  return eudvaluelist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >*
RT_TPS_EudValueList::mutable_eudvaluelist() {
  return &eudvaluelist_;
}

// -------------------------------------------------------------------

// RT_TPS_ObjectValueList

// repeated .tps.proto.RT_TPS_OptResultValue objectValuelist = 1;
inline int RT_TPS_ObjectValueList::objectvaluelist_size() const {
  return objectvaluelist_.size();
}
inline void RT_TPS_ObjectValueList::clear_objectvaluelist() {
  objectvaluelist_.Clear();
}
inline const ::tps::proto::RT_TPS_OptResultValue& RT_TPS_ObjectValueList::objectvaluelist(int index) const {
  return objectvaluelist_.Get(index);
}
inline ::tps::proto::RT_TPS_OptResultValue* RT_TPS_ObjectValueList::mutable_objectvaluelist(int index) {
  return objectvaluelist_.Mutable(index);
}
inline ::tps::proto::RT_TPS_OptResultValue* RT_TPS_ObjectValueList::add_objectvaluelist() {
  return objectvaluelist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >&
RT_TPS_ObjectValueList::objectvaluelist() const {
  return objectvaluelist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_OptResultValue >*
RT_TPS_ObjectValueList::mutable_objectvaluelist() {
  return &objectvaluelist_;
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

#endif  // PROTOBUF_rt_5ftps_5foptoutput_2eproto__INCLUDED
