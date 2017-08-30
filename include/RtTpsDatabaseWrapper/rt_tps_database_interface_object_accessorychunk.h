﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object.h
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.11
///
///  \version 1.0
///  \date    7/26/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#ifndef RT_TPS_DATABASE_INTERFACE_OBJECT_ACCESSORYCHUNK_H_
#define RT_TPS_DATABASE_INTERFACE_OBJECT_ACCESSORYCHUNK_H_

#include "RtTpsDatabaseWrapper/rt_tps_database_defs.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_base.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_common_enums.h"
#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"
#include "boost/archive/xml_iarchive.hpp"
#include "boost/archive/xml_oarchive.hpp"
#include "boost/date_time/posix_time/time_serialize.hpp"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

enum ACCESSORYCHUNK_FIELD
{
    ACCESSORYCHUNK_UID = 0,
    ACCESSORYCHUNK_ACCESSORYUID,
    ACCESSORYCHUNK_COMMISSIONEDUNITUID,
    ACCESSORYCHUNK_MU,
    ACCESSORYCHUNK_MU_DX,
    ACCESSORYCHUNK_MU_DR,
    ACCESSORYCHUNK_MU_DA,
    ACCESSORYCHUNK_MU_DV,
    ACCESSORYCHUNK_HVL_SLOPE,
    ACCESSORYCHUNK_DENSITY,
    ACCESSORYCHUNK_DATATYPE,
    ACCESSORYCHUNK_MCPHOPARAM1,
    ACCESSORYCHUNK_MCPHOPARAM2,
    ACCESSORYCHUNK_MCPHOPARAM3,
    ACCESSORYCHUNK_MCPHOPARAM4,
    ACCESSORYCHUNK_MCPHOPARAM5,
    ACCESSORYCHUNK_MCPHOPARAM6,
    ACCESSORYCHUNK_MCPHOOFFAXISVEC,
    ACCESSORYCHUNK_ALGORITHMTYPE,
    ACCESSORYCHUNK_CRC,
    ACCESSORYCHUNK_UPDATETIME,
    ACCESSORYCHUNK_FIELD_MAX
};

static const char* ENUM2STRING_ACCESSORYCHUNK_FIELD[] =
{
    "UID",
    "ACCESSORYUID",
    "COMMISSIONEDUNITUID",
    "MU",
    "MU_DX",
    "MU_DR",
    "MU_DA",
    "MU_DV",
    "HVL_SLOPE",
    "DENSITY",
    "DATATYPE",
    "MCPHOPARAM1",
    "MCPHOPARAM2",
    "MCPHOPARAM3",
    "MCPHOPARAM4",
    "MCPHOPARAM5",
    "MCPHOPARAM6",
    "MCPHOOFFAXISVEC",
    "ALGORITHMTYPE",
    "CRC",
    "UPDATETIME",
    "ACCESSORYCHUNK_FIELD_MAX"
};

static const char* ENUM2STRING_ACCESSORYCHUNK_FIELD_NULL = "100000000000000000001";

typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

class RtAccessorychunkImp;

class RT_DB_EXPORT RtAccessorychunk : public RtDatabaseObject
{
public:

    //default is false to improve performance
    RtAccessorychunk(bool bGeneraterUid = false);

    ~RtAccessorychunk();

    RtAccessorychunk(const RtAccessorychunk& accessorychunk);

    RtAccessorychunk& operator = (const RtAccessorychunk& accessorychunk);

    /*uid varchar
      pk*/
    std::string get_uid() const;
    void set_uid(const std::string& uid);

    /*accessoryuid varchar
      FK link to Accessory Table */
    std::string get_accessoryuid() const;
    void set_accessoryuid(const std::string& accessoryuid);

    /*commissionedunituid varchar
      FK Link to commissionedunit table uid*/
    std::string get_commissionedunituid() const;
    void set_commissionedunituid(const std::string& commissionedunituid);

    /*mu float
      Defined according Jingjie's advice*/
    float get_mu() const;
    void set_mu(const float& mu);

    /*mu_dx float
      Defined according Jingjie's advice*/
    float get_mu_dx() const;
    void set_mu_dx(const float& mu_dx);

    /*mu_dr float
      Defined according Jingjie's advice*/
    float get_mu_dr() const;
    void set_mu_dr(const float& mu_dr);

    /*mu_da float
      Defined according Jingjie's advice*/
    float get_mu_da() const;
    void set_mu_da(const float& mu_da);

    /*mu_dv float
      Defined according Jingjie's advice*/
    float get_mu_dv() const;
    void set_mu_dv(const float& mu_dv);

