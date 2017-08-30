// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_selectcontourslices.proto

#ifndef PROTOBUF_rt_5ftps_5fselectcontourslices_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fselectcontourslices_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fselectcontourslices_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fselectcontourslices_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fselectcontourslices_2eproto();

class RT_TPS_SELECT_CONTOUR_SLICES;

// ===================================================================

class RT_TPS_SELECT_CONTOUR_SLICES : public ::google::protobuf::Message {
 public:
  RT_TPS_SELECT_CONTOUR_SLICES();
  virtual ~RT_TPS_SELECT_CONTOUR_SLICES();
  
  RT_TPS_SELECT_CONTOUR_SLICES(const RT_TPS_SELECT_CONTOUR_SLICES& from);
  
  inline RT_TPS_SELECT_CONTOUR_SLICES& operator=(const RT_TPS_SELECT_CONTOUR_SLICES& from) {
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
  static const RT_TPS_SELECT_CONTOUR_SLICES& default_instance();
  
  void Swap(RT_TPS_SELECT_CONTOUR_SLICES* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_SELECT_CONTOUR_SLICES* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_SELECT_CONTOUR_SLICES& from);
  void MergeFrom(const RT_TPS_SELECT_CONTOUR_SLICES& from);
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
  
  // required double x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline double x() const;
  inline void set_x(double value);
  
  // required double y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline double y() const;
  inline void set_y(double value);
  
  // required int32 mouseActionType = 3;
  inline bool has_mouseactiontype() const;
  inline void clear_mouseactiontype();
  static const int kMouseActionTypeFieldNumber = 3;
  inline ::google::protobuf::int32 mouseactiontype() const;
  inline void set_mouseactiontype(::google::protobuf::int32 value);
  
  // required int32 lastMouseActionType = 4;
  inline bool has_lastmouseactiontype() const;
  inline void clear_lastmouseactiontype();
  static const int kLastMouseActionTypeFieldNumber = 4;
  inline ::google::protobuf::int32 lastmouseactiontype() const;
  inline void set_lastmouseactiontype(::google::protobuf::int32 value);
  
  // required int32 windowType = 5;
  inline bool has_windowtype() const;
  inline void clear_windowtype();
  static const int kWindowTypeFieldNumber = 5;
  inline ::google::protobuf::int32 windowtype() const;
  inline void set_windowtype(::google::protobuf::int32 value);
  
  // required string windowUid = 6;
  inline bool has_windowuid() const;
  inline void clear_windowuid();
  static const int kWindowUidFieldNumber = 6;
  inline const ::std::string& windowuid() const;
  inline void set_windowuid(const ::std::string& value);
  inline void set_windowuid(const char* value);
  inline void set_windowuid(const char* value, size_t size);
  inline ::std::string* mutable_windowuid();
  inline ::std::string* release_windowuid();
  
  // required string voiUID = 7;
  inline bool has_voiuid() const;
  inline void clear_voiuid();
  static const int kVoiUIDFieldNumber = 7;
  inline const ::std::string& voiuid() const;
  inline void set_voiuid(const ::std::string& value);
  inline void set_voiuid(const char* value);
  inline void set_voiuid(const char* value, size_t size);
  inline ::std::string* mutable_voiuid();
  inline ::std::string* release_voiuid();
  
  // optional bool isEditingStarted = 8;
  inline bool has_iseditingstarted() const;
  inline void clear_iseditingstarted();
  static const int kIsEditingStartedFieldNumber = 8;
  inline bool iseditingstarted() const;
  inline void set_iseditingstarted(bool value);
  
  // optional int32 firstSlice = 9;
  inline bool has_firstslice() const;
  inline void clear_firstslice();
  static const int kFirstSliceFieldNumber = 9;
  inline ::google::protobuf::int32 firstslice() const;
  inline void set_firstslice(::google::protobuf::int32 value);
  
  // optional int32 secondSlice = 10;
  inline bool has_secondslice() const;
  inline void clear_secondslice();
  static const int kSecondSliceFieldNumber = 10;
  inline ::google::protobuf::int32 secondslice() const;
  inline void set_secondslice(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_SELECT_CONTOUR_SLICES)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_mouseactiontype();
  inline void clear_has_mouseactiontype();
  inline void set_has_lastmouseactiontype();
  inline void clear_has_lastmouseactiontype();
  inline void set_has_windowtype();
  inline void clear_has_windowtype();
  inline void set_has_windowuid();
  inline void clear_has_windowuid();
  inline void set_has_voiuid();
  inline void clear_has_voiuid();
  inline void set_has_iseditingstarted();
  inline void clear_has_iseditingstarted();
  inline void set_has_firstslice();
  inline void clear_has_firstslice();
  inline void set_has_secondslice();
  inline void clear_has_secondslice();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  double x_;
  double y_;
  ::google::protobuf::int32 mouseactiontype_;
  ::google::protobuf::int32 lastmouseactiontype_;
  ::std::string* windowuid_;
  ::google::protobuf::int32 windowtype_;
  bool iseditingstarted_;
  ::std::string* voiuid_;
  ::google::protobuf::int32 firstslice_;
  ::google::protobuf::int32 secondslice_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fselectcontourslices_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fselectcontourslices_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fselectcontourslices_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_SELECT_CONTOUR_SLICES* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_SELECT_CONTOUR_SLICES

// required double x = 1;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double RT_TPS_SELECT_CONTOUR_SLICES::x() const {
  return x_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_x(double value) {
  set_has_x();
  x_ = value;
}

// required double y = 2;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double RT_TPS_SELECT_CONTOUR_SLICES::y() const {
  return y_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_y(double value) {
  set_has_y();
  y_ = value;
}

// required int32 mouseActionType = 3;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_mouseactiontype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_mouseactiontype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_mouseactiontype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_mouseactiontype() {
  mouseactiontype_ = 0;
  clear_has_mouseactiontype();
}
inline ::google::protobuf::int32 RT_TPS_SELECT_CONTOUR_SLICES::mouseactiontype() const {
  return mouseactiontype_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_mouseactiontype(::google::protobuf::int32 value) {
  set_has_mouseactiontype();
  mouseactiontype_ = value;
}

// required int32 lastMouseActionType = 4;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_lastmouseactiontype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_lastmouseactiontype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_lastmouseactiontype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_lastmouseactiontype() {
  lastmouseactiontype_ = 0;
  clear_has_lastmouseactiontype();
}
inline ::google::protobuf::int32 RT_TPS_SELECT_CONTOUR_SLICES::lastmouseactiontype() const {
  return lastmouseactiontype_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_lastmouseactiontype(::google::protobuf::int32 value) {
  set_has_lastmouseactiontype();
  lastmouseactiontype_ = value;
}

// required int32 windowType = 5;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_windowtype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_windowtype() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_windowtype() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_windowtype() {
  windowtype_ = 0;
  clear_has_windowtype();
}
inline ::google::protobuf::int32 RT_TPS_SELECT_CONTOUR_SLICES::windowtype() const {
  return windowtype_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_windowtype(::google::protobuf::int32 value) {
  set_has_windowtype();
  windowtype_ = value;
}

// required string windowUid = 6;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_windowuid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_windowuid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_windowuid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_windowuid() {
  if (windowuid_ != &::google::protobuf::internal::kEmptyString) {
    windowuid_->clear();
  }
  clear_has_windowuid();
}
inline const ::std::string& RT_TPS_SELECT_CONTOUR_SLICES::windowuid() const {
  return *windowuid_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_windowuid(const ::std::string& value) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(value);
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_windowuid(const char* value) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(value);
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_windowuid(const char* value, size_t size) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_SELECT_CONTOUR_SLICES::mutable_windowuid() {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  return windowuid_;
}
inline ::std::string* RT_TPS_SELECT_CONTOUR_SLICES::release_windowuid() {
  clear_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = windowuid_;
    windowuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string voiUID = 7;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_voiuid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_voiuid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_voiuid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_voiuid() {
  if (voiuid_ != &::google::protobuf::internal::kEmptyString) {
    voiuid_->clear();
  }
  clear_has_voiuid();
}
inline const ::std::string& RT_TPS_SELECT_CONTOUR_SLICES::voiuid() const {
  return *voiuid_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_voiuid(const ::std::string& value) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(value);
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_voiuid(const char* value) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(value);
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_voiuid(const char* value, size_t size) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_SELECT_CONTOUR_SLICES::mutable_voiuid() {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  return voiuid_;
}
inline ::std::string* RT_TPS_SELECT_CONTOUR_SLICES::release_voiuid() {
  clear_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = voiuid_;
    voiuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool isEditingStarted = 8;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_iseditingstarted() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_iseditingstarted() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_iseditingstarted() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_iseditingstarted() {
  iseditingstarted_ = false;
  clear_has_iseditingstarted();
}
inline bool RT_TPS_SELECT_CONTOUR_SLICES::iseditingstarted() const {
  return iseditingstarted_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_iseditingstarted(bool value) {
  set_has_iseditingstarted();
  iseditingstarted_ = value;
}

// optional int32 firstSlice = 9;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_firstslice() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_firstslice() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_firstslice() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_firstslice() {
  firstslice_ = 0;
  clear_has_firstslice();
}
inline ::google::protobuf::int32 RT_TPS_SELECT_CONTOUR_SLICES::firstslice() const {
  return firstslice_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_firstslice(::google::protobuf::int32 value) {
  set_has_firstslice();
  firstslice_ = value;
}

// optional int32 secondSlice = 10;
inline bool RT_TPS_SELECT_CONTOUR_SLICES::has_secondslice() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_has_secondslice() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_has_secondslice() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::clear_secondslice() {
  secondslice_ = 0;
  clear_has_secondslice();
}
inline ::google::protobuf::int32 RT_TPS_SELECT_CONTOUR_SLICES::secondslice() const {
  return secondslice_;
}
inline void RT_TPS_SELECT_CONTOUR_SLICES::set_secondslice(::google::protobuf::int32 value) {
  set_has_secondslice();
  secondslice_ = value;
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

#endif  // PROTOBUF_rt_5ftps_5fselectcontourslices_2eproto__INCLUDED