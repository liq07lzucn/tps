﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_measuredprofile.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.0
///
///  \version 1.0
///  \date    12/29/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_measuredprofile.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtMeasuredprofileImp::RtMeasuredprofileImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_accessoryuid(""),
    m_commissionedunituid(""),
    m_applicatoruid(""),
    m_fieldtype(0),
    m_wedgeangle(0.f),
    m_curvetype(0),
    m_fieldsizex(0.f),
    m_fieldsizey(0.f),
    m_depth(0.f),
    m_offsetx(0.f),
    m_offsety(0.f),
    m_pointnum(0),
    m_meapointdoselist(""),
    m_calcpointdoselist(""),
    m_viewstatus(0),
    m_viewdisplay(false),
    m_datetype(0),
    m_curveresultanalyselist(""),
    m_crc(""),
    m_updatetime(boost::date_time::not_a_date_time)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtMeasuredprofileImp::RtMeasuredprofileImp(const RtMeasuredprofileImp& measuredprofile):
    m_uid(measuredprofile.get_uid()),
    m_accessoryuid(measuredprofile.get_accessoryuid()),
    m_commissionedunituid(measuredprofile.get_commissionedunituid()),
    m_applicatoruid(measuredprofile.get_applicatoruid()),
    m_fieldtype(measuredprofile.get_fieldtype()),
    m_wedgeangle(measuredprofile.get_wedgeangle()),
    m_curvetype(measuredprofile.get_curvetype()),
    m_fieldsizex(measuredprofile.get_fieldsizex()),
    m_fieldsizey(measuredprofile.get_fieldsizey()),
    m_depth(measuredprofile.get_depth()),
    m_offsetx(measuredprofile.get_offsetx()),
    m_offsety(measuredprofile.get_offsety()),
    m_pointnum(measuredprofile.get_pointnum()),
    m_meapointdoselist(measuredprofile.get_meapointdoselist()),
    m_calcpointdoselist(measuredprofile.get_calcpointdoselist()),
    m_viewstatus(measuredprofile.get_viewstatus()),
    m_viewdisplay(measuredprofile.get_viewdisplay()),
    m_datetype(measuredprofile.get_datetype()),
    m_curveresultanalyselist(measuredprofile.get_curveresultanalyselist()),
    m_crc(measuredprofile.get_crc()),
    m_updatetime(measuredprofile.get_updatetime())
{
        size_t ilen = measuredprofile.m_vMeaPointDoseList.size();
        m_vMeaPointDoseList.resize(ilen);
        for (size_t i=0; i<measuredprofile.m_vMeaPointDoseList.size(); ++i){
            m_vMeaPointDoseList[i] = new PointDose(*measuredprofile.m_vMeaPointDoseList[i]);
        }

        ilen = measuredprofile.m_vCalcPointDoseList.size();
        m_vCalcPointDoseList.resize(ilen);
        for (size_t i=0; i<measuredprofile.m_vCalcPointDoseList.size(); ++i){
            m_vCalcPointDoseList[i] = new PointDose(*measuredprofile.m_vCalcPointDoseList[i]);
        }

        ilen = measuredprofile.m_vCurveResultAnalyse.size();
        m_vCurveResultAnalyse.resize(ilen);
        for (size_t i=0; i<measuredprofile.m_vCurveResultAnalyse.size();++i){
            m_vCurveResultAnalyse[i] = new CurveResultAnalyse(*measuredprofile.m_vCurveResultAnalyse[i]);
        }

}

