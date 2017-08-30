﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object.h
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.0
///
///  \version 1.0
///  \date    12/29/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#ifndef RT_TPS_DATABASE_INTERFACE_OBJECT_IMAGE_H_
#define RT_TPS_DATABASE_INTERFACE_OBJECT_IMAGE_H_

#include "RtTpsDatabaseWrapper/rt_tps_database_defs.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_base.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_common_enums.h"
#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

enum IMAGE_FIELD
{
    IMAGE_UID = 0,
    IMAGE_SOPINSTANCEUID,
    IMAGE_SERIESUID,
    IMAGE_DCMFILEPATH,
    IMAGE_INSTANCENUMBER,
    IMAGE_SOPCLASSUID,
    IMAGE_PATIENTORIENTATION,
    IMAGE_IMAGETYPE,
    IMAGE_ACQUISITIONNUMBER,
    IMAGE_ACQUISITIONDATETIME,
    IMAGE_CONTENTDATE,
    IMAGE_CONTENTTIME,
    IMAGE_INSTANCECREATIONDATE,
    IMAGE_INSTANCECREATIONTIME,
    IMAGE_QUALITYCONTROLIMAGE,
    IMAGE_ROWS,
    IMAGE_COLUMNS,
    IMAGE_BITSALLOCATED,
    IMAGE_WINDOWWIDTH,
    IMAGE_WINDOWCENTER,
    IMAGE_EXPOSUREINDEX,
    IMAGE_TARGETEXPOSUREINDEX,
    IMAGE_DEVIATIONINDEX,
    IMAGE_IMAGESINACQUISITION,
    IMAGE_IMAGECOMMENTS,
    IMAGE_LOSSYIMAGECOMPRESSION,
    IMAGE_LOSSYIMAGECOMPRESSIONRATIO,
    IMAGE_PIXELSPACING,
    IMAGE_IMAGEORIENTATIONPATIENT,
    IMAGE_IMAGEPOSITIONPATIENT,
    IMAGE_SLICETHICKNESS,
    IMAGE_SLICELOCATION,
    IMAGE_PRINTSTATUS,
    IMAGE_ARCHIVESTATUS,
    IMAGE_IMAGECONFIRMSTATUS,
    IMAGE_IMAGEREJECTREASON,
    IMAGE_IMAGECONFIRMDATETIME,
    IMAGE_IMAGESENDSTATUS,
    IMAGE_IMAGESTOREDINDVD,
    IMAGE_IMAGESTOREDINUSB,
    IMAGE_IMAGEMARK,
    IMAGE_IMAGEPROTECT,
    IMAGE_IMAGEISCACHED,
    IMAGE_ACQUISITIONFOV,
    IMAGE_ACQUISITIONMATRIXINTERPOLATED,
    IMAGE_IMAGEORIENTATIONLABEL,
    IMAGE_TABLEOFPOSITION,
    IMAGE_ISFREECASSETE,
    IMAGE_PHOTOMETRICINTERPRETATION,
    IMAGE_NUMBEROFFRAMES,
    IMAGE_SAMPLESPERPIXEL,
    IMAGE_PIXELREPRESENTATION,
    IMAGE_RESCALESLOPE,
    IMAGE_RESCALEINTERCEPT,
    IMAGE_IMAGERESERVED0,
    IMAGE_IMAGERESERVED1,
    IMAGE_BITSSTORED,
    IMAGE_HIGHBIT,
    IMAGE_KVP,
    IMAGE_COUCHSAGOFFSET,
    IMAGE_ENDPOSITION,
    IMAGE_STARTPOSITION,
    IMAGE_UPDATETIME,
    IMAGE_FIELD_MAX
};

