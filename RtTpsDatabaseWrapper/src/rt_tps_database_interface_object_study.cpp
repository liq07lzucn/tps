﻿//////////////////////////////////////////////////////////////////////////
/// \defgroup Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2016
///  All rights reserved.
///
///  \author  ZHOU qiangqiang  mailto:qiangqiang.zhou@united-imaging.com
///
///  \file      rt_tps_database_interface_object_study.cpp
///  \brief     This file was generated by CodeGenerater.exe 
///              From database version: 1.1.2
///
///  \version 1.0
///  \date    2/21/2017
///  \{
//////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_study.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_uid_generater.h"

RT_TPS_DATABASE_BEGIN_NAMESPACE;

//////////////////////////////////////////////////////////////////////////

RtStudyImp::RtStudyImp(bool bGeneraterUid /*= false*/):
    m_uid(""),
    m_sopinstanceuid(""),
    m_patientuid(""),
    m_patientage(""),
    m_patientsize(""),
    m_patientweight(""),
    m_occupation(""),
    m_additionalpatienthistory(""),
    m_studyid(""),
    m_studydate(boost::date_time::not_a_date_time),
    m_studytime(boost::date_time::not_a_date_time),
    m_modalitiesinstudy(""),
    m_accessionnumber(""),
    m_studydescription(""),
    m_instanceavailability(""),
    m_admittingdiagnosesdescription(""),
    m_studycompletiondate(boost::date_time::not_a_date_time),
    m_studycompletiontime(boost::date_time::not_a_date_time),
    m_requestingphysician(""),
    m_requestedproceduredescription(""),
    m_requestedcontrastagent(""),
    m_referringphysicianname(""),
    m_pregnancystatus(0),
    m_smokingstatus(""),
    m_medicalalerts(""),
    m_patientinstitutionresidence(""),
    m_studystatusid(""),
    m_admissionid(""),
    m_studyprintstatus(""),
    m_studysendstatus(""),
    m_studystoredindvd(""),
    m_studystoredinusb(""),
    m_importsource(0),
    m_studyflag(""),
    m_studyprotect(""),
    m_studyconfirmstatus(0),
    m_studyrejectreason(""),
    m_studyconfirmdatetime(boost::date_time::not_a_date_time),
    m_studyidissuer(""),
    m_studycomments(""),
    m_specialneeds(""),
    m_performedprocedurestepuid(""),
    m_performedprocedurestepstatus(0),
    m_performedprocedurestepdiscontinuationreason(""),
    m_sourceisotopename(""),
    m_radionuclidetotaldose(""),
    m_radiopharmaceuticalstartdatetime(boost::date_time::not_a_date_time),
    m_radiopharmaceutical(""),
    m_scheduledscantime(boost::date_time::not_a_date_time),
    m_safetymodesar(0),
    m_safetymodegradient(0),
    m_studyaccumulateddap(""),
    m_studytype(0),
    m_modifyflag(0),
    m_mergeflag(0),
    m_splitflag(0),
    m_repeatflag(0),
    m_procedurestepid(""),
    m_procedurestepdescription(""),
    m_proceduresteplocation(""),
    m_premedication(""),
    m_performingphysician(""),
    m_operatorsname(""),
    m_studyimportstatus(0),
    m_requestedprocedureid(""),
    m_folderpath(""),
    m_studyreserved0(""),
    m_studyreserved1(""),
    m_updatetime(boost::date_time::not_a_date_time)
{
    //create uid
    m_uid = bGeneraterUid ? RtUidGenerater::GeneraterUid() : "";
}

