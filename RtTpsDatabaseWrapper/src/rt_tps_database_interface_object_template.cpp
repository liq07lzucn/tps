﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_template.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.1
///
///  \version 1.0
///  \date    1/19/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_template.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtTemplateImp::RtTemplateImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_name(""),
    m_value(""),
    m_datatype(0),
    m_updatetime(boost::date_time::not_a_date_time)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtTemplateImp::RtTemplateImp(const RtTemplateImp& temp):
    m_uid(temp.get_uid()),
    m_name(temp.get_name()),
    m_value(temp.get_value()),
    m_datatype(temp.get_datatype()),
    m_updatetime(temp.get_updatetime())
{
}

RtTemplateImp& RtTemplateImp::operator=(const RtTemplateImp& temp)
{
    if (this != &temp){
        this->m_uid = temp.get_uid();
        this->m_name = temp.get_name();
        this->m_value = temp.get_value();
        this->m_datatype = temp.get_datatype();
        this->m_updatetime = temp.get_updatetime();
    }
    return *this;
}

RtTemplateImp::~RtTemplateImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtTemplate::RtTemplate(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtTemplateImp(bGeneraterUid);
    set_flags(TEMPLATE_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_TEMPLATE_FIELD_NULL);
}

RtTemplate::RtTemplate(const RtTemplate& temp): RtDatabaseObject(temp),
   m_pImp(new RtTemplateImp(*temp.m_pImp))
{
}

RtTemplate& RtTemplate::operator = (const RtTemplate& temp)
{
    if(this != &temp)
    {
        RtDatabaseObject::operator=(temp);
        *this->m_pImp = *temp.m_pImp;
    }
    return *this;
}

RtTemplate::~RtTemplate()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtTemplate::get_uid() const { return m_pImp->get_uid();}
void RtTemplate::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(TEMPLATE_UID);
    setdirty_field(TEMPLATE_UID, true);
}

//name
std::string RtTemplate::get_name() const { return m_pImp->get_name();}
void RtTemplate::set_name(const std::string& name)
{
    m_pImp->set_name(name);
    enable_field(TEMPLATE_NAME);
    setdirty_field(TEMPLATE_NAME, true);
}

//value
std::string RtTemplate::get_value() const { return m_pImp->get_value();}
void RtTemplate::set_value(const std::string& value)
{
    m_pImp->set_value(value);
    enable_field(TEMPLATE_VALUE);
    setdirty_field(TEMPLATE_VALUE, true);
}

//datatype
int RtTemplate::get_datatype() const { return m_pImp->get_datatype();}
void RtTemplate::set_datatype(const int& datatype)
{
    m_pImp->set_datatype(datatype);
    enable_field(TEMPLATE_DATATYPE);
    setdirty_field(TEMPLATE_DATATYPE, true);
}

//updatetime
DATETIME_BOOST RtTemplate::get_updatetime() const { return m_pImp->get_updatetime();}
void RtTemplate::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(TEMPLATE_UPDATETIME);
    setdirty_field(TEMPLATE_UPDATETIME, true);
}

RT_TPS_DATABASE_END_NAMESPACE