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

#ifndef RT_TPS_DATABASE_INTERFACE_OBJECT_MONOCOMPRESSEDPHASESPACEDATA_H_
#define RT_TPS_DATABASE_INTERFACE_OBJECT_MONOCOMPRESSEDPHASESPACEDATA_H_

#include "RtTpsDatabaseWrapper/rt_tps_database_defs.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_base.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_common_enums.h"
#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

enum MONOCOMPRESSEDPHASESPACEDATA_FIELD
{
    MONOCOMPRESSEDPHASESPACEDATA_UID = 0,
    MONOCOMPRESSEDPHASESPACEDATA_INJECTELECTRONENERGY,
    MONOCOMPRESSEDPHASESPACEDATA_PHSPDISTANCEFROMTARGET,
    MONOCOMPRESSEDPHASESPACEDATA_FILEPATH,
    MONOCOMPRESSEDPHASESPACEDATA_PHSPFILEPATH,
    MONOCOMPRESSEDPHASESPACEDATA_UPDATETIME,
    MONOCOMPRESSEDPHASESPACEDATA_FIELD_MAX
};

static const char* ENUM2STRING_MONOCOMPRESSEDPHASESPACEDATA_FIELD[] =
{
    "UID",
    "INJECTELECTRONENERGY",
    "PHSPDISTANCEFROMTARGET",
    "FILEPATH",
    "PHSPFILEPATH",
    "UPDATETIME",
    "MONOCOMPRESSEDPHASESPACEDATA_FIELD_MAX"
};

static const char* ENUM2STRING_MONOCOMPRESSEDPHASESPACEDATA_FIELD_NULL = "100001";

typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

class RtMonocompressedphasespacedataImp;

class RT_DB_EXPORT RtMonocompressedphasespacedata : public RtDatabaseObject
{
public:

    //default is false to improve performance
    RtMonocompressedphasespacedata(bool bGeneraterUid = false);

    ~RtMonocompressedphasespacedata();

    RtMonocompressedphasespacedata(const RtMonocompressedphasespacedata& monocompressedphasespacedata);

    RtMonocompressedphasespacedata& operator = (const RtMonocompressedphasespacedata& monocompressedphasespacedata);

    /*uid varchar
      PK*/
    std::string get_uid() const;
    void set_uid(const std::string& uid);

    /*injectelectronenergy float
      入射电子能量*/
    float get_injectelectronenergy() const;
    void set_injectelectronenergy(const float& injectelectronenergy);

    /*phspdistancefromtarget float
      相空间文件到靶的距离*/
    float get_phspdistancefromtarget() const;
    void set_phspdistancefromtarget(const float& phspdistancefromtarget);

    /*filepath varchar
      文件路径*/
    std::string get_filepath() const;
    void set_filepath(const std::string& filepath);

    /*phspfilepath varchar
      相空间文件路径*/
    std::string get_phspfilepath() const;
    void set_phspfilepath(const std::string& phspfilepath);

    /*updatetime timestamp
      时间戳*/
    DATETIME_BOOST get_updatetime() const;
    void set_updatetime(const DATETIME_BOOST& updatetime);


private:
    RtMonocompressedphasespacedataImp*                   m_pImp;
};


//////////////////////////////////////////////////////////////////////////
//for imp

class RtMonocompressedphasespacedataImp
{

public:
    //default is false to improve performance
    RtMonocompressedphasespacedataImp(bool bGeneraterUid = false);

    ~RtMonocompressedphasespacedataImp();

    RtMonocompressedphasespacedataImp(const RtMonocompressedphasespacedataImp& monocompressedphasespacedata);

    RtMonocompressedphasespacedataImp& operator = (const RtMonocompressedphasespacedataImp& monocompressedphasespacedata);

    //uid
    inline std::string get_uid() const { return m_uid;}
    inline void set_uid(const std::string& uid) { m_uid = uid;}

    //injectelectronenergy
    inline float get_injectelectronenergy() const { return m_injectelectronenergy;}
    inline void set_injectelectronenergy(const float& injectelectronenergy) { m_injectelectronenergy = injectelectronenergy;}

    //phspdistancefromtarget
    inline float get_phspdistancefromtarget() const { return m_phspdistancefromtarget;}
    inline void set_phspdistancefromtarget(const float& phspdistancefromtarget) { m_phspdistancefromtarget = phspdistancefromtarget;}

    //filepath
    inline std::string get_filepath() const { return m_filepath;}
    inline void set_filepath(const std::string& filepath) { m_filepath = filepath;}

    //phspfilepath
    inline std::string get_phspfilepath() const { return m_phspfilepath;}
    inline void set_phspfilepath(const std::string& phspfilepath) { m_phspfilepath = phspfilepath;}

    //updatetime
    inline DATETIME_BOOST get_updatetime() const { return m_updatetime;}
    inline void set_updatetime(const DATETIME_BOOST& updatetime) { m_updatetime = updatetime;}

private:    //6 parameters
    std::string						m_uid;
    float							m_injectelectronenergy;
    float							m_phspdistancefromtarget;
    std::string						m_filepath;
    std::string						m_phspfilepath;
    DATETIME_BOOST					m_updatetime;
};

RT_TPS_DATABASE_END_NAMESPACE
#endif