RtStudyImp::RtStudyImp(const RtStudyImp& study):
    m_uid(study.get_uid()),
    m_sopinstanceuid(study.get_sopinstanceuid()),
    m_patientuid(study.get_patientuid()),
    m_patientage(study.get_patientage()),
    m_patientsize(study.get_patientsize()),
    m_patientweight(study.get_patientweight()),
    m_occupation(study.get_occupation()),
    m_additionalpatienthistory(study.get_additionalpatienthistory()),
    m_studyid(study.get_studyid()),
    m_studydate(study.get_studydate()),
    m_studytime(study.get_studytime()),
    m_modalitiesinstudy(study.get_modalitiesinstudy()),
    m_accessionnumber(study.get_accessionnumber()),
    m_studydescription(study.get_studydescription()),
    m_instanceavailability(study.get_instanceavailability()),
    m_admittingdiagnosesdescription(study.get_admittingdiagnosesdescription()),
    m_studycompletiondate(study.get_studycompletiondate()),
    m_studycompletiontime(study.get_studycompletiontime()),
    m_requestingphysician(study.get_requestingphysician()),
    m_requestedproceduredescription(study.get_requestedproceduredescription()),
    m_requestedcontrastagent(study.get_requestedcontrastagent()),
    m_referringphysicianname(study.get_referringphysicianname()),
    m_pregnancystatus(study.get_pregnancystatus()),
    m_smokingstatus(study.get_smokingstatus()),
    m_medicalalerts(study.get_medicalalerts()),
    m_patientinstitutionresidence(study.get_patientinstitutionresidence()),
    m_studystatusid(study.get_studystatusid()),
    m_admissionid(study.get_admissionid()),
    m_studyprintstatus(study.get_studyprintstatus()),
    m_studysendstatus(study.get_studysendstatus()),
    m_studystoredindvd(study.get_studystoredindvd()),
    m_studystoredinusb(study.get_studystoredinusb()),
    m_importsource(study.get_importsource()),
    m_studyflag(study.get_studyflag()),
    m_studyprotect(study.get_studyprotect()),
    m_studyconfirmstatus(study.get_studyconfirmstatus()),
    m_studyrejectreason(study.get_studyrejectreason()),
    m_studyconfirmdatetime(study.get_studyconfirmdatetime()),
    m_studyidissuer(study.get_studyidissuer()),
    m_studycomments(study.get_studycomments()),
    m_specialneeds(study.get_specialneeds()),
    m_performedprocedurestepuid(study.get_performedprocedurestepuid()),
    m_performedprocedurestepstatus(study.get_performedprocedurestepstatus()),
    m_performedprocedurestepdiscontinuationreason(study.get_performedprocedurestepdiscontinuationreason()),
    m_sourceisotopename(study.get_sourceisotopename()),
    m_radionuclidetotaldose(study.get_radionuclidetotaldose()),
    m_radiopharmaceuticalstartdatetime(study.get_radiopharmaceuticalstartdatetime()),
    m_radiopharmaceutical(study.get_radiopharmaceutical()),
    m_scheduledscantime(study.get_scheduledscantime()),
    m_safetymodesar(study.get_safetymodesar()),
    m_safetymodegradient(study.get_safetymodegradient()),
    m_studyaccumulateddap(study.get_studyaccumulateddap()),
    m_studytype(study.get_studytype()),
    m_modifyflag(study.get_modifyflag()),
    m_mergeflag(study.get_mergeflag()),
    m_splitflag(study.get_splitflag()),
    m_repeatflag(study.get_repeatflag()),
    m_procedurestepid(study.get_procedurestepid()),
    m_procedurestepdescription(study.get_procedurestepdescription()),
    m_proceduresteplocation(study.get_proceduresteplocation()),
    m_premedication(study.get_premedication()),
    m_performingphysician(study.get_performingphysician()),
    m_operatorsname(study.get_operatorsname()),
    m_studyimportstatus(study.get_studyimportstatus()),
    m_requestedprocedureid(study.get_requestedprocedureid()),
    m_folderpath(study.get_folderpath()),
    m_studyreserved0(study.get_studyreserved0()),
    m_studyreserved1(study.get_studyreserved1()),
    m_updatetime(study.get_updatetime())
{
}

RtStudyImp& RtStudyImp::operator=(const RtStudyImp& study)
{
    if (this != &study){
        this->m_uid = study.get_uid();
        this->m_sopinstanceuid = study.get_sopinstanceuid();
        this->m_patientuid = study.get_patientuid();
        this->m_patientage = study.get_patientage();
        this->m_patientsize = study.get_patientsize();
        this->m_patientweight = study.get_patientweight();
        this->m_occupation = study.get_occupation();
        this->m_additionalpatienthistory = study.get_additionalpatienthistory();
        this->m_studyid = study.get_studyid();
        this->m_studydate = study.get_studydate();
        this->m_studytime = study.get_studytime();
        this->m_modalitiesinstudy = study.get_modalitiesinstudy();
        this->m_accessionnumber = study.get_accessionnumber();
        this->m_studydescription = study.get_studydescription();
        this->m_instanceavailability = study.get_instanceavailability();
        this->m_admittingdiagnosesdescription = study.get_admittingdiagnosesdescription();
        this->m_studycompletiondate = study.get_studycompletiondate();
        this->m_studycompletiontime = study.get_studycompletiontime();
        this->m_requestingphysician = study.get_requestingphysician();
        this->m_requestedproceduredescription = study.get_requestedproceduredescription();
        this->m_requestedcontrastagent = study.get_requestedcontrastagent();
        this->m_referringphysicianname = study.get_referringphysicianname();
        this->m_pregnancystatus = study.get_pregnancystatus();
        this->m_smokingstatus = study.get_smokingstatus();
        this->m_medicalalerts = study.get_medicalalerts();
        this->m_patientinstitutionresidence = study.get_patientinstitutionresidence();
        this->m_studystatusid = study.get_studystatusid();
        this->m_admissionid = study.get_admissionid();
        this->m_studyprintstatus = study.get_studyprintstatus();
        this->m_studysendstatus = study.get_studysendstatus();
        this->m_studystoredindvd = study.get_studystoredindvd();
        this->m_studystoredinusb = study.get_studystoredinusb();
        this->m_importsource = study.get_importsource();
        this->m_studyflag = study.get_studyflag();
        this->m_studyprotect = study.get_studyprotect();
        this->m_studyconfirmstatus = study.get_studyconfirmstatus();
        this->m_studyrejectreason = study.get_studyrejectreason();
        this->m_studyconfirmdatetime = study.get_studyconfirmdatetime();
        this->m_studyidissuer = study.get_studyidissuer();
        this->m_studycomments = study.get_studycomments();
        this->m_specialneeds = study.get_specialneeds();
        this->m_performedprocedurestepuid = study.get_performedprocedurestepuid();
        this->m_performedprocedurestepstatus = study.get_performedprocedurestepstatus();
        this->m_performedprocedurestepdiscontinuationreason = study.get_performedprocedurestepdiscontinuationreason();
        this->m_sourceisotopename = study.get_sourceisotopename();
        this->m_radionuclidetotaldose = study.get_radionuclidetotaldose();
        this->m_radiopharmaceuticalstartdatetime = study.get_radiopharmaceuticalstartdatetime();
        this->m_radiopharmaceutical = study.get_radiopharmaceutical();
        this->m_scheduledscantime = study.get_scheduledscantime();
        this->m_safetymodesar = study.get_safetymodesar();
        this->m_safetymodegradient = study.get_safetymodegradient();
        this->m_studyaccumulateddap = study.get_studyaccumulateddap();
        this->m_studytype = study.get_studytype();
        this->m_modifyflag = study.get_modifyflag();
        this->m_mergeflag = study.get_mergeflag();
        this->m_splitflag = study.get_splitflag();
        this->m_repeatflag = study.get_repeatflag();
        this->m_procedurestepid = study.get_procedurestepid();
        this->m_procedurestepdescription = study.get_procedurestepdescription();
        this->m_proceduresteplocation = study.get_proceduresteplocation();
        this->m_premedication = study.get_premedication();
        this->m_performingphysician = study.get_performingphysician();
        this->m_operatorsname = study.get_operatorsname();
        this->m_studyimportstatus = study.get_studyimportstatus();
        this->m_requestedprocedureid = study.get_requestedprocedureid();
        this->m_folderpath = study.get_folderpath();
        this->m_studyreserved0 = study.get_studyreserved0();
        this->m_studyreserved1 = study.get_studyreserved1();
        this->m_updatetime = study.get_updatetime();
    }
    return *this;
}