static const char* ENUM2STRING_IMAGE_FIELD[] =
{
    "UID",
    "SOPINSTANCEUID",
    "SERIESUID",
    "DCMFILEPATH",
    "INSTANCENUMBER",
    "SOPCLASSUID",
    "PATIENTORIENTATION",
    "IMAGETYPE",
    "ACQUISITIONNUMBER",
    "ACQUISITIONDATETIME",
    "CONTENTDATE",
    "CONTENTTIME",
    "INSTANCECREATIONDATE",
    "INSTANCECREATIONTIME",
    "QUALITYCONTROLIMAGE",
    "ROWS",
    "COLUMNS",
    "BITSALLOCATED",
    "WINDOWWIDTH",
    "WINDOWCENTER",
    "EXPOSUREINDEX",
    "TARGETEXPOSUREINDEX",
    "DEVIATIONINDEX",
    "IMAGESINACQUISITION",
    "IMAGECOMMENTS",
    "LOSSYIMAGECOMPRESSION",
    "LOSSYIMAGECOMPRESSIONRATIO",
    "PIXELSPACING",
    "IMAGEORIENTATIONPATIENT",
    "IMAGEPOSITIONPATIENT",
    "SLICETHICKNESS",
    "SLICELOCATION",
    "PRINTSTATUS",
    "ARCHIVESTATUS",
    "IMAGECONFIRMSTATUS",
    "IMAGEREJECTREASON",
    "IMAGECONFIRMDATETIME",
    "IMAGESENDSTATUS",
    "IMAGESTOREDINDVD",
    "IMAGESTOREDINUSB",
    "IMAGEMARK",
    "IMAGEPROTECT",
    "IMAGEISCACHED",
    "ACQUISITIONFOV",
    "ACQUISITIONMATRIXINTERPOLATED",
    "IMAGEORIENTATIONLABEL",
    "TABLEOFPOSITION",
    "ISFREECASSETE",
    "PHOTOMETRICINTERPRETATION",
    "NUMBEROFFRAMES",
    "SAMPLESPERPIXEL",
    "PIXELREPRESENTATION",
    "RESCALESLOPE",
    "RESCALEINTERCEPT",
    "IMAGERESERVED0",
    "IMAGERESERVED1",
    "BITSSTORED",
    "HIGHBIT",
    "KVP",
    "COUCHSAGOFFSET",
    "ENDPOSITION",
    "STARTPOSITION",
    "UPDATETIME",
    "IMAGE_FIELD_MAX"
};

static const char* ENUM2STRING_IMAGE_FIELD_NULL = "101000000000000000000000000000000000000000000000000000000000001";

typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

class RtImageImp;

class RT_DB_EXPORT RtImage : public RtDatabaseObject
{
public:

    //default is false to improve performance
    RtImage(bool bGeneraterUid = false);

    ~RtImage();

    RtImage(const RtImage& image);

    RtImage& operator = (const RtImage& image);

    /*uid varchar
      (0008,0018) SOP Instance UID SOPInstanceUID UI,The primary key*/
    std::string get_uid() const;
    void set_uid(const std::string& uid);

    /*sopinstanceuid varchar
      Dicom实例标示*/
    std::string get_sopinstanceuid() const;
    void set_sopinstanceuid(const std::string& sopinstanceuid);

    /*seriesuid varchar
      (0020,000E) Series Instance UID SeriesInstanceUID UI, Fk link to SeriesTable*/
    std::string get_seriesuid() const;
    void set_seriesuid(const std::string& seriesuid);

    /*dcmfilepath varchar
      For TPS
            dcm filepath*/
    std::string get_dcmfilepath() const;
    void set_dcmfilepath(const std::string& dcmfilepath);

    /*instancenumber int
      (0020,0013) Instance Number InstanceNumber IS 1. A number that identifies this image.*/
    int get_instancenumber() const;
    void set_instancenumber(const int& instancenumber);

    /*sopclassuid varchar
      (0008,0016) SOP Class UID SOPClassUID UI 1*/
    std::string get_sopclassuid() const;
    void set_sopclassuid(const std::string& sopclassuid);

    /*patientorientation varchar
      (0020,0020) Patient Orientation PatientOrientation CS 2,Patient direction of the rows and columns of the image. CS.Required if image does not require Image Orientation (Patient) (0020,0037) and Image Position (Patient) (0020,0032). See C.7.6.1.1.1 for further explanation.*/
    std::string get_patientorientation() const;
    void set_patientorientation(const std::string& patientorientation);

    /*imagetype varchar
      (0008,0008) Image Type ImageType CS 2-n.  n=8,Image identification characteristics. See C.7.6.1.1.2 for Defined Terms and further explanation.*/
    std::string get_imagetype() const;
    void set_imagetype(const std::string& imagetype);

    /*acquisitionnumber int
      (0020,0012) Acquisition Number AcquisitionNumber IS 1.A number identifying the single continuous gathering of data over a period of time which resulted in this image*/
    int get_acquisitionnumber() const;
    void set_acquisitionnumber(const int& acquisitionnumber);

    /*acquisitiondatetime datetime
      (0008,002A) Acquisition DateTime AcquisitionDateTime DT 1.  The date and time that the acquisition of data that resulted in this image started. Note: The synchronization of this time with an external clock is specified in the Synchronization Module in Acquisition Time Synchronized (0018,1800). 26 bytes maximum*/
    DATETIME_BOOST get_acquisitiondatetime() const;
    void set_acquisitiondatetime(const DATETIME_BOOST& acquisitiondatetime);

    /*contentdate date
      (0008,0023) Content Date ContentDate DA 1.The date the image pixel data creation started.8 bytes fixed*/
    DATE_BOOST get_contentdate() const;
    void set_contentdate(const DATE_BOOST& contentdate);

