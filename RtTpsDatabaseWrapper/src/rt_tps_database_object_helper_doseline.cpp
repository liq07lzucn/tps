﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_object_helper_doseline.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///             From database version: 1.1.11
///
///  \version 1.0
///  \date    8/8/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "rt_tps_database_object_helper.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_doseline.h"
#include "boost/date_time/posix_time/time_parsers.hpp"
typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

RT_TPS_DATABASE_BEGIN_NAMESPACE;

bool RtDatabaseHelper::InsertUpdateDBFromObject(const RtDoseline& src, bool bInsert)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }
    //10 parameters
    unsigned int field_num = 0;
    std::string sSql("");
    std::string sName("");
    if (!bInsert)
    {
        for (unsigned int i(0); i < DOSELINE_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_DOSELINE_FIELD[i];
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
        sSql = "UPDATE tmsdoseline SET " + sName + " WHERE uid='" + src.get_uid() + "'";
    }
    else
    {
        std::string sValues("");
        for (unsigned int i(0); i < DOSELINE_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_DOSELINE_FIELD[i];
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
        sSql = "INSERT INTO tmsdoseline (" + sName + ") VALUES (" + sValues + ")";
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
    std::string	data_planuid = "";
    float		data_doseratio = 0.f;
    bool		data_isvisible = false;
    float		data_red = 0.f;
    float		data_green = 0.f;
    float		data_blue = 0.f;
    float		data_alpha = 0.f;
    bool		data_isvisible3d = false;
    MYSQL_TIME	data_updatetime;

    unsigned int iCount = 0;
    for (unsigned int i(0); i < DOSELINE_FIELD_MAX; ++i)
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
        case 1: 	//planuid varchar
            {
                data_planuid = src.get_planuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_planuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_planuid.size();
            }
            break;
        case 2: 	//doseratio float
            {
                data_doseratio = src.get_doseratio();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_doseratio;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 3: 	//isvisible tinyint
            {
                data_isvisible = src.get_isvisible();
                bind[iCount].buffer_type = MYSQL_TYPE_TINY;
                bind[iCount].buffer = (void*)&data_isvisible;
                bind[iCount].buffer_length = sizeof(bool);
            }
            break;
        case 4: 	//red float
            {
                data_red = src.get_red();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_red;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 5: 	//green float
            {
                data_green = src.get_green();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_green;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 6: 	//blue float
            {
                data_blue = src.get_blue();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_blue;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 7: 	//alpha float
            {
                data_alpha = src.get_alpha();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_alpha;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 8: 	//isvisible3d tinyint
            {
                data_isvisible3d = src.get_isvisible3d();
                bind[iCount].buffer_type = MYSQL_TYPE_TINY;
                bind[iCount].buffer = (void*)&data_isvisible3d;
                bind[iCount].buffer_length = sizeof(bool);
            }
            break;
        case 9: 	//updatetime timestamp
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
	RtDatabaseObject* rtDatabaseObject = const_cast<RtDoseline*>(&src);
	rtDatabaseObject->setdirty_all_fields(false);
    return true;
}

bool RtDatabaseHelper::FetchDataFromDB(const std::string& sSql, std::vector<RtDoseline*>& vList)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }

    MYSQL_RES  *prepare_meta_result = nullptr;
    //tmsdoseline    10 parameters
    const int field_num = DOSELINE_FIELD_MAX;
    unsigned long MAX_LENGTH[field_num] = {0};
    MAX_LENGTH[0] = 64;
    MAX_LENGTH[1] = 64;
    MAX_LENGTH[2] = 0;
    MAX_LENGTH[3] = 0;
    MAX_LENGTH[4] = 0;
    MAX_LENGTH[5] = 0;
    MAX_LENGTH[6] = 0;
    MAX_LENGTH[7] = 0;
    MAX_LENGTH[8] = 0;
    MAX_LENGTH[9] = 0;

    //std::string	data_uid
    //std::string	data_planuid
    float	data_doseratio = 0.f;
    bool	data_isvisible = false;
    float	data_red = 0.f;
    float	data_green = 0.f;
    float	data_blue = 0.f;
    float	data_alpha = 0.f;
    bool	data_isvisible3d = false;
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
        case 2: 	//doseratio float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_doseratio;
            break;
        case 3: 	//isvisible tinyint
            bind[i].buffer_type= MYSQL_TYPE_TINY;
            bind[i].buffer= (char *)&data_isvisible;
            break;
        case 4: 	//red float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_red;
            break;
        case 5: 	//green float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_green;
            break;
        case 6: 	//blue float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_blue;
            break;
        case 7: 	//alpha float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_alpha;
            break;
        case 8: 	//isvisible3d tinyint
            bind[i].buffer_type= MYSQL_TYPE_TINY;
            bind[i].buffer= (char *)&data_isvisible3d;
            break;
        case 9: 	//updatetime timestamp
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
    RtDoseline* pDis = nullptr;
    while(true)
    {
        ret = mysql_stmt_fetch(stmt);
        if (ret!=0 && ret!=MYSQL_DATA_TRUNCATED) break;
        pDis = new RtDoseline();
        for (unsigned int i(0); i<column_count; ++i)
        {
            if (is_null[i]) continue;
            switch (i)
            {
            case 0: 	//uid varchar
                pDis->set_uid((char *)bind[i].buffer);
                break;
            case 1: 	//planuid varchar
                pDis->set_planuid((char *)bind[i].buffer);
                break;
            case 2: 	//doseratio float
                pDis->set_doseratio(data_doseratio);
                break;
            case 3: 	//isvisible tinyint
                pDis->set_isvisible(data_isvisible);
                break;
            case 4: 	//red float
                pDis->set_red(data_red);
                break;
            case 5: 	//green float
                pDis->set_green(data_green);
                break;
            case 6: 	//blue float
                pDis->set_blue(data_blue);
                break;
            case 7: 	//alpha float
                pDis->set_alpha(data_alpha);
                break;
            case 8: 	//isvisible3d tinyint
                pDis->set_isvisible3d(data_isvisible3d);
                break;
            case 9: 	//updatetime timestamp
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