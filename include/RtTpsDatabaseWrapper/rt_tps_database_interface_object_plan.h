﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object.h
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.10
///
///  \version 1.0
///  \date    6/30/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#ifndef RT_TPS_DATABASE_INTERFACE_OBJECT_PLAN_H_
#define RT_TPS_DATABASE_INTERFACE_OBJECT_PLAN_H_

#include "RtTpsDatabaseWrapper/rt_tps_database_defs.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_base.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_common_enums.h"
#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

enum PLAN_FIELD
{
    PLAN_UID = 0,
    PLAN_COURSEUID,
    PLAN_IMAGESERIESUID,
    PLAN_SETUPPOIUID,
    PLAN_NAME,
    PLAN_SOPINSTANCEUID,
    PLAN_PLANSOURCETYPE,
    PLAN_BODYTHICKNESS,
    PLAN_PLANNER,
    PLAN_TOTALGOAL,
    PLAN_TPSVERNO,
    PLAN_TMSVERNO,
    PLAN_PLANID,
    PLAN_ORIGINTYPE,
    PLAN_DISPLAYMODE,
    PLAN_HUNDREDPERCENTDEFINITION,
    PLAN_SPECIFIEDDOSE,
    PLAN_RENDERMODE,
    PLAN_TRANSPARENCY,
    PLAN_ENABLESKINDOSEVIEW,
    PLAN_MAXSKINDOSE,
    PLAN_TRANSPARENCY3D,
    PLAN_PATIENTPOSITION,
    PLAN_DESCRIPTION,
    PLAN_UPDATETIME,
    PLAN_FIELD_MAX
};

static const char* ENUM2STRING_PLAN_FIELD[] =
{
    "UID",
    "COURSEUID",
    "IMAGESERIESUID",
    "SETUPPOIUID",
    "NAME",
    "SOPINSTANCEUID",
    "PLANSOURCETYPE",
    "BODYTHICKNESS",
    "PLANNER",
    "TOTALGOAL",
    "TPSVERNO",
    "TMSVERNO",
    "PLANID",
    "ORIGINTYPE",
    "DISPLAYMODE",
    "HUNDREDPERCENTDEFINITION",
    "SPECIFIEDDOSE",
    "RENDERMODE",
    "TRANSPARENCY",
    "ENABLESKINDOSEVIEW",
    "MAXSKINDOSE",
    "TRANSPARENCY3D",
    "PATIENTPOSITION",
    "DESCRIPTION",
    "UPDATETIME",
    "PLAN_FIELD_MAX"
};

static const char* ENUM2STRING_PLAN_FIELD_NULL = "1100000000000000000000001";

typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

class RtPlanImp;
class RtDosegrid;

class RT_DB_EXPORT RtPlan : public RtDatabaseObject
{
public:

    //default is false to improve performance
    RtPlan(bool bGeneraterUid = false);

    ~RtPlan();

    RtPlan(const RtPlan& plan);

    RtPlan& operator = (const RtPlan& plan);

    /*uid varchar
      PK*/
    std::string get_uid() const;
    void set_uid(const std::string& uid);

    /*courseuid varchar
      related course*/
    std::string get_courseuid() const;
    void set_courseuid(const std::string& courseuid);

    /*imageseriesuid varchar
      关联的Series号*/
    std::string get_imageseriesuid() const;
    void set_imageseriesuid(const std::string& imageseriesuid);

    /*setuppoiuid varchar
      */
    std::string get_setuppoiuid() const;
    void set_setuppoiuid(const std::string& setuppoiuid);

    /*name varchar
      名字*/
    std::string get_name() const;
    void set_name(const std::string& name);

    /*sopinstanceuid varchar
      Dicom实例UID*/
    std::string get_sopinstanceuid() const;
    void set_sopinstanceuid(const std::string& sopinstanceuid);

    /*plansourcetype int
      Indicate the plan come from PlanQA/EasyPlan/Evaluation*/
    int get_plansourcetype() const;
    void set_plansourcetype(const int& plansourcetype);

    /*bodythickness float
      patient body thickness only for QAPlan*/
    float get_bodythickness() const;
    void set_bodythickness(const float& bodythickness);

    /*planner varchar
      计划者*/
    std::string get_planner() const;
    void set_planner(const std::string& planner);