RtStudyImp::~RtStudyImp()
{
}


//////////////////////////////////////////////////////////////////////////
RtStudy::RtStudy(bool bGeneraterUid /*= false*/)
{
    m_pImp = new RtStudyImp(bGeneraterUid);
    set_flags(STUDY_FIELD_MAX);
    set_field_null((char*)ENUM2STRING_STUDY_FIELD_NULL);
}

RtStudy::RtStudy(const RtStudy& study): RtDatabaseObject(study),
   m_pImp(new RtStudyImp(*study.m_pImp))
{
}

RtStudy& RtStudy::operator = (const RtStudy& study)
{
    if(this != &study)
    {
        RtDatabaseObject::operator=(study);
        *this->m_pImp = *study.m_pImp;
    }
    return *this;
}

RtStudy::~RtStudy()
{
    DEL_PTR(m_pImp);
}

//uid
std::string RtStudy::get_uid() const { return m_pImp->get_uid();}
void RtStudy::set_uid(const std::string& uid)
{
    m_pImp->set_uid(uid);
    enable_field(STUDY_UID);
    setdirty_field(STUDY_UID, true);
}

//sopinstanceuid
std::string RtStudy::get_sopinstanceuid() const { return m_pImp->get_sopinstanceuid();}
void RtStudy::set_sopinstanceuid(const std::string& sopinstanceuid)
{
    m_pImp->set_sopinstanceuid(sopinstanceuid);
    enable_field(STUDY_SOPINSTANCEUID);
    setdirty_field(STUDY_SOPINSTANCEUID, true);
}

//patientuid
std::string RtStudy::get_patientuid() const { return m_pImp->get_patientuid();}
void RtStudy::set_patientuid(const std::string& patientuid)
{
    m_pImp->set_patientuid(patientuid);
    enable_field(STUDY_PATIENTUID);
    setdirty_field(STUDY_PATIENTUID, true);
}

//patientage
std::string RtStudy::get_patientage() const { return m_pImp->get_patientage();}
void RtStudy::set_patientage(const std::string& patientage)
{
    m_pImp->set_patientage(patientage);
    enable_field(STUDY_PATIENTAGE);
    setdirty_field(STUDY_PATIENTAGE, true);
}

//patientsize
std::string RtStudy::get_patientsize() const { return m_pImp->get_patientsize();}
void RtStudy::set_patientsize(const std::string& patientsize)
{
    m_pImp->set_patientsize(patientsize);
    enable_field(STUDY_PATIENTSIZE);
    setdirty_field(STUDY_PATIENTSIZE, true);
}

//patientweight
std::string RtStudy::get_patientweight() const { return m_pImp->get_patientweight();}
void RtStudy::set_patientweight(const std::string& patientweight)
{
    m_pImp->set_patientweight(patientweight);
    enable_field(STUDY_PATIENTWEIGHT);
    setdirty_field(STUDY_PATIENTWEIGHT, true);
}

//occupation
std::string RtStudy::get_occupation() const { return m_pImp->get_occupation();}
void RtStudy::set_occupation(const std::string& occupation)
{
    m_pImp->set_occupation(occupation);
    enable_field(STUDY_OCCUPATION);
    setdirty_field(STUDY_OCCUPATION, true);
}

