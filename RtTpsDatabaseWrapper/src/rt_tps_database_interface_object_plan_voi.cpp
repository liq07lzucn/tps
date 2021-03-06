﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_plan_voi.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 2016-8-15 14:37:11
///
///  \version 1.0
///  \date    9/2/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_plan_voi.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtPlan_voiImp::RtPlan_voiImp():
    m_planuid(""),
    m_voiuid(""),
    m_mindosecontribution(0.f),
    m_meandosecontribution(0.f),
    m_maxdosecontribution(0.f),
    m_updatetime(boost::date_time::not_a_date_time),
    m_ingrid(0.f)
{
}

RtPlan_voiImp::RtPlan_voiImp(const RtPlan_voiImp& plan_voi):
    m_planuid(plan_voi.get_planuid()),
    m_voiuid(plan_voi.get_voiuid()),
    m_mindosecontribution(plan_voi.get_mindosecontribution()),
    m_meandosecontribution(plan_voi.get_meandosecontribution()),
    m_maxdosecontribution(plan_voi.get_maxdosecontribution()),
    m_updatetime(plan_voi.get_updatetime()),
    m_ingrid(plan_voi.get_ingrid())
{
}

RtPlan_voiImp& RtPlan_voiImp::operator=(const RtPlan_voiImp& plan_voi)
{
    if (this != &plan_voi){
        this->m_planuid = plan_voi.get_planuid();
        this->m_voiuid = plan_voi.get_voiuid();
        this->m_mindosecontribution = plan_voi.get_mindosecontribution();
        this->m_meandosecontribution = plan_voi.get_meandosecontribution();
        this->m_maxdosecontribution = plan_voi.get_maxdosecontribution();
        this->m_updatetime = plan_voi.get_updatetime();
        this->m_ingrid = plan_voi.get_ingrid();
    }
    return *this;
}

RtPlan_voiImp::~RtPlan_voiImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtPlan_voi::RtPlan_voi()
{
    m_pImp = new RtPlan_voiImp();
}

RtPlan_voi::RtPlan_voi(const RtPlan_voi& plan_voi):
   m_pImp(new RtPlan_voiImp(*plan_voi.m_pImp))
{
}

RtPlan_voi& RtPlan_voi::operator = (const RtPlan_voi& plan_voi)
{
    if(this != &plan_voi) *this->m_pImp = *plan_voi.m_pImp;
    return *this;
}

RtPlan_voi::~RtPlan_voi()
{
    DEL_PTR(m_pImp);
}

//planuid
std::string RtPlan_voi::get_planuid() const { return m_pImp->get_planuid();}
void RtPlan_voi::set_planuid(const std::string& planuid) { m_pImp->set_planuid(planuid);}

//voiuid
std::string RtPlan_voi::get_voiuid() const { return m_pImp->get_voiuid();}
void RtPlan_voi::set_voiuid(const std::string& voiuid) { m_pImp->set_voiuid(voiuid);}

//mindosecontribution
float RtPlan_voi::get_mindosecontribution() const { return m_pImp->get_mindosecontribution();}
void RtPlan_voi::set_mindosecontribution(const float& mindosecontribution) { m_pImp->set_mindosecontribution(mindosecontribution);}

//meandosecontribution
float RtPlan_voi::get_meandosecontribution() const { return m_pImp->get_meandosecontribution();}
void RtPlan_voi::set_meandosecontribution(const float& meandosecontribution) { m_pImp->set_meandosecontribution(meandosecontribution);}

//maxdosecontribution
float RtPlan_voi::get_maxdosecontribution() const { return m_pImp->get_maxdosecontribution();}
void RtPlan_voi::set_maxdosecontribution(const float& maxdosecontribution) { m_pImp->set_maxdosecontribution(maxdosecontribution);}

//updatetime
DATETIME_BOOST RtPlan_voi::get_updatetime() const { return m_pImp->get_updatetime();}
void RtPlan_voi::set_updatetime(const DATETIME_BOOST& updatetime) { m_pImp->set_updatetime(updatetime);}

//ingrid
float RtPlan_voi::get_ingrid() const { return m_pImp->get_ingrid();}
void RtPlan_voi::set_ingrid(const float& ingrid) { m_pImp->set_ingrid(ingrid);}

RT_TPS_DATABASE_END_NAMESPACE