    /*contenttime time
      (0008,0033) Content Time ContentTime TM 1. The time the image pixel data creation started.16 bytes maximum,*/
    TIME_BOOST get_contenttime() const;
    void set_contenttime(const TIME_BOOST& contenttime);

    /*instancecreationdate date
      (0008,0012) Instance Creation Date InstanceCreationDate DA 1*/
    DATE_BOOST get_instancecreationdate() const;
    void set_instancecreationdate(const DATE_BOOST& instancecreationdate);

    /*instancecreationtime time
      (0008,0013) Instance Creation Time InstanceCreationTime TM 1*/
    TIME_BOOST get_instancecreationtime() const;
    void set_instancecreationtime(const TIME_BOOST& instancecreationtime);

    /*qualitycontrolimage varchar
      (0028,0300) Quality Control Image QualityControlImage CS 1.Indicates whether or not this image is a quality control or phantom image. Enumerated Values: YES, NO If this Attribute is absent, then the image may or may not be a quality control or phantom image.*/
    std::string get_qualitycontrolimage() const;
    void set_qualitycontrolimage(const std::string& qualitycontrolimage);

    /*rows int
      (0028,0010) Rows Rows US 1, Number of rows in the images.*/
    int get_rows() const;
    void set_rows(const int& rows);

    /*columns int
      (0028,0011) Columns Columns US 1*/
    int get_columns() const;
    void set_columns(const int& columns);

    /*bitsallocated int
      (0028,0100) Bits Allocated BitsAllocated US 1*/
    int get_bitsallocated() const;
    void set_bitsallocated(const int& bitsallocated);

    /*windowwidth varchar
      (0028,1051) Window Width WindowWidth DS 1-n n=8*/
    std::string get_windowwidth() const;
    void set_windowwidth(const std::string& windowwidth);

    /*windowcenter varchar
      (0028,1050) Window Center WindowCenter DS 1-n n=8*/
    std::string get_windowcenter() const;
    void set_windowcenter(const std::string& windowcenter);

    /*exposureindex varchar
      (0018,1411) Exposure Index ExposureIndex DS 1,DICOM2011*/
    std::string get_exposureindex() const;
    void set_exposureindex(const std::string& exposureindex);

    /*targetexposureindex varchar
      (0018,1412) Target Exposure Index TargetExposureIndex DS 1,DICOM2011*/
    std::string get_targetexposureindex() const;
    void set_targetexposureindex(const std::string& targetexposureindex);

    /*deviationindex varchar
      (0018,1413) Deviation Index DeviationIndex DS 1, DICOM2011*/
    std::string get_deviationindex() const;
    void set_deviationindex(const std::string& deviationindex);

    /*imagesinacquisition int
      (0020,1002) Images in Acquisition ImagesInAcquisition IS 1. Number of images that resulted from this acquisition of data*/
    int get_imagesinacquisition() const;
    void set_imagesinacquisition(const int& imagesinacquisition);

    /*imagecomments varchar
      (0020,4000) Image Comments ImageComments LT 1. User-defined comments about the image*/
    std::string get_imagecomments() const;
    void set_imagecomments(const std::string& imagecomments);

    /*lossyimagecompression varchar
      (0028,2110) Lossy Image Compression LossyImageCompression CS 1.   Specifies whether an Image has undergone lossy compression. Enumerated Values: 00 = Image has NOT been subjected to lossy compression. 01 = Image has been subjected to lossy compression. See C.7.6.1.1.5.*/
    std::string get_lossyimagecompression() const;
    void set_lossyimagecompression(const std::string& lossyimagecompression);

    /*lossyimagecompressionratio varchar
      (0028,2112) Lossy Image Compression Ratio LossyImageCompressionRatio  DS 1-n n=16.Describes the approximate lossy compression ratio(s) that have been applied to this image. See C.7.6.1.1.5 for further explanation. May be multivalued if successive lossy compression steps have been applied. Note: For example, a compression ratio of 30:1 would be described in this Attribute with a single value of 30*/
    std::string get_lossyimagecompressionratio() const;
    void set_lossyimagecompressionratio(const std::string& lossyimagecompressionratio);

    /*pixelspacing varchar
      (0028,0030) Pixel Spacing PixelSpacing DS 2,Physical distance in the patient between the center of each pixel, specified by a numeric pair - adjacent row spacing (delimiter) adjacent column spacing in mm. See 10.7.1.3 for further explanation.*/
    std::string get_pixelspacing() const;
    void set_pixelspacing(const std::string& pixelspacing);

    /*imageorientationpatient varchar
      (0020,0037) Image Orientation (Patient) ImageOrientationPatient DS 6,The direction cosines of the first row and the first column with respect to the patient. See C.7.6.2.1.1 for further explanation. */
    std::string get_imageorientationpatient() const;
    void set_imageorientationpatient(const std::string& imageorientationpatient);

