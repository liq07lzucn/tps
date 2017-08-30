//////////////////////////////////////////////////////////////////////////
/// \defgroup TPS of Radio Therapy Business Unit
///  Copyright, (c) Shanghai United Imaging Healthcare Inc., 2013
///  All rights reserved.
///
///  \author  yuxuan.duan@united-imaging.com
///
///  \file    tps_rl_gallery_crosshair_update_operation.cpp
///  \brief   Crosshair movement implementation
///
///  \version 1.0
///  \date    2016.04.19
///  
//////////////////////////////////////////////////////////////////////////

#ifndef TPS_RL_GALLERY_CROSSHAIR_UPDATE_OPERATION_H_
#define TPS_RL_GALLERY_CROSSHAIR_UPDATE_OPERATION_H_

#include "tps_rl_defs.h"

#include "RtTpsFramework/tps_fw_operationbase.h"


TPS_BEGIN_NAMESPACE  // begin namespace tps

class TPS_RL_DECLSPEC TpsGalleryCrosshairUpdateOperation : public OperationBase{

public:
    //the constructor and destructor
    TpsGalleryCrosshairUpdateOperation(ModelWarehouse* modelWarehouse, const std::string& imageUID);
    virtual ~TpsGalleryCrosshairUpdateOperation();

    virtual bool ModifyGraphicObject() const;
    bool GetTwoPointFromLine(Mcsf::MedViewer3D::Vector3D &normal1, Mcsf::MedViewer3D::Point3D &pt1, Mcsf::MedViewer3D::Vector3D &normal2, Mcsf::MedViewer3D::Point3D &pt2, Mcsf::MedViewer3D::Point3D &outPoint1, Mcsf::MedViewer3D::Point3D &outPoint2) const;

private:
    ModelWarehouse*  mModelWarehouse;
    std::string     m_strImageUID;
private:
    // the default copy and assign method are not allowed.
    TPS_DISALLOW_COPY_AND_ASSIGN(TpsGalleryCrosshairUpdateOperation);
};

TPS_END_NAMESPACE  // end namespace tps

#endif //TPS_RL_GALLERY_CROSSHAIR_ROTATE_OPERATION_H_
