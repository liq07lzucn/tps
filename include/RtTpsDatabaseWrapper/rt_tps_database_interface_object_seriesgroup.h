﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object.h
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 2016-9-2 16:01:15
///
///  \version 1.0
///  \date    10/13/2016
///  \{
//////////////////////////////////////////////////////////////////////////

#ifndef RT_TPS_DATABASE_INTERFACE_OBJECT_SERIESGROUP_H_
#define RT_TPS_DATABASE_INTERFACE_OBJECT_SERIESGROUP_H_

#include "RtTpsDatabaseWrapper/rt_tps_database_defs.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_base.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_common_enums.h"
#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

enum SERIESGROUP_FIELD
{
    SERIESGROUP_UID = 0,
    SERIESGROUP_PATIENTUID,
    SERIESGROUP_NAME,
    SERIESGROUP_GROUPTYPE,
    SERIESGROUP_MAINSERIESUID,
    SERIESGROUP_UPDATETIME,
    SERIESGROUP_FIELD_MAX
};

static const char* ENUM2STRING_SERIESGROUP_FIELD[] =
{
    "UID",
    "PATIENTUID",
    "NAME",
    "GROUPTYPE",
    "MAINSERIESUID",
    "UPDATETIME",
    "SERIESGROUP_FIELD_MAX"
};

static const char* ENUM2STRING_SERIESGROUP_FIELD_NULL = "100001";

typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

class RtSeriesgroupImp;

class RT_DB_EXPORT RtSeriesgroup : public RtDatabaseObject
{
public:

    //default is false to improve performance
    RtSeriesgroup(bool bGeneraterUid = false);

    ~RtSeriesgroup();

    RtSeriesgroup(const RtSeriesgroup& seriesgroup);

    RtSeriesgroup& operator = (const RtSeriesgroup& seriesgroup);

    /*uid varchar
      PK, group uid*/
    std::string get_uid() const;
    void set_uid(const std::string& uid);

    /*patientuid varchar
      */
    std::string get_patientuid() const;
    void set_patientuid(const std::string& patientuid);

    /*name varchar
      group name*/
    std::string get_name() const;
    void set_name(const std::string& name);

    /*grouptype int
      0 - 4DCT
            1-PETCT*/
    int get_grouptype() const;
    void set_grouptype(const int& grouptype);

    /*mainseriesuid varchar
      这个series group的主序列(main series) uid, 可空
            */
    std::string get_mainseriesuid() const;
    void set_mainseriesuid(const std::string& mainseriesuid);

    /*updatetime timestamp
      时间戳*/
    DATETIME_BOOST get_updatetime() const;
    void set_updatetime(const DATETIME_BOOST& updatetime);


private:
    RtSeriesgroupImp*                   m_pImp;
};


//////////////////////////////////////////////////////////////////////////
//for imp

class RtSeriesgroupImp
{

public:
    //default is false to improve performance
    RtSeriesgroupImp(bool bGeneraterUid = false);

    ~RtSeriesgroupImp();

    RtSeriesgroupImp(const RtSeriesgroupImp& seriesgroup);

    RtSeriesgroupImp& operator = (const RtSeriesgroupImp& seriesgroup);

    //uid
    inline std::string get_uid() const { return m_uid;}
    inline void set_uid(const std::string& uid) { m_uid = uid;}

    //patientuid
    inline std::string get_patientuid() const { return m_patientuid;}
    inline void set_patientuid(const std::string& patientuid) { m_patientuid = patientuid;}

    //name
    inline std::string get_name() const { return m_name;}
    inline void set_name(const std::string& name) { m_name = name;}

    //grouptype
    inline int get_grouptype() const { return m_grouptype;}
    inline void set_grouptype(const int& grouptype) { m_grouptype = grouptype;}

    //mainseriesuid
    inline std::string get_mainseriesuid() const { return m_mainseriesuid;}
    inline void set_mainseriesuid(const std::string& mainseriesuid) { m_mainseriesuid = mainseriesuid;}

    //updatetime
    inline DATETIME_BOOST get_updatetime() const { return m_updatetime;}
    inline void set_updatetime(const DATETIME_BOOST& updatetime) { m_updatetime = updatetime;}

private:    //6 parameters
    std::string						m_uid;
    std::string						m_patientuid;
    std::string						m_name;
    int								m_grouptype;
    std::string						m_mainseriesuid;
    DATETIME_BOOST					m_updatetime;
};

RT_TPS_DATABASE_END_NAMESPACE
#endif