    /*imagepositionpatient varchar
      (0020,0032) Image Position (Patient) ImagePositionPatient DS 3,The x, y, and z coordinates of the upper left hand corner (center of the first voxel transmitted) of the image, in mm. See C.7.6.2.1.1 for further explanation.*/
    std::string get_imagepositionpatient() const;
    void set_imagepositionpatient(const std::string& imagepositionpatient);

    /*slicethickness varchar
      (0018,0050) Slice Thickness SliceThickness DS 1,Nominal slice thickness, in mm.*/
    std::string get_slicethickness() const;
    void set_slicethickness(const std::string& slicethickness);

    /*slicelocation varchar
      (0020,1041) Slice Location SliceLocation DS 1,Relative position of the image plane expressed in mm. C.7.6.2.1.2 for further explanation.*/
    std::string get_slicelocation() const;
    void set_slicelocation(const std::string& slicelocation);

    /*printstatus varchar
      PrintStatus,0 Unprinted,1  printed*/
    std::string get_printstatus() const;
    void set_printstatus(const std::string& printstatus);

    /*archivestatus varchar
      ArchiveStatus,0 Un-archived,1  Archived*/
    std::string get_archivestatus() const;
    void set_archivestatus(const std::string& archivestatus);

    /*imageconfirmstatus int
      ImageConfirmStatus  :0-Accepted, 1-Un-accepted, 2-Rejected,3-Deleted*/
    int get_imageconfirmstatus() const;
    void set_imageconfirmstatus(const int& imageconfirmstatus);

    /*imagerejectreason varchar
      ImageRejectReason*/
    std::string get_imagerejectreason() const;
    void set_imagerejectreason(const std::string& imagerejectreason);

    /*imageconfirmdatetime datetime
      ImageConfirmDatetime*/
    DATETIME_BOOST get_imageconfirmdatetime() const;
    void set_imageconfirmdatetime(const DATETIME_BOOST& imageconfirmdatetime);

    /*imagesendstatus varchar
      ImageSendStatus,0  unsent,1  sending,2 sent,3  send error*/
    std::string get_imagesendstatus() const;
    void set_imagesendstatus(const std::string& imagesendstatus);

    /*imagestoredindvd varchar
      ImageStoredInDVD,0  un-Stored In DVD,1  Storing In DVD,2 Stored In DVD,3 Stored In DVD error*/
    std::string get_imagestoredindvd() const;
    void set_imagestoredindvd(const std::string& imagestoredindvd);

    /*imagestoredinusb varchar
      ImageStoredInUSB,0 Un-stored In USB,1 Storing In USB,2 Stored In USB,3 Stored In USB error*/
    std::string get_imagestoredinusb() const;
    void set_imagestoredinusb(const std::string& imagestoredinusb);

    /*imagemark varchar
      ImageMark*/
    std::string get_imagemark() const;
    void set_imagemark(const std::string& imagemark);

    /*imageprotect varchar
      ImageProtect*/
    std::string get_imageprotect() const;
    void set_imageprotect(const std::string& imageprotect);

    /*imageiscached tinyint
      ImageIsCached TRUE: cached */
    bool get_imageiscached() const;
    void set_imageiscached(const bool& imageiscached);

    /*acquisitionfov varchar
      For Pipeline and Viewer eg.256*256*/
    std::string get_acquisitionfov() const;
    void set_acquisitionfov(const std::string& acquisitionfov);

    /*acquisitionmatrixinterpolated varchar
      For Pipeline and Viewer eg.256*512 IN2*/
    std::string get_acquisitionmatrixinterpolated() const;
    void set_acquisitionmatrixinterpolated(const std::string& acquisitionmatrixinterpolated);

    /*imageorientationlabel varchar
      For Pipeline and Viewer eg.Sag>Tra(-2.8)*/
    std::string get_imageorientationlabel() const;
    void set_imageorientationlabel(const std::string& imageorientationlabel);

    /*tableofposition int
      For Pipeline and Viewer eg.50,-20*/
    int get_tableofposition() const;
    void set_tableofposition(const int& tableofposition);

    /*isfreecassete int
      flag indicate whether the image is acquired by free cassette 0:Not free cassette 1:Free cassette*/
    int get_isfreecassete() const;
    void set_isfreecassete(const int& isfreecassete);

    /*photometricinterpretation varchar
      (0028,0004) Photometric Interpretation PhotometricInterpretation CS 1*/
    std::string get_photometricinterpretation() const;
    void set_photometricinterpretation(const std::string& photometricinterpretation);

    /*numberofframes varchar
      (0028,0008) Number of Frames NumberOfFrames IS 1*/
    std::string get_numberofframes() const;
    void set_numberofframes(const std::string& numberofframes);