    /*hvl_slope float
      Defined according Jingjie's advice*/
    float get_hvl_slope() const;
    void set_hvl_slope(const float& hvl_slope);

    /*density float
      密度*/
    float get_density() const;
    void set_density(const float& density);

    /*datatype int
      data type*/
    int get_datatype() const;
    void set_datatype(const int& datatype);

    /*mcphoparam1 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam1() const;
    void set_mcphoparam1(const std::string& mcphoparam1);

    /*mcphoparam2 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam2() const;
    void set_mcphoparam2(const std::string& mcphoparam2);

    /*mcphoparam3 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam3() const;
    void set_mcphoparam3(const std::string& mcphoparam3);

    /*mcphoparam4 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam4() const;
    void set_mcphoparam4(const std::string& mcphoparam4);

    /*mcphoparam5 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam5() const;
    void set_mcphoparam5(const std::string& mcphoparam5);

    /*mcphoparam6 varchar
      maybe for intersection line length matrix*/
    std::string get_mcphoparam6() const;
    void set_mcphoparam6(const std::string& mcphoparam6);

    /*mcphooffaxisvec blob
      mcphooffaxisvec filepath*/
    std::string get_mcphooffaxisvec() const;
    void set_mcphooffaxisvec(const std::string& mcphooffaxisvec);

    /*algorithmtype int
      算法类型*/
    int get_algorithmtype() const;
    void set_algorithmtype(const int& algorithmtype);

    /*crc varchar
      crc*/
    std::string get_crc() const;
    void set_crc(const std::string& crc);

    /*updatetime timestamp
      时间戳*/
    DATETIME_BOOST get_updatetime() const;
    void set_updatetime(const DATETIME_BOOST& updatetime);

	/*contour uid 数据库暂时没有对应字段，算法组需要该字段 add by wzd */
	std::string get_contouruid() const;
	void set_contouruid(const std::string& contouruid);

private:
    friend class boost::serialization::access;
    template<class Archive>
    void serialize( Archive &ar,const unsigned int version) {
  	  version;
	  ar & BOOST_SERIALIZATION_BASE_OBJECT_NVP(RtDatabaseObject);
  	  ar & BOOST_SERIALIZATION_NVP(m_pImp);
    }
    RtAccessorychunkImp*                   m_pImp;
};


//////////////////////////////////////////////////////////////////////////
//for imp

class RtAccessorychunkImp
{

public:
    //default is false to improve performance
    RT_DB_EXPORT RtAccessorychunkImp(bool bGeneraterUid = false);

    virtual ~RtAccessorychunkImp();

    RtAccessorychunkImp(const RtAccessorychunkImp& accessorychunk);

    RtAccessorychunkImp& operator = (const RtAccessorychunkImp& accessorychunk);

    //uid
    inline std::string get_uid() const { return m_uid;}
    inline void set_uid(const std::string& uid) { m_uid = uid;}

    //accessoryuid
    inline std::string get_accessoryuid() const { return m_accessoryuid;}
    inline void set_accessoryuid(const std::string& accessoryuid) { m_accessoryuid = accessoryuid;}

    //commissionedunituid
    inline std::string get_commissionedunituid() const { return m_commissionedunituid;}
    inline void set_commissionedunituid(const std::string& commissionedunituid) { m_commissionedunituid = commissionedunituid;}

    //mu
    inline float get_mu() const { return m_mu;}
    inline void set_mu(const float& mu) { m_mu = mu;}

    //mu_dx
    inline float get_mu_dx() const { return m_mu_dx;}
    inline void set_mu_dx(const float& mu_dx) { m_mu_dx = mu_dx;}

    //mu_dr
    inline float get_mu_dr() const { return m_mu_dr;}
    inline void set_mu_dr(const float& mu_dr) { m_mu_dr = mu_dr;}

    //mu_da
    inline float get_mu_da() const { return m_mu_da;}
    inline void set_mu_da(const float& mu_da) { m_mu_da = mu_da;}

    //mu_dv
    inline float get_mu_dv() const { return m_mu_dv;}
    inline void set_mu_dv(const float& mu_dv) { m_mu_dv = mu_dv;}

    //hvl_slope
    inline float get_hvl_slope() const { return m_hvl_slope;}
    inline void set_hvl_slope(const float& hvl_slope) { m_hvl_slope = hvl_slope;}

    //density
    inline float get_density() const { return m_density;}
    inline void set_density(const float& density) { m_density = density;}

    //datatype
    inline int get_datatype() const { return m_datatype;}
    inline void set_datatype(const int& datatype) { m_datatype = datatype;}

    //mcphoparam1
    inline std::string get_mcphoparam1() const { return m_mcphoparam1;}
    inline void set_mcphoparam1(const std::string& mcphoparam1) { m_mcphoparam1 = mcphoparam1;}

    //mcphoparam2
    inline std::string get_mcphoparam2() const { return m_mcphoparam2;}
    inline void set_mcphoparam2(const std::string& mcphoparam2) { m_mcphoparam2 = mcphoparam2;}

    //mcphoparam3
    inline std::string get_mcphoparam3() const { return m_mcphoparam3;}
    inline void set_mcphoparam3(const std::string& mcphoparam3) { m_mcphoparam3 = mcphoparam3;}

    //mcphoparam4
    inline std::string get_mcphoparam4() const { return m_mcphoparam4;}
    inline void set_mcphoparam4(const std::string& mcphoparam4) { m_mcphoparam4 = mcphoparam4;}

    //mcphoparam5
    inline std::string get_mcphoparam5() const { return m_mcphoparam5;}
    inline void set_mcphoparam5(const std::string& mcphoparam5) { m_mcphoparam5 = mcphoparam5;}

    //mcphoparam6
    inline std::string get_mcphoparam6() const { return m_mcphoparam6;}
    inline void set_mcphoparam6(const std::string& mcphoparam6) { m_mcphoparam6 = mcphoparam6;}

    //mcphooffaxisvec
    inline std::string get_mcphooffaxisvec() const { return m_mcphooffaxisvec;}
    inline void set_mcphooffaxisvec(const std::string& mcphooffaxisvec) { m_mcphooffaxisvec = mcphooffaxisvec;}

    //algorithmtype
    inline int get_algorithmtype() const { return m_algorithmtype;}
    inline void set_algorithmtype(const int& algorithmtype) { m_algorithmtype = algorithmtype;}

    //crc
    inline std::string get_crc() const { return m_crc;}
    inline void set_crc(const std::string& crc) { m_crc = crc;}

    //updatetime
    inline DATETIME_BOOST get_updatetime() const { return m_updatetime;}
    inline void set_updatetime(const DATETIME_BOOST& updatetime) { m_updatetime = updatetime;}

	//coutouruid
	inline std::string get_contouruid() const {return m_contouruid;}
	inline void set_contouruid(const std::string& contouruid) {m_contouruid = contouruid;}

private:    //21 parameters
    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive &ar, const unsigned int version) {
		version;
		ar & BOOST_SERIALIZATION_NVP(m_uid);
		ar & BOOST_SERIALIZATION_NVP(m_accessoryuid);
		ar & BOOST_SERIALIZATION_NVP(m_commissionedunituid);
		ar & BOOST_SERIALIZATION_NVP(m_mu);
		ar & BOOST_SERIALIZATION_NVP(m_mu_dx);
		ar & BOOST_SERIALIZATION_NVP(m_mu_dr);
		ar & BOOST_SERIALIZATION_NVP(m_mu_da);
		ar & BOOST_SERIALIZATION_NVP(m_mu_dv);
		ar & BOOST_SERIALIZATION_NVP(m_hvl_slope);
		ar & BOOST_SERIALIZATION_NVP(m_density);
		ar & BOOST_SERIALIZATION_NVP(m_datatype);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam1);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam2);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam3);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam4);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam5);
		ar & BOOST_SERIALIZATION_NVP(m_mcphoparam6);
		ar & BOOST_SERIALIZATION_NVP(m_mcphooffaxisvec);
		ar & BOOST_SERIALIZATION_NVP(m_algorithmtype);
		ar & BOOST_SERIALIZATION_NVP(m_crc);
		ar & BOOST_SERIALIZATION_NVP(m_updatetime);
	}
    std::string						m_uid;
    std::string						m_accessoryuid;
    std::string						m_commissionedunituid;
    float							m_mu;
    float							m_mu_dx;
    float							m_mu_dr;
    float							m_mu_da;
    float							m_mu_dv;
    float							m_hvl_slope;
    float							m_density;
    int								m_datatype;
    std::string						m_mcphoparam1;
    std::string						m_mcphoparam2;
    std::string						m_mcphoparam3;
    std::string						m_mcphoparam4;
    std::string						m_mcphoparam5;
    std::string						m_mcphoparam6;
    std::string						m_mcphooffaxisvec;
    int								m_algorithmtype;
    std::string						m_crc;
    DATETIME_BOOST					m_updatetime;
	std::string                     m_contouruid;
};

RT_TPS_DATABASE_END_NAMESPACE
#endif