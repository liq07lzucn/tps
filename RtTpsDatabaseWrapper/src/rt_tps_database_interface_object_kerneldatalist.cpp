﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_kerneldatalist.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 2016-9-2 16:01:15
///
///  \version 1.0
///  \date    10/13/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_kerneldatalist.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtKerneldatalistImp::RtKerneldatalistImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_numofphi(0),
    m_phidata(""),
    m_numofr(0),
    m_rdata(""),
    m_crc(""),
    m_updatetime(boost::date_time::not_a_date_time)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtKerneldatalistImp::RtKerneldatalistImp(const RtKerneldatalistImp& kerneldatalist):
    m_uid(kerneldatalist.get_uid()),
    m_numofphi(kerneldatalist.get_numofphi()),
    m_phidata(kerneldatalist.get_phidata()),
    m_numofr(kerneldatalist.get_numofr()),
    m_rdata(kerneldatalist.get_rdata()),
    m_crc(kerneldatalist.get_crc()),
    m_updatetime(kerneldatalist.get_updatetime())
{
}

RtKerneldatalistImp& RtKerneldatalistImp::operator=(const RtKerneldatalistImp& kerneldatalist)
{
    if (this != &kerneldatalist){
        this->m_uid = kerneldatalist.get_uid();
        this->m_numofphi = kerneldatalist.get_numofphi();
        this->m_phidata = kerneldatalist.get_phidata();
        this->m_numofr = kerneldatalist.get_numofr();
        this->m_rdata = kerneldatalist.get_rdata();
        this->m_crc = kerneldatalist.get_crc();
        this->m_updatetime = kerneldatalist.get_updatetime();
    }
    return *this;
}

RtKerneldatalistImp::~RtKerneldatalistImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtKerneldatalist::RtKerneldatalist(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtKerneldatalistImp(bGeneraterUid);
    set_flags(KERNELDATALIST_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_KERNELDATALIST_FIELD_NULL);
}

RtKerneldatalist::RtKerneldatalist(const RtKerneldatalist& kerneldatalist): RtDatabaseObject(kerneldatalist),
   m_pImp(new RtKerneldatalistImp(*kerneldatalist.m_pImp))
{
}

RtKerneldatalist& RtKerneldatalist::operator = (const RtKerneldatalist& kerneldatalist)
{
    if(this != &kerneldatalist)
    {
        RtDatabaseObject::operator=(kerneldatalist);
        *this->m_pImp = *kerneldatalist.m_pImp;
    }
    return *this;
}

RtKerneldatalist::~RtKerneldatalist()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtKerneldatalist::get_uid() const { return m_pImp->get_uid();}
void RtKerneldatalist::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(KERNELDATALIST_UID);
    setdirty_field(KERNELDATALIST_UID, true);
}

//numofphi
int RtKerneldatalist::get_numofphi() const { return m_pImp->get_numofphi();}
void RtKerneldatalist::set_numofphi(const int& numofphi)
{
    m_pImp->set_numofphi(numofphi);
    enable_field(KERNELDATALIST_NUMOFPHI);
    setdirty_field(KERNELDATALIST_NUMOFPHI, true);
}

//phidata
std::string RtKerneldatalist::get_phidata() const { return m_pImp->get_phidata();}
void RtKerneldatalist::set_phidata(const std::string& phidata)
{
    m_pImp->set_phidata(phidata);
    enable_field(KERNELDATALIST_PHIDATA);
    setdirty_field(KERNELDATALIST_PHIDATA, true);
}

//numofr
int RtKerneldatalist::get_numofr() const { return m_pImp->get_numofr();}
void RtKerneldatalist::set_numofr(const int& numofr)
{
    m_pImp->set_numofr(numofr);
    enable_field(KERNELDATALIST_NUMOFR);
    setdirty_field(KERNELDATALIST_NUMOFR, true);
}

//rdata
std::string RtKerneldatalist::get_rdata() const { return m_pImp->get_rdata();}
void RtKerneldatalist::set_rdata(const std::string& rdata)
{
    m_pImp->set_rdata(rdata);
    enable_field(KERNELDATALIST_RDATA);
    setdirty_field(KERNELDATALIST_RDATA, true);
}

//crc
std::string RtKerneldatalist::get_crc() const { return m_pImp->get_crc();}
void RtKerneldatalist::set_crc(const std::string& crc)
{
    m_pImp->set_crc(crc);
    enable_field(KERNELDATALIST_CRC);
    setdirty_field(KERNELDATALIST_CRC, true);
}

//updatetime
DATETIME_BOOST RtKerneldatalist::get_updatetime() const { return m_pImp->get_updatetime();}
void RtKerneldatalist::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(KERNELDATALIST_UPDATETIME);
    setdirty_field(KERNELDATALIST_UPDATETIME, true);
}

RT_TPS_DATABASE_END_NAMESPACE