    /*samplesperpixel int
      (0028,0002) Samples per Pixel SamplesPerPixel US 1*/
    int get_samplesperpixel() const;
    void set_samplesperpixel(const int& samplesperpixel);

    /*pixelrepresentation int
      表示图像的Tag*/
    int get_pixelrepresentation() const;
    void set_pixelrepresentation(const int& pixelrepresentation);

    /*rescaleslope varchar
      表示图像的Tag*/
    std::string get_rescaleslope() const;
    void set_rescaleslope(const std::string& rescaleslope);

    /*rescaleintercept varchar
      表示图像的Tag*/
    std::string get_rescaleintercept() const;
    void set_rescaleintercept(const std::string& rescaleintercept);

    /*imagereserved0 varchar
      ImageReserved0*/
    std::string get_imagereserved0() const;
    void set_imagereserved0(const std::string& imagereserved0);

    /*imagereserved1 varchar
      ImageReserved1*/
    std::string get_imagereserved1() const;
    void set_imagereserved1(const std::string& imagereserved1);

    /*bitsstored int
      表示图像的Tag*/
    int get_bitsstored() const;
    void set_bitsstored(const int& bitsstored);

    /*highbit int
      表示图像的Tag*/
    int get_highbit() const;
    void set_highbit(const int& highbit);

    /*kvp double
      dicom（00180060）Peak kilo voltage output of the x-ray generator used*/
    double get_kvp() const;
    void set_kvp(const double& kvp);

    /*couchsagoffset float
      0X00635142 couch sag offset*/
    float get_couchsagoffset() const;
    void set_couchsagoffset(const float& couchsagoffset);

    /*endposition float
      0x00635036 (FL)
            私有Tag*/
    float get_endposition() const;
    void set_endposition(const float& endposition);

    /*startposition float
      0x00635035 (FL)
            私有Tag*/
    float get_startposition() const;
    void set_startposition(const float& startposition);

    /*updatetime timestamp
      时间戳*/
    DATETIME_BOOST get_updatetime() const;
    void set_updatetime(const DATETIME_BOOST& updatetime);

    //dcmfiledata mediumblob For TPS
    char* get_dcmfiledata(unsigned long* ulSize) const;
    void set_dcmfiledata(char* pData, unsigned long ulSize);

private:
    RtImageImp*                   m_pImp;
};


//////////////////////////////////////////////////////////////////////////
//for imp

class RtImageImp
{

public:
    //default is false to improve performance
    RtImageImp(bool bGeneraterUid = false);

    ~RtImageImp();

    RtImageImp(const RtImageImp& image);

    RtImageImp& operator = (const RtImageImp& image);

    //uid
    inline std::string get_uid() const { return m_uid;}
    inline void set_uid(const std::string& uid) { m_uid = uid;}

    //sopinstanceuid
    inline std::string get_sopinstanceuid() const { return m_sopinstanceuid;}
    inline void set_sopinstanceuid(const std::string& sopinstanceuid) { m_sopinstanceuid = sopinstanceuid;}

    //seriesuid
    inline std::string get_seriesuid() const { return m_seriesuid;}
    inline void set_seriesuid(const std::string& seriesuid) { m_seriesuid = seriesuid;}

    //dcmfilepath
    inline std::string get_dcmfilepath() const { return m_dcmfilepath;}
    inline void set_dcmfilepath(const std::string& dcmfilepath) { m_dcmfilepath = dcmfilepath;}

    //instancenumber
    inline int get_instancenumber() const { return m_instancenumber;}
    inline void set_instancenumber(const int& instancenumber) { m_instancenumber = instancenumber;}

    //sopclassuid
    inline std::string get_sopclassuid() const { return m_sopclassuid;}
    inline void set_sopclassuid(const std::string& sopclassuid) { m_sopclassuid = sopclassuid;}

    //patientorientation
    inline std::string get_patientorientation() const { return m_patientorientation;}
    inline void set_patientorientation(const std::string& patientorientation) { m_patientorientation = patientorientation;}

    //imagetype
    inline std::string get_imagetype() const { return m_imagetype;}
    inline void set_imagetype(const std::string& imagetype) { m_imagetype = imagetype;}

    //acquisitionnumber
    inline int get_acquisitionnumber() const { return m_acquisitionnumber;}
    inline void set_acquisitionnumber(const int& acquisitionnumber) { m_acquisitionnumber = acquisitionnumber;}

    //acquisitiondatetime
    inline DATETIME_BOOST get_acquisitiondatetime() const { return m_acquisitiondatetime;}
    inline void set_acquisitiondatetime(const DATETIME_BOOST& acquisitiondatetime) { m_acquisitiondatetime = acquisitiondatetime;}

