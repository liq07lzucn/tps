// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rt_tps_mouse_info.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tps {
    namespace proto {

        namespace {

            const ::google::protobuf::Descriptor* RT_TPS_MOUSE_INFO_descriptor_ = NULL;
            const ::google::protobuf::internal::GeneratedMessageReflection*
                RT_TPS_MOUSE_INFO_reflection_ = NULL;

        }  // namespace


        void protobuf_AssignDesc_rt_5ftps_5fmouse_5finfo_2eproto() {
            protobuf_AddDesc_rt_5ftps_5fmouse_5finfo_2eproto();
            const ::google::protobuf::FileDescriptor* file =
                ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
                "rt_tps_mouse_info.proto");
            GOOGLE_CHECK(file != NULL);
            RT_TPS_MOUSE_INFO_descriptor_ = file->message_type(0);
            static const int RT_TPS_MOUSE_INFO_offsets_[5] = {
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, x_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, y_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, mouseactiontype_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, viewercontrolid_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, cellid_),
            };
            RT_TPS_MOUSE_INFO_reflection_ =
                new ::google::protobuf::internal::GeneratedMessageReflection(
                RT_TPS_MOUSE_INFO_descriptor_,
                RT_TPS_MOUSE_INFO::default_instance_,
                RT_TPS_MOUSE_INFO_offsets_,
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, _has_bits_[0]),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RT_TPS_MOUSE_INFO, _unknown_fields_),
                -1,
                ::google::protobuf::DescriptorPool::generated_pool(),
                ::google::protobuf::MessageFactory::generated_factory(),
                sizeof(RT_TPS_MOUSE_INFO));
        }

        namespace {

            GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
            inline void protobuf_AssignDescriptorsOnce() {
                ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                    &protobuf_AssignDesc_rt_5ftps_5fmouse_5finfo_2eproto);
            }

            void protobuf_RegisterTypes(const ::std::string&) {
                protobuf_AssignDescriptorsOnce();
                ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
                    RT_TPS_MOUSE_INFO_descriptor_, &RT_TPS_MOUSE_INFO::default_instance());
            }

        }  // namespace

        void protobuf_ShutdownFile_rt_5ftps_5fmouse_5finfo_2eproto() {
            delete RT_TPS_MOUSE_INFO::default_instance_;
            delete RT_TPS_MOUSE_INFO_reflection_;
        }

        void protobuf_AddDesc_rt_5ftps_5fmouse_5finfo_2eproto() {
            static bool already_here = false;
            if (already_here) return;
            already_here = true;
            GOOGLE_PROTOBUF_VERIFY_VERSION;

            ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
                "\n\027rt_tps_mouse_info.proto\022\ttps.proto\"k\n\021"
                "RT_TPS_MOUSE_INFO\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022"
                "\027\n\017mouseActionType\030\003 \002(\005\022\027\n\017viewerContro"
                "lID\030\004 \002(\005\022\016\n\006cellID\030\005 \002(\005", 145);
            ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
                "rt_tps_mouse_info.proto", &protobuf_RegisterTypes);
            RT_TPS_MOUSE_INFO::default_instance_ = new RT_TPS_MOUSE_INFO();
            RT_TPS_MOUSE_INFO::default_instance_->InitAsDefaultInstance();
            ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rt_5ftps_5fmouse_5finfo_2eproto);
        }

        // Force AddDescriptors() to be called at static initialization time.
        struct StaticDescriptorInitializer_rt_5ftps_5fmouse_5finfo_2eproto {
            StaticDescriptorInitializer_rt_5ftps_5fmouse_5finfo_2eproto() {
                protobuf_AddDesc_rt_5ftps_5fmouse_5finfo_2eproto();
            }
        } static_descriptor_initializer_rt_5ftps_5fmouse_5finfo_2eproto_;


        // ===================================================================

#ifndef _MSC_VER
        const int RT_TPS_MOUSE_INFO::kXFieldNumber;
        const int RT_TPS_MOUSE_INFO::kYFieldNumber;
        const int RT_TPS_MOUSE_INFO::kMouseActionTypeFieldNumber;
        const int RT_TPS_MOUSE_INFO::kViewerControlIDFieldNumber;
        const int RT_TPS_MOUSE_INFO::kCellIDFieldNumber;