//additionalpatienthistory
std::string RtStudy::get_additionalpatienthistory() const { return m_pImp->get_additionalpatienthistory();}
void RtStudy::set_additionalpatienthistory(const std::string& additionalpatienthistory)
{
    m_pImp->set_additionalpatienthistory(additionalpatienthistory);
    enable_field(STUDY_ADDITIONALPATIENTHISTORY);
    setdirty_field(STUDY_ADDITIONALPATIENTHISTORY, true);
}

//studyid
std::string RtStudy::get_studyid() const { return m_pImp->get_studyid();}
void RtStudy::set_studyid(const std::string& studyid)
{
    m_pImp->set_studyid(studyid);
    enable_field(STUDY_STUDYID);
    setdirty_field(STUDY_STUDYID, true);
}

//studydate
DATE_BOOST RtStudy::get_studydate() const { return m_pImp->get_studydate();}
void RtStudy::set_studydate(const DATE_BOOST& studydate)
{
    m_pImp->set_studydate(studydate);
    enable_field(STUDY_STUDYDATE);
    setdirty_field(STUDY_STUDYDATE, true);
}

//studytime
TIME_BOOST RtStudy::get_studytime() const { return m_pImp->get_studytime();}
void RtStudy::set_studytime(const TIME_BOOST& studytime)
{
    m_pImp->set_studytime(studytime);
    enable_field(STUDY_STUDYTIME);
    setdirty_field(STUDY_STUDYTIME, true);
}

//modalitiesinstudy
std::string RtStudy::get_modalitiesinstudy() const { return m_pImp->get_modalitiesinstudy();}
void RtStudy::set_modalitiesinstudy(const std::string& modalitiesinstudy)
{
    m_pImp->set_modalitiesinstudy(modalitiesinstudy);
    enable_field(STUDY_MODALITIESINSTUDY);
    setdirty_field(STUDY_MODALITIESINSTUDY, true);
}

//accessionnumber
std::string RtStudy::get_accessionnumber() const { return m_pImp->get_accessionnumber();}
void RtStudy::set_accessionnumber(const std::string& accessionnumber)
{
    m_pImp->set_accessionnumber(accessionnumber);
    enable_field(STUDY_ACCESSIONNUMBER);
    setdirty_field(STUDY_ACCESSIONNUMBER, true);
}

//studydescription
std::string RtStudy::get_studydescription() const { return m_pImp->get_studydescription();}
void RtStudy::set_studydescription(const std::string& studydescription)
{
    m_pImp->set_studydescription(studydescription);
    enable_field(STUDY_STUDYDESCRIPTION);
    setdirty_field(STUDY_STUDYDESCRIPTION, true);
}

//instanceavailability
std::string RtStudy::get_instanceavailability() const { return m_pImp->get_instanceavailability();}
void RtStudy::set_instanceavailability(const std::string& instanceavailability)
{
    m_pImp->set_instanceavailability(instanceavailability);
    enable_field(STUDY_INSTANCEAVAILABILITY);
    setdirty_field(STUDY_INSTANCEAVAILABILITY, true);
}

//admittingdiagnosesdescription
std::string RtStudy::get_admittingdiagnosesdescription() const { return m_pImp->get_admittingdiagnosesdescription();}
void RtStudy::set_admittingdiagnosesdescription(const std::string& admittingdiagnosesdescription)
{
    m_pImp->set_admittingdiagnosesdescription(admittingdiagnosesdescription);
    enable_field(STUDY_ADMITTINGDIAGNOSESDESCRIPTION);
    setdirty_field(STUDY_ADMITTINGDIAGNOSESDESCRIPTION, true);
}

//studycompletiondate
DATE_BOOST RtStudy::get_studycompletiondate() const { return m_pImp->get_studycompletiondate();}
void RtStudy::set_studycompletiondate(const DATE_BOOST& studycompletiondate)
{
    m_pImp->set_studycompletiondate(studycompletiondate);
    enable_field(STUDY_STUDYCOMPLETIONDATE);
    setdirty_field(STUDY_STUDYCOMPLETIONDATE, true);
}

//studycompletiontime
TIME_BOOST RtStudy::get_studycompletiontime() const { return m_pImp->get_studycompletiontime();}
void RtStudy::set_studycompletiontime(const TIME_BOOST& studycompletiontime)
{
    m_pImp->set_studycompletiontime(studycompletiontime);
    enable_field(STUDY_STUDYCOMPLETIONTIME);
    setdirty_field(STUDY_STUDYCOMPLETIONTIME, true);
}

//requestingphysician
std::string RtStudy::get_requestingphysician() const { return m_pImp->get_requestingphysician();}
void RtStudy::set_requestingphysician(const std::string& requestingphysician)
{
    m_pImp->set_requestingphysician(requestingphysician);
    enable_field(STUDY_REQUESTINGPHYSICIAN);
    setdirty_field(STUDY_REQUESTINGPHYSICIAN, true);
}

