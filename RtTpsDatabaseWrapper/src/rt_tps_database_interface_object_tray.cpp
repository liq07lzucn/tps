﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_tray.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 2016-9-2 16:01:15
///
///  \version 1.0
///  \date    10/13/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_tray.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtTrayImp::RtTrayImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_machineuid(""),
    m_trayid(""),
    m_code(""),
    m_updatetime(boost::date_time::not_a_date_time)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtTrayImp::RtTrayImp(const RtTrayImp& tray):
    m_uid(tray.get_uid()),
    m_machineuid(tray.get_machineuid()),
    m_trayid(tray.get_trayid()),
    m_code(tray.get_code()),
    m_updatetime(tray.get_updatetime())
{
}

RtTrayImp& RtTrayImp::operator=(const RtTrayImp& tray)
{
    if (this != &tray){
        this->m_uid = tray.get_uid();
        this->m_machineuid = tray.get_machineuid();
        this->m_trayid = tray.get_trayid();
        this->m_code = tray.get_code();
        this->m_updatetime = tray.get_updatetime();
    }
    return *this;
}

RtTrayImp::~RtTrayImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtTray::RtTray(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtTrayImp(bGeneraterUid);
    set_flags(TRAY_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_TRAY_FIELD_NULL);
}

RtTray::RtTray(const RtTray& tray): RtDatabaseObject(tray),
   m_pImp(new RtTrayImp(*tray.m_pImp))
{
}

RtTray& RtTray::operator = (const RtTray& tray)
{
    if(this != &tray)
    {
        RtDatabaseObject::operator=(tray);
        *this->m_pImp = *tray.m_pImp;
    }
    return *this;
}

RtTray::~RtTray()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtTray::get_uid() const { return m_pImp->get_uid();}
void RtTray::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(TRAY_UID);
    setdirty_field(TRAY_UID, true);
}

//machineuid
std::string RtTray::get_machineuid() const { return m_pImp->get_machineuid();}
void RtTray::set_machineuid(const std::string& machineuid)
{
    m_pImp->set_machineuid(machineuid);
    enable_field(TRAY_MACHINEUID);
    setdirty_field(TRAY_MACHINEUID, true);
}

//trayid
std::string RtTray::get_trayid() const { return m_pImp->get_trayid();}
void RtTray::set_trayid(const std::string& trayid)
{
    m_pImp->set_trayid(trayid);
    enable_field(TRAY_TRAYID);
    setdirty_field(TRAY_TRAYID, true);
}

//code
std::string RtTray::get_code() const { return m_pImp->get_code();}
void RtTray::set_code(const std::string& code)
{
    m_pImp->set_code(code);
    enable_field(TRAY_CODE);
    setdirty_field(TRAY_CODE, true);
}

//updatetime
DATETIME_BOOST RtTray::get_updatetime() const { return m_pImp->get_updatetime();}
void RtTray::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(TRAY_UPDATETIME);
    setdirty_field(TRAY_UPDATETIME, true);
}

RT_TPS_DATABASE_END_NAMESPACE