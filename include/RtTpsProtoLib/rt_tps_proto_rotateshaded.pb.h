// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_proto_rotateshaded.proto

#ifndef PROTOBUF_rt_5ftps_5fproto_5frotateshaded_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fproto_5frotateshaded_2eproto__INCLUDED

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
        void  protobuf_AddDesc_rt_5ftps_5fproto_5frotateshaded_2eproto();
        void protobuf_AssignDesc_rt_5ftps_5fproto_5frotateshaded_2eproto();
        void protobuf_ShutdownFile_rt_5ftps_5fproto_5frotateshaded_2eproto();

        class RtTpsProtoRotateShaded;

        // ===================================================================

        class RtTpsProtoRotateShaded : public ::google::protobuf::Message {
        public:
            RtTpsProtoRotateShaded();
            virtual ~RtTpsProtoRotateShaded();

            RtTpsProtoRotateShaded(const RtTpsProtoRotateShaded& from);

            inline RtTpsProtoRotateShaded& operator=(const RtTpsProtoRotateShaded& from) {
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
            static const RtTpsProtoRotateShaded& default_instance();

            void Swap(RtTpsProtoRotateShaded* other);

            // implements Message ----------------------------------------------

            RtTpsProtoRotateShaded* New() const;
            void CopyFrom(const ::google::protobuf::Message& from);
            void MergeFrom(const ::google::protobuf::Message& from);
            void CopyFrom(const RtTpsProtoRotateShaded& from);
            void MergeFrom(const RtTpsProtoRotateShaded& from);
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

            // required int32 windowType = 1;
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

            // required float precoordx = 3;
            inline bool has_precoordx() const;
            inline void clear_precoordx();
            static const int kPrecoordxFieldNumber = 3;
            inline float precoordx() const;
            inline void set_precoordx(float value);

            // required float precoordy = 4;
            inline bool has_precoordy() const;
            inline void clear_precoordy();
            static const int kPrecoordyFieldNumber = 4;
            inline float precoordy() const;
            inline void set_precoordy(float value);

            // required float currentcoordx = 5;
            inline bool has_currentcoordx() const;
            inline void clear_currentcoordx();
            static const int kCurrentcoordxFieldNumber = 5;
            inline float currentcoordx() const;
            inline void set_currentcoordx(float value);

            // required float currentcoordy = 6;
            inline bool has_currentcoordy() const;
            inline void clear_currentcoordy();
            static const int kCurrentcoordyFieldNumber = 6;
            inline float currentcoordy() const;
            inline void set_currentcoordy(float value);

            // @@protoc_insertion_point(class_scope:tps.proto.RtTpsProtoRotateShaded)
        private:
            inline void set_has_windowtype();
            inline void clear_has_windowtype();
            inline void set_has_windowuid();
            inline void clear_has_windowuid();
            inline void set_has_precoordx();
            inline void clear_has_precoordx();
            inline void set_has_precoordy();
            inline void clear_has_precoordy();
            inline void set_has_currentcoordx();
            inline void clear_has_currentcoordx();
            inline void set_has_currentcoordy();
            inline void clear_has_currentcoordy();

            ::google::protobuf::UnknownFieldSet _unknown_fields_;

            ::std::string* windowuid_;
            ::google::protobuf::int32 windowtype_;
            float precoordx_;
            float precoordy_;
            float currentcoordx_;
            float currentcoordy_;

            mutable int _cached_size_;
            ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

            friend void  protobuf_AddDesc_rt_5ftps_5fproto_5frotateshaded_2eproto();
            friend void protobuf_AssignDesc_rt_5ftps_5fproto_5frotateshaded_2eproto();
            friend void protobuf_ShutdownFile_rt_5ftps_5fproto_5frotateshaded_2eproto();

            void InitAsDefaultInstance();
            static RtTpsProtoRotateShaded* default_instance_;
        };
        // ===================================================================


        // ===================================================================

        // RtTpsProtoRotateShaded

        // required int32 windowType = 1;
        inline bool RtTpsProtoRotateShaded::has_windowtype() const {
            return (_has_bits_[0] & 0x00000001u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_windowtype() {
            _has_bits_[0] |= 0x00000001u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_windowtype() {
            _has_bits_[0] &= ~0x00000001u;
        }
        inline void RtTpsProtoRotateShaded::clear_windowtype() {
            windowtype_ = 0;
            clear_has_windowtype();
        }
        inline ::google::protobuf::int32 RtTpsProtoRotateShaded::windowtype() const {
            return windowtype_;
        }
        inline void RtTpsProtoRotateShaded::set_windowtype(::google::protobuf::int32 value) {
            set_has_windowtype();
            windowtype_ = value;
        }

        // optional string windowUid = 2;
        inline bool RtTpsProtoRotateShaded::has_windowuid() const {
            return (_has_bits_[0] & 0x00000002u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_windowuid() {
            _has_bits_[0] |= 0x00000002u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_windowuid() {
            _has_bits_[0] &= ~0x00000002u;
        }
        inline void RtTpsProtoRotateShaded::clear_windowuid() {
            if (windowuid_ != &::google::protobuf::internal::kEmptyString) {
                windowuid_->clear();
            }
            clear_has_windowuid();
        }
        inline const ::std::string& RtTpsProtoRotateShaded::windowuid() const {
            return *windowuid_;
        }
        inline void RtTpsProtoRotateShaded::set_windowuid(const ::std::string& value) {
            set_has_windowuid();
            if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
                windowuid_ = new ::std::string;
            }
            windowuid_->assign(value);
        }
        inline void RtTpsProtoRotateShaded::set_windowuid(const char* value) {
            set_has_windowuid();
            if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
                windowuid_ = new ::std::string;
            }
            windowuid_->assign(value);
        }
        inline void RtTpsProtoRotateShaded::set_windowuid(const char* value, size_t size) {
            set_has_windowuid();
            if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
                windowuid_ = new ::std::string;
            }
            windowuid_->assign(reinterpret_cast<const char*>(value), size);
        }
        inline ::std::string* RtTpsProtoRotateShaded::mutable_windowuid() {
            set_has_windowuid();
            if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
                windowuid_ = new ::std::string;
            }
            return windowuid_;
        }
        inline ::std::string* RtTpsProtoRotateShaded::release_windowuid() {
            clear_has_windowuid();
            if (windowuid_ == &::google::protobuf::internal::kEmptyString) {
                return NULL;
            } else {
                ::std::string* temp = windowuid_;
                windowuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
                return temp;
            }
        }

        // required float precoordx = 3;
        inline bool RtTpsProtoRotateShaded::has_precoordx() const {
            return (_has_bits_[0] & 0x00000004u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_precoordx() {
            _has_bits_[0] |= 0x00000004u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_precoordx() {
            _has_bits_[0] &= ~0x00000004u;
        }
        inline void RtTpsProtoRotateShaded::clear_precoordx() {
            precoordx_ = 0;
            clear_has_precoordx();
        }
        inline float RtTpsProtoRotateShaded::precoordx() const {
            return precoordx_;
        }
        inline void RtTpsProtoRotateShaded::set_precoordx(float value) {
            set_has_precoordx();
            precoordx_ = value;
        }

        // required float precoordy = 4;
        inline bool RtTpsProtoRotateShaded::has_precoordy() const {
            return (_has_bits_[0] & 0x00000008u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_precoordy() {
            _has_bits_[0] |= 0x00000008u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_precoordy() {
            _has_bits_[0] &= ~0x00000008u;
        }
        inline void RtTpsProtoRotateShaded::clear_precoordy() {
            precoordy_ = 0;
            clear_has_precoordy();
        }
        inline float RtTpsProtoRotateShaded::precoordy() const {
            return precoordy_;
        }
        inline void RtTpsProtoRotateShaded::set_precoordy(float value) {
            set_has_precoordy();
            precoordy_ = value;
        }

        // required float currentcoordx = 5;
        inline bool RtTpsProtoRotateShaded::has_currentcoordx() const {
            return (_has_bits_[0] & 0x00000010u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_currentcoordx() {
            _has_bits_[0] |= 0x00000010u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_currentcoordx() {
            _has_bits_[0] &= ~0x00000010u;
        }
        inline void RtTpsProtoRotateShaded::clear_currentcoordx() {
            currentcoordx_ = 0;
            clear_has_currentcoordx();
        }
        inline float RtTpsProtoRotateShaded::currentcoordx() const {
            return currentcoordx_;
        }
        inline void RtTpsProtoRotateShaded::set_currentcoordx(float value) {
            set_has_currentcoordx();
            currentcoordx_ = value;
        }

        // required float currentcoordy = 6;
        inline bool RtTpsProtoRotateShaded::has_currentcoordy() const {
            return (_has_bits_[0] & 0x00000020u) != 0;
        }
        inline void RtTpsProtoRotateShaded::set_has_currentcoordy() {
            _has_bits_[0] |= 0x00000020u;
        }
        inline void RtTpsProtoRotateShaded::clear_has_currentcoordy() {
            _has_bits_[0] &= ~0x00000020u;
        }
        inline void RtTpsProtoRotateShaded::clear_currentcoordy() {
            currentcoordy_ = 0;
            clear_has_currentcoordy();
        }
        inline float RtTpsProtoRotateShaded::currentcoordy() const {
            return currentcoordy_;
        }
        inline void RtTpsProtoRotateShaded::set_currentcoordy(float value) {
            set_has_currentcoordy();
            currentcoordy_ = value;
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

#endif  // PROTOBUF_rt_5ftps_5fproto_5frotateshaded_2eproto__INCLUDED
