// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rt_tps_cornertext_mpr.proto

#ifndef PROTOBUF_rt_5ftps_5fcornertext_5fmpr_2eproto__INCLUDED
#define PROTOBUF_rt_5ftps_5fcornertext_5fmpr_2eproto__INCLUDED

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
		void  protobuf_AddDesc_rt_5ftps_5fcornertext_5fmpr_2eproto();
		void protobuf_AssignDesc_rt_5ftps_5fcornertext_5fmpr_2eproto();
		void protobuf_ShutdownFile_rt_5ftps_5fcornertext_5fmpr_2eproto();

		class RT_TPS_CornerText_MPR;

		// ===================================================================

		class RT_TPS_CornerText_MPR : public ::google::protobuf::Message {
		public:
			RT_TPS_CornerText_MPR();
			virtual ~RT_TPS_CornerText_MPR();

			RT_TPS_CornerText_MPR(const RT_TPS_CornerText_MPR& from);

			inline RT_TPS_CornerText_MPR& operator=(const RT_TPS_CornerText_MPR& from) {
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
			static const RT_TPS_CornerText_MPR& default_instance();

			void Swap(RT_TPS_CornerText_MPR* other);

			// implements Message ----------------------------------------------

			RT_TPS_CornerText_MPR* New() const;
			void CopyFrom(const ::google::protobuf::Message& from);
			void MergeFrom(const ::google::protobuf::Message& from);
			void CopyFrom(const RT_TPS_CornerText_MPR& from);
			void MergeFrom(const RT_TPS_CornerText_MPR& from);
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

			// optional string planname = 1;
			inline bool has_planname() const;
			inline void clear_planname();
			static const int kPlannameFieldNumber = 1;
			inline const ::std::string& planname() const;
			inline void set_planname(const ::std::string& value);
			inline void set_planname(const char* value);
			inline void set_planname(const char* value, size_t size);
			inline ::std::string* mutable_planname();
			inline ::std::string* release_planname();

			// optional string seriesname = 2;
			inline bool has_seriesname() const;
			inline void clear_seriesname();
			static const int kSeriesnameFieldNumber = 2;
			inline const ::std::string& seriesname() const;
			inline void set_seriesname(const ::std::string& value);
			inline void set_seriesname(const char* value);
			inline void set_seriesname(const char* value, size_t size);
			inline ::std::string* mutable_seriesname();
			inline ::std::string* release_seriesname();

			// optional string seriesdatetime = 3;
			inline bool has_seriesdatetime() const;
			inline void clear_seriesdatetime();
			static const int kSeriesdatetimeFieldNumber = 3;
			inline const ::std::string& seriesdatetime() const;
			inline void set_seriesdatetime(const ::std::string& value);
			inline void set_seriesdatetime(const char* value);
			inline void set_seriesdatetime(const char* value, size_t size);
			inline ::std::string* mutable_seriesdatetime();
			inline ::std::string* release_seriesdatetime();

			// optional string patientposition = 4;
			inline bool has_patientposition() const;
			inline void clear_patientposition();
			static const int kPatientpositionFieldNumber = 4;
			inline const ::std::string& patientposition() const;
			inline void set_patientposition(const ::std::string& value);
			inline void set_patientposition(const char* value);
			inline void set_patientposition(const char* value, size_t size);
			inline ::std::string* mutable_patientposition();
			inline ::std::string* release_patientposition();

			// optional double value = 5;
			inline bool has_value() const;
			inline void clear_value();
			static const int kValueFieldNumber = 5;
			inline double value() const;
			inline void set_value(double value);

			// optional double density = 6;
			inline bool has_density() const;
			inline void clear_density();
			static const int kDensityFieldNumber = 6;
			inline double density() const;
			inline void set_density(double value);

			// optional double dosevalue = 7;
			inline bool has_dosevalue() const;
			inline void clear_dosevalue();
			static const int kDosevalueFieldNumber = 7;
			inline double dosevalue() const;
			inline void set_dosevalue(double value);

			// optional double pixelpositionx = 8;
			inline bool has_pixelpositionx() const;
			inline void clear_pixelpositionx();
			static const int kPixelpositionxFieldNumber = 8;
			inline double pixelpositionx() const;
			inline void set_pixelpositionx(double value);

			// optional double pixelpositiony = 9;
			inline bool has_pixelpositiony() const;
			inline void clear_pixelpositiony();
			static const int kPixelpositionyFieldNumber = 9;
			inline double pixelpositiony() const;
			inline void set_pixelpositiony(double value);

			// optional double pixelpositionz = 10;
			inline bool has_pixelpositionz() const;
			inline void clear_pixelpositionz();
			static const int kPixelpositionzFieldNumber = 10;
			inline double pixelpositionz() const;
			inline void set_pixelpositionz(double value);

			// optional double windowwidth = 11;
			inline bool has_windowwidth() const;
			inline void clear_windowwidth();
			static const int kWindowwidthFieldNumber = 11;
			inline double windowwidth() const;
			inline void set_windowwidth(double value);

			// optional double windowcenter = 12;
			inline bool has_windowcenter() const;
			inline void clear_windowcenter();
			static const int kWindowcenterFieldNumber = 12;
			inline double windowcenter() const;
			inline void set_windowcenter(double value);

			// optional int32 slicenumber = 13;
			inline bool has_slicenumber() const;
			inline void clear_slicenumber();
			static const int kSlicenumberFieldNumber = 13;
			inline ::google::protobuf::int32 slicenumber() const;
			inline void set_slicenumber(::google::protobuf::int32 value);

			// optional int32 startslicenumber = 14;
			inline bool has_startslicenumber() const;
			inline void clear_startslicenumber();
			static const int kStartslicenumberFieldNumber = 14;
			inline ::google::protobuf::int32 startslicenumber() const;
			inline void set_startslicenumber(::google::protobuf::int32 value);

			// optional double slicethickness = 15;
			inline bool has_slicethickness() const;
			inline void clear_slicethickness();
			static const int kSlicethicknessFieldNumber = 15;
			inline double slicethickness() const;
			inline void set_slicethickness(double value);

			// optional bool isvaluevalid = 16;
			inline bool has_isvaluevalid() const;
			inline void clear_isvaluevalid();
			static const int kIsvaluevalidFieldNumber = 16;
			inline bool isvaluevalid() const;
			inline void set_isvaluevalid(bool value);

			// optional string modality = 17;
			inline bool has_modality() const;
			inline void clear_modality();
			static const int kModalityFieldNumber = 17;
			inline const ::std::string& modality() const;
			inline void set_modality(const ::std::string& value);
			inline void set_modality(const char* value);
			inline void set_modality(const char* value, size_t size);
			inline ::std::string* mutable_modality();
			inline ::std::string* release_modality();

			// @@protoc_insertion_point(class_scope:tps.proto.RT_TPS_CornerText_MPR)
		private:
			inline void set_has_planname();
			inline void clear_has_planname();
			inline void set_has_seriesname();
			inline void clear_has_seriesname();
			inline void set_has_seriesdatetime();
			inline void clear_has_seriesdatetime();
			inline void set_has_patientposition();
			inline void clear_has_patientposition();
			inline void set_has_value();
			inline void clear_has_value();
			inline void set_has_density();
			inline void clear_has_density();
			inline void set_has_dosevalue();
			inline void clear_has_dosevalue();
			inline void set_has_pixelpositionx();
			inline void clear_has_pixelpositionx();
			inline void set_has_pixelpositiony();
			inline void clear_has_pixelpositiony();
			inline void set_has_pixelpositionz();
			inline void clear_has_pixelpositionz();
			inline void set_has_windowwidth();
			inline void clear_has_windowwidth();
			inline void set_has_windowcenter();
			inline void clear_has_windowcenter();
			inline void set_has_slicenumber();
			inline void clear_has_slicenumber();
			inline void set_has_startslicenumber();
			inline void clear_has_startslicenumber();
			inline void set_has_slicethickness();
			inline void clear_has_slicethickness();
			inline void set_has_isvaluevalid();
			inline void clear_has_isvaluevalid();
			inline void set_has_modality();
			inline void clear_has_modality();

			::google::protobuf::UnknownFieldSet _unknown_fields_;

			::std::string* planname_;
			::std::string* seriesname_;
			::std::string* seriesdatetime_;
			::std::string* patientposition_;
			double value_;
			double density_;
			double dosevalue_;
			double pixelpositionx_;
			double pixelpositiony_;
			double pixelpositionz_;
			double windowwidth_;
			double windowcenter_;
			::google::protobuf::int32 slicenumber_;
			::google::protobuf::int32 startslicenumber_;
			double slicethickness_;
			::std::string* modality_;
			bool isvaluevalid_;

			mutable int _cached_size_;
			::google::protobuf::uint32 _has_bits_[(17 + 31) / 32];

			friend void  protobuf_AddDesc_rt_5ftps_5fcornertext_5fmpr_2eproto();
			friend void protobuf_AssignDesc_rt_5ftps_5fcornertext_5fmpr_2eproto();
			friend void protobuf_ShutdownFile_rt_5ftps_5fcornertext_5fmpr_2eproto();

			void InitAsDefaultInstance();
			static RT_TPS_CornerText_MPR* default_instance_;
		};
		// ===================================================================


		// ===================================================================

		// RT_TPS_CornerText_MPR

		// optional string planname = 1;
		inline bool RT_TPS_CornerText_MPR::has_planname() const {
			return (_has_bits_[0] & 0x00000001u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_planname() {
			_has_bits_[0] |= 0x00000001u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_planname() {
			_has_bits_[0] &= ~0x00000001u;
		}
		inline void RT_TPS_CornerText_MPR::clear_planname() {
			if (planname_ != &::google::protobuf::internal::kEmptyString) {
				planname_->clear();
			}
			clear_has_planname();
		}
		inline const ::std::string& RT_TPS_CornerText_MPR::planname() const {
			return *planname_;
		}
		inline void RT_TPS_CornerText_MPR::set_planname(const ::std::string& value) {
			set_has_planname();
			if (planname_ == &::google::protobuf::internal::kEmptyString) {
				planname_ = new ::std::string;
			}
			planname_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_planname(const char* value) {
			set_has_planname();
			if (planname_ == &::google::protobuf::internal::kEmptyString) {
				planname_ = new ::std::string;
			}
			planname_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_planname(const char* value, size_t size) {
			set_has_planname();
			if (planname_ == &::google::protobuf::internal::kEmptyString) {
				planname_ = new ::std::string;
			}
			planname_->assign(reinterpret_cast<const char*>(value), size);
		}
		inline ::std::string* RT_TPS_CornerText_MPR::mutable_planname() {
			set_has_planname();
			if (planname_ == &::google::protobuf::internal::kEmptyString) {
				planname_ = new ::std::string;
			}
			return planname_;
		}
		inline ::std::string* RT_TPS_CornerText_MPR::release_planname() {
			clear_has_planname();
			if (planname_ == &::google::protobuf::internal::kEmptyString) {
				return NULL;
			} else {
				::std::string* temp = planname_;
				planname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
				return temp;
			}
		}

		// optional string seriesname = 2;
		inline bool RT_TPS_CornerText_MPR::has_seriesname() const {
			return (_has_bits_[0] & 0x00000002u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_seriesname() {
			_has_bits_[0] |= 0x00000002u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_seriesname() {
			_has_bits_[0] &= ~0x00000002u;
		}
		inline void RT_TPS_CornerText_MPR::clear_seriesname() {
			if (seriesname_ != &::google::protobuf::internal::kEmptyString) {
				seriesname_->clear();
			}
			clear_has_seriesname();
		}
		inline const ::std::string& RT_TPS_CornerText_MPR::seriesname() const {
			return *seriesname_;
		}
		inline void RT_TPS_CornerText_MPR::set_seriesname(const ::std::string& value) {
			set_has_seriesname();
			if (seriesname_ == &::google::protobuf::internal::kEmptyString) {
				seriesname_ = new ::std::string;
			}
			seriesname_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_seriesname(const char* value) {
			set_has_seriesname();
			if (seriesname_ == &::google::protobuf::internal::kEmptyString) {
				seriesname_ = new ::std::string;
			}
			seriesname_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_seriesname(const char* value, size_t size) {
			set_has_seriesname();
			if (seriesname_ == &::google::protobuf::internal::kEmptyString) {
				seriesname_ = new ::std::string;
			}
			seriesname_->assign(reinterpret_cast<const char*>(value), size);
		}
		inline ::std::string* RT_TPS_CornerText_MPR::mutable_seriesname() {
			set_has_seriesname();
			if (seriesname_ == &::google::protobuf::internal::kEmptyString) {
				seriesname_ = new ::std::string;
			}
			return seriesname_;
		}
		inline ::std::string* RT_TPS_CornerText_MPR::release_seriesname() {
			clear_has_seriesname();
			if (seriesname_ == &::google::protobuf::internal::kEmptyString) {
				return NULL;
			} else {
				::std::string* temp = seriesname_;
				seriesname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
				return temp;
			}
		}

		// optional string seriesdatetime = 3;
		inline bool RT_TPS_CornerText_MPR::has_seriesdatetime() const {
			return (_has_bits_[0] & 0x00000004u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_seriesdatetime() {
			_has_bits_[0] |= 0x00000004u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_seriesdatetime() {
			_has_bits_[0] &= ~0x00000004u;
		}
		inline void RT_TPS_CornerText_MPR::clear_seriesdatetime() {
			if (seriesdatetime_ != &::google::protobuf::internal::kEmptyString) {
				seriesdatetime_->clear();
			}
			clear_has_seriesdatetime();
		}
		inline const ::std::string& RT_TPS_CornerText_MPR::seriesdatetime() const {
			return *seriesdatetime_;
		}
		inline void RT_TPS_CornerText_MPR::set_seriesdatetime(const ::std::string& value) {
			set_has_seriesdatetime();
			if (seriesdatetime_ == &::google::protobuf::internal::kEmptyString) {
				seriesdatetime_ = new ::std::string;
			}
			seriesdatetime_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_seriesdatetime(const char* value) {
			set_has_seriesdatetime();
			if (seriesdatetime_ == &::google::protobuf::internal::kEmptyString) {
				seriesdatetime_ = new ::std::string;
			}
			seriesdatetime_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_seriesdatetime(const char* value, size_t size) {
			set_has_seriesdatetime();
			if (seriesdatetime_ == &::google::protobuf::internal::kEmptyString) {
				seriesdatetime_ = new ::std::string;
			}
			seriesdatetime_->assign(reinterpret_cast<const char*>(value), size);
		}
		inline ::std::string* RT_TPS_CornerText_MPR::mutable_seriesdatetime() {
			set_has_seriesdatetime();
			if (seriesdatetime_ == &::google::protobuf::internal::kEmptyString) {
				seriesdatetime_ = new ::std::string;
			}
			return seriesdatetime_;
		}
		inline ::std::string* RT_TPS_CornerText_MPR::release_seriesdatetime() {
			clear_has_seriesdatetime();
			if (seriesdatetime_ == &::google::protobuf::internal::kEmptyString) {
				return NULL;
			} else {
				::std::string* temp = seriesdatetime_;
				seriesdatetime_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
				return temp;
			}
		}

		// optional string patientposition = 4;
		inline bool RT_TPS_CornerText_MPR::has_patientposition() const {
			return (_has_bits_[0] & 0x00000008u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_patientposition() {
			_has_bits_[0] |= 0x00000008u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_patientposition() {
			_has_bits_[0] &= ~0x00000008u;
		}
		inline void RT_TPS_CornerText_MPR::clear_patientposition() {
			if (patientposition_ != &::google::protobuf::internal::kEmptyString) {
				patientposition_->clear();
			}
			clear_has_patientposition();
		}
		inline const ::std::string& RT_TPS_CornerText_MPR::patientposition() const {
			return *patientposition_;
		}
		inline void RT_TPS_CornerText_MPR::set_patientposition(const ::std::string& value) {
			set_has_patientposition();
			if (patientposition_ == &::google::protobuf::internal::kEmptyString) {
				patientposition_ = new ::std::string;
			}
			patientposition_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_patientposition(const char* value) {
			set_has_patientposition();
			if (patientposition_ == &::google::protobuf::internal::kEmptyString) {
				patientposition_ = new ::std::string;
			}
			patientposition_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_patientposition(const char* value, size_t size) {
			set_has_patientposition();
			if (patientposition_ == &::google::protobuf::internal::kEmptyString) {
				patientposition_ = new ::std::string;
			}
			patientposition_->assign(reinterpret_cast<const char*>(value), size);
		}
		inline ::std::string* RT_TPS_CornerText_MPR::mutable_patientposition() {
			set_has_patientposition();
			if (patientposition_ == &::google::protobuf::internal::kEmptyString) {
				patientposition_ = new ::std::string;
			}
			return patientposition_;
		}
		inline ::std::string* RT_TPS_CornerText_MPR::release_patientposition() {
			clear_has_patientposition();
			if (patientposition_ == &::google::protobuf::internal::kEmptyString) {
				return NULL;
			} else {
				::std::string* temp = patientposition_;
				patientposition_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
				return temp;
			}
		}

		// optional double value = 5;
		inline bool RT_TPS_CornerText_MPR::has_value() const {
			return (_has_bits_[0] & 0x00000010u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_value() {
			_has_bits_[0] |= 0x00000010u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_value() {
			_has_bits_[0] &= ~0x00000010u;
		}
		inline void RT_TPS_CornerText_MPR::clear_value() {
			value_ = 0;
			clear_has_value();
		}
		inline double RT_TPS_CornerText_MPR::value() const {
			return value_;
		}
		inline void RT_TPS_CornerText_MPR::set_value(double value) {
			set_has_value();
			value_ = value;
		}

		// optional double density = 6;
		inline bool RT_TPS_CornerText_MPR::has_density() const {
			return (_has_bits_[0] & 0x00000020u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_density() {
			_has_bits_[0] |= 0x00000020u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_density() {
			_has_bits_[0] &= ~0x00000020u;
		}
		inline void RT_TPS_CornerText_MPR::clear_density() {
			density_ = 0;
			clear_has_density();
		}
		inline double RT_TPS_CornerText_MPR::density() const {
			return density_;
		}
		inline void RT_TPS_CornerText_MPR::set_density(double value) {
			set_has_density();
			density_ = value;
		}

		// optional double dosevalue = 7;
		inline bool RT_TPS_CornerText_MPR::has_dosevalue() const {
			return (_has_bits_[0] & 0x00000040u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_dosevalue() {
			_has_bits_[0] |= 0x00000040u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_dosevalue() {
			_has_bits_[0] &= ~0x00000040u;
		}
		inline void RT_TPS_CornerText_MPR::clear_dosevalue() {
			dosevalue_ = 0;
			clear_has_dosevalue();
		}
		inline double RT_TPS_CornerText_MPR::dosevalue() const {
			return dosevalue_;
		}
		inline void RT_TPS_CornerText_MPR::set_dosevalue(double value) {
			set_has_dosevalue();
			dosevalue_ = value;
		}

		// optional double pixelpositionx = 8;
		inline bool RT_TPS_CornerText_MPR::has_pixelpositionx() const {
			return (_has_bits_[0] & 0x00000080u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_pixelpositionx() {
			_has_bits_[0] |= 0x00000080u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_pixelpositionx() {
			_has_bits_[0] &= ~0x00000080u;
		}
		inline void RT_TPS_CornerText_MPR::clear_pixelpositionx() {
			pixelpositionx_ = 0;
			clear_has_pixelpositionx();
		}
		inline double RT_TPS_CornerText_MPR::pixelpositionx() const {
			return pixelpositionx_;
		}
		inline void RT_TPS_CornerText_MPR::set_pixelpositionx(double value) {
			set_has_pixelpositionx();
			pixelpositionx_ = value;
		}

		// optional double pixelpositiony = 9;
		inline bool RT_TPS_CornerText_MPR::has_pixelpositiony() const {
			return (_has_bits_[0] & 0x00000100u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_pixelpositiony() {
			_has_bits_[0] |= 0x00000100u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_pixelpositiony() {
			_has_bits_[0] &= ~0x00000100u;
		}
		inline void RT_TPS_CornerText_MPR::clear_pixelpositiony() {
			pixelpositiony_ = 0;
			clear_has_pixelpositiony();
		}
		inline double RT_TPS_CornerText_MPR::pixelpositiony() const {
			return pixelpositiony_;
		}
		inline void RT_TPS_CornerText_MPR::set_pixelpositiony(double value) {
			set_has_pixelpositiony();
			pixelpositiony_ = value;
		}

		// optional double pixelpositionz = 10;
		inline bool RT_TPS_CornerText_MPR::has_pixelpositionz() const {
			return (_has_bits_[0] & 0x00000200u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_pixelpositionz() {
			_has_bits_[0] |= 0x00000200u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_pixelpositionz() {
			_has_bits_[0] &= ~0x00000200u;
		}
		inline void RT_TPS_CornerText_MPR::clear_pixelpositionz() {
			pixelpositionz_ = 0;
			clear_has_pixelpositionz();
		}
		inline double RT_TPS_CornerText_MPR::pixelpositionz() const {
			return pixelpositionz_;
		}
		inline void RT_TPS_CornerText_MPR::set_pixelpositionz(double value) {
			set_has_pixelpositionz();
			pixelpositionz_ = value;
		}

		// optional double windowwidth = 11;
		inline bool RT_TPS_CornerText_MPR::has_windowwidth() const {
			return (_has_bits_[0] & 0x00000400u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_windowwidth() {
			_has_bits_[0] |= 0x00000400u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_windowwidth() {
			_has_bits_[0] &= ~0x00000400u;
		}
		inline void RT_TPS_CornerText_MPR::clear_windowwidth() {
			windowwidth_ = 0;
			clear_has_windowwidth();
		}
		inline double RT_TPS_CornerText_MPR::windowwidth() const {
			return windowwidth_;
		}
		inline void RT_TPS_CornerText_MPR::set_windowwidth(double value) {
			set_has_windowwidth();
			windowwidth_ = value;
		}

		// optional double windowcenter = 12;
		inline bool RT_TPS_CornerText_MPR::has_windowcenter() const {
			return (_has_bits_[0] & 0x00000800u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_windowcenter() {
			_has_bits_[0] |= 0x00000800u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_windowcenter() {
			_has_bits_[0] &= ~0x00000800u;
		}
		inline void RT_TPS_CornerText_MPR::clear_windowcenter() {
			windowcenter_ = 0;
			clear_has_windowcenter();
		}
		inline double RT_TPS_CornerText_MPR::windowcenter() const {
			return windowcenter_;
		}
		inline void RT_TPS_CornerText_MPR::set_windowcenter(double value) {
			set_has_windowcenter();
			windowcenter_ = value;
		}

		// optional int32 slicenumber = 13;
		inline bool RT_TPS_CornerText_MPR::has_slicenumber() const {
			return (_has_bits_[0] & 0x00001000u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_slicenumber() {
			_has_bits_[0] |= 0x00001000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_slicenumber() {
			_has_bits_[0] &= ~0x00001000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_slicenumber() {
			slicenumber_ = 0;
			clear_has_slicenumber();
		}
		inline ::google::protobuf::int32 RT_TPS_CornerText_MPR::slicenumber() const {
			return slicenumber_;
		}
		inline void RT_TPS_CornerText_MPR::set_slicenumber(::google::protobuf::int32 value) {
			set_has_slicenumber();
			slicenumber_ = value;
		}

		// optional int32 startslicenumber = 14;
		inline bool RT_TPS_CornerText_MPR::has_startslicenumber() const {
			return (_has_bits_[0] & 0x00002000u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_startslicenumber() {
			_has_bits_[0] |= 0x00002000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_startslicenumber() {
			_has_bits_[0] &= ~0x00002000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_startslicenumber() {
			startslicenumber_ = 0;
			clear_has_startslicenumber();
		}
		inline ::google::protobuf::int32 RT_TPS_CornerText_MPR::startslicenumber() const {
			return startslicenumber_;
		}
		inline void RT_TPS_CornerText_MPR::set_startslicenumber(::google::protobuf::int32 value) {
			set_has_startslicenumber();
			startslicenumber_ = value;
		}

		// optional double slicethickness = 15;
		inline bool RT_TPS_CornerText_MPR::has_slicethickness() const {
			return (_has_bits_[0] & 0x00004000u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_slicethickness() {
			_has_bits_[0] |= 0x00004000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_slicethickness() {
			_has_bits_[0] &= ~0x00004000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_slicethickness() {
			slicethickness_ = 0;
			clear_has_slicethickness();
		}
		inline double RT_TPS_CornerText_MPR::slicethickness() const {
			return slicethickness_;
		}
		inline void RT_TPS_CornerText_MPR::set_slicethickness(double value) {
			set_has_slicethickness();
			slicethickness_ = value;
		}

		// optional bool isvaluevalid = 16;
		inline bool RT_TPS_CornerText_MPR::has_isvaluevalid() const {
			return (_has_bits_[0] & 0x00008000u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_isvaluevalid() {
			_has_bits_[0] |= 0x00008000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_isvaluevalid() {
			_has_bits_[0] &= ~0x00008000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_isvaluevalid() {
			isvaluevalid_ = false;
			clear_has_isvaluevalid();
		}
		inline bool RT_TPS_CornerText_MPR::isvaluevalid() const {
			return isvaluevalid_;
		}
		inline void RT_TPS_CornerText_MPR::set_isvaluevalid(bool value) {
			set_has_isvaluevalid();
			isvaluevalid_ = value;
		}

		// optional string modality = 17;
		inline bool RT_TPS_CornerText_MPR::has_modality() const {
			return (_has_bits_[0] & 0x00010000u) != 0;
		}
		inline void RT_TPS_CornerText_MPR::set_has_modality() {
			_has_bits_[0] |= 0x00010000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_has_modality() {
			_has_bits_[0] &= ~0x00010000u;
		}
		inline void RT_TPS_CornerText_MPR::clear_modality() {
			if (modality_ != &::google::protobuf::internal::kEmptyString) {
				modality_->clear();
			}
			clear_has_modality();
		}
		inline const ::std::string& RT_TPS_CornerText_MPR::modality() const {
			return *modality_;
		}
		inline void RT_TPS_CornerText_MPR::set_modality(const ::std::string& value) {
			set_has_modality();
			if (modality_ == &::google::protobuf::internal::kEmptyString) {
				modality_ = new ::std::string;
			}
			modality_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_modality(const char* value) {
			set_has_modality();
			if (modality_ == &::google::protobuf::internal::kEmptyString) {
				modality_ = new ::std::string;
			}
			modality_->assign(value);
		}
		inline void RT_TPS_CornerText_MPR::set_modality(const char* value, size_t size) {
			set_has_modality();
			if (modality_ == &::google::protobuf::internal::kEmptyString) {
				modality_ = new ::std::string;
			}
			modality_->assign(reinterpret_cast<const char*>(value), size);
		}
		inline ::std::string* RT_TPS_CornerText_MPR::mutable_modality() {
			set_has_modality();
			if (modality_ == &::google::protobuf::internal::kEmptyString) {
				modality_ = new ::std::string;
			}
			return modality_;
		}
		inline ::std::string* RT_TPS_CornerText_MPR::release_modality() {
			clear_has_modality();
			if (modality_ == &::google::protobuf::internal::kEmptyString) {
				return NULL;
			} else {
				::std::string* temp = modality_;
				modality_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_rt_5ftps_5fcornertext_5fmpr_2eproto__INCLUDED