    /*totalgoal float
      TPS使用，再确认*/
    float get_totalgoal() const;
    void set_totalgoal(const float& totalgoal);

    /*tpsverno int
      tps verno*/
    int get_tpsverno() const;
    void set_tpsverno(const int& tpsverno);

    /*tmsverno int
      tms verno*/
    int get_tmsverno() const;
    void set_tmsverno(const int& tmsverno);

    /*planid varchar
      plan id*/
    std::string get_planid() const;
    void set_planid(const std::string& planid);

    /*origintype int
      origin type*/
    int get_origintype() const;
    void set_origintype(const int& origintype);

    /*displaymode int
      剂量线显示方式*/
    int get_displaymode() const;
    void set_displaymode(const int& displaymode);

    /*hundredpercentdefinition int
      百分百剂量线对应的剂量值*/
    int get_hundredpercentdefinition() const;
    void set_hundredpercentdefinition(const int& hundredpercentdefinition);

    /*specifieddose double
      用户自定义百分百剂量线对应的剂量值*/
    double get_specifieddose() const;
    void set_specifieddose(const double& specifieddose);

    /*rendermode int
      剂量线绘制方式*/
    int get_rendermode() const;
    void set_rendermode(const int& rendermode);

    /*transparency float
      透明度*/
    float get_transparency() const;
    void set_transparency(const float& transparency);

    /*enableskindoseview tinyint
      是否允许查看皮肤剂量*/
    bool get_enableskindoseview() const;
    void set_enableskindoseview(const bool& enableskindoseview);

    /*maxskindose float
      显示最大皮肤剂量*/
    float get_maxskindose() const;
    void set_maxskindose(const float& maxskindose);

    /*transparency3d float
      表示doseline在3D窗口的透明度。*/
    float get_transparency3d() const;
    void set_transparency3d(const float& transparency3d);

    /*patientposition varchar
      (0018,5100) Patient Position PatientPosition CS 1,Patient position descriptor relative to the equipment. Required for CT, MR and NM images. See C.7.3.1.1.2. for Defined Terms and further explanation.*/
    std::string get_patientposition() const;
    void set_patientposition(const std::string& patientposition);

    /*description varchar
      */
    std::string get_description() const;
    void set_description(const std::string& description);

    /*updatetime timestamp
      时间戳*/
    DATETIME_BOOST get_updatetime() const;
    void set_updatetime(const DATETIME_BOOST& updatetime);


    //////////////////////////////////////////////////////////////////////////
    RtDosegrid* get_dosegrid() const;

private:
    RtPlanImp*                   m_pImp;
};


//////////////////////////////////////////////////////////////////////////
//for imp

class RtPlanImp
{

public:
    //default is false to improve performance
    RtPlanImp(bool bGeneraterUid = false);

    ~RtPlanImp();

    RtPlanImp(const RtPlanImp& plan);

    RtPlanImp& operator = (const RtPlanImp& plan);

    //uid
    inline std::string get_uid() const { return m_uid;}
    inline void set_uid(const std::string& uid) { m_uid = uid;}

    //courseuid
    inline std::string get_courseuid() const { return m_courseuid;}
    inline void set_courseuid(const std::string& courseuid) { m_courseuid = courseuid;}

    //imageseriesuid
    inline std::string get_imageseriesuid() const { return m_imageseriesuid;}
    inline void set_imageseriesuid(const std::string& imageseriesuid) { m_imageseriesuid = imageseriesuid;}

    //setuppoiuid
    inline std::string get_setuppoiuid() const { return m_setuppoiuid;}
    inline void set_setuppoiuid(const std::string& setuppoiuid) { m_setuppoiuid = setuppoiuid;}

    //name
    inline std::string get_name() const { return m_name;}
    inline void set_name(const std::string& name) { m_name = name;}

    //sopinstanceuid
    inline std::string get_sopinstanceuid() const { return m_sopinstanceuid;}
    inline void set_sopinstanceuid(const std::string& sopinstanceuid) { m_sopinstanceuid = sopinstanceuid;}

    //plansourcetype
    inline int get_plansourcetype() const { return m_plansourcetype;}
    inline void set_plansourcetype(const int& plansourcetype) { m_plansourcetype = plansourcetype;}