    //contentdate
    inline DATE_BOOST get_contentdate() const { return m_contentdate;}
    inline void set_contentdate(const DATE_BOOST& contentdate) { m_contentdate = contentdate;}

    //contenttime
    inline TIME_BOOST get_contenttime() const { return m_contenttime;}
    inline void set_contenttime(const TIME_BOOST& contenttime) { m_contenttime = contenttime;}

    //instancecreationdate
    inline DATE_BOOST get_instancecreationdate() const { return m_instancecreationdate;}
    inline void set_instancecreationdate(const DATE_BOOST& instancecreationdate) { m_instancecreationdate = instancecreationdate;}

    //instancecreationtime
    inline TIME_BOOST get_instancecreationtime() const { return m_instancecreationtime;}
    inline void set_instancecreationtime(const TIME_BOOST& instancecreationtime) { m_instancecreationtime = instancecreationtime;}

    //qualitycontrolimage
    inline std::string get_qualitycontrolimage() const { return m_qualitycontrolimage;}
    inline void set_qualitycontrolimage(const std::string& qualitycontrolimage) { m_qualitycontrolimage = qualitycontrolimage;}

    //rows
    inline int get_rows() const { return m_rows;}
    inline void set_rows(const int& rows) { m_rows = rows;}

    //columns
    inline int get_columns() const { return m_columns;}
    inline void set_columns(const int& columns) { m_columns = columns;}

    //bitsallocated
    inline int get_bitsallocated() const { return m_bitsallocated;}
    inline void set_bitsallocated(const int& bitsallocated) { m_bitsallocated = bitsallocated;}

    //windowwidth
    inline std::string get_windowwidth() const { return m_windowwidth;}
    inline void set_windowwidth(const std::string& windowwidth) { m_windowwidth = windowwidth;}

    //windowcenter
    inline std::string get_windowcenter() const { return m_windowcenter;}
    inline void set_windowcenter(const std::string& windowcenter) { m_windowcenter = windowcenter;}

    //exposureindex
    inline std::string get_exposureindex() const { return m_exposureindex;}
    inline void set_exposureindex(const std::string& exposureindex) { m_exposureindex = exposureindex;}

    //targetexposureindex
    inline std::string get_targetexposureindex() const { return m_targetexposureindex;}
    inline void set_targetexposureindex(const std::string& targetexposureindex) { m_targetexposureindex = targetexposureindex;}

    //deviationindex
    inline std::string get_deviationindex() const { return m_deviationindex;}
    inline void set_deviationindex(const std::string& deviationindex) { m_deviationindex = deviationindex;}

    //imagesinacquisition
    inline int get_imagesinacquisition() const { return m_imagesinacquisition;}
    inline void set_imagesinacquisition(const int& imagesinacquisition) { m_imagesinacquisition = imagesinacquisition;}

    //imagecomments
    inline std::string get_imagecomments() const { return m_imagecomments;}
    inline void set_imagecomments(const std::string& imagecomments) { m_imagecomments = imagecomments;}

    //lossyimagecompression
    inline std::string get_lossyimagecompression() const { return m_lossyimagecompression;}
    inline void set_lossyimagecompression(const std::string& lossyimagecompression) { m_lossyimagecompression = lossyimagecompression;}

    //lossyimagecompressionratio
    inline std::string get_lossyimagecompressionratio() const { return m_lossyimagecompressionratio;}
    inline void set_lossyimagecompressionratio(const std::string& lossyimagecompressionratio) { m_lossyimagecompressionratio = lossyimagecompressionratio;}

    //pixelspacing
    inline std::string get_pixelspacing() const { return m_pixelspacing;}
    inline void set_pixelspacing(const std::string& pixelspacing) { m_pixelspacing = pixelspacing;}

    //imageorientationpatient
    inline std::string get_imageorientationpatient() const { return m_imageorientationpatient;}
    inline void set_imageorientationpatient(const std::string& imageorientationpatient) { m_imageorientationpatient = imageorientationpatient;}

    //imagepositionpatient
    inline std::string get_imagepositionpatient() const { return m_imagepositionpatient;}
    inline void set_imagepositionpatient(const std::string& imagepositionpatient) { m_imagepositionpatient = imagepositionpatient;}

    //slicethickness
    inline std::string get_slicethickness() const { return m_slicethickness;}
    inline void set_slicethickness(const std::string& slicethickness) { m_slicethickness = slicethickness;}

    //slicelocation
    inline std::string get_slicelocation() const { return m_slicelocation;}
    inline void set_slicelocation(const std::string& slicelocation) { m_slicelocation = slicelocation;}

    //printstatus
    inline std::string get_printstatus() const { return m_printstatus;}
    inline void set_printstatus(const std::string& printstatus) { m_printstatus = printstatus;}

