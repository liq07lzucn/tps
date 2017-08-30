// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_ct2densitytablelist.proto

#ifndef PROTOBUF_rt_5ftps_5fct2densitytablelist_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fct2densitytablelist_2eproto__INCLUDED

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
#include "rt_tps_ct2densitytable.pb.h"
// @@protoc_insertion_point(includes)

namespace tps {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rt_5ftps_5fct2densitytablelist_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fct2densitytablelist_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fct2densitytablelist_2eproto();

class RT_TPS_CT2DensityTableList;

// ===================================================================

class RT_TPS_CT2DensityTableList : public ::google::protobuf::Message {
 public:
  RT_TPS_CT2DensityTableList();
  virtual ~RT_TPS_CT2DensityTableList();
  
  RT_TPS_CT2DensityTableList(const RT_TPS_CT2DensityTableList& from);
  
  inline RT_TPS_CT2DensityTableList& operator=(const RT_TPS_CT2DensityTableList& from) {
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
  static const RT_TPS_CT2DensityTableList& default_instance();
  
  void Swap(RT_TPS_CT2DensityTableList* other);
  
  // implements Message ----------------------------------------------
  
  RT_TPS_CT2DensityTableList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RT_TPS_CT2DensityTableList& from);
  void MergeFrom(const RT_TPS_CT2DensityTableList& from);
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
  
  // repeated .tps.proto.RT_TPS_CT2DensityTable tableList = 1;
  inline int tablelist_size() const;
  inline void clear_tablelist();
  static const int kTableListFieldNumber = 1;
  inline const ::tps::proto::RT_TPS_CT2DensityTable& tablelist(int index) const;
  inline ::tps::proto::RT_TPS_CT2DensityTable* mutable_tablelist(int index);
  inline ::tps::proto::RT_TPS_CT2DensityTable* add_tablelist();
  inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_CT2DensityTable >&
      tablelist() const;
  inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_CT2DensityTable >*
      mutable_tablelist();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_CT2DensityTableList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_CT2DensityTable > tablelist_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fct2densitytablelist_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fct2densitytablelist_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fct2densitytablelist_2eproto();
  
  void InitAsDefaultInstance();
  static RT_TPS_CT2DensityTableList* default_instance_;
};
// ===================================================================


// ===================================================================

// RT_TPS_CT2DensityTableList

// repeated .tps.proto.RT_TPS_CT2DensityTable tableList = 1;
inline int RT_TPS_CT2DensityTableList::tablelist_size() const {
  return tablelist_.size();
}
inline void RT_TPS_CT2DensityTableList::clear_tablelist() {
  tablelist_.Clear();
}
inline const ::tps::proto::RT_TPS_CT2DensityTable& RT_TPS_CT2DensityTableList::tablelist(int index) const {
  return tablelist_.Get(index);
}
inline ::tps::proto::RT_TPS_CT2DensityTable* RT_TPS_CT2DensityTableList::mutable_tablelist(int index) {
  return tablelist_.Mutable(index);
}
inline ::tps::proto::RT_TPS_CT2DensityTable* RT_TPS_CT2DensityTableList::add_tablelist() {
  return tablelist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_CT2DensityTable >&
RT_TPS_CT2DensityTableList::tablelist() const {
  return tablelist_;
}
inline ::google::protobuf::RepeatedPtrField< ::tps::proto::RT_TPS_CT2DensityTable >*
RT_TPS_CT2DensityTableList::mutable_tablelist() {
  return &tablelist_;
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

#endif  // PROTOBUF_rt_5ftps_5fct2densitytablelist_2eproto__INCLUDED