//requestedproceduredescription
std::string RtStudy::get_requestedproceduredescription() const { return m_pImp->get_requestedproceduredescription();}
void RtStudy::set_requestedproceduredescription(const std::string& requestedproceduredescription)
{
    m_pImp->set_requestedproceduredescription(requestedproceduredescription);
    enable_field(STUDY_REQUESTEDPROCEDUREDESCRIPTION);
    setdirty_field(STUDY_REQUESTEDPROCEDUREDESCRIPTION, true);
}

//requestedcontrastagent
std::string RtStudy::get_requestedcontrastagent() const { return m_pImp->get_requestedcontrastagent();}
void RtStudy::set_requestedcontrastagent(const std::string& requestedcontrastagent)
{
    m_pImp->set_requestedcontrastagent(requestedcontrastagent);
    enable_field(STUDY_REQUESTEDCONTRASTAGENT);
    setdirty_field(STUDY_REQUESTEDCONTRASTAGENT, true);
}

//referringphysicianname
std::string RtStudy::get_referringphysicianname() const { return m_pImp->get_referringphysicianname();}
void RtStudy::set_referringphysicianname(const std::string& referringphysicianname)
{
    m_pImp->set_referringphysicianname(referringphysicianname);
    enable_field(STUDY_REFERRINGPHYSICIANNAME);
    setdirty_field(STUDY_REFERRINGPHYSICIANNAME, true);
}

//pregnancystatus
int RtStudy::get_pregnancystatus() const { return m_pImp->get_pregnancystatus();}
void RtStudy::set_pregnancystatus(const int& pregnancystatus)
{
    m_pImp->set_pregnancystatus(pregnancystatus);
    enable_field(STUDY_PREGNANCYSTATUS);
    setdirty_field(STUDY_PREGNANCYSTATUS, true);
}

//smokingstatus
std::string RtStudy::get_smokingstatus() const { return m_pImp->get_smokingstatus();}
void RtStudy::set_smokingstatus(const std::string& smokingstatus)
{
    m_pImp->set_smokingstatus(smokingstatus);
    enable_field(STUDY_SMOKINGSTATUS);
    setdirty_field(STUDY_SMOKINGSTATUS, true);
}

//medicalalerts
std::string RtStudy::get_medicalalerts() const { return m_pImp->get_medicalalerts();}
void RtStudy::set_medicalalerts(const std::string& medicalalerts)
{
    m_pImp->set_medicalalerts(medicalalerts);
    enable_field(STUDY_MEDICALALERTS);
    setdirty_field(STUDY_MEDICALALERTS, true);
}

//patientinstitutionresidence
std::string RtStudy::get_patientinstitutionresidence() const { return m_pImp->get_patientinstitutionresidence();}
void RtStudy::set_patientinstitutionresidence(const std::string& patientinstitutionresidence)
{
    m_pImp->set_patientinstitutionresidence(patientinstitutionresidence);
    enable_field(STUDY_PATIENTINSTITUTIONRESIDENCE);
    setdirty_field(STUDY_PATIENTINSTITUTIONRESIDENCE, true);
}

//studystatusid
std::string RtStudy::get_studystatusid() const { return m_pImp->get_studystatusid();}
void RtStudy::set_studystatusid(const std::string& studystatusid)
{
    m_pImp->set_studystatusid(studystatusid);
    enable_field(STUDY_STUDYSTATUSID);
    setdirty_field(STUDY_STUDYSTATUSID, true);
}

//admissionid
std::string RtStudy::get_admissionid() const { return m_pImp->get_admissionid();}
void RtStudy::set_admissionid(const std::string& admissionid)
{
    m_pImp->set_admissionid(admissionid);
    enable_field(STUDY_ADMISSIONID);
    setdirty_field(STUDY_ADMISSIONID, true);
}

//studyprintstatus
std::string RtStudy::get_studyprintstatus() const { return m_pImp->get_studyprintstatus();}
void RtStudy::set_studyprintstatus(const std::string& studyprintstatus)
{
    m_pImp->set_studyprintstatus(studyprintstatus);
    enable_field(STUDY_STUDYPRINTSTATUS);
    setdirty_field(STUDY_STUDYPRINTSTATUS, true);
}

//studysendstatus
std::string RtStudy::get_studysendstatus() const { return m_pImp->get_studysendstatus();}
void RtStudy::set_studysendstatus(const std::string& studysendstatus)
{
    m_pImp->set_studysendstatus(studysendstatus);
    enable_field(STUDY_STUDYSENDSTATUS);
    setdirty_field(STUDY_STUDYSENDSTATUS, true);
}

//studystoredindvd
std::string RtStudy::get_studystoredindvd() const { return m_pImp->get_studystoredindvd();}
void RtStudy::set_studystoredindvd(const std::string& studystoredindvd)
{
    m_pImp->set_studystoredindvd(studystoredindvd);
    enable_field(STUDY_STUDYSTOREDINDVD);
    setdirty_field(STUDY_STUDYSTOREDINDVD, true);
}

//studystoredinusb
std::string RtStudy::get_studystoredinusb() const { return m_pImp->get_studystoredinusb();}
void RtStudy::set_studystoredinusb(const std::string& studystoredinusb)
{
    m_pImp->set_studystoredinusb(studystoredinusb);
    enable_field(STUDY_STUDYSTOREDINUSB);
    setdirty_field(STUDY_STUDYSTOREDINUSB, true);
}