#endif  // !_MSC_VER

        RT_TPS_MOUSE_INFO::RT_TPS_MOUSE_INFO()
            : ::google::protobuf::Message() {
                SharedCtor();
        }

        void RT_TPS_MOUSE_INFO::InitAsDefaultInstance() {
        }

        RT_TPS_MOUSE_INFO::RT_TPS_MOUSE_INFO(const RT_TPS_MOUSE_INFO& from)
            : ::google::protobuf::Message() {
                SharedCtor();
                MergeFrom(from);
        }

        void RT_TPS_MOUSE_INFO::SharedCtor() {
            _cached_size_ = 0;
            x_ = 0;
            y_ = 0;
            mouseactiontype_ = 0;
            viewercontrolid_ = 0;
            cellid_ = 0;
            ::memset(_has_bits_, 0, sizeof(_has_bits_));
        }

        RT_TPS_MOUSE_INFO::~RT_TPS_MOUSE_INFO() {
            SharedDtor();
        }

        void RT_TPS_MOUSE_INFO::SharedDtor() {
            if (this != default_instance_) {
            }
        }

        void RT_TPS_MOUSE_INFO::SetCachedSize(int size) const {
            GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
            _cached_size_ = size;
            GOOGLE_SAFE_CONCURRENT_WRITES_END();
        }
        const ::google::protobuf::Descriptor* RT_TPS_MOUSE_INFO::descriptor() {
            protobuf_AssignDescriptorsOnce();
            return RT_TPS_MOUSE_INFO_descriptor_;
        }

        const RT_TPS_MOUSE_INFO& RT_TPS_MOUSE_INFO::default_instance() {
            if (default_instance_ == NULL) protobuf_AddDesc_rt_5ftps_5fmouse_5finfo_2eproto();  return *default_instance_;
        }

        RT_TPS_MOUSE_INFO* RT_TPS_MOUSE_INFO::default_instance_ = NULL;

        RT_TPS_MOUSE_INFO* RT_TPS_MOUSE_INFO::New() const {
            return new RT_TPS_MOUSE_INFO;
        }

        void RT_TPS_MOUSE_INFO::Clear() {
            if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
                x_ = 0;
                y_ = 0;
                mouseactiontype_ = 0;
                viewercontrolid_ = 0;
                cellid_ = 0;
            }
            ::memset(_has_bits_, 0, sizeof(_has_bits_));
            mutable_unknown_fields()->Clear();
        }

        bool RT_TPS_MOUSE_INFO::MergePartialFromCodedStream(
            ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
                ::google::protobuf::uint32 tag;
                while ((tag = input->ReadTag()) != 0) {
                    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
                        // required double x = 1;
                    case 1: {
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
                                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                    double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                                    input, &x_)));
                                set_has_x();
                        } else {
                            goto handle_uninterpreted;
                        }
                        if (input->ExpectTag(17)) goto parse_y;
                        break;
                            }

                            // required double y = 2;
                    case 2: {
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
parse_y:
                                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                    double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                                    input, &y_)));
                                set_has_y();
                        } else {
                            goto handle_uninterpreted;
                        }
                        if (input->ExpectTag(24)) goto parse_mouseActionType;
                        break;
                            }

                            // required int32 mouseActionType = 3;
                    case 3: {
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
parse_mouseActionType:
                                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                    ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                    input, &mouseactiontype_)));
                                set_has_mouseactiontype();
                        } else {
                            goto handle_uninterpreted;
                        }
                        if (input->ExpectTag(32)) goto parse_viewerControlID;
                        break;
                            }

                            // required int32 viewerControlID = 4;
                    case 4: {
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
parse_viewerControlID:
                                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                    ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                    input, &viewercontrolid_)));
                                set_has_viewercontrolid();
                        } else {
                            goto handle_uninterpreted;
                        }
                        if (input->ExpectTag(40)) goto parse_cellID;
                        break;
                            }

                            // required int32 cellID = 5;
                    case 5: {
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
parse_cellID:
                                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                    ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                    input, &cellid_)));
                                set_has_cellid();
                        } else {
                            goto handle_uninterpreted;
                        }
                        if (input->ExpectAtEnd()) return true;
                        break;
                            }

                    default: {
handle_uninterpreted:
                        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
                                return true;
                        }
                        DO_(::google::protobuf::internal::WireFormat::SkipField(
                            input, tag, mutable_unknown_fields()));
                        break;
                             }
                    }
                }
                return true;
