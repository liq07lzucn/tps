// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_measureangle.proto

#ifndef PROTOBUF_rt_5ftps_5fmeasureangle_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fmeasureangle_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fmeasureangle_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fmeasureangle_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fmeasureangle_2eproto();

class RT_TPS_MEASURE_ANGLE;
class AnglePoint;
class AnglePointsList;

enum RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE {
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_NONE_MOUSE_ACTION_TYPE = -1,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_UP = 1,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_MOVE = 2,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DOWN = 3,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DRAG = 4,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DOUBLE_CLICK = 5,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_RIGHT_CLICK = 6,
  RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_EMPTY = 7
};
bool RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_IsValid(int value);
const RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_MIN = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_NONE_MOUSE_ACTION_TYPE;
const RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_MAX = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_EMPTY;
const int RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_ARRAYSIZE = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_descriptor();
inline const ::std::string& RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_Name(RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_descriptor(), value);
}
inline bool RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_Parse(
    const ::std::string& name, RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE>(
    RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_descriptor(), name, value);
}
// ===================================================================

class RT_TPS_MEASURE_ANGLE : public ::google::protobuf::Message {
 public:
  RT_TPS_MEASURE_ANGLE();
  virtual ~RT_TPS_MEASURE_ANGLE();
  
  RT_TPS_MEASURE_ANGLE(const RT_TPS_MEASURE_ANGLE& from);
  
