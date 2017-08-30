////////////////////////////////////////////////////////////////
///  Copyright (c) Shanghai United Imaging Healthcare Inc., 2014
///  All rights reserved.
/// 
///  \Author Cheng Yilong yilong.cheng@united-imaging.com
/// 
///  \file tps_rl_easyplanmlcnudgeoperation.cpp
/// 
///  \brief class TpsEasyPlanDeleteBeamOperation
/// 
///  \version 1.0
/// 
///  \date    2014/10/28
////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "RtTpsRenderLibrary/tps_rl_easyplandeletebeamoperation.h"

#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_beam.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_beamsegment.h"
#include "RtTpsDatabaseWrapper/rt_tps_database_interface_object_normgroup.h"

#include "RtTpsDataAccess/tps_da_idatarepository.h"

//TPS
#include "RtTpsFramework/tps_fw_common_enums.h"
#include "RtTpsFramework/tps_fw_arithmeticconverter.h"
#include "RtTpsFramework/tps_fw_modelwarehouse.h"
#include "RtTpsFramework/tps_fw_graphicobjecttypehelper.h"
#include "RtTpsAlgorithmProxy/tps_ap_subvolumehelper_api.h"
#include "RtTpsCertifiedLib/rt_tps_certifiedmlceditinfo.h"
#include "RtTpsDataAccess/tps_da_normgroupmanager.h"
#include "RtTpsDataAccess/tps_da_beammanager.h"
#include "RtTpsFramework/tps_fw_mask.h"
#include "RtTpsRenderLibrary/tps_rl_beamgraphicobject.h"
#include "RtTpsRenderLibrary/tps_rl_beamgocollection.h"
#include "RtTpsRenderLibrary/tps_rl_segmentgraphicobject.h"
#include "RtTpsRenderLibrary/tps_rl_normalgroupcollection.h"
#include "RtTpsRenderLibrary/tps_rl_graphicobjecttypedefines.h"
#include "RtTpsRenderLibrary/tps_rl_beamgocollection.h"


TPS_BEGIN_NAMESPACE

TpsEasyPlanDeleteBeamOperation::TpsEasyPlanDeleteBeamOperation(std::string beamUid) {
    m_BeamUid = beamUid;
}

TpsEasyPlanDeleteBeamOperation::~TpsEasyPlanDeleteBeamOperation() {

}

bool TpsEasyPlanDeleteBeamOperation::ModifyGraphicObject() const{

    if (m_BeamUid.empty()){
        TPS_LOG_DEV_ERROR<<"The Beam UID is empty.";
        return false;
    }

    auto beam = mDataRepository->GetBeamManager()->GetBeam(m_BeamUid);
    if (beam == nullptr){
        TPS_LOG_DEV_ERROR<<"The beam does not exist with UID: "<<m_BeamUid;
        return false;
    }
    std::string normGroupUID = beam->get_normgroupuid();
    RtNormgroup *normGroup = nullptr;

    if(!mDataRepository->GetNormgroupManager()->GetNormGroup(normGroupUID, &normGroup)
        || normGroup == nullptr) {
            TPS_LOG_DEV_ERROR<<"Normgroup Not Found!";
            return false;
    }
    std::string planUID = normGroup->get_planuid();

    auto ngCollection = mModelWarehouse->GetModelObject(
        planUID + "|" + GOTypeHelper::ToString(GO_TYPE_NORMALGROUP_COLLECTION));
    auto goNormGroupCollection = std::dynamic_pointer_cast<NormalGroupCollection>(ngCollection);
    if (goNormGroupCollection == nullptr) {
        TPS_LOG_DEV_ERROR<<"Failed get normgroup collection.";
        return false;
    }

    auto goBeamCollection = goNormGroupCollection->GetNormalGroup(normGroupUID);
    if (goBeamCollection == nullptr){
        TPS_LOG_DEV_ERROR<<"Failed get easy plan beam collection of try: ";
        return false;
    }

    goBeamCollection->DeleteBeam(m_BeamUid);

    goBeamCollection->SetDirty(true);
    return true;
}


TPS_END_NAMESPACE
