﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_mlcshape.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.0
///
///  \version 1.0
///  \date    12/29/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_mlcshape.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtMlcshapeImp::RtMlcshapeImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_segmentuid(""),
    m_mlcdirectiontype(0),
    m_xupperjawpos(0.),
    m_xlowerjawpos(0.),
    m_yupperjawpos(0.),
    m_ylowerjawpos(0.),
    m_accuracy(0),
    m_isstartmlcshape(false),
    m_updatetime(boost::date_time::not_a_date_time),
    m_jawxissymmetry(false),
    m_jawyissymmetry(false)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtMlcshapeImp::RtMlcshapeImp(const RtMlcshapeImp& mlcshape):
    m_uid(mlcshape.get_uid()),
    m_segmentuid(mlcshape.get_segmentuid()),
    m_mlcdirectiontype(mlcshape.get_mlcdirectiontype()),
    m_xupperjawpos(mlcshape.get_xupperjawpos()),
    m_xlowerjawpos(mlcshape.get_xlowerjawpos()),
    m_yupperjawpos(mlcshape.get_yupperjawpos()),
    m_ylowerjawpos(mlcshape.get_ylowerjawpos()),
    m_accuracy(mlcshape.get_accuracy()),
    m_isstartmlcshape(mlcshape.get_isstartmlcshape()),
    m_updatetime(mlcshape.get_updatetime()),
    m_jawxissymmetry(mlcshape.get_jawxissymmetry()),
    m_jawyissymmetry(mlcshape.get_jawyissymmetry())
{
    m_leafpositions = mlcshape.get_leafpositions();
}

RtMlcshapeImp& RtMlcshapeImp::operator=(const RtMlcshapeImp& mlcshape)
{
    if (this != &mlcshape){
        this->m_uid = mlcshape.get_uid();
        this->m_segmentuid = mlcshape.get_segmentuid();
        this->m_mlcdirectiontype = mlcshape.get_mlcdirectiontype();
        this->m_xupperjawpos = mlcshape.get_xupperjawpos();
        this->m_xlowerjawpos = mlcshape.get_xlowerjawpos();
        this->m_yupperjawpos = mlcshape.get_yupperjawpos();
        this->m_ylowerjawpos = mlcshape.get_ylowerjawpos();
        this->m_accuracy = mlcshape.get_accuracy();
        this->m_leafpositions = mlcshape.get_leafpositions();
        this->m_isstartmlcshape = mlcshape.get_isstartmlcshape();
        this->m_updatetime = mlcshape.get_updatetime();
        this->m_jawxissymmetry = mlcshape.get_jawxissymmetry();
        this->m_jawyissymmetry = mlcshape.get_jawyissymmetry();
    }
    return *this;
}

RtMlcshapeImp::~RtMlcshapeImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtMlcshape::RtMlcshape(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtMlcshapeImp(bGeneraterUid);
    set_flags(MLCSHAPE_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_MLCSHAPE_FIELD_NULL);
    set_field_notnull(MLCSHAPE_SEGMENTUID); //temp solution
}

RtMlcshape::RtMlcshape(const RtMlcshape& mlcshape): RtDatabaseObject(mlcshape),
   m_pImp(new RtMlcshapeImp(*mlcshape.m_pImp))
{
}

RtMlcshape& RtMlcshape::operator = (const RtMlcshape& mlcshape)
{
    if(this != &mlcshape)
    {
        RtDatabaseObject::operator=(mlcshape);
        *this->m_pImp = *mlcshape.m_pImp;
    }
    return *this;
}

RtMlcshape::~RtMlcshape()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtMlcshape::get_uid() const { return m_pImp->get_uid();}
void RtMlcshape::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(MLCSHAPE_UID);
    setdirty_field(MLCSHAPE_UID, true);
}

//segmentuid
std::string RtMlcshape::get_segmentuid() const { return m_pImp->get_segmentuid();}
void RtMlcshape::set_segmentuid(const std::string& segmentuid)
{
    m_pImp->set_segmentuid(segmentuid);
    enable_field(MLCSHAPE_SEGMENTUID);
    setdirty_field(MLCSHAPE_SEGMENTUID, true);
}

//mlcdirectiontype
int RtMlcshape::get_mlcdirectiontype() const { return m_pImp->get_mlcdirectiontype();}
void RtMlcshape::set_mlcdirectiontype(const int& mlcdirectiontype)
{
    m_pImp->set_mlcdirectiontype(mlcdirectiontype);
    enable_field(MLCSHAPE_MLCDIRECTIONTYPE);
    setdirty_field(MLCSHAPE_MLCDIRECTIONTYPE, true);
}