//importsource
int RtStudy::get_importsource() const { return m_pImp->get_importsource();}
void RtStudy::set_importsource(const int& importsource)
{
    m_pImp->set_importsource(importsource);
    enable_field(STUDY_IMPORTSOURCE);
    setdirty_field(STUDY_IMPORTSOURCE, true);
}

//studyflag
std::string RtStudy::get_studyflag() const { return m_pImp->get_studyflag();}
void RtStudy::set_studyflag(const std::string& studyflag)
{
    m_pImp->set_studyflag(studyflag);
    enable_field(STUDY_STUDYFLAG);
    setdirty_field(STUDY_STUDYFLAG, true);
}

//studyprotect
std::string RtStudy::get_studyprotect() const { return m_pImp->get_studyprotect();}
void RtStudy::set_studyprotect(const std::string& studyprotect)
{
    m_pImp->set_studyprotect(studyprotect);
    enable_field(STUDY_STUDYPROTECT);
    setdirty_field(STUDY_STUDYPROTECT, true);
}

//studyconfirmstatus
int RtStudy::get_studyconfirmstatus() const { return m_pImp->get_studyconfirmstatus();}
void RtStudy::set_studyconfirmstatus(const int& studyconfirmstatus)
{
    m_pImp->set_studyconfirmstatus(studyconfirmstatus);
    enable_field(STUDY_STUDYCONFIRMSTATUS);
    setdirty_field(STUDY_STUDYCONFIRMSTATUS, true);
}

//studyrejectreason
std::string RtStudy::get_studyrejectreason() const { return m_pImp->get_studyrejectreason();}
void RtStudy::set_studyrejectreason(const std::string& studyrejectreason)
{
    m_pImp->set_studyrejectreason(studyrejectreason);
    enable_field(STUDY_STUDYREJECTREASON);
    setdirty_field(STUDY_STUDYREJECTREASON, true);
}

//studyconfirmdatetime
DATETIME_BOOST RtStudy::get_studyconfirmdatetime() const { return m_pImp->get_studyconfirmdatetime();}
void RtStudy::set_studyconfirmdatetime(const DATETIME_BOOST& studyconfirmdatetime)
{
    m_pImp->set_studyconfirmdatetime(studyconfirmdatetime);
    enable_field(STUDY_STUDYCONFIRMDATETIME);
    setdirty_field(STUDY_STUDYCONFIRMDATETIME, true);
}

//studyidissuer
std::string RtStudy::get_studyidissuer() const { return m_pImp->get_studyidissuer();}
void RtStudy::set_studyidissuer(const std::string& studyidissuer)
{
    m_pImp->set_studyidissuer(studyidissuer);
    enable_field(STUDY_STUDYIDISSUER);
    setdirty_field(STUDY_STUDYIDISSUER, true);
}

//studycomments
std::string RtStudy::get_studycomments() const { return m_pImp->get_studycomments();}
void RtStudy::set_studycomments(const std::string& studycomments)
{
    m_pImp->set_studycomments(studycomments);
    enable_field(STUDY_STUDYCOMMENTS);
    setdirty_field(STUDY_STUDYCOMMENTS, true);
}

//specialneeds
std::string RtStudy::get_specialneeds() const { return m_pImp->get_specialneeds();}
void RtStudy::set_specialneeds(const std::string& specialneeds)
{
    m_pImp->set_specialneeds(specialneeds);
    enable_field(STUDY_SPECIALNEEDS);
    setdirty_field(STUDY_SPECIALNEEDS, true);
}

//performedprocedurestepuid
std::string RtStudy::get_performedprocedurestepuid() const { return m_pImp->get_performedprocedurestepuid();}
void RtStudy::set_performedprocedurestepuid(const std::string& performedprocedurestepuid)
{
    m_pImp->set_performedprocedurestepuid(performedprocedurestepuid);
    enable_field(STUDY_PERFORMEDPROCEDURESTEPUID);
    setdirty_field(STUDY_PERFORMEDPROCEDURESTEPUID, true);
}

//performedprocedurestepstatus
int RtStudy::get_performedprocedurestepstatus() const { return m_pImp->get_performedprocedurestepstatus();}
void RtStudy::set_performedprocedurestepstatus(const int& performedprocedurestepstatus)
{
    m_pImp->set_performedprocedurestepstatus(performedprocedurestepstatus);
    enable_field(STUDY_PERFORMEDPROCEDURESTEPSTATUS);
    setdirty_field(STUDY_PERFORMEDPROCEDURESTEPSTATUS, true);
}

//performedprocedurestepdiscontinuationreason
std::string RtStudy::get_performedprocedurestepdiscontinuationreason() const { return m_pImp->get_performedprocedurestepdiscontinuationreason();}
void RtStudy::set_performedprocedurestepdiscontinuationreason(const std::string& performedprocedurestepdiscontinuationreason)
{
    m_pImp->set_performedprocedurestepdiscontinuationreason(performedprocedurestepdiscontinuationreason);
    enable_field(STUDY_PERFORMEDPROCEDURESTEPDISCONTINUATIONREASON);
    setdirty_field(STUDY_PERFORMEDPROCEDURESTEPDISCONTINUATIONREASON, true);
}

