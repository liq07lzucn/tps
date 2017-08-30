﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2015
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_plan_poi.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 2016/1/18 15:03:26
///
///  \version 1.0
///  \date    1/19/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_plan_poi.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtPlan_poiImp::RtPlan_poiImp():
    m_planuid(""),
    m_poiuid(""),
    m_dosecontribution(0.f),
    m_updatetime(boost::date_time::not_a_date_time)
{
}

RtPlan_poiImp::RtPlan_poiImp(const RtPlan_poiImp& plan_poi):
    m_planuid(plan_poi.get_planuid()),
    m_poiuid(plan_poi.get_poiuid()),
    m_dosecontribution(plan_poi.get_dosecontribution()),
    m_updatetime(plan_poi.get_updatetime())
{
}

RtPlan_poiImp& RtPlan_poiImp::operator=(const RtPlan_poiImp& plan_poi)
{
    if (this != &plan_poi){
        this->m_planuid = plan_poi.get_planuid();
        this->m_poiuid = plan_poi.get_poiuid();
        this->m_dosecontribution = plan_poi.get_dosecontribution();
        this->m_updatetime = plan_poi.get_updatetime();
    }
    return *this;
}

RtPlan_poiImp::~RtPlan_poiImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtPlan_poi::RtPlan_poi()
{
    m_pImp = new RtPlan_poiImp();
}

RtPlan_poi::RtPlan_poi(const RtPlan_poi& plan_poi):
   m_pImp(new RtPlan_poiImp(*plan_poi.m_pImp))
{
}

RtPlan_poi& RtPlan_poi::operator = (const RtPlan_poi& plan_poi)
{
    if(this != &plan_poi) *this->m_pImp = *plan_poi.m_pImp;
    return *this;
}

RtPlan_poi::~RtPlan_poi()
{
    DEL_PTR(m_pImp);
}

//planuid
std::string RtPlan_poi::get_planuid() const { return m_pImp->get_planuid();}
void RtPlan_poi::set_planuid(const std::string& planuid) { m_pImp->set_planuid(planuid);}

//poiuid
std::string RtPlan_poi::get_poiuid() const { return m_pImp->get_poiuid();}
void RtPlan_poi::set_poiuid(const std::string& poiuid) { m_pImp->set_poiuid(poiuid);}

//dosecontribution
float RtPlan_poi::get_dosecontribution() const { return m_pImp->get_dosecontribution();}
void RtPlan_poi::set_dosecontribution(const float& dosecontribution) { m_pImp->set_dosecontribution(dosecontribution);}

//updatetime
DATETIME_BOOST RtPlan_poi::get_updatetime() const { return m_pImp->get_updatetime();}
void RtPlan_poi::set_updatetime(const DATETIME_BOOST& updatetime) { m_pImp->set_updatetime(updatetime);}

RT_TPS_DATABASE_END_NAMESPACE