  inline RT_TPS_MEASURE_ANGLE& operator=(const RT_TPS_MEASURE_ANGLE& from) {
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
  static const RT_TPS_MEASURE_ANGLE& default_instance();
  
  void Swap(RT_TPS_MEASURE_ANGLE* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_MEASURE_ANGLE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_MEASURE_ANGLE& from);
  void MergeFrom(const RT_TPS_MEASURE_ANGLE& from);
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
  
  typedef RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE MOUSE_ACTION_TYPE;
  static const MOUSE_ACTION_TYPE NONE_MOUSE_ACTION_TYPE = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_NONE_MOUSE_ACTION_TYPE;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_UP = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_UP;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_MOVE = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_MOVE;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_DOWN = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DOWN;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_DRAG = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DRAG;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_DOUBLE_CLICK = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_DOUBLE_CLICK;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_RIGHT_CLICK = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_RIGHT_CLICK;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_EMPTY = RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_EMPTY;
  static inline bool MOUSE_ACTION_TYPE_IsValid(int value) {
    return RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_IsValid(value);
  }
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_TYPE_MIN =
    RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_MIN;
  static const MOUSE_ACTION_TYPE MOUSE_ACTION_TYPE_MAX =
    RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_MAX;
  static const int MOUSE_ACTION_TYPE_ARRAYSIZE =
    RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_MOUSE_ACTION_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MOUSE_ACTION_TYPE_descriptor() {
    return RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_descriptor();
  }
  static inline const ::std::string& MOUSE_ACTION_TYPE_Name(MOUSE_ACTION_TYPE value) {
    return RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_Name(value);
  }
  static inline bool MOUSE_ACTION_TYPE_Parse(const ::std::string& name,
      MOUSE_ACTION_TYPE* value) {
    return RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required int32 viewerControlID = 1;
  inline bool has_viewercontrolid() const;
  inline void clear_viewercontrolid();
  static const int kViewerControlIDFieldNumber = 1;
  inline ::google::protobuf::int32 viewercontrolid() const;
  inline void set_viewercontrolid(::google::protobuf::int32 value);
  
  // optional int32 cellID = 2;
  inline bool has_cellid() const;
  inline void clear_cellid();
  static const int kCellIDFieldNumber = 2;
  inline ::google::protobuf::int32 cellid() const;
  inline void set_cellid(::google::protobuf::int32 value);
  
  // optional .tps.proto.AnglePointsList m_AnglePoints = 3;
  inline bool has_m_anglepoints() const;
  inline void clear_m_anglepoints();
  static const int kMAnglePointsFieldNumber = 3;
  inline const ::tps::proto::AnglePointsList& m_anglepoints() const;
  inline ::tps::proto::AnglePointsList* mutable_m_anglepoints();
  inline ::tps::proto::AnglePointsList* release_m_anglepoints();
  
  // required float m_fCursorX = 4;
  inline bool has_m_fcursorx() const;
  inline void clear_m_fcursorx();
  static const int kMFCursorXFieldNumber = 4;
  inline float m_fcursorx() const;
  inline void set_m_fcursorx(float value);
  
  // required float m_fCursorY = 5;
  inline bool has_m_fcursory() const;
  inline void clear_m_fcursory();
  static const int kMFCursorYFieldNumber = 5;
  inline float m_fcursory() const;
  inline void set_m_fcursory(float value);
  
  // optional string curImageUid = 11;
  inline bool has_curimageuid() const;
  inline void clear_curimageuid();
  static const int kCurImageUidFieldNumber = 11;
  inline const ::std::string& curimageuid() const;
  inline void set_curimageuid(const ::std::string& value);
  inline void set_curimageuid(const char* value);
  inline void set_curimageuid(const char* value, size_t size);
  inline ::std::string* mutable_curimageuid();
  inline ::std::string* release_curimageuid();
  
  // optional .tps.proto.RT_TPS_MEASURE_ANGLE.MOUSE_ACTION_TYPE mouseactiontype = 13;
  inline bool has_mouseactiontype() const;
  inline void clear_mouseactiontype();
  static const int kMouseactiontypeFieldNumber = 13;
  inline ::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE mouseactiontype() const;
  inline void set_mouseactiontype(::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE value);
  
  // required bool actionStarted = 14;
  inline bool has_actionstarted() const;
  inline void clear_actionstarted();
  static const int kActionStartedFieldNumber = 14;
  inline bool actionstarted() const;
  inline void set_actionstarted(bool value);
  
  // required bool firstSideDone = 15;
  inline bool has_firstsidedone() const;
  inline void clear_firstsidedone();
  static const int kFirstSideDoneFieldNumber = 15;
  inline bool firstsidedone() const;
  inline void set_firstsidedone(bool value);
  
  // required bool secondSideDone = 16;
  inline bool has_secondsidedone() const;
  inline void clear_secondsidedone();
  static const int kSecondSideDoneFieldNumber = 16;
  inline bool secondsidedone() const;
  inline void set_secondsidedone(bool value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_MEASURE_ANGLE)
 private:
  inline void set_has_viewercontrolid();
  inline void clear_has_viewercontrolid();
  inline void set_has_cellid();
  inline void clear_has_cellid();
  inline void set_has_m_anglepoints();
  inline void clear_has_m_anglepoints();
  inline void set_has_m_fcursorx();
  inline void clear_has_m_fcursorx();
  inline void set_has_m_fcursory();
  inline void clear_has_m_fcursory();
  inline void set_has_curimageuid();
  inline void clear_has_curimageuid();
  inline void set_has_mouseactiontype();
  inline void clear_has_mouseactiontype();
  inline void set_has_actionstarted();
  inline void clear_has_actionstarted();
  inline void set_has_firstsidedone();
  inline void clear_has_firstsidedone();
  inline void set_has_secondsidedone();
  inline void clear_has_secondsidedone();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 viewercontrolid_;
  ::google::protobuf::int32 cellid_;
  ::tps::proto::AnglePointsList* m_anglepoints_;
  float m_fcursorx_;
  float m_fcursory_;
  ::std::string* curimageuid_;
  int mouseactiontype_;
  bool actionstarted_;
  bool firstsidedone_;
  bool secondsidedone_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fmeasureangle_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_MEASURE_ANGLE* default_instance_;
};
// -------------------------------------------------------------------

class AnglePoint : public ::google::protobuf::Message {
 public:
  AnglePoint();
  virtual ~AnglePoint();
  
  AnglePoint(const AnglePoint& from);
  
  inline AnglePoint& operator=(const AnglePoint& from) {
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
  static const AnglePoint& default_instance();
  
  void Swap(AnglePoint* other);
  
  // implements Message ----------------------------------------------
  
  AnglePoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AnglePoint& from);
  void MergeFrom(const AnglePoint& from);
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
  
  // optional float m_X = 1;
  inline bool has_m_x() const;
  inline void clear_m_x();
  static const int kMXFieldNumber = 1;
  inline float m_x() const;
  inline void set_m_x(float value);
  
  // optional float m_Y = 2;
  inline bool has_m_y() const;
  inline void clear_m_y();
  static const int kMYFieldNumber = 2;
  inline float m_y() const;
  inline void set_m_y(float value);
  
  // @@protoc_insertion_point(class_scope:tps.proto.AnglePoint)
 private:
  inline void set_has_m_x();
  inline void clear_has_m_x();
  inline void set_has_m_y();
  inline void clear_has_m_y();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  float m_x_;
  float m_y_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fmeasureangle_2eproto();
  
  void InitAsDefaultInstance();
  static AnglePoint* default_instance_;
};
// -------------------------------------------------------------------

class AnglePointsList : public ::google::protobuf::Message {
 public:
  AnglePointsList();
  virtual ~AnglePointsList();
  
  AnglePointsList(const AnglePointsList& from);
  
  inline AnglePointsList& operator=(const AnglePointsList& from) {
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
  static const AnglePointsList& default_instance();
  
  void Swap(AnglePointsList* other);
  
  // implements Message ----------------------------------------------
  
  AnglePointsList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AnglePointsList& from);
  void MergeFrom(const AnglePointsList& from);
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
  
  // repeated .tps.proto.AnglePoint mAnglePoints = 1;
  inline int manglepoints_size() const;
  inline void clear_manglepoints();
  static const int kMAnglePointsFieldNumber = 1;
  inline const ::tps::proto::AnglePoint& manglepoints(int index) const;
  inline ::tps::proto::AnglePoint* mutable_manglepoints(int index);
  inline ::tps::proto::AnglePoint* add_manglepoints();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::AnglePoint >&
      manglepoints() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::AnglePoint >*
      mutable_manglepoints();
  
  // @@protoc_insertion_point(class_scope:tps.proto.AnglePointsList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::AnglePoint > manglepoints_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fmeasureangle_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fmeasureangle_2eproto();
  
  void InitAsDefaultInstance();
  static AnglePointsList* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_MEASURE_ANGLE

// required int32 viewerControlID = 1;
inline bool RT_TPS_MEASURE_ANGLE::has_viewercontrolid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_viewercontrolid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_viewercontrolid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_viewercontrolid() {
  viewercontrolid_ = 0;
  clear_has_viewercontrolid();
}
inline ::google::protobuf::int32 RT_TPS_MEASURE_ANGLE::viewercontrolid() const {
  return viewercontrolid_;
}
inline void RT_TPS_MEASURE_ANGLE::set_viewercontrolid(::google::protobuf::int32 value) {
  set_has_viewercontrolid();
  viewercontrolid_ = value;
}

// optional int32 cellID = 2;
inline bool RT_TPS_MEASURE_ANGLE::has_cellid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_cellid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_cellid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_cellid() {
  cellid_ = 0;
  clear_has_cellid();
}
inline ::google::protobuf::int32 RT_TPS_MEASURE_ANGLE::cellid() const {
  return cellid_;
}
inline void RT_TPS_MEASURE_ANGLE::set_cellid(::google::protobuf::int32 value) {
  set_has_cellid();
  cellid_ = value;
}

// optional .tps.proto.AnglePointsList m_AnglePoints = 3;
inline bool RT_TPS_MEASURE_ANGLE::has_m_anglepoints() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_m_anglepoints() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_m_anglepoints() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_m_anglepoints() {
  if (m_anglepoints_ != NULL) m_anglepoints_->::tps::proto::AnglePointsList::Clear();
  clear_has_m_anglepoints();
}
inline const ::tps::proto::AnglePointsList& RT_TPS_MEASURE_ANGLE::m_anglepoints() const {
  return m_anglepoints_ != NULL ? *m_anglepoints_ : *default_instance_->m_anglepoints_;
}
inline ::tps::proto::AnglePointsList* RT_TPS_MEASURE_ANGLE::mutable_m_anglepoints() {
  set_has_m_anglepoints();
  if (m_anglepoints_ == NULL) m_anglepoints_ = new ::tps::proto::AnglePointsList;
  return m_anglepoints_;
}
inline ::tps::proto::AnglePointsList* RT_TPS_MEASURE_ANGLE::release_m_anglepoints() {
  clear_has_m_anglepoints();
  ::tps::proto::AnglePointsList* temp = m_anglepoints_;
  m_anglepoints_ = NULL;
  return temp;
}

// required float m_fCursorX = 4;
inline bool RT_TPS_MEASURE_ANGLE::has_m_fcursorx() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_m_fcursorx() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_m_fcursorx() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_m_fcursorx() {
  m_fcursorx_ = 0;
  clear_has_m_fcursorx();
}
inline float RT_TPS_MEASURE_ANGLE::m_fcursorx() const {
  return m_fcursorx_;
}
inline void RT_TPS_MEASURE_ANGLE::set_m_fcursorx(float value) {
  set_has_m_fcursorx();
  m_fcursorx_ = value;
}

// required float m_fCursorY = 5;
inline bool RT_TPS_MEASURE_ANGLE::has_m_fcursory() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_m_fcursory() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_m_fcursory() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_m_fcursory() {
  m_fcursory_ = 0;
  clear_has_m_fcursory();
}
inline float RT_TPS_MEASURE_ANGLE::m_fcursory() const {
  return m_fcursory_;
}
inline void RT_TPS_MEASURE_ANGLE::set_m_fcursory(float value) {
  set_has_m_fcursory();
  m_fcursory_ = value;
}

// optional string curImageUid = 11;
inline bool RT_TPS_MEASURE_ANGLE::has_curimageuid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_curimageuid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_curimageuid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_curimageuid() {
  if (curimageuid_ != &::google::protobuf::internal::kEmptyString) {
    curimageuid_->clear();
  }
  clear_has_curimageuid();
}
inline const ::std::string& RT_TPS_MEASURE_ANGLE::curimageuid() const {
  return *curimageuid_;
}
inline void RT_TPS_MEASURE_ANGLE::set_curimageuid(const ::std::string& value) {
  set_has_curimageuid();
  if (curimageuid_ == &::google::protobuf::internal::kEmptyString) {
    curimageuid_ = new ::std::string;
  }
  curimageuid_->assign(value);
}
inline void RT_TPS_MEASURE_ANGLE::set_curimageuid(const char* value) {
  set_has_curimageuid();
  if (curimageuid_ == &::google::protobuf::internal::kEmptyString) {
    curimageuid_ = new ::std::string;
  }
  curimageuid_->assign(value);
}
inline void RT_TPS_MEASURE_ANGLE::set_curimageuid(const char* value, size_t size) {
  set_has_curimageuid();
  if (curimageuid_ == &::google::protobuf::internal::kEmptyString) {
    curimageuid_ = new ::std::string;
  }
  curimageuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RT_TPS_MEASURE_ANGLE::mutable_curimageuid() {
  set_has_curimageuid();
  if (curimageuid_ == &::google::protobuf::internal::kEmptyString) {
    curimageuid_ = new ::std::string;
  }
  return curimageuid_;
}
inline ::std::string* RT_TPS_MEASURE_ANGLE::release_curimageuid() {
  clear_has_curimageuid();
  if (curimageuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = curimageuid_;
    curimageuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .tps.proto.RT_TPS_MEASURE_ANGLE.MOUSE_ACTION_TYPE mouseactiontype = 13;
inline bool RT_TPS_MEASURE_ANGLE::has_mouseactiontype() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_mouseactiontype() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_mouseactiontype() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_mouseactiontype() {
  mouseactiontype_ = -1;
  clear_has_mouseactiontype();
}
inline ::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE RT_TPS_MEASURE_ANGLE::mouseactiontype() const {
  return static_cast< ::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE >(mouseactiontype_);
}
inline void RT_TPS_MEASURE_ANGLE::set_mouseactiontype(::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE value) {
  GOOGLE_DCHECK(::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_IsValid(value));
  set_has_mouseactiontype();
  mouseactiontype_ = value;
}

// required bool actionStarted = 14;
inline bool RT_TPS_MEASURE_ANGLE::has_actionstarted() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_actionstarted() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_actionstarted() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_actionstarted() {
  actionstarted_ = false;
  clear_has_actionstarted();
}
inline bool RT_TPS_MEASURE_ANGLE::actionstarted() const {
  return actionstarted_;
}
inline void RT_TPS_MEASURE_ANGLE::set_actionstarted(bool value) {
  set_has_actionstarted();
  actionstarted_ = value;
}

// required bool firstSideDone = 15;
inline bool RT_TPS_MEASURE_ANGLE::has_firstsidedone() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_firstsidedone() {
  _has_bits_[0] |= 0x00000100u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_firstsidedone() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_firstsidedone() {
  firstsidedone_ = false;
  clear_has_firstsidedone();
}
inline bool RT_TPS_MEASURE_ANGLE::firstsidedone() const {
  return firstsidedone_;
}
inline void RT_TPS_MEASURE_ANGLE::set_firstsidedone(bool value) {
  set_has_firstsidedone();
  firstsidedone_ = value;
}

// required bool secondSideDone = 16;
inline bool RT_TPS_MEASURE_ANGLE::has_secondsidedone() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RT_TPS_MEASURE_ANGLE::set_has_secondsidedone() {
  _has_bits_[0] |= 0x00000200u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_has_secondsidedone() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void RT_TPS_MEASURE_ANGLE::clear_secondsidedone() {
  secondsidedone_ = false;
  clear_has_secondsidedone();
}
inline bool RT_TPS_MEASURE_ANGLE::secondsidedone() const {
  return secondsidedone_;
}
inline void RT_TPS_MEASURE_ANGLE::set_secondsidedone(bool value) {
  set_has_secondsidedone();
  secondsidedone_ = value;
}

// -------------------------------------------------------------------

// AnglePoint

// optional float m_X = 1;
inline bool AnglePoint::has_m_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AnglePoint::set_has_m_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AnglePoint::clear_has_m_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AnglePoint::clear_m_x() {
  m_x_ = 0;
  clear_has_m_x();
}
inline float AnglePoint::m_x() const {
  return m_x_;
}
inline void AnglePoint::set_m_x(float value) {
  set_has_m_x();
  m_x_ = value;
}

// optional float m_Y = 2;
inline bool AnglePoint::has_m_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AnglePoint::set_has_m_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AnglePoint::clear_has_m_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AnglePoint::clear_m_y() {
  m_y_ = 0;
  clear_has_m_y();
}
inline float AnglePoint::m_y() const {
  return m_y_;
}
inline void AnglePoint::set_m_y(float value) {
  set_has_m_y();
  m_y_ = value;
}

// -------------------------------------------------------------------

// AnglePointsList

// repeated .tps.proto.AnglePoint mAnglePoints = 1;
inline int AnglePointsList::manglepoints_size() const {
  return manglepoints_.size();
}
inline void AnglePointsList::clear_manglepoints() {
  manglepoints_.Clear();
}
inline const ::tps::proto::AnglePoint& AnglePointsList::manglepoints(int index) const {
  return manglepoints_.Get(index);
}
inline ::tps::proto::AnglePoint* AnglePointsList::mutable_manglepoints(int index) {
  return manglepoints_.Mutable(index);
}
inline ::tps::proto::AnglePoint* AnglePointsList::add_manglepoints() {
  return manglepoints_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::AnglePoint >&
AnglePointsList::manglepoints() const {
  return manglepoints_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::AnglePoint >*
AnglePointsList::mutable_manglepoints() {
  return &manglepoints_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace tps

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE>() {
  return ::tps::proto::RT_TPS_MEASURE_ANGLE_MOUSE_ACTION_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rt_5ftps_5fmeasureangle_2eproto__INCLUDED