//sourceisotopename
std::string RtStudy::get_sourceisotopename() const { return m_pImp->get_sourceisotopename();}
void RtStudy::set_sourceisotopename(const std::string& sourceisotopename)
{
    m_pImp->set_sourceisotopename(sourceisotopename);
    enable_field(STUDY_SOURCEISOTOPENAME);
    setdirty_field(STUDY_SOURCEISOTOPENAME, true);
}

//radionuclidetotaldose
std::string RtStudy::get_radionuclidetotaldose() const { return m_pImp->get_radionuclidetotaldose();}
void RtStudy::set_radionuclidetotaldose(const std::string& radionuclidetotaldose)
{
    m_pImp->set_radionuclidetotaldose(radionuclidetotaldose);
    enable_field(STUDY_RADIONUCLIDETOTALDOSE);
    setdirty_field(STUDY_RADIONUCLIDETOTALDOSE, true);
}

//radiopharmaceuticalstartdatetime
DATETIME_BOOST RtStudy::get_radiopharmaceuticalstartdatetime() const { return m_pImp->get_radiopharmaceuticalstartdatetime();}
void RtStudy::set_radiopharmaceuticalstartdatetime(const DATETIME_BOOST& radiopharmaceuticalstartdatetime)
{
    m_pImp->set_radiopharmaceuticalstartdatetime(radiopharmaceuticalstartdatetime);
    enable_field(STUDY_RADIOPHARMACEUTICALSTARTDATETIME);
    setdirty_field(STUDY_RADIOPHARMACEUTICALSTARTDATETIME, true);
}

//radiopharmaceutical
std::string RtStudy::get_radiopharmaceutical() const { return m_pImp->get_radiopharmaceutical();}
void RtStudy::set_radiopharmaceutical(const std::string& radiopharmaceutical)
{
    m_pImp->set_radiopharmaceutical(radiopharmaceutical);
    enable_field(STUDY_RADIOPHARMACEUTICAL);
    setdirty_field(STUDY_RADIOPHARMACEUTICAL, true);
}

//scheduledscantime
DATETIME_BOOST RtStudy::get_scheduledscantime() const { return m_pImp->get_scheduledscantime();}
void RtStudy::set_scheduledscantime(const DATETIME_BOOST& scheduledscantime)
{
    m_pImp->set_scheduledscantime(scheduledscantime);
    enable_field(STUDY_SCHEDULEDSCANTIME);
    setdirty_field(STUDY_SCHEDULEDSCANTIME, true);
}

//safetymodesar
int RtStudy::get_safetymodesar() const { return m_pImp->get_safetymodesar();}
void RtStudy::set_safetymodesar(const int& safetymodesar)
{
    m_pImp->set_safetymodesar(safetymodesar);
    enable_field(STUDY_SAFETYMODESAR);
    setdirty_field(STUDY_SAFETYMODESAR, true);
}

//safetymodegradient
int RtStudy::get_safetymodegradient() const { return m_pImp->get_safetymodegradient();}
void RtStudy::set_safetymodegradient(const int& safetymodegradient)
{
    m_pImp->set_safetymodegradient(safetymodegradient);
    enable_field(STUDY_SAFETYMODEGRADIENT);
    setdirty_field(STUDY_SAFETYMODEGRADIENT, true);
}

//studyaccumulateddap
std::string RtStudy::get_studyaccumulateddap() const { return m_pImp->get_studyaccumulateddap();}
void RtStudy::set_studyaccumulateddap(const std::string& studyaccumulateddap)
{
    m_pImp->set_studyaccumulateddap(studyaccumulateddap);
    enable_field(STUDY_STUDYACCUMULATEDDAP);
    setdirty_field(STUDY_STUDYACCUMULATEDDAP, true);
}

//studytype
int RtStudy::get_studytype() const { return m_pImp->get_studytype();}
void RtStudy::set_studytype(const int& studytype)
{
    m_pImp->set_studytype(studytype);
    enable_field(STUDY_STUDYTYPE);
    setdirty_field(STUDY_STUDYTYPE, true);
}

//modifyflag
int RtStudy::get_modifyflag() const { return m_pImp->get_modifyflag();}
void RtStudy::set_modifyflag(const int& modifyflag)
{
    m_pImp->set_modifyflag(modifyflag);
    enable_field(STUDY_MODIFYFLAG);
    setdirty_field(STUDY_MODIFYFLAG, true);
}

//mergeflag
int RtStudy::get_mergeflag() const { return m_pImp->get_mergeflag();}
void RtStudy::set_mergeflag(const int& mergeflag)
{
    m_pImp->set_mergeflag(mergeflag);
    enable_field(STUDY_MERGEFLAG);
    setdirty_field(STUDY_MERGEFLAG, true);
}

//splitflag
int RtStudy::get_splitflag() const { return m_pImp->get_splitflag();}
void RtStudy::set_splitflag(const int& splitflag)
{
    m_pImp->set_splitflag(splitflag);
    enable_field(STUDY_SPLITFLAG);
    setdirty_field(STUDY_SPLITFLAG, true);
}