//xupperjawpos
double RtMlcshape::get_xupperjawpos() const { return m_pImp->get_xupperjawpos();}
void RtMlcshape::set_xupperjawpos(const double& xupperjawpos)
{
    m_pImp->set_xupperjawpos(xupperjawpos);
    enable_field(MLCSHAPE_XUPPERJAWPOS);
    setdirty_field(MLCSHAPE_XUPPERJAWPOS, true);
}

//xlowerjawpos
double RtMlcshape::get_xlowerjawpos() const { return m_pImp->get_xlowerjawpos();}
void RtMlcshape::set_xlowerjawpos(const double& xlowerjawpos)
{
    m_pImp->set_xlowerjawpos(xlowerjawpos);
    enable_field(MLCSHAPE_XLOWERJAWPOS);
    setdirty_field(MLCSHAPE_XLOWERJAWPOS, true);
}

//yupperjawpos
double RtMlcshape::get_yupperjawpos() const { return m_pImp->get_yupperjawpos();}
void RtMlcshape::set_yupperjawpos(const double& yupperjawpos)
{
    m_pImp->set_yupperjawpos(yupperjawpos);
    enable_field(MLCSHAPE_YUPPERJAWPOS);
    setdirty_field(MLCSHAPE_YUPPERJAWPOS, true);
}

//ylowerjawpos
double RtMlcshape::get_ylowerjawpos() const { return m_pImp->get_ylowerjawpos();}
void RtMlcshape::set_ylowerjawpos(const double& ylowerjawpos)
{
    m_pImp->set_ylowerjawpos(ylowerjawpos);
    enable_field(MLCSHAPE_YLOWERJAWPOS);
    setdirty_field(MLCSHAPE_YLOWERJAWPOS, true);
}

//accuracy
int RtMlcshape::get_accuracy() const { return m_pImp->get_accuracy();}
void RtMlcshape::set_accuracy(const int& accuracy)
{
    m_pImp->set_accuracy(accuracy);
    enable_field(MLCSHAPE_ACCURACY);
    setdirty_field(MLCSHAPE_ACCURACY, true);
}

//leafpositions
//dLeafLowerPos dLeafUpperPos
//std::vector<db_Point2d> RtMlcshape::get_leafpositions() const { return m_pImp->get_leafpositions();}
//std::vector<db_Point2d> RtMlcshape::get_leafpositions() { return m_pImp->get_leafpositions();}
//void RtMlcshape::set_leafpositions(const std::vector<db_Point2d>& vLeafPos) 
//{ 
//    m_pImp->set_leafpositions(vLeafPos);
//    enable_field(MLCSHAPE_LEAFPOSITIONS);
//    setdirty_field(MLCSHAPE_LEAFPOSITIONS, true);
//}

//isstartmlcshape
bool RtMlcshape::get_isstartmlcshape() const { return m_pImp->get_isstartmlcshape();}
void RtMlcshape::set_isstartmlcshape(const bool& isstartmlcshape)
{
    m_pImp->set_isstartmlcshape(isstartmlcshape);
    enable_field(MLCSHAPE_ISSTARTMLCSHAPE);
    setdirty_field(MLCSHAPE_ISSTARTMLCSHAPE, true);
}

//updatetime
DATETIME_BOOST RtMlcshape::get_updatetime() const { return m_pImp->get_updatetime();}
void RtMlcshape::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(MLCSHAPE_UPDATETIME);
    setdirty_field(MLCSHAPE_UPDATETIME, true);
}

//jawxissymmetry
bool RtMlcshape::get_jawxissymmetry() const { return m_pImp->get_jawxissymmetry();}
void RtMlcshape::set_jawxissymmetry(const bool& jawxissymmetry)
{
    m_pImp->set_jawxissymmetry(jawxissymmetry);
    enable_field(MLCSHAPE_JAWXISSYMMETRY);
    setdirty_field(MLCSHAPE_JAWXISSYMMETRY, true);
}

//jawyissymmetry
bool RtMlcshape::get_jawyissymmetry() const { return m_pImp->get_jawyissymmetry();}
void RtMlcshape::set_jawyissymmetry(const bool& jawyissymmetry)
{
    m_pImp->set_jawyissymmetry(jawyissymmetry);
    enable_field(MLCSHAPE_JAWYISSYMMETRY);
    setdirty_field(MLCSHAPE_JAWYISSYMMETRY, true);
}

RT_TPS_DATABASE_END_NAMESPACE