    //archivestatus
    inline std::string get_archivestatus() const { return m_archivestatus;}
    inline void set_archivestatus(const std::string& archivestatus) { m_archivestatus = archivestatus;}

    //imageconfirmstatus
    inline int get_imageconfirmstatus() const { return m_imageconfirmstatus;}
    inline void set_imageconfirmstatus(const int& imageconfirmstatus) { m_imageconfirmstatus = imageconfirmstatus;}

    //imagerejectreason
    inline std::string get_imagerejectreason() const { return m_imagerejectreason;}
    inline void set_imagerejectreason(const std::string& imagerejectreason) { m_imagerejectreason = imagerejectreason;}

    //imageconfirmdatetime
    inline DATETIME_BOOST get_imageconfirmdatetime() const { return m_imageconfirmdatetime;}
    inline void set_imageconfirmdatetime(const DATETIME_BOOST& imageconfirmdatetime) { m_imageconfirmdatetime = imageconfirmdatetime;}

    //imagesendstatus
    inline std::string get_imagesendstatus() const { return m_imagesendstatus;}
    inline void set_imagesendstatus(const std::string& imagesendstatus) { m_imagesendstatus = imagesendstatus;}

    //imagestoredindvd
    inline std::string get_imagestoredindvd() const { return m_imagestoredindvd;}
    inline void set_imagestoredindvd(const std::string& imagestoredindvd) { m_imagestoredindvd = imagestoredindvd;}

    //imagestoredinusb
    inline std::string get_imagestoredinusb() const { return m_imagestoredinusb;}
    inline void set_imagestoredinusb(const std::string& imagestoredinusb) { m_imagestoredinusb = imagestoredinusb;}

    //imagemark
    inline std::string get_imagemark() const { return m_imagemark;}
    inline void set_imagemark(const std::string& imagemark) { m_imagemark = imagemark;}

    //imageprotect
    inline std::string get_imageprotect() const { return m_imageprotect;}
    inline void set_imageprotect(const std::string& imageprotect) { m_imageprotect = imageprotect;}

    //imageiscached
    inline bool get_imageiscached() const { return m_imageiscached;}
    inline void set_imageiscached(const bool& imageiscached) { m_imageiscached = imageiscached;}

    //acquisitionfov
    inline std::string get_acquisitionfov() const { return m_acquisitionfov;}
    inline void set_acquisitionfov(const std::string& acquisitionfov) { m_acquisitionfov = acquisitionfov;}

    //acquisitionmatrixinterpolated
    inline std::string get_acquisitionmatrixinterpolated() const { return m_acquisitionmatrixinterpolated;}
    inline void set_acquisitionmatrixinterpolated(const std::string& acquisitionmatrixinterpolated) { m_acquisitionmatrixinterpolated = acquisitionmatrixinterpolated;}

    //imageorientationlabel
    inline std::string get_imageorientationlabel() const { return m_imageorientationlabel;}
    inline void set_imageorientationlabel(const std::string& imageorientationlabel) { m_imageorientationlabel = imageorientationlabel;}

    //tableofposition
    inline int get_tableofposition() const { return m_tableofposition;}
    inline void set_tableofposition(const int& tableofposition) { m_tableofposition = tableofposition;}

    //isfreecassete
    inline int get_isfreecassete() const { return m_isfreecassete;}
    inline void set_isfreecassete(const int& isfreecassete) { m_isfreecassete = isfreecassete;}

    //photometricinterpretation
    inline std::string get_photometricinterpretation() const { return m_photometricinterpretation;}
    inline void set_photometricinterpretation(const std::string& photometricinterpretation) { m_photometricinterpretation = photometricinterpretation;}

    //numberofframes
    inline std::string get_numberofframes() const { return m_numberofframes;}
    inline void set_numberofframes(const std::string& numberofframes) { m_numberofframes = numberofframes;}

    //samplesperpixel
    inline int get_samplesperpixel() const { return m_samplesperpixel;}
    inline void set_samplesperpixel(const int& samplesperpixel) { m_samplesperpixel = samplesperpixel;}

    //pixelrepresentation
    inline int get_pixelrepresentation() const { return m_pixelrepresentation;}
    inline void set_pixelrepresentation(const int& pixelrepresentation) { m_pixelrepresentation = pixelrepresentation;}

    //rescaleslope
    inline std::string get_rescaleslope() const { return m_rescaleslope;}
    inline void set_rescaleslope(const std::string& rescaleslope) { m_rescaleslope = rescaleslope;}

    //rescaleintercept
    inline std::string get_rescaleintercept() const { return m_rescaleintercept;}
    inline void set_rescaleintercept(const std::string& rescaleintercept) { m_rescaleintercept = rescaleintercept;}

