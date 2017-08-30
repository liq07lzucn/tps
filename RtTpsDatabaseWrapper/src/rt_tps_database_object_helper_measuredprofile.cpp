﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_object_helper_measuredprofile.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///             From database version: 1.1.11
///
///  \version 1.0
///  \date    8/8/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "rt_tps_database_object_helper.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_measuredprofile.h"
#include "boost/date_time/posix_time/time_parsers.hpp"
typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

RT_TPS_DATABASE_BEGIN_NAMESPACE;

bool RtDatabaseHelper::InsertUpdateDBFromObject(const RtMeasuredprofile& src, bool bInsert)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }
    //21 parameters
    unsigned int field_num = 0;
    std::string sSql("");
    std::string sName("");
    if (!bInsert)
    {
        for (unsigned int i(0); i < MEASUREDPROFILE_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_MEASUREDPROFILE_FIELD[i];
            if (sName.empty())
            {
                sName += std::string(file_name) + "=?";
            }
            else
            {
                sName += "," + std::string(file_name) + "=?";
            }
            ++field_num;
        }
        sSql = "UPDATE tmsmeasuredprofile SET " + sName + " WHERE uid='" + src.get_uid() + "'";
    }
    else
    {
        std::string sValues("");
        for (unsigned int i(0); i < MEASUREDPROFILE_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_MEASUREDPROFILE_FIELD[i];
            if (sName.empty())
            {
                sName += std::string(file_name);
                sValues += "?";
            }
            else
            {
                sName += "," + std::string(file_name);
                sValues += ",?";
            }
            ++field_num;
        }
        sSql = "INSERT INTO tmsmeasuredprofile (" + sName + ") VALUES (" + sValues + ")";
    }
    if (mysql_stmt_prepare(stmt, sSql.c_str(), (unsigned long)sSql.size()))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_prepare(), failed "<< mysql_stmt_error(stmt);
        TPS_PRINTF_DEBUG("mysql_stmt_prepare(), failed %s\n", mysql_stmt_error(stmt));
        return false;
    }

    MYSQL_BIND* bind = new MYSQL_BIND[field_num];
    memset(bind, 0, sizeof(MYSQL_BIND)*field_num);
    my_bool     isnull = true;
    std::string	data_uid = "";
    std::string	data_accessoryuid = "";
    std::string	data_commissionedunituid = "";
    std::string	data_applicatoruid = "";
    int			data_fieldtype = 0;
    float		data_wedgeangle = 0.f;
    int			data_curvetype = 0;
    float		data_fieldsizex = 0.f;
    float		data_fieldsizey = 0.f;
    float		data_depth = 0.f;
    float		data_offsetx = 0.f;
    float		data_offsety = 0.f;
    int			data_pointnum = 0;
    std::string	data_meapointdoselist = "";
    std::string	data_calcpointdoselist = "";
    int			data_viewstatus = 0;
    bool		data_viewdisplay = false;
    int			data_datetype = 0;
    std::string	data_curveresultanalyselist = "";
    std::string	data_crc = "";
    MYSQL_TIME	data_updatetime;

    unsigned int iCount = 0;
    for (unsigned int i(0); i < MEASUREDPROFILE_FIELD_MAX; ++i)
    {
        if (!src.is_dirty(i)) continue;
        if(!src.has_field(i))
        {
            bind[iCount].is_null = &isnull;
            ++iCount;
            continue;
        }
        switch (i)
        {
        case 0: 	//uid varchar
            {
                data_uid = src.get_uid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_uid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_uid.size();
            }
            break;
        case 1: 	//accessoryuid varchar
            {
                data_accessoryuid = src.get_accessoryuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_accessoryuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_accessoryuid.size();
            }
            break;
        case 2: 	//commissionedunituid varchar
            {
                data_commissionedunituid = src.get_commissionedunituid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_commissionedunituid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_commissionedunituid.size();
            }
            break;
        case 3: 	//applicatoruid varchar
            {
                data_applicatoruid = src.get_applicatoruid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_applicatoruid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_applicatoruid.size();
            }
            break;
        case 4: 	//fieldtype int
            {
                data_fieldtype = src.get_fieldtype();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_fieldtype;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 5: 	//wedgeangle float
            {
                data_wedgeangle = src.get_wedgeangle();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_wedgeangle;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 6: 	//curvetype int
            {
                data_curvetype = src.get_curvetype();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_curvetype;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 7: 	//fieldsizex float
            {
                data_fieldsizex = src.get_fieldsizex();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_fieldsizex;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 8: 	//fieldsizey float
            {
                data_fieldsizey = src.get_fieldsizey();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_fieldsizey;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 9: 	//depth float
            {
                data_depth = src.get_depth();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_depth;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 10: 	//offsetx float
            {
                data_offsetx = src.get_offsetx();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_offsetx;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 11: 	//offsety float
            {
                data_offsety = src.get_offsety();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_offsety;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 12: 	//pointnum int
            {
                data_pointnum = src.get_pointnum();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_pointnum;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 13: 	//meapointdoselist blob
            {
                data_meapointdoselist = src.get_meapointdoselist();
                if(data_meapointdoselist.empty()) bind[iCount].is_null = &isnull;
                bind[iCount].buffer_type= MYSQL_TYPE_BLOB;
                bind[iCount].buffer= (void *)data_meapointdoselist.c_str();
                bind[iCount].buffer_length= (unsigned long)data_meapointdoselist.size();
            }
            break;
        case 14: 	//calcpointdoselist blob
            {
                data_calcpointdoselist = src.get_calcpointdoselist();
                if(data_calcpointdoselist.empty()) bind[iCount].is_null = &isnull;
                bind[iCount].buffer_type= MYSQL_TYPE_BLOB;
                bind[iCount].buffer= (void *)data_calcpointdoselist.c_str();
                bind[iCount].buffer_length= (unsigned long)data_calcpointdoselist.size();
            }
            break;
        case 15: 	//viewstatus int
            {
                data_viewstatus = src.get_viewstatus();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_viewstatus;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 16: 	//viewdisplay tinyint
            {
                data_viewdisplay = src.get_viewdisplay();
                bind[iCount].buffer_type = MYSQL_TYPE_TINY;
                bind[iCount].buffer = (void*)&data_viewdisplay;
                bind[iCount].buffer_length = sizeof(bool);
            }
            break;
        case 17: 	//datetype int
            {
                data_datetype = src.get_datetype();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_datetype;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 18: 	//curveresultanalyselist blob
            {
                data_curveresultanalyselist = src.get_curveresultanalyselist();
                if(data_curveresultanalyselist.empty()) bind[iCount].is_null = &isnull;
                bind[iCount].buffer_type= MYSQL_TYPE_BLOB;
                bind[iCount].buffer= (void *)data_curveresultanalyselist.c_str();
                bind[iCount].buffer_length= (unsigned long)data_curveresultanalyselist.size();
            }
            break;
        case 19: 	//crc varchar
            {
                data_crc = src.get_crc();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_crc.c_str();
                bind[iCount].buffer_length = (unsigned long)data_crc.size();
            }
            break;
        case 20: 	//updatetime timestamp
            {
                ConvertDateTime2DB(src.get_updatetime(), &data_updatetime);
                bind[iCount].buffer_type = MYSQL_TYPE_TIMESTAMP;
                bind[iCount].buffer = (void*)&data_updatetime;
                if (src.get_updatetime().is_not_a_date_time()) bind[iCount].is_null = &isnull;
            }
            break;
        default:
            break;
        }

        ++iCount;
    }
    if (mysql_stmt_bind_param(stmt, bind))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_bind_param(), failed "<< mysql_stmt_error(stmt);
        DEL_ARRAY(bind);
        return false;
    }
    if (mysql_stmt_execute(stmt))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_execute(), failed "<< mysql_stmt_error(stmt);
        TPS_PRINTF_DEBUG("mysql_stmt_execute(), failed %s\n", mysql_stmt_error(stmt));
        DEL_ARRAY(bind);
        return false;
    }
    if (mysql_stmt_close(stmt))
    {
        TPS_LOG_DEV_ERROR<<" failed while closing the statement "<< mysql_stmt_error(stmt);
        DEL_ARRAY(bind);
        return false;
    }
	DEL_ARRAY(bind);
	RtDatabaseObject* rtDatabaseObject = const_cast<RtMeasuredprofile*>(&src);
	rtDatabaseObject->setdirty_all_fields(false);
    return true;
}

bool RtDatabaseHelper::FetchDataFromDB(const std::string& sSql, std::vector<RtMeasuredprofile*>& vList)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }

    MYSQL_RES  *prepare_meta_result = nullptr;
    //tmsmeasuredprofile    21 parameters
    const int field_num = MEASUREDPROFILE_FIELD_MAX;
    unsigned long MAX_LENGTH[field_num] = {0};
    MAX_LENGTH[0] = 64;
    MAX_LENGTH[1] = 64;
    MAX_LENGTH[2] = 64;
    MAX_LENGTH[3] = 64;
    MAX_LENGTH[4] = 0;
    MAX_LENGTH[5] = 0;
    MAX_LENGTH[6] = 0;
    MAX_LENGTH[7] = 0;
    MAX_LENGTH[8] = 0;
    MAX_LENGTH[9] = 0;
    MAX_LENGTH[10] = 0;
    MAX_LENGTH[11] = 0;
    MAX_LENGTH[12] = 0;
    MAX_LENGTH[13] = 65535;
    MAX_LENGTH[14] = 65535;
    MAX_LENGTH[15] = 0;
    MAX_LENGTH[16] = 0;
    MAX_LENGTH[17] = 0;
    MAX_LENGTH[18] = 65535;
    MAX_LENGTH[19] = 64;
    MAX_LENGTH[20] = 0;

    //std::string	data_uid
    //std::string	data_accessoryuid
    //std::string	data_commissionedunituid
    //std::string	data_applicatoruid
    int	data_fieldtype = 0;
    float	data_wedgeangle = 0.f;
    int	data_curvetype = 0;
    float	data_fieldsizex = 0.f;
    float	data_fieldsizey = 0.f;
    float	data_depth = 0.f;
    float	data_offsetx = 0.f;
    float	data_offsety = 0.f;
    int	data_pointnum = 0;
    //std::string	data_meapointdoselist;
    //std::string	data_calcpointdoselist;
    int	data_viewstatus = 0;
    bool	data_viewdisplay = false;
    int	data_datetype = 0;
    //std::string	data_curveresultanalyselist;
    //std::string	data_crc
    MYSQL_TIME	data_updatetime;

    if (mysql_stmt_prepare(stmt, sSql.c_str(), (unsigned long)strlen(sSql.c_str())))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_prepare(), SELECT failed."<<mysql_stmt_error(stmt);
        return false;
    }

    //Fetch result set meta information
    prepare_meta_result = mysql_stmt_result_metadata(stmt);
    if (!prepare_meta_result) 
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_result_metadata(), returned no meta information "<<mysql_stmt_error(stmt);
        return false;
    }

    // Get total columns in the query and validate column count
    const unsigned int column_count= mysql_num_fields(prepare_meta_result);
    if (column_count != field_num)
    {
        TPS_LOG_DEV_ERROR<<"invalid column count returned by MySQL";
        return false;
    }

    MYSQL_BIND* bind = new MYSQL_BIND[column_count];
    memset(bind, 0, sizeof(MYSQL_BIND)*column_count);
    unsigned long* length = new unsigned long[column_count];
    memset(length, 0, sizeof(unsigned long) * column_count);
    my_bool* is_null = new my_bool[column_count];
    memset(is_null, 0, sizeof(my_bool) * column_count);
    //Execute the SELECT query
    char* data_string[field_num];
    for (int i=0; i<field_num; ++i)
    {
        const unsigned long ulSize = MAX_LENGTH[i] + 1;// + 1 for string's \0 
        data_string[i] = new char[ulSize];
        memset(data_string[i], 0, ulSize*sizeof(char));
    }
    if (mysql_stmt_execute(stmt))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_execute(), failed"<<mysql_stmt_error(stmt);
        for (int i=0; i<field_num; ++i) DEL_ARRAY(data_string[i]);
        DEL_ARRAY(bind);
        DEL_ARRAY(length);
        DEL_ARRAY(is_null);
        return false;
    }

    for (unsigned int i(0); i<column_count; ++i)
    {
        bind[i].is_null= &is_null[i];
        bind[i].length= &length[i];
        switch (i)
        {
        case 4: 	//fieldtype int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_fieldtype;
            break;
        case 5: 	//wedgeangle float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_wedgeangle;
            break;
        case 6: 	//curvetype int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_curvetype;
            break;
        case 7: 	//fieldsizex float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_fieldsizex;
            break;
        case 8: 	//fieldsizey float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_fieldsizey;
            break;
        case 9: 	//depth float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_depth;
            break;
        case 10: 	//offsetx float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_offsetx;
            break;
        case 11: 	//offsety float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_offsety;
            break;
        case 12: 	//pointnum int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_pointnum;
            break;
        case 13: 	//meapointdoselist blob
            bind[i].buffer_type= MYSQL_TYPE_BLOB;
            break;
        case 14: 	//calcpointdoselist blob
            bind[i].buffer_type= MYSQL_TYPE_BLOB;
            break;
        case 15: 	//viewstatus int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_viewstatus;
            break;
        case 16: 	//viewdisplay tinyint
            bind[i].buffer_type= MYSQL_TYPE_TINY;
            bind[i].buffer= (char *)&data_viewdisplay;
            break;
        case 17: 	//datetype int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_datetype;
            break;
        case 18: 	//curveresultanalyselist blob
            bind[i].buffer_type= MYSQL_TYPE_BLOB;
            break;
        case 20: 	//updatetime timestamp
            bind[i].buffer_type= MYSQL_TYPE_TIMESTAMP;
            bind[i].buffer= (char *)&data_updatetime;
            break;
        default:
            bind[i].buffer_type= MYSQL_TYPE_STRING;
            bind[i].buffer= (char *)data_string[i];
            bind[i].buffer_length= MAX_LENGTH[i];
            break;
        }
    }

    // Bind the result buffers
    if (mysql_stmt_bind_result(stmt, bind))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_bind_result() failed "<<mysql_stmt_error(stmt);
        for (int i=0; i<field_num; ++i) DEL_ARRAY(data_string[i]);
        DEL_ARRAY(bind);
        DEL_ARRAY(length);
        DEL_ARRAY(is_null);
        return false;
    }

    //Now buffer all results to client
    if (mysql_stmt_store_result(stmt))
    {
        TPS_LOG_DEV_ERROR<<" mysql_stmt_store_result() failed "<<mysql_stmt_error(stmt);
        for (int i=0; i<field_num; ++i) DEL_ARRAY(data_string[i]);
        DEL_ARRAY(bind);
        DEL_ARRAY(length);
        DEL_ARRAY(is_null);
        return false;
    }

    // Fetch all rows 
    int ret(1);
    RtMeasuredprofile* pDis = nullptr;
    while(true)
    {
        ret = mysql_stmt_fetch(stmt);
        if (ret!=0 && ret!=MYSQL_DATA_TRUNCATED) break;
        pDis = new RtMeasuredprofile();
        for (unsigned int i(0); i<column_count; ++i)
        {
            if (is_null[i]) continue;
            switch (i)
            {
            case 0: 	//uid varchar
                pDis->set_uid((char *)bind[i].buffer);
                break;
            case 1: 	//accessoryuid varchar
                pDis->set_accessoryuid((char *)bind[i].buffer);
                break;
            case 2: 	//commissionedunituid varchar
                pDis->set_commissionedunituid((char *)bind[i].buffer);
                break;
            case 3: 	//applicatoruid varchar
                pDis->set_applicatoruid((char *)bind[i].buffer);
                break;
            case 4: 	//fieldtype int
                pDis->set_fieldtype(data_fieldtype);
                break;
            case 5: 	//wedgeangle float
                pDis->set_wedgeangle(data_wedgeangle);
                break;
            case 6: 	//curvetype int
                pDis->set_curvetype(data_curvetype);
                break;
            case 7: 	//fieldsizex float
                pDis->set_fieldsizex(data_fieldsizex);
                break;
            case 8: 	//fieldsizey float
                pDis->set_fieldsizey(data_fieldsizey);
                break;
            case 9: 	//depth float
                pDis->set_depth(data_depth);
                break;
            case 10: 	//offsetx float
                pDis->set_offsetx(data_offsetx);
                break;
            case 11: 	//offsety float
                pDis->set_offsety(data_offsety);
                break;
            case 12: 	//pointnum int
                pDis->set_pointnum(data_pointnum);
                break;
            case 13: 	//meapointdoselist blob
                {
                    const int total_length = length[i];
                    if (total_length < 1) break;
                    char *buf = new char[total_length + 1];
                    memset(buf, 0, sizeof(char) * total_length + 1);
                    bind[i].buffer = buf;
                    bind[i].buffer_length = total_length;
                    ret = mysql_stmt_fetch_column(stmt, &bind[i], i, 0);
                    if (0 == ret) pDis->set_meapointdoselist(buf);
                    DEL_ARRAY(buf);
                }
                break;
            case 14: 	//calcpointdoselist blob
                {
                    const int total_length = length[i];
                    if (total_length < 1) break;
                    char *buf = new char[total_length + 1];
                    memset(buf, 0, sizeof(char) * total_length + 1);
                    bind[i].buffer = buf;
                    bind[i].buffer_length = total_length;
                    ret = mysql_stmt_fetch_column(stmt, &bind[i], i, 0);
                    if (0 == ret) pDis->set_calcpointdoselist(buf);
                    DEL_ARRAY(buf);
                }
                break;
            case 15: 	//viewstatus int
                pDis->set_viewstatus(data_viewstatus);
                break;
            case 16: 	//viewdisplay tinyint
                pDis->set_viewdisplay(data_viewdisplay);
                break;
            case 17: 	//datetype int
                pDis->set_datetype(data_datetype);
                break;
            case 18: 	//curveresultanalyselist blob
                {
                    const int total_length = length[i];
                    if (total_length < 1) break;
                    char *buf = new char[total_length + 1];
                    memset(buf, 0, sizeof(char) * total_length + 1);
                    bind[i].buffer = buf;
                    bind[i].buffer_length = total_length;
                    ret = mysql_stmt_fetch_column(stmt, &bind[i], i, 0);
                    if (0 == ret) pDis->set_curveresultanalyselist(buf);
                    DEL_ARRAY(buf);
                }
                break;
            case 19: 	//crc varchar
                pDis->set_crc((char *)bind[i].buffer);
                break;
            case 20: 	//updatetime timestamp
                {
                    DATETIME_BOOST updatetime;
                    ConvertDateTime2Boost(data_updatetime, &updatetime);
                    pDis->set_updatetime(updatetime);
                }
                break;
            default:
                break;
            }
        }
        pDis->setdirty_all_fields(false);
        vList.push_back(pDis);
    }
    for (int i=0; i<field_num; ++i) DEL_ARRAY(data_string[i]);
    DEL_ARRAY(bind);
    DEL_ARRAY(length);
    DEL_ARRAY(is_null);

    // Free the prepared result metadata
    mysql_free_result(prepare_meta_result);

    // Close the statement
    if (mysql_stmt_close(stmt))
    {
        TPS_LOG_DEV_ERROR<<" failed while closing the statement " << mysql_stmt_error(stmt);
        return false;
    }

    return true;
}

RT_TPS_DATABASE_END_NAMESPACE