    //bodythickness
    inline float get_bodythickness() const { return m_bodythickness;}
    inline void set_bodythickness(const float& bodythickness) { m_bodythickness = bodythickness;}

    //planner
    inline std::string get_planner() const { return m_planner;}
    inline void set_planner(const std::string& planner) { m_planner = planner;}

    //totalgoal
    inline float get_totalgoal() const { return m_totalgoal;}
    inline void set_totalgoal(const float& totalgoal) { m_totalgoal = totalgoal;}

    //tpsverno
    inline int get_tpsverno() const { return m_tpsverno;}
    inline void set_tpsverno(const int& tpsverno) { m_tpsverno = tpsverno;}

    //tmsverno
    inline int get_tmsverno() const { return m_tmsverno;}
    inline void set_tmsverno(const int& tmsverno) { m_tmsverno = tmsverno;}

    //planid
    inline std::string get_planid() const { return m_planid;}
    inline void set_planid(const std::string& planid) { m_planid = planid;}

    //origintype
    inline int get_origintype() const { return m_origintype;}
    inline void set_origintype(const int& origintype) { m_origintype = origintype;}

    //displaymode
    inline int get_displaymode() const { return m_displaymode;}
    inline void set_displaymode(const int& displaymode) { m_displaymode = displaymode;}

    //hundredpercentdefinition
    inline int get_hundredpercentdefinition() const { return m_hundredpercentdefinition;}
    inline void set_hundredpercentdefinition(const int& hundredpercentdefinition) { m_hundredpercentdefinition = hundredpercentdefinition;}

    //specifieddose
    inline double get_specifieddose() const { return m_specifieddose;}
    inline void set_specifieddose(const double& specifieddose) { m_specifieddose = specifieddose;}

    //rendermode
    inline int get_rendermode() const { return m_rendermode;}
    inline void set_rendermode(const int& rendermode) { m_rendermode = rendermode;}

    //transparency
    inline float get_transparency() const { return m_transparency;}
    inline void set_transparency(const float& transparency) { m_transparency = transparency;}

    //enableskindoseview
    inline bool get_enableskindoseview() const { return m_enableskindoseview;}
    inline void set_enableskindoseview(const bool& enableskindoseview) { m_enableskindoseview = enableskindoseview;}

    //maxskindose
    inline float get_maxskindose() const { return m_maxskindose;}
    inline void set_maxskindose(const float& maxskindose) { m_maxskindose = maxskindose;}

    //transparency3d
    inline float get_transparency3d() const { return m_transparency3d;}
    inline void set_transparency3d(const float& transparency3d) { m_transparency3d = transparency3d;}

    //patientposition
    inline std::string get_patientposition() const { return m_patientposition;}
    inline void set_patientposition(const std::string& patientposition) { m_patientposition = patientposition;}

    //description
    inline std::string get_description() const { return m_description;}
    inline void set_description(const std::string& description) { m_description = description;}

    //updatetime
    inline DATETIME_BOOST get_updatetime() const { return m_updatetime;}
    inline void set_updatetime(const DATETIME_BOOST& updatetime) { m_updatetime = updatetime;}

    //////////////////////////////////////////////////////////////////////////
    inline RtDosegrid* get_dosegrid() const {return m_dosegrid;}

private:    //25 parameters
    std::string						m_uid;
    std::string						m_courseuid;
    std::string						m_imageseriesuid;
    std::string						m_setuppoiuid;
    std::string						m_name;
    std::string						m_sopinstanceuid;
    int								m_plansourcetype;
    float							m_bodythickness;
    std::string						m_planner;
    float							m_totalgoal;
    int								m_tpsverno;
    int								m_tmsverno;
    std::string						m_planid;
    int								m_origintype;
    int								m_displaymode;
    int								m_hundredpercentdefinition;
    double							m_specifieddose;
    int								m_rendermode;
    float							m_transparency;
    bool							m_enableskindoseview;
    float							m_maxskindose;
    float							m_transparency3d;
    std::string						m_patientposition;
    std::string						m_description;
    DATETIME_BOOST					m_updatetime;
    //////////////////////////////////////////////////////////////////////////
    RtDosegrid*                     m_dosegrid;
};

RT_TPS_DATABASE_END_NAMESPACE
#endif