RtMeasuredprofileImp& RtMeasuredprofileImp::operator=(const RtMeasuredprofileImp& measuredprofile)
{
    if (this != &measuredprofile){
        this->m_uid = measuredprofile.get_uid();
        this->m_accessoryuid = measuredprofile.get_accessoryuid();
        this->m_commissionedunituid = measuredprofile.get_commissionedunituid();
        this->m_applicatoruid = measuredprofile.get_applicatoruid();
        this->m_fieldtype = measuredprofile.get_fieldtype();
        this->m_wedgeangle = measuredprofile.get_wedgeangle();
        this->m_curvetype = measuredprofile.get_curvetype();
        this->m_fieldsizex = measuredprofile.get_fieldsizex();
        this->m_fieldsizey = measuredprofile.get_fieldsizey();
        this->m_depth = measuredprofile.get_depth();
        this->m_offsetx = measuredprofile.get_offsetx();
        this->m_offsety = measuredprofile.get_offsety();
        this->m_pointnum = measuredprofile.get_pointnum();
        this->m_meapointdoselist = measuredprofile.get_meapointdoselist();
        this->m_calcpointdoselist = measuredprofile.get_calcpointdoselist();
        this->m_viewstatus = measuredprofile.get_viewstatus();
        this->m_viewdisplay = measuredprofile.get_viewdisplay();
        this->m_datetype = measuredprofile.get_datetype();
        this->m_curveresultanalyselist = measuredprofile.get_curveresultanalyselist();
        this->m_crc = measuredprofile.get_crc();
		this->m_updatetime = measuredprofile.get_updatetime();
        size_t ilen = measuredprofile.m_vMeaPointDoseList.size();
        this->m_vMeaPointDoseList.resize(ilen);
        for (size_t i=0; i<ilen; ++i){
            this->m_vMeaPointDoseList[i] = new PointDose(*measuredprofile.m_vMeaPointDoseList[i]);
        }
        ilen = measuredprofile.m_vCalcPointDoseList.size();
        this->m_vCalcPointDoseList.resize(ilen);
        for (size_t i=0; i<ilen; ++i){
            this->m_vCalcPointDoseList[i] = new PointDose(*measuredprofile.m_vCalcPointDoseList[i]);
        }
        ilen = measuredprofile.m_vCurveResultAnalyse.size();
        this->m_vCurveResultAnalyse.resize(ilen);
        for (size_t i=0; i<ilen;++i){
            this->m_vCurveResultAnalyse[i] = new CurveResultAnalyse(*measuredprofile.m_vCurveResultAnalyse[i]);
        }
    }
    return *this;
}

std::vector<PointDose*> RtMeasuredprofileImp::GetMeaPointDoseList() const{
    return m_vMeaPointDoseList;
}

void RtMeasuredprofileImp::SetMeaPointDoseList(const std::vector<PointDose*>& vMeaPointDoseList){

    for (std::vector<PointDose*>::iterator it = m_vMeaPointDoseList.begin();it != m_vMeaPointDoseList.end();it++){
        delete *it;
    }
    size_t iLen = vMeaPointDoseList.size();
    m_vMeaPointDoseList.resize(iLen);
    for (int i = 0;i < iLen;i++){
        m_vMeaPointDoseList[i] = new PointDose(*vMeaPointDoseList[i]);
    }
}

std::vector<PointDose*> RtMeasuredprofileImp::GetCalcPointDoseList() const{

    return m_vCalcPointDoseList;
}

void RtMeasuredprofileImp::SetCalcPointDoseList(const std::vector<PointDose*>& vCalcPointDoseList){

    for (std::vector<PointDose*>::iterator it = m_vCalcPointDoseList.begin();it != m_vCalcPointDoseList.end();it++){
        delete *it;
    }
    size_t iLen = vCalcPointDoseList.size();
    m_vCalcPointDoseList.resize(iLen);
    for (int i = 0;i < iLen;i++){
        m_vCalcPointDoseList[i] = new PointDose(*vCalcPointDoseList[i]);
    }
}

std::vector<CurveResultAnalyse*> RtMeasuredprofileImp::GetCurveResultAnalyse() const{

    return m_vCurveResultAnalyse;
}

void RtMeasuredprofileImp::SetCurveResultAnalyse(const std::vector<CurveResultAnalyse*>& vCurveResultAnalyse){

    for (std::vector<CurveResultAnalyse*>::iterator it = m_vCurveResultAnalyse.begin();it != m_vCurveResultAnalyse.end();it++){
        delete *it;
    }
    size_t iLen = vCurveResultAnalyse.size();
    m_vCurveResultAnalyse.resize(iLen);
    for (int i = 0;i < iLen;i++){
        m_vCurveResultAnalyse[i] = new CurveResultAnalyse(*vCurveResultAnalyse[i]);
    }
}

RtMeasuredprofileImp::~RtMeasuredprofileImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtMeasuredprofile::RtMeasuredprofile(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtMeasuredprofileImp(bGeneraterUid);
    set_flags(MEASUREDPROFILE_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_MEASUREDPROFILE_FIELD_NULL);
}

RtMeasuredprofile::RtMeasuredprofile(const RtMeasuredprofile& measuredprofile): RtDatabaseObject(measuredprofile),
   m_pImp(new RtMeasuredprofileImp(*measuredprofile.m_pImp))
{
}

RtMeasuredprofile& RtMeasuredprofile::operator = (const RtMeasuredprofile& measuredprofile)
{
    if(this != &measuredprofile)
    {
        RtDatabaseObject::operator=(measuredprofile);
        *this->m_pImp = *measuredprofile.m_pImp;
    }
    return *this;
}

RtMeasuredprofile::~RtMeasuredprofile()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtMeasuredprofile::get_uid() const { return m_pImp->get_uid();}
void RtMeasuredprofile::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(MEASUREDPROFILE_UID);
    setdirty_field(MEASUREDPROFILE_UID, true);
}

//accessoryuid
std::string RtMeasuredprofile::get_accessoryuid() const { return m_pImp->get_accessoryuid();}
void RtMeasuredprofile::set_accessoryuid(const std::string& accessoryuid)
{
    m_pImp->set_accessoryuid(accessoryuid);
    enable_field(MEASUREDPROFILE_ACCESSORYUID);
    setdirty_field(MEASUREDPROFILE_ACCESSORYUID, true);
}

//commissionedunituid
std::string RtMeasuredprofile::get_commissionedunituid() const { return m_pImp->get_commissionedunituid();}
void RtMeasuredprofile::set_commissionedunituid(const std::string& commissionedunituid)
{
    m_pImp->set_commissionedunituid(commissionedunituid);
    enable_field(MEASUREDPROFILE_COMMISSIONEDUNITUID);
    setdirty_field(MEASUREDPROFILE_COMMISSIONEDUNITUID, true);
}

//applicatoruid
std::string RtMeasuredprofile::get_applicatoruid() const { return m_pImp->get_applicatoruid();}
void RtMeasuredprofile::set_applicatoruid(const std::string& applicatoruid)
{
    m_pImp->set_applicatoruid(applicatoruid);
    enable_field(MEASUREDPROFILE_APPLICATORUID);
    setdirty_field(MEASUREDPROFILE_APPLICATORUID, true);
}

//fieldtype
int RtMeasuredprofile::get_fieldtype() const { return m_pImp->get_fieldtype();}
void RtMeasuredprofile::set_fieldtype(const int& fieldtype)
{
    m_pImp->set_fieldtype(fieldtype);
    enable_field(MEASUREDPROFILE_FIELDTYPE);
    setdirty_field(MEASUREDPROFILE_FIELDTYPE, true);
}

//wedgeangle
float RtMeasuredprofile::get_wedgeangle() const { return m_pImp->get_wedgeangle();}
void RtMeasuredprofile::set_wedgeangle(const float& wedgeangle)
{
    m_pImp->set_wedgeangle(wedgeangle);
    enable_field(MEASUREDPROFILE_WEDGEANGLE);
    setdirty_field(MEASUREDPROFILE_WEDGEANGLE, true);
}

//curvetype
int RtMeasuredprofile::get_curvetype() const { return m_pImp->get_curvetype();}
void RtMeasuredprofile::set_curvetype(const int& curvetype)
{
    m_pImp->set_curvetype(curvetype);
    enable_field(MEASUREDPROFILE_CURVETYPE);
    setdirty_field(MEASUREDPROFILE_CURVETYPE, true);
}

//fieldsizex
float RtMeasuredprofile::get_fieldsizex() const { return m_pImp->get_fieldsizex();}
void RtMeasuredprofile::set_fieldsizex(const float& fieldsizex)
{
    m_pImp->set_fieldsizex(fieldsizex);
    enable_field(MEASUREDPROFILE_FIELDSIZEX);
    setdirty_field(MEASUREDPROFILE_FIELDSIZEX, true);
}

//fieldsizey
float RtMeasuredprofile::get_fieldsizey() const { return m_pImp->get_fieldsizey();}
void RtMeasuredprofile::set_fieldsizey(const float& fieldsizey)
{
    m_pImp->set_fieldsizey(fieldsizey);
    enable_field(MEASUREDPROFILE_FIELDSIZEY);
    setdirty_field(MEASUREDPROFILE_FIELDSIZEY, true);
}

//depth
float RtMeasuredprofile::get_depth() const { return m_pImp->get_depth();}
void RtMeasuredprofile::set_depth(const float& depth)
{
    m_pImp->set_depth(depth);
    enable_field(MEASUREDPROFILE_DEPTH);
    setdirty_field(MEASUREDPROFILE_DEPTH, true);
}

//offsetx
float RtMeasuredprofile::get_offsetx() const { return m_pImp->get_offsetx();}
void RtMeasuredprofile::set_offsetx(const float& offsetx)
{
    m_pImp->set_offsetx(offsetx);
    enable_field(MEASUREDPROFILE_OFFSETX);
    setdirty_field(MEASUREDPROFILE_OFFSETX, true);
}

//offsety
float RtMeasuredprofile::get_offsety() const { return m_pImp->get_offsety();}
void RtMeasuredprofile::set_offsety(const float& offsety)
{
    m_pImp->set_offsety(offsety);
    enable_field(MEASUREDPROFILE_OFFSETY);
    setdirty_field(MEASUREDPROFILE_OFFSETY, true);
}

//pointnum
int RtMeasuredprofile::get_pointnum() const { return m_pImp->get_pointnum();}
void RtMeasuredprofile::set_pointnum(const int& pointnum)
{
    m_pImp->set_pointnum(pointnum);
    enable_field(MEASUREDPROFILE_POINTNUM);
    setdirty_field(MEASUREDPROFILE_POINTNUM, true);
}

//meapointdoselist
std::string RtMeasuredprofile::get_meapointdoselist() const { return m_pImp->get_meapointdoselist();}
void RtMeasuredprofile::set_meapointdoselist(const std::string& meapointdoselist)
{
    m_pImp->set_meapointdoselist(meapointdoselist);
    enable_field(MEASUREDPROFILE_MEAPOINTDOSELIST);
    setdirty_field(MEASUREDPROFILE_MEAPOINTDOSELIST, true);
}

//calcpointdoselist
std::string RtMeasuredprofile::get_calcpointdoselist() const { return m_pImp->get_calcpointdoselist();}
void RtMeasuredprofile::set_calcpointdoselist(const std::string& calcpointdoselist)
{
    m_pImp->set_calcpointdoselist(calcpointdoselist);
    enable_field(MEASUREDPROFILE_CALCPOINTDOSELIST);
    setdirty_field(MEASUREDPROFILE_CALCPOINTDOSELIST, true);
}

//viewstatus
int RtMeasuredprofile::get_viewstatus() const { return m_pImp->get_viewstatus();}
void RtMeasuredprofile::set_viewstatus(const int& viewstatus)
{
    m_pImp->set_viewstatus(viewstatus);
    enable_field(MEASUREDPROFILE_VIEWSTATUS);
    setdirty_field(MEASUREDPROFILE_VIEWSTATUS, true);
}

//viewdisplay
bool RtMeasuredprofile::get_viewdisplay() const { return m_pImp->get_viewdisplay();}
void RtMeasuredprofile::set_viewdisplay(const bool& viewdisplay)
{
    m_pImp->set_viewdisplay(viewdisplay);
    enable_field(MEASUREDPROFILE_VIEWDISPLAY);
    setdirty_field(MEASUREDPROFILE_VIEWDISPLAY, true);
}

//datetype
int RtMeasuredprofile::get_datetype() const { return m_pImp->get_datetype();}
void RtMeasuredprofile::set_datetype(const int& datetype)
{
    m_pImp->set_datetype(datetype);
    enable_field(MEASUREDPROFILE_DATETYPE);
    setdirty_field(MEASUREDPROFILE_DATETYPE, true);
}

//curveresultanalyselist
std::string RtMeasuredprofile::get_curveresultanalyselist() const { return m_pImp->get_curveresultanalyselist();}
void RtMeasuredprofile::set_curveresultanalyselist(const std::string& curveresultanalyselist)
{
    m_pImp->set_curveresultanalyselist(curveresultanalyselist);
    enable_field(MEASUREDPROFILE_CURVERESULTANALYSELIST);
    setdirty_field(MEASUREDPROFILE_CURVERESULTANALYSELIST, true);
}

//crc
std::string RtMeasuredprofile::get_crc() const { return m_pImp->get_crc();}
void RtMeasuredprofile::set_crc(const std::string& crc)
{
    m_pImp->set_crc(crc);
    enable_field(MEASUREDPROFILE_CRC);
    setdirty_field(MEASUREDPROFILE_CRC, true);
}

//updatetime
DATETIME_BOOST RtMeasuredprofile::get_updatetime() const { return m_pImp->get_updatetime();}
void RtMeasuredprofile::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(MEASUREDPROFILE_UPDATETIME);
    setdirty_field(MEASUREDPROFILE_UPDATETIME, true);
}


std::vector<PointDose*> RtMeasuredprofile::GetMeaPointDoseList() const{
    return m_pImp->GetMeaPointDoseList();
}

void RtMeasuredprofile::SetMeaPointDoseList(const std::vector<PointDose*>& vMeaPointDoseList){
    m_pImp->SetMeaPointDoseList(vMeaPointDoseList);
}

std::vector<PointDose*> RtMeasuredprofile::GetCalcPointDoseList() const{
    return m_pImp->GetCalcPointDoseList();
}

void RtMeasuredprofile::SetCalcPointDoseList(const std::vector<PointDose*>& vCalcPointDoseList){
    m_pImp->SetCalcPointDoseList(vCalcPointDoseList);

}

std::vector<CurveResultAnalyse*> RtMeasuredprofile::GetCurveResultAnalyse() const{
    return m_pImp->GetCurveResultAnalyse();

}
void RtMeasuredprofile::SetCurveResultAnalyse(const std::vector<CurveResultAnalyse*>& vCurveResultAnalyse){

    m_pImp->SetCurveResultAnalyse(vCurveResultAnalyse);
}

RT_TPS_DATABASE_END_NAMESPACE