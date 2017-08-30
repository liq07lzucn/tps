﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_object_helper_block.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///             From database version: 1.1.11
///
///  \version 1.0
///  \date    8/8/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "rt_tps_database_object_helper.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_block.h"
#include "boost/algorithm/string/split.hpp"
#include "boost/algorithm/string/classification.hpp"
#include "boost/date_time/posix_time/time_parsers.hpp"
typedef boost::posix_time::ptime DATETIME_BOOST;
typedef boost::posix_time::time_duration TIME_BOOST;
typedef boost::gregorian::date DATE_BOOST;

RT_TPS_DATABASE_BEGIN_NAMESPACE;

bool RtDatabaseHelper::InsertUpdateDBFromObject(const RtBlock& src, bool bInsert)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }
    //20 parameters
    unsigned int field_num = 0;
    std::string sSql("");
    std::string sName("");
    if (!bInsert)
    {
        for (unsigned int i(0); i < BLOCK_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_BLOCK_FIELD[i];
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
        sSql = "UPDATE tmsblock SET " + sName + " WHERE uid='" + src.get_uid() + "'";
    }
    else
    {
        std::string sValues("");
        for (unsigned int i(0); i < BLOCK_FIELD_MAX; ++i)
        {
            if (!src.is_dirty(i)) continue;
            const char* file_name = ENUM2STRING_BLOCK_FIELD[i];
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
        sSql = "INSERT INTO tmsblock (" + sName + ") VALUES (" + sValues + ")";
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
    std::string	data_beamuid = "";
    std::string	data_treatmentbeamuid = "";
    std::string	data_points = "";
    std::string	data_targetvoiuid = "";
    float		data_targetmarginx = 0.f;
    float		data_targetmarginy = 0.f;
    std::string	data_avoidvoiuid = "";
    float		data_avoidmarginx = 0.f;
    float		data_avoidmarginy = 0.f;
    bool		data_isautoshape = false;
    int			data_blocknumber = 0;
    int			data_blocktype = 0;
    std::string	data_blockname = "";
    float		data_sourcetotraydistance = 0.f;
    int			data_blockdivergence = 0;
    int			data_blockmountingposition = 0;
    std::string	data_materialid = "";
    float		data_blockthickness = 0.f;
    MYSQL_TIME	data_updatetime;

    unsigned int iCount = 0;
    for (unsigned int i(0); i < BLOCK_FIELD_MAX; ++i)
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
        case 1: 	//beamuid varchar
            {
                data_beamuid = src.get_beamuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_beamuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_beamuid.size();
            }
            break;
        case 2: 	//treatmentbeamuid varchar
            {
                data_treatmentbeamuid = src.get_treatmentbeamuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_treatmentbeamuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_treatmentbeamuid.size();
            }
            break;
        case 3: 	//points varchar
            {
                const std::vector<db_Point2f> vPt = src.get_points();
                if(vPt.empty()) bind[iCount].is_null = &isnull;
                const size_t iSize = vPt.size();
                data_points = "";
                if (iSize > 0)
				{
                    for(int i=0; i<iSize; ++i)
					{
                        if (!data_points.empty()) data_points += "|";
                        data_points += std::to_string((long double)(vPt[i].x)) +",";
                        data_points += std::to_string((long double)(vPt[i].y));
                    }
                }
                bind[iCount].buffer_type= MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer= (void *)data_points.c_str();
                bind[iCount].buffer_length= (unsigned long)data_points.size();
            }
            break;
        case 4: 	//targetvoiuid varchar
            {
                data_targetvoiuid = src.get_targetvoiuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_targetvoiuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_targetvoiuid.size();
            }
            break;
        case 5: 	//targetmarginx float
            {
                data_targetmarginx = src.get_targetmarginx();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_targetmarginx;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 6: 	//targetmarginy float
            {
                data_targetmarginy = src.get_targetmarginy();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_targetmarginy;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 7: 	//avoidvoiuid varchar
            {
                data_avoidvoiuid = src.get_avoidvoiuid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_avoidvoiuid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_avoidvoiuid.size();
            }
            break;
        case 8: 	//avoidmarginx float
            {
                data_avoidmarginx = src.get_avoidmarginx();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_avoidmarginx;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 9: 	//avoidmarginy float
            {
                data_avoidmarginy = src.get_avoidmarginy();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_avoidmarginy;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 10: 	//isautoshape tinyint
            {
                data_isautoshape = src.get_isautoshape();
                bind[iCount].buffer_type = MYSQL_TYPE_TINY;
                bind[iCount].buffer = (void*)&data_isautoshape;
                bind[iCount].buffer_length = sizeof(bool);
            }
            break;
        case 11: 	//blocknumber int
            {
                data_blocknumber = src.get_blocknumber();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_blocknumber;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 12: 	//blocktype int
            {
                data_blocktype = src.get_blocktype();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_blocktype;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 13: 	//blockname varchar
            {
                data_blockname = src.get_blockname();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_blockname.c_str();
                bind[iCount].buffer_length = (unsigned long)data_blockname.size();
            }
            break;
        case 14: 	//sourcetotraydistance float
            {
                data_sourcetotraydistance = src.get_sourcetotraydistance();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_sourcetotraydistance;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 15: 	//blockdivergence int
            {
                data_blockdivergence = src.get_blockdivergence();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_blockdivergence;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 16: 	//blockmountingposition int
            {
                data_blockmountingposition = src.get_blockmountingposition();
                bind[iCount].buffer_type = MYSQL_TYPE_LONG;
                bind[iCount].buffer = (void*)&data_blockmountingposition;
                bind[iCount].buffer_length = sizeof(int);
            }
            break;
        case 17: 	//materialid varchar
            {
                data_materialid = src.get_materialid();
                bind[iCount].buffer_type = MYSQL_TYPE_VAR_STRING;
                bind[iCount].buffer = (void*)data_materialid.c_str();
                bind[iCount].buffer_length = (unsigned long)data_materialid.size();
            }
            break;
        case 18: 	//blockthickness float
            {
                data_blockthickness = src.get_blockthickness();
                bind[iCount].buffer_type = MYSQL_TYPE_FLOAT;
                bind[iCount].buffer = (void*)&data_blockthickness;
                bind[iCount].buffer_length = sizeof(float);
            }
            break;
        case 19: 	//updatetime timestamp
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
	RtDatabaseObject* rtDatabaseObject = const_cast<RtBlock*>(&src);
	rtDatabaseObject->setdirty_all_fields(false);
    return true;
}

bool RtDatabaseHelper::FetchDataFromDB(const std::string& sSql, std::vector<RtBlock*>& vList)
{
    MYSQL_STMT* stmt = mysql_stmt_init(m_pMySql);
    if (!stmt)
    {
        TPS_LOG_DEV_ERROR<<"mysql_stmt_init(), out of memory";
        return false;
    }

    MYSQL_RES  *prepare_meta_result = nullptr;
    //tmsblock    20 parameters
    const int field_num = BLOCK_FIELD_MAX;
    unsigned long MAX_LENGTH[field_num] = {0};
    MAX_LENGTH[0] = 64;
    MAX_LENGTH[1] = 64;
    MAX_LENGTH[2] = 64;
    MAX_LENGTH[3] = 19200;
    MAX_LENGTH[4] = 64;
    MAX_LENGTH[5] = 0;
    MAX_LENGTH[6] = 0;
    MAX_LENGTH[7] = 64;
    MAX_LENGTH[8] = 0;
    MAX_LENGTH[9] = 0;
    MAX_LENGTH[10] = 0;
    MAX_LENGTH[11] = 0;
    MAX_LENGTH[12] = 0;
    MAX_LENGTH[13] = 1024;
    MAX_LENGTH[14] = 0;
    MAX_LENGTH[15] = 0;
    MAX_LENGTH[16] = 0;
    MAX_LENGTH[17] = 64;
    MAX_LENGTH[18] = 0;
    MAX_LENGTH[19] = 0;

    //std::string	data_uid
    //std::string	data_beamuid
    //std::string	data_treatmentbeamuid
    //std::string	data_points
    //std::string	data_targetvoiuid
    float	data_targetmarginx = 0.f;
    float	data_targetmarginy = 0.f;
    //std::string	data_avoidvoiuid
    float	data_avoidmarginx = 0.f;
    float	data_avoidmarginy = 0.f;
    bool	data_isautoshape = false;
    int	data_blocknumber = 0;
    int	data_blocktype = 0;
    //std::string	data_blockname
    float	data_sourcetotraydistance = 0.f;
    int	data_blockdivergence = 0;
    int	data_blockmountingposition = 0;
    //std::string	data_materialid
    float	data_blockthickness = 0.f;
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
        case 5: 	//targetmarginx float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_targetmarginx;
            break;
        case 6: 	//targetmarginy float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_targetmarginy;
            break;
        case 8: 	//avoidmarginx float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_avoidmarginx;
            break;
        case 9: 	//avoidmarginy float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_avoidmarginy;
            break;
        case 10: 	//isautoshape tinyint
            bind[i].buffer_type= MYSQL_TYPE_TINY;
            bind[i].buffer= (char *)&data_isautoshape;
            break;
        case 11: 	//blocknumber int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_blocknumber;
            break;
        case 12: 	//blocktype int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_blocktype;
            break;
        case 14: 	//sourcetotraydistance float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_sourcetotraydistance;
            break;
        case 15: 	//blockdivergence int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_blockdivergence;
            break;
        case 16: 	//blockmountingposition int
            bind[i].buffer_type= MYSQL_TYPE_LONG;
            bind[i].buffer= (char *)&data_blockmountingposition;
            break;
        case 18: 	//blockthickness float
            bind[i].buffer_type= MYSQL_TYPE_FLOAT;
            bind[i].buffer= (char *)&data_blockthickness;
            break;
        case 19: 	//updatetime timestamp
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
    RtBlock* pDis = nullptr;
    while(true)
    {
        ret = mysql_stmt_fetch(stmt);
        if (ret!=0 && ret!=MYSQL_DATA_TRUNCATED) break;
        pDis = new RtBlock();
        for (unsigned int i(0); i<column_count; ++i)
        {
            if (is_null[i]) continue;
            switch (i)
            {
            case 0: 	//uid varchar
                pDis->set_uid((char *)bind[i].buffer);
                break;
            case 1: 	//beamuid varchar
                pDis->set_beamuid((char *)bind[i].buffer);
                break;
            case 2: 	//treatmentbeamuid varchar
                pDis->set_treatmentbeamuid((char *)bind[i].buffer);
                break;
            case 3: 	//points varchar
                {
                    const int total_length = length[i];
                    if (total_length < 2) break;
                    char *buf=new char[total_length + 1];
                    memset(buf,0,sizeof(char) * total_length + 1);
                    bind[i].buffer = buf;
                    bind[i].buffer_length = total_length;
                    ret = mysql_stmt_fetch_column(stmt, &bind[i], i, 0);
                    if (0 == ret)
					{
                        std::vector<std::string> subValue;
                        (void)boost::split(subValue, buf, boost::is_any_of("|"));
                        std::vector<db_Point2f> vPoints;
                        const size_t fSize = subValue.size();
                        for (size_t x=0; x<fSize; ++x)
						{
                            std::vector<std::string> strValue;
                            (void)boost::split(strValue,subValue[x], boost::is_any_of(","));
                            float fValuex = static_cast<float>(atof(strValue[0].c_str()));
                            float fValuey = static_cast<float>(atof(strValue[1].c_str()));
                            db_Point2f pt(fValuex,fValuey);
                            vPoints.push_back(pt);
                        }
                        pDis->set_points(vPoints);
                    }
                    DEL_ARRAY(buf);
                }
                break;
            case 4: 	//targetvoiuid varchar
                pDis->set_targetvoiuid((char *)bind[i].buffer);
                break;
            case 5: 	//targetmarginx float
                pDis->set_targetmarginx(data_targetmarginx);
                break;
            case 6: 	//targetmarginy float
                pDis->set_targetmarginy(data_targetmarginy);
                break;
            case 7: 	//avoidvoiuid varchar
                pDis->set_avoidvoiuid((char *)bind[i].buffer);
                break;
            case 8: 	//avoidmarginx float
                pDis->set_avoidmarginx(data_avoidmarginx);
                break;
            case 9: 	//avoidmarginy float
                pDis->set_avoidmarginy(data_avoidmarginy);
                break;
            case 10: 	//isautoshape tinyint
                pDis->set_isautoshape(data_isautoshape);
                break;
            case 11: 	//blocknumber int
                pDis->set_blocknumber(data_blocknumber);
                break;
            case 12: 	//blocktype int
                pDis->set_blocktype(data_blocktype);
                break;
            case 13: 	//blockname varchar
                pDis->set_blockname((char *)bind[i].buffer);
                break;
            case 14: 	//sourcetotraydistance float
                pDis->set_sourcetotraydistance(data_sourcetotraydistance);
                break;
            case 15: 	//blockdivergence int
                pDis->set_blockdivergence(data_blockdivergence);
                break;
            case 16: 	//blockmountingposition int
                pDis->set_blockmountingposition(data_blockmountingposition);
                break;
            case 17: 	//materialid varchar
                pDis->set_materialid((char *)bind[i].buffer);
                break;
            case 18: 	//blockthickness float
                pDis->set_blockthickness(data_blockthickness);
                break;
            case 19: 	//updatetime timestamp
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