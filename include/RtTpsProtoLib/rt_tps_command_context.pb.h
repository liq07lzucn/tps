// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_command_context.proto

#ifndef PROTOBUF_rt_5ftps_5fcommand_5fcontext_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fcommand_5fcontext_2eproto__INCLUDED

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
void  protobuf_AddDesc_rt_5ftps_5fcommand_5fcontext_2eproto();
void protobuf_AssignDesc_rt_5ftps_5fcommand_5fcontext_2eproto();
void protobuf_ShutdownFile_rt_5ftps_5fcommand_5fcontext_2eproto();

class RtTpsCommandContext;

// ===================================================================

class RtTpsCommandContext : public ::google::protobuf::Message {
 public:
  RtTpsCommandContext();
  virtual ~RtTpsCommandContext();
  
  RtTpsCommandContext(const RtTpsCommandContext& from);
  
  inline RtTpsCommandContext& operator=(const RtTpsCommandContext& from) {
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
  static const RtTpsCommandContext& default_instance();
  
  void Swap(RtTpsCommandContext* other);
  
  // implements Message ----------------------------------------------
  
  RtTpsCommandContext* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RtTpsCommandContext& from);
  void MergeFrom(const RtTpsCommandContext& from);
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
  
  // required int32 command_id = 1;
  inline bool has_command_id() const;
  inline void clear_command_id();
  static const int kCommandIdFieldNumber = 1;
  inline ::google::protobuf::int32 command_id() const;
  inline void set_command_id(::google::protobuf::int32 value);
  
  // optional string sent_data = 2;
  inline bool has_sent_data() const;
  inline void clear_sent_data();
  static const int kSentDataFieldNumber = 2;
  inline const ::std::string& sent_data() const;
  inline void set_sent_data(const ::std::string& value);
  inline void set_sent_data(const char* value);
  inline void set_sent_data(const char* value, size_t size);
  inline ::std::string* mutable_sent_data();
  inline ::std::string* release_sent_data();
  
  // optional string receiver = 3;
  inline bool has_receiver() const;
  inline void clear_receiver();
  static const int kReceiverFieldNumber = 3;
  inline const ::std::string& receiver() const;
  inline void set_receiver(const ::std::string& value);
  inline void set_receiver(const char* value);
  inline void set_receiver(const char* value, size_t size);
  inline ::std::string* mutable_receiver();
  inline ::std::string* release_receiver();
  
  // optional string sender = 4;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 4;
  inline const ::std::string& sender() const;
  inline void set_sender(const ::std::string& value);
  inline void set_sender(const char* value);
  inline void set_sender(const char* value, size_t size);
  inline ::std::string* mutable_sender();
  inline ::std::string* release_sender();
  
  // optional string reserved = 5;
  inline bool has_reserved() const;
  inline void clear_reserved();
  static const int kReservedFieldNumber = 5;
  inline const ::std::string& reserved() const;
  inline void set_reserved(const ::std::string& value);
  inline void set_reserved(const char* value);
  inline void set_reserved(const char* value, size_t size);
  inline ::std::string* mutable_reserved();
  inline ::std::string* release_reserved();
  
  // @@protoc_insertion_point(class_scope:tps.proto.RtTpsCommandContext)
 private:
  inline void set_has_command_id();
  inline void clear_has_command_id();
  inline void set_has_sent_data();
  inline void clear_has_sent_data();
  inline void set_has_receiver();
  inline void clear_has_receiver();
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_reserved();
  inline void clear_has_reserved();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* sent_data_;
  ::std::string* receiver_;
  ::std::string* sender_;
  ::std::string* reserved_;
  ::google::protobuf::int32 command_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_rt_5ftps_5fcommand_5fcontext_2eproto();
  friend void protobuf_AssignDesc_rt_5ftps_5fcommand_5fcontext_2eproto();
  friend void protobuf_ShutdownFile_rt_5ftps_5fcommand_5fcontext_2eproto();
  
  void InitAsDefaultInstance();
  static RtTpsCommandContext* default_instance_;
};
// ===================================================================


// ===================================================================

// RtTpsCommandContext

// required int32 command_id = 1;
inline bool RtTpsCommandContext::has_command_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RtTpsCommandContext::set_has_command_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RtTpsCommandContext::clear_has_command_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RtTpsCommandContext::clear_command_id() {
  command_id_ = 0;
  clear_has_command_id();
}
inline ::google::protobuf::int32 RtTpsCommandContext::command_id() const {
  return command_id_;
}
inline void RtTpsCommandContext::set_command_id(::google::protobuf::int32 value) {
  set_has_command_id();
  command_id_ = value;
}

// optional string sent_data = 2;
inline bool RtTpsCommandContext::has_sent_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RtTpsCommandContext::set_has_sent_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RtTpsCommandContext::clear_has_sent_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RtTpsCommandContext::clear_sent_data() {
  if (sent_data_ != &::google::protobuf::internal::kEmptyString) {
    sent_data_->clear();
  }
  clear_has_sent_data();
}
inline const ::std::string& RtTpsCommandContext::sent_data() const {
  return *sent_data_;
}
inline void RtTpsCommandContext::set_sent_data(const ::std::string& value) {
  set_has_sent_data();
  if (sent_data_ == &::google::protobuf::internal::kEmptyString) {
    sent_data_ = new ::std::string;
  }
  sent_data_->assign(value);
}
inline void RtTpsCommandContext::set_sent_data(const char* value) {
  set_has_sent_data();
  if (sent_data_ == &::google::protobuf::internal::kEmptyString) {
    sent_data_ = new ::std::string;
  }
  sent_data_->assign(value);
}
inline void RtTpsCommandContext::set_sent_data(const char* value, size_t size) {
  set_has_sent_data();
  if (sent_data_ == &::google::protobuf::internal::kEmptyString) {
    sent_data_ = new ::std::string;
  }
  sent_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsCommandContext::mutable_sent_data() {
  set_has_sent_data();
  if (sent_data_ == &::google::protobuf::internal::kEmptyString) {
    sent_data_ = new ::std::string;
  }
  return sent_data_;
}
inline ::std::string* RtTpsCommandContext::release_sent_data() {
  clear_has_sent_data();
  if (sent_data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sent_data_;
    sent_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string receiver = 3;
inline bool RtTpsCommandContext::has_receiver() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RtTpsCommandContext::set_has_receiver() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RtTpsCommandContext::clear_has_receiver() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RtTpsCommandContext::clear_receiver() {
  if (receiver_ != &::google::protobuf::internal::kEmptyString) {
    receiver_->clear();
  }
  clear_has_receiver();
}
inline const ::std::string& RtTpsCommandContext::receiver() const {
  return *receiver_;
}
inline void RtTpsCommandContext::set_receiver(const ::std::string& value) {
  set_has_receiver();
  if (receiver_ == &::google::protobuf::internal::kEmptyString) {
    receiver_ = new ::std::string;
  }
  receiver_->assign(value);
}
inline void RtTpsCommandContext::set_receiver(const char* value) {
  set_has_receiver();
  if (receiver_ == &::google::protobuf::internal::kEmptyString) {
    receiver_ = new ::std::string;
  }
  receiver_->assign(value);
}
inline void RtTpsCommandContext::set_receiver(const char* value, size_t size) {
  set_has_receiver();
  if (receiver_ == &::google::protobuf::internal::kEmptyString) {
    receiver_ = new ::std::string;
  }
  receiver_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsCommandContext::mutable_receiver() {
  set_has_receiver();
  if (receiver_ == &::google::protobuf::internal::kEmptyString) {
    receiver_ = new ::std::string;
  }
  return receiver_;
}
inline ::std::string* RtTpsCommandContext::release_receiver() {
  clear_has_receiver();
  if (receiver_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = receiver_;
    receiver_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string sender = 4;
inline bool RtTpsCommandContext::has_sender() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RtTpsCommandContext::set_has_sender() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RtTpsCommandContext::clear_has_sender() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RtTpsCommandContext::clear_sender() {
  if (sender_ != &::google::protobuf::internal::kEmptyString) {
    sender_->clear();
  }
  clear_has_sender();
}
inline const ::std::string& RtTpsCommandContext::sender() const {
  return *sender_;
}
inline void RtTpsCommandContext::set_sender(const ::std::string& value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
}
inline void RtTpsCommandContext::set_sender(const char* value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
}
inline void RtTpsCommandContext::set_sender(const char* value, size_t size) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsCommandContext::mutable_sender() {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  return sender_;
}
inline ::std::string* RtTpsCommandContext::release_sender() {
  clear_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sender_;
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string reserved = 5;
inline bool RtTpsCommandContext::has_reserved() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RtTpsCommandContext::set_has_reserved() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RtTpsCommandContext::clear_has_reserved() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RtTpsCommandContext::clear_reserved() {
  if (reserved_ != &::google::protobuf::internal::kEmptyString) {
    reserved_->clear();
  }
  clear_has_reserved();
}
inline const ::std::string& RtTpsCommandContext::reserved() const {
  return *reserved_;
}
inline void RtTpsCommandContext::set_reserved(const ::std::string& value) {
  set_has_reserved();
  if (reserved_ == &::google::protobuf::internal::kEmptyString) {
    reserved_ = new ::std::string;
  }
  reserved_->assign(value);
}
inline void RtTpsCommandContext::set_reserved(const char* value) {
  set_has_reserved();
  if (reserved_ == &::google::protobuf::internal::kEmptyString) {
    reserved_ = new ::std::string;
  }
  reserved_->assign(value);
}
inline void RtTpsCommandContext::set_reserved(const char* value, size_t size) {
  set_has_reserved();
  if (reserved_ == &::google::protobuf::internal::kEmptyString) {
    reserved_ = new ::std::string;
  }
  reserved_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RtTpsCommandContext::mutable_reserved() {
  set_has_reserved();
  if (reserved_ == &::google::protobuf::internal::kEmptyString) {
    reserved_ = new ::std::string;
  }
  return reserved_;
}
inline ::std::string* RtTpsCommandContext::release_reserved() {
  clear_has_reserved();
  if (reserved_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reserved_;
    reserved_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
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

#endif  // PROTOBUF_rt_5ftps_5fcommand_5fcontext_2eproto__INCLUDED