    //imagereserved0
    inline std::string get_imagereserved0() const { return m_imagereserved0;}
    inline void set_imagereserved0(const std::string& imagereserved0) { m_imagereserved0 = imagereserved0;}

    //imagereserved1
    inline std::string get_imagereserved1() const { return m_imagereserved1;}
    inline void set_imagereserved1(const std::string& imagereserved1) { m_imagereserved1 = imagereserved1;}

    //bitsstored
    inline int get_bitsstored() const { return m_bitsstored;}
    inline void set_bitsstored(const int& bitsstored) { m_bitsstored = bitsstored;}

    //highbit
    inline int get_highbit() const { return m_highbit;}
    inline void set_highbit(const int& highbit) { m_highbit = highbit;}

    //kvp
    inline double get_kvp() const { return m_kvp;}
    inline void set_kvp(const double& kvp) { m_kvp = kvp;}

    //couchsagoffset
    inline float get_couchsagoffset() const { return m_couchsagoffset;}
    inline void set_couchsagoffset(const float& couchsagoffset) { m_couchsagoffset = couchsagoffset;}

    //endposition
    inline float get_endposition() const { return m_endposition;}
    inline void set_endposition(const float& endposition) { m_endposition = endposition;}

    //startposition
    inline float get_startposition() const { return m_startposition;}
    inline void set_startposition(const float& startposition) { m_startposition = startposition;}

    //updatetime
    inline DATETIME_BOOST get_updatetime() const { return m_updatetime;}
    inline void set_updatetime(const DATETIME_BOOST& updatetime) { m_updatetime = updatetime;}

    //////////////////////////////////////////////////////////////////////////
    //dcmfiledata
    inline char* get_dcmfiledata(unsigned long* ulSize) const { *ulSize = m_size; return m_dcmfiledata;}
    inline void set_dcmfiledata(char* pData, unsigned long ulSize)
    {
        if (pData != m_dcmfiledata && nullptr != pData && ulSize>0){
            DEL_ARRAY(m_dcmfiledata);
            m_dcmfiledata = new char[ulSize];
            memcpy(m_dcmfiledata, pData, ulSize * sizeof(char));
            m_size = ulSize;
        }
    }

private:    //63 parameters
    std::string						m_uid;
    std::string						m_sopinstanceuid;
    std::string						m_seriesuid;
    std::string						m_dcmfilepath;
    int								m_instancenumber;
    std::string						m_sopclassuid;
    std::string						m_patientorientation;
    std::string						m_imagetype;
    int								m_acquisitionnumber;
    DATETIME_BOOST					m_acquisitiondatetime;
    DATE_BOOST						m_contentdate;
    TIME_BOOST						m_contenttime;
    DATE_BOOST						m_instancecreationdate;
    TIME_BOOST						m_instancecreationtime;
    std::string						m_qualitycontrolimage;
    int								m_rows;
    int								m_columns;
    int								m_bitsallocated;
    std::string						m_windowwidth;
    std::string						m_windowcenter;
    std::string						m_exposureindex;
    std::string						m_targetexposureindex;
    std::string						m_deviationindex;
    int								m_imagesinacquisition;
    std::string						m_imagecomments;
    std::string						m_lossyimagecompression;
    std::string						m_lossyimagecompressionratio;
    std::string						m_pixelspacing;
    std::string						m_imageorientationpatient;
    std::string						m_imagepositionpatient;
    std::string						m_slicethickness;
    std::string						m_slicelocation;
    std::string						m_printstatus;
    std::string						m_archivestatus;
    int								m_imageconfirmstatus;
    std::string						m_imagerejectreason;
    DATETIME_BOOST					m_imageconfirmdatetime;
    std::string						m_imagesendstatus;
    std::string						m_imagestoredindvd;
    std::string						m_imagestoredinusb;
    std::string						m_imagemark;
    std::string						m_imageprotect;
    bool							m_imageiscached;
    std::string						m_acquisitionfov;
    std::string						m_acquisitionmatrixinterpolated;
    std::string						m_imageorientationlabel;
    int								m_tableofposition;
    int								m_isfreecassete;
    std::string						m_photometricinterpretation;
    std::string						m_numberofframes;
    int								m_samplesperpixel;
    int								m_pixelrepresentation;
    std::string						m_rescaleslope;
    std::string						m_rescaleintercept;
    std::string						m_imagereserved0;
    std::string						m_imagereserved1;
    int								m_bitsstored;
    int								m_highbit;
    double							m_kvp;
    float							m_couchsagoffset;
    float							m_endposition;
    float							m_startposition;
    DATETIME_BOOST					m_updatetime;
    //////////////////////////////////////////////////////////////////////////
    char*                           m_dcmfiledata;
    unsigned long                   m_size;
};

RT_TPS_DATABASE_END_NAMESPACE
#endif