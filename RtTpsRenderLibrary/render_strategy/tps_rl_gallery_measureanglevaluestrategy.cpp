////////////////////////////////////////////////////////////////
///  Copyright (c) Shanghai United Imaging Healthcare Inc., 2013
///  All rights reserved.
/// 
///  \author  yuxuan.duan yuxuan.duan@united-imaging.com
/// 
///  \file tps_rl_gallery_measureanglevaluestrategy.cpp
/// 
///  \brief class GalleryMeasureAngleValStrategy 
/// 
///  \version 1.0
/// 
///  \date    2015/03/23
////////////////////////////////////////////////////////////////
#include "StdAfx.h"

// ZhengHe
#include "McsfMedViewer3DGraphicObject/mcsf_viewer3d_mpr_api.h"
#include "McsfMedViewer3D/McsfMedViewer3DGraphicObject/mcsf_viewer3d_graphic_object_volume.h"
#include "McsfMedViewer3DGraphicObject/mcsf_viewer3d_graphic_object_volume.h"
#include "McsfMedViewer3DGraphicObject/mcsf_viewer3d_graphic_object_mpr.h"
#include "RtTpsRenderLibrary/tps_rl_mprgraphicobject.h"
#include "McsfMedViewer3D/McsfMedViewer3DGraphicObject/mcsf_viewer3d_raii_utility.h"

#include "RtTpsFramework/tps_fw_freetype2fontgenerator.h"
#include "RtTpsRenderLibrary/tps_rl_gallery_measureanglevaluestrategy.h"
//#include "RtTpsRenderLibrary/tps_rl_graphicobjecttypedefines.h"
#include "RtTpsRenderLibrary/tps_rl_gallery_measurevaluegraphicobject.h"


TPS_BEGIN_NAMESPACE

GalleryMeasureAngleValStrategy::GalleryMeasureAngleValStrategy() : mIsInitialed(false), mIsDirty(false),
    mMeasureValGraphicObject(nullptr){

}

GalleryMeasureAngleValStrategy::~GalleryMeasureAngleValStrategy(){

}


void GalleryMeasureAngleValStrategy::SetMeasureValGraphicObject(std::shared_ptr<GalleryMeasureValGraphicObject> measureVal){
    mMeasureValGraphicObject = measureVal;
}

Mcsf::MedViewer3D::Point2D GalleryMeasureAngleValStrategy::ImageCoordinateToScreenCoordinate
    (Mcsf::MedViewer3D::Point2D anglePoint, int iWidth, int iHeight)
{
    int iMinL = std::min(iWidth, iHeight);

    Mcsf::MedViewer3D::Point2D anglePointOut(0, 0);
    anglePointOut.x = (anglePoint.x / 2) * iMinL / iWidth + 0.5;
    anglePointOut.y = (anglePoint.y / 2) * iMinL / iHeight + 0.5;

    return anglePointOut;

}

bool GalleryMeasureAngleValStrategy::Render(unsigned char*& buffer, 
    int bufWidth, int bufHeight) {
        if (buffer == nullptr || bufWidth <= 0 || bufHeight <= 0
            || mMeasureValGraphicObject == nullptr) {
                TPS_LOG_DEV_ERROR<<"buffer == nullptr || bufWidth <= 0 || bufHeight <= 0";
                return false;
        }

        unsigned char* pStrBuffer = nullptr;
        int strBufHeight = 0;
        int strBufWidth = 0;
        std::vector<MeasureValTextBlock*> allTextInfo;

        mMeasureValGraphicObject->GetAllTextBlock(allTextInfo);

        //std::cout<<"******************************************"<<std::endl;
        //std::cout<<"TextBlock Num: "<< allTextInfo.size()<<std::endl;
        for (std::vector<MeasureValTextBlock*>::iterator itText = allTextInfo.begin();
            itText != allTextInfo.end(); ++itText) {

                pStrBuffer = (*itText)->mTextBuffer;

                if(nullptr == pStrBuffer){
                    continue;
                }

                strBufHeight = (*itText)->mTextHeight;
                strBufWidth = (*itText)->mTextWidth;

                float leftInImageCoordinate = (*itText)->Margin.mLeft;
                //if ((*itText)->mHorizontalAlignment == ALIGH_RIGHT) {
                //    left = bufWidth - ((*itText)->Margin.mRight + strBufWidth);
                //}

                float bottomInImageCoordinate = 1 - ((*itText)->Margin.mTop);
                //if((*itText)->mVerticalAlignment == ALIGN_BOTTOM) {
                //    top = bufHeight - ((*itText)->Margin.mBottom + strBufHeight);
                //}

                //if(top + strBufHeight > bufHeight){
                //    strBufHeight = bufHeight - top;
                //}

                Mcsf::MedViewer3D::Point2D pos(leftInImageCoordinate, bottomInImageCoordinate);
                Mcsf::MedViewer3D::Point2D posInScreenCoordinate = 
                    ImageCoordinateToScreenCoordinate(pos, bufWidth, bufHeight);

                int left = posInScreenCoordinate.x * bufWidth;
                int top = (1 - posInScreenCoordinate.y) * bufHeight;

                if(top < 0) top = 0;
                if(top > bufHeight - strBufHeight) top = bufHeight - strBufHeight;
                //if(left + strBufWidth > bufWidth){
                //    strBufWidth = bufWidth - left;
                //}
                if(left < 0) left = 0;

                //if(top + strBufHeight > bufHeight || top < 0
                //    || left + strBufWidth > bufWidth || left < 0){
                //        TPS_LOG_DEV_ERROR<<"Out of range!";
                //        return false;
                //}

                top = bufHeight - top - strBufHeight;
                unsigned char* pDstBuffer = buffer + (top*bufWidth+left)*4;
                unsigned char* pSrcBuffer = pStrBuffer;

                int adjustedHeight = (top + strBufHeight) > bufHeight ? bufHeight - top :strBufHeight;
                int adjustedWidth = (left + strBufWidth) > bufWidth ? bufWidth - left :strBufWidth;

                for (int m=0; m<adjustedHeight; ++m) {
                    for (int n=0; n<adjustedWidth; ++n) {
                        if (pSrcBuffer[(m*strBufWidth+n)*4+3]!=0) {
                            pDstBuffer[(m*bufWidth+n)*4] = pSrcBuffer[(m*strBufWidth+n)*4];
                            pDstBuffer[(m*bufWidth+n)*4+1] = pSrcBuffer[(m*strBufWidth+n)*4+1];
                            pDstBuffer[(m*bufWidth+n)*4+2] = pSrcBuffer[(m*strBufWidth+n)*4+2];
                        }
                    }
                }
        }

    return true;
}
TPS_END_NAMESPACE