#undef DO_
        }

        void RT_TPS_MOUSE_INFO::SerializeWithCachedSizes(
            ::google::protobuf::io::CodedOutputStream* output) const {
                // required double x = 1;
                if (has_x()) {
                    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
                }

                // required double y = 2;
                if (has_y()) {
                    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
                }

                // required int32 mouseActionType = 3;
                if (has_mouseactiontype()) {
                    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->mouseactiontype(), output);
                }

                // required int32 viewerControlID = 4;
                if (has_viewercontrolid()) {
                    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->viewercontrolid(), output);
                }

                // required int32 cellID = 5;
                if (has_cellid()) {
                    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->cellid(), output);
                }

                if (!unknown_fields().empty()) {
                    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
                        unknown_fields(), output);
                }
        }

        ::google::protobuf::uint8* RT_TPS_MOUSE_INFO::SerializeWithCachedSizesToArray(
            ::google::protobuf::uint8* target) const {
                // required double x = 1;
                if (has_x()) {
                    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
                }

                // required double y = 2;
                if (has_y()) {
                    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
                }

                // required int32 mouseActionType = 3;
                if (has_mouseactiontype()) {
                    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->mouseactiontype(), target);
                }

                // required int32 viewerControlID = 4;
                if (has_viewercontrolid()) {
                    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->viewercontrolid(), target);
                }

                // required int32 cellID = 5;
                if (has_cellid()) {
                    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->cellid(), target);
                }

                if (!unknown_fields().empty()) {
                    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                        unknown_fields(), target);
                }
                return target;
        }

        int RT_TPS_MOUSE_INFO::ByteSize() const {
            int total_size = 0;

            if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
                // required double x = 1;
                if (has_x()) {
                    total_size += 1 + 8;
                }

                // required double y = 2;
                if (has_y()) {
                    total_size += 1 + 8;
                }

                // required int32 mouseActionType = 3;
                if (has_mouseactiontype()) {
                    total_size += 1 +
                        ::google::protobuf::internal::WireFormatLite::Int32Size(
                        this->mouseactiontype());
                }

                // required int32 viewerControlID = 4;
                if (has_viewercontrolid()) {
                    total_size += 1 +
                        ::google::protobuf::internal::WireFormatLite::Int32Size(
                        this->viewercontrolid());
                }

                // required int32 cellID = 5;
                if (has_cellid()) {
                    total_size += 1 +
                        ::google::protobuf::internal::WireFormatLite::Int32Size(
                        this->cellid());
                }

            }
            if (!unknown_fields().empty()) {
                total_size +=
                    ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
                    unknown_fields());
            }
            GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
            _cached_size_ = total_size;
            GOOGLE_SAFE_CONCURRENT_WRITES_END();
            return total_size;
        }

        void RT_TPS_MOUSE_INFO::MergeFrom(const ::google::protobuf::Message& from) {
            GOOGLE_CHECK_NE(&from, this);
            const RT_TPS_MOUSE_INFO* source =
                ::google::protobuf::internal::dynamic_cast_if_available<const RT_TPS_MOUSE_INFO*>(
                &from);
            if (source == NULL) {
                ::google::protobuf::internal::ReflectionOps::Merge(from, this);
            } else {
                MergeFrom(*source);
            }
        }

        void RT_TPS_MOUSE_INFO::MergeFrom(const RT_TPS_MOUSE_INFO& from) {
            GOOGLE_CHECK_NE(&from, this);
            if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
                if (from.has_x()) {
                    set_x(from.x());
                }
                if (from.has_y()) {
                    set_y(from.y());
                }
                if (from.has_mouseactiontype()) {
                    set_mouseactiontype(from.mouseactiontype());
                }
                if (from.has_viewercontrolid()) {
                    set_viewercontrolid(from.viewercontrolid());
                }
                if (from.has_cellid()) {
                    set_cellid(from.cellid());
                }
            }
            mutable_unknown_fields()->MergeFrom(from.unknown_fields());
        }

        void RT_TPS_MOUSE_INFO::CopyFrom(const ::google::protobuf::Message& from) {
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        void RT_TPS_MOUSE_INFO::CopyFrom(const RT_TPS_MOUSE_INFO& from) {
            if (&from == this) return;
            Clear();
            MergeFrom(from);
        }

        bool RT_TPS_MOUSE_INFO::IsInitialized() const {
            if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

            return true;
        }

        void RT_TPS_MOUSE_INFO::Swap(RT_TPS_MOUSE_INFO* other) {
            if (other != this) {
                std::swap(x_, other->x_);
                std::swap(y_, other->y_);
                std::swap(mouseactiontype_, other->mouseactiontype_);
                std::swap(viewercontrolid_, other->viewercontrolid_);
                std::swap(cellid_, other->cellid_);
                std::swap(_has_bits_[0], other->_has_bits_[0]);
                _unknown_fields_.Swap(&other->_unknown_fields_);
                std::swap(_cached_size_, other->_cached_size_);
            }
        }

        ::google::protobuf::Metadata RT_TPS_MOUSE_INFO::GetMetadata() const {
            protobuf_AssignDescriptorsOnce();
            ::google::protobuf::Metadata metadata;
            metadata.descriptor = RT_TPS_MOUSE_INFO_descriptor_;
            metadata.reflection = RT_TPS_MOUSE_INFO_reflection_;
            return metadata;
        }


        // @@protoc_insertion_point(namespace_scope)

    }  // namespace proto
}  // namespace tps

// @@protoc_insertion_point(global_scope)
