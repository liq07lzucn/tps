// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_move_voi.proto

#ifndef PROTOBUF_rt_5ftps_5fmove_5fvoi_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fmove_5fvoi_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fmove_5fvoi_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fmove_5fvoi_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fmove_5fvoi_2eproto();

class RT_TPS_MOVE_VOI;

// ===================================================================

class RT_TPS_MOVE_VOI : public ::google::protobuf::Message {
 public:
  RT_TPS_MOVE_VOI();
  virtual ~RT_TPS_MOVE_VOI();
  
  RT_TPS_MOVE_VOI(const RT_TPS_MOVE_VOI& from);
  
  inline RT_TPS_MOVE_VOI& operator=(const RT_TPS_MOVE_VOI& from) {
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
  static const RT_TPS_MOVE_VOI& default_instance();
  
  void Swap(RT_TPS_MOVE_VOI* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_MOVE_VOI* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_MOVE_VOI& from);
  void MergeFrom(const RT_TPS_MOVE_VOI& from);
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
  
  // optional int32 windowType = 1;
  inline bool has_windowtype() const;
  inline void clear_windowtype();
  static const int kWindowTypeFieldNumber = 1;
  inline ::google::protobuf::int32 windowtype() const;
  inline void set_windowtype(::google::protobuf::int32 value);
  
  // optional string windowUid = 2;
  inline bool has_windowuid() const;
  inline void clear_windowuid();
  static const int kWindowUidFieldNumber = 2;
  inline const ::std::string& windowuid() const;
  inline void set_windowuid(const ::std::string& value);
  inline void set_windowuid(const char* value);
  inline void set_windowuid(const char* value, size_t size);
  inline ::std::string* mutable_windowuid();
  inline ::std::string* release_windowuid();
  
  // optional float precoordx = 3;
  inline bool has_precoordx() const;
  inline void clear_precoordx();
  static const int kPrecoordxFieldNumber = 3;
  inline float precoordx() const;
  inline void set_precoordx(float value);
  
  // optional float precoordy = 4;
  inline bool has_precoordy() const;
  inline void clear_precoordy();
  static const int kPrecoordyFieldNumber = 4;
  inline float precoordy() const;
  inline void set_precoordy(float value);
  
  // optional float curcoordx = 5;
  inline bool has_curcoordx() const;
  inline void clear_curcoordx();
  static const int kCurcoordxFieldNumber = 5;
  inline float curcoordx() const;
  inline void set_curcoordx(float value);
  
  // optional float curcoordy = 6;
  inline bool has_curcoordy() const;
  inline void clear_curcoordy();
  static const int kCurcoordyFieldNumber = 6;
  inline float curcoordy() const;
  inline void set_curcoordy(float value);
  
  // optional string voiuid = 7;
  inline bool has_voiuid() const;
  inline void clear_voiuid();
  static const int kVoiuidFieldNumber = 7;
  inline const ::std::string& voiuid() const;
  inline void set_voiuid(const ::std::string& value);
  inline void set_voiuid(const char* value);
  inline void set_voiuid(const char* value, size_t size);
  inline ::std::string* mutable_voiuid();
  inline ::std::string* release_voiuid();
  
  // optional float offsetx = 8;
  inline bool has_offsetx() const;
  inline void clear_offsetx();
  static const int kOffsetxFieldNumber = 8;
  inline float offsetx() const;
  inline void set_offsetx(float value);
  
  // optional float offsety = 9;
  inline bool has_offsety() const;
  inline void clear_offsety();
  static const int kOffsetyFieldNumber = 9;
  inline float offsety() const;
  inline void set_offsety(float value);
  
  // optional float offsetz = 10;
  inline bool has_offsetz() const;
  inline void clear_offsetz();
  static const int kOffsetzFieldNumber = 10;
  inline float offsetz() const;
  inline void set_offsetz(float value);
  
  // optional bool movedbyoff = 11;
  inline bool has_movedbyoff() const;
  inline void clear_movedbyoff();
  static const int kMovedbyoffFieldNumber = 11;
  inline bool movedbyoff() const;
  inline void set_movedbyoff(bool value);
  
  // optional bool isPanCurrentSlice = 12;
  inline bool has_ispancurrentslice() const;
  inline void clear_ispancurrentslice();
  static const int kIsPanCurrentSliceFieldNumber = 12;
  inline bool ispancurrentslice() const;
  inline void set_ispancurrentslice(bool value);
  
  // optional int32 mouseActionType = 13;
  inline bool has_mouseactiontype() const;
  inline void clear_mouseactiontype();
  static const int kMouseActionTypeFieldNumber = 13;
  inline ::google::protobuf::int32 mouseactiontype() const;
  inline void set_mouseactiontype(::google::protobuf::int32 value);
  
  // optional bool isShowWarning = 15;
  inline bool has_isshowwarning() const;
  inline void clear_isshowwarning();
  static const int kIsShowWarningFieldNumber = 15;
  inline bool isshowwarning() const;
  inline void set_isshowwarning(bool value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_MOVE_VOI)
 private:
  inline void set_has_windowtype();
  inline void clear_has_windowtype();
  inline void set_has_windowuid();
  inline void clear_has_windowuid();
  inline void set_has_precoordx();
  inline void clear_has_precoordx();
  inline void set_has_precoordy();
  inline void clear_has_precoordy();
  inline void set_has_curcoordx();
  inline void clear_has_curcoordx();
  inline void set_has_curcoordy();
  inline void clear_has_curcoordy();
  inline void set_has_voiuid();
  inline void clear_has_voiuid();
  inline void set_has_offsetx();
  inline void clear_has_offsetx();
  inline void set_has_offsety();
  inline void clear_has_offsety();
  inline void set_has_offsetz();
  inline void clear_has_offsetz();
  inline void set_has_movedbyoff();
  inline void clear_has_movedbyoff();
  inline void set_has_ispancurrentslice();
  inline void clear_has_ispancurrentslice();
  inline void set_has_mouseactiontype();
  inline void clear_has_mouseactiontype();
  inline void set_has_isshowwarning();
  inline void clear_has_isshowwarning();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* windowuid_;
  ::google::protobuf::int32 windowtype_;
  float precoordx_;
  float precoordy_;
  float curcoordx_;
  ::std::string* voiuid_;
  float curcoordy_;
  float offsetx_;
  float offsety_;
  float offsetz_;
  bool movedbyoff_;
  bool ispancurrentslice_;
  bool isshowwarning_;
  ::google::protobuf::int32 mouseactiontype_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(14 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fmove_5fvoi_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fmove_5fvoi_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fmove_5fvoi_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_MOVE_VOI* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_MOVE_VOI

// optional int32 windowType = 1;
inline bool RT_TPS_MOVE_VOI::has_windowtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_windowtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_MOVE_VOI::clear_has_windowtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_MOVE_VOI::clear_windowtype() {
  windowtype_ = 0;
  clear_has_windowtype();
}
inline ::google::protobuf::int32 RT_TPS_MOVE_VOI::windowtype() const {
  return windowtype_;
}
inline void RT_TPS_MOVE_VOI::set_windowtype(::google::protobuf::int32 value) {
  set_has_windowtype();
  windowtype_ = value;
}

// optional string windowUid = 2;
inline bool RT_TPS_MOVE_VOI::has_windowuid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_windowuid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_MOVE_VOI::clear_has_windowuid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_MOVE_VOI::clear_windowuid() {
  if (windowuid_ != &::google::protobuf::internal::kEmptyString) {
    windowuid_->clear();
  }
  clear_has_windowuid();
}
inline const ::std::string& RT_TPS_MOVE_VOI::windowuid() const {
  return *windowuid_;
}
inline void RT_TPS_MOVE_VOI::set_windowuid(const ::std::string& value) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(value);
}
inline void RT_TPS_MOVE_VOI::set_windowuid(const char* value) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(value);
}
inline void RT_TPS_MOVE_VOI::set_windowuid(const char* value, size_t size) {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  windowuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_MOVE_VOI::mutable_windowuid() {
  set_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    windowuid_ = new ::std::string;
  }
  return windowuid_;
}
inline ::std::string* RT_TPS_MOVE_VOI::release_windowuid() {
  clear_has_windowuid();
  if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = windowuid_;
    windowuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional float precoordx = 3;
inline bool RT_TPS_MOVE_VOI::has_precoordx() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_precoordx() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_MOVE_VOI::clear_has_precoordx() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_MOVE_VOI::clear_precoordx() {
  precoordx_ = 0;
  clear_has_precoordx();
}
inline float RT_TPS_MOVE_VOI::precoordx() const {
  return precoordx_;
}
inline void RT_TPS_MOVE_VOI::set_precoordx(float value) {
  set_has_precoordx();
  precoordx_ = value;
}

// optional float precoordy = 4;
inline bool RT_TPS_MOVE_VOI::has_precoordy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_precoordy() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_MOVE_VOI::clear_has_precoordy() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_MOVE_VOI::clear_precoordy() {
  precoordy_ = 0;
  clear_has_precoordy();
}
inline float RT_TPS_MOVE_VOI::precoordy() const {
  return precoordy_;
}
inline void RT_TPS_MOVE_VOI::set_precoordy(float value) {
  set_has_precoordy();
  precoordy_ = value;
}

// optional float curcoordx = 5;
inline bool RT_TPS_MOVE_VOI::has_curcoordx() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_curcoordx() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_MOVE_VOI::clear_has_curcoordx() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_MOVE_VOI::clear_curcoordx() {
  curcoordx_ = 0;
  clear_has_curcoordx();
}
inline float RT_TPS_MOVE_VOI::curcoordx() const {
  return curcoordx_;
}
inline void RT_TPS_MOVE_VOI::set_curcoordx(float value) {
  set_has_curcoordx();
  curcoordx_ = value;
}

// optional float curcoordy = 6;
inline bool RT_TPS_MOVE_VOI::has_curcoordy() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_curcoordy() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_MOVE_VOI::clear_has_curcoordy() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_MOVE_VOI::clear_curcoordy() {
  curcoordy_ = 0;
  clear_has_curcoordy();
}
inline float RT_TPS_MOVE_VOI::curcoordy() const {
  return curcoordy_;
}
inline void RT_TPS_MOVE_VOI::set_curcoordy(float value) {
  set_has_curcoordy();
  curcoordy_ = value;
}

// optional string voiuid = 7;
inline bool RT_TPS_MOVE_VOI::has_voiuid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_voiuid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_MOVE_VOI::clear_has_voiuid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_MOVE_VOI::clear_voiuid() {
  if (voiuid_ != &::google::protobuf::internal::kEmptyString) {
    voiuid_->clear();
  }
  clear_has_voiuid();
}
inline const ::std::string& RT_TPS_MOVE_VOI::voiuid() const {
  return *voiuid_;
}
inline void RT_TPS_MOVE_VOI::set_voiuid(const ::std::string& value) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(value);
}
inline void RT_TPS_MOVE_VOI::set_voiuid(const char* value) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(value);
}
inline void RT_TPS_MOVE_VOI::set_voiuid(const char* value, size_t size) {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  voiuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_MOVE_VOI::mutable_voiuid() {
  set_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    voiuid_ = new ::std::string;
  }
  return voiuid_;
}
inline ::std::string* RT_TPS_MOVE_VOI::release_voiuid() {
  clear_has_voiuid();
  if (voiuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = voiuid_;
    voiuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional float offsetx = 8;
inline bool RT_TPS_MOVE_VOI::has_offsetx() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_offsetx() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_MOVE_VOI::clear_has_offsetx() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_MOVE_VOI::clear_offsetx() {
  offsetx_ = 0;
  clear_has_offsetx();
}
inline float RT_TPS_MOVE_VOI::offsetx() const {
  return offsetx_;
}
inline void RT_TPS_MOVE_VOI::set_offsetx(float value) {
  set_has_offsetx();
  offsetx_ = value;
}

// optional float offsety = 9;
inline bool RT_TPS_MOVE_VOI::has_offsety() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_offsety() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_MOVE_VOI::clear_has_offsety() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_MOVE_VOI::clear_offsety() {
  offsety_ = 0;
  clear_has_offsety();
}
inline float RT_TPS_MOVE_VOI::offsety() const {
  return offsety_;
}
inline void RT_TPS_MOVE_VOI::set_offsety(float value) {
  set_has_offsety();
  offsety_ = value;
}

// optional float offsetz = 10;
inline bool RT_TPS_MOVE_VOI::has_offsetz() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_offsetz() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_MOVE_VOI::clear_has_offsetz() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_MOVE_VOI::clear_offsetz() {
  offsetz_ = 0;
  clear_has_offsetz();
}
inline float RT_TPS_MOVE_VOI::offsetz() const {
  return offsetz_;
}
inline void RT_TPS_MOVE_VOI::set_offsetz(float value) {
  set_has_offsetz();
  offsetz_ = value;
}

// optional bool movedbyoff = 11;
inline bool RT_TPS_MOVE_VOI::has_movedbyoff() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_movedbyoff() {
  _has_bits_[0] |= 0x00000400u;
}
inline void RT_TPS_MOVE_VOI::clear_has_movedbyoff() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void RT_TPS_MOVE_VOI::clear_movedbyoff() {
  movedbyoff_ = false;
  clear_has_movedbyoff();
}
inline bool RT_TPS_MOVE_VOI::movedbyoff() const {
  return movedbyoff_;
}
inline void RT_TPS_MOVE_VOI::set_movedbyoff(bool value) {
  set_has_movedbyoff();
  movedbyoff_ = value;
}

// optional bool isPanCurrentSlice = 12;
inline bool RT_TPS_MOVE_VOI::has_ispancurrentslice() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_ispancurrentslice() {
  _has_bits_[0] |= 0x00000800u;
}
inline void RT_TPS_MOVE_VOI::clear_has_ispancurrentslice() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void RT_TPS_MOVE_VOI::clear_ispancurrentslice() {
  ispancurrentslice_ = false;
  clear_has_ispancurrentslice();
}
inline bool RT_TPS_MOVE_VOI::ispancurrentslice() const {
  return ispancurrentslice_;
}
inline void RT_TPS_MOVE_VOI::set_ispancurrentslice(bool value) {
  set_has_ispancurrentslice();
  ispancurrentslice_ = value;
}

// optional int32 mouseActionType = 13;
inline bool RT_TPS_MOVE_VOI::has_mouseactiontype() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_mouseactiontype() {
  _has_bits_[0] |= 0x00001000u;
}
inline void RT_TPS_MOVE_VOI::clear_has_mouseactiontype() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void RT_TPS_MOVE_VOI::clear_mouseactiontype() {
  mouseactiontype_ = 0;
  clear_has_mouseactiontype();
}
inline ::google::protobuf::int32 RT_TPS_MOVE_VOI::mouseactiontype() const {
  return mouseactiontype_;
}
inline void RT_TPS_MOVE_VOI::set_mouseactiontype(::google::protobuf::int32 value) {
  set_has_mouseactiontype();
  mouseactiontype_ = value;
}

// optional bool isShowWarning = 15;
inline bool RT_TPS_MOVE_VOI::has_isshowwarning() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void RT_TPS_MOVE_VOI::set_has_isshowwarning() {
  _has_bits_[0] |= 0x00002000u;
}
inline void RT_TPS_MOVE_VOI::clear_has_isshowwarning() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void RT_TPS_MOVE_VOI::clear_isshowwarning() {
  isshowwarning_ = false;
  clear_has_isshowwarning();
}
inline bool RT_TPS_MOVE_VOI::isshowwarning() const {
  return isshowwarning_;
}
inline void RT_TPS_MOVE_VOI::set_isshowwarning(bool value) {
  set_has_isshowwarning();
  isshowwarning_ = value;
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

#endif  // PROTOBUF_rt_5ftps_5fmove_5fvoi_2eproto__INCLUDED