//repeatflag
int RtStudy::get_repeatflag() const { return m_pImp->get_repeatflag();}
void RtStudy::set_repeatflag(const int& repeatflag)
{
    m_pImp->set_repeatflag(repeatflag);
    enable_field(STUDY_REPEATFLAG);
    setdirty_field(STUDY_REPEATFLAG, true);
}

//procedurestepid
std::string RtStudy::get_procedurestepid() const { return m_pImp->get_procedurestepid();}
void RtStudy::set_procedurestepid(const std::string& procedurestepid)
{
    m_pImp->set_procedurestepid(procedurestepid);
    enable_field(STUDY_PROCEDURESTEPID);
    setdirty_field(STUDY_PROCEDURESTEPID, true);
}

//procedurestepdescription
std::string RtStudy::get_procedurestepdescription() const { return m_pImp->get_procedurestepdescription();}
void RtStudy::set_procedurestepdescription(const std::string& procedurestepdescription)
{
    m_pImp->set_procedurestepdescription(procedurestepdescription);
    enable_field(STUDY_PROCEDURESTEPDESCRIPTION);
    setdirty_field(STUDY_PROCEDURESTEPDESCRIPTION, true);
}

//proceduresteplocation
std::string RtStudy::get_proceduresteplocation() const { return m_pImp->get_proceduresteplocation();}
void RtStudy::set_proceduresteplocation(const std::string& proceduresteplocation)
{
    m_pImp->set_proceduresteplocation(proceduresteplocation);
    enable_field(STUDY_PROCEDURESTEPLOCATION);
    setdirty_field(STUDY_PROCEDURESTEPLOCATION, true);
}

//premedication
std::string RtStudy::get_premedication() const { return m_pImp->get_premedication();}
void RtStudy::set_premedication(const std::string& premedication)
{
    m_pImp->set_premedication(premedication);
    enable_field(STUDY_PREMEDICATION);
    setdirty_field(STUDY_PREMEDICATION, true);
}

//performingphysician
std::string RtStudy::get_performingphysician() const { return m_pImp->get_performingphysician();}
void RtStudy::set_performingphysician(const std::string& performingphysician)
{
    m_pImp->set_performingphysician(performingphysician);
    enable_field(STUDY_PERFORMINGPHYSICIAN);
    setdirty_field(STUDY_PERFORMINGPHYSICIAN, true);
}

//operatorsname
std::string RtStudy::get_operatorsname() const { return m_pImp->get_operatorsname();}
void RtStudy::set_operatorsname(const std::string& operatorsname)
{
    m_pImp->set_operatorsname(operatorsname);
    enable_field(STUDY_OPERATORSNAME);
    setdirty_field(STUDY_OPERATORSNAME, true);
}

//studyimportstatus
int RtStudy::get_studyimportstatus() const { return m_pImp->get_studyimportstatus();}
void RtStudy::set_studyimportstatus(const int& studyimportstatus)
{
    m_pImp->set_studyimportstatus(studyimportstatus);
    enable_field(STUDY_STUDYIMPORTSTATUS);
    setdirty_field(STUDY_STUDYIMPORTSTATUS, true);
}

//requestedprocedureid
std::string RtStudy::get_requestedprocedureid() const { return m_pImp->get_requestedprocedureid();}
void RtStudy::set_requestedprocedureid(const std::string& requestedprocedureid)
{
    m_pImp->set_requestedprocedureid(requestedprocedureid);
    enable_field(STUDY_REQUESTEDPROCEDUREID);
    setdirty_field(STUDY_REQUESTEDPROCEDUREID, true);
}

//folderpath
std::string RtStudy::get_folderpath() const { return m_pImp->get_folderpath();}
void RtStudy::set_folderpath(const std::string& folderpath)
{
    m_pImp->set_folderpath(folderpath);
    enable_field(STUDY_FOLDERPATH);
    setdirty_field(STUDY_FOLDERPATH, true);
}

//studyreserved0
std::string RtStudy::get_studyreserved0() const { return m_pImp->get_studyreserved0();}
void RtStudy::set_studyreserved0(const std::string& studyreserved0)
{
    m_pImp->set_studyreserved0(studyreserved0);
    enable_field(STUDY_STUDYRESERVED0);
    setdirty_field(STUDY_STUDYRESERVED0, true);
}

//studyreserved1
std::string RtStudy::get_studyreserved1() const { return m_pImp->get_studyreserved1();}
void RtStudy::set_studyreserved1(const std::string& studyreserved1)
{
    m_pImp->set_studyreserved1(studyreserved1);
    enable_field(STUDY_STUDYRESERVED1);
    setdirty_field(STUDY_STUDYRESERVED1, true);
}

//updatetime
DATETIME_BOOST RtStudy::get_updatetime() const { return m_pImp->get_updatetime();}
void RtStudy::set_updatetime(const DATETIME_BOOST& updatetime)
{
    m_pImp->set_updatetime(updatetime);
    enable_field(STUDY_UPDATETIME);
    setdirty_field(STUDY_UPDATETIME, true);
}

RT_TPS_DATABASE_END_NAMESPACE