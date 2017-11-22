/******************************************************************************
*
* Copyright (C) 2016 Hisilicon Technologies Co., Ltd.  All rights reserved.
*
* This program is confidential and proprietary to Hisilicon  Technologies Co., Ltd. (Hisilicon),
* and may not be copied, reproduced, modified, disclosed to others, published or used, in
* whole or in part, without the express prior written permission of Hisilicon.
*
******************************************************************************
File Name           : hi_go_adp_layer.h
Version             : Initial Draft
Author              :
Created             : 2016/01/12
Description         :
                       CNcomment: ����logoͼ������� CNend\n
Function List   :
History         :
Date                        Author                  Modification
2016/01/12                  y00181162               Created file
******************************************************************************/

#ifndef  __HI_GO_ADP_LAYER_H__
#define  __HI_GO_ADP_LAYER_H__


/*********************************add include here******************************/

#include "hi_go_common.h"

/***************************** Macro Definition ******************************/
/** ���Ҫ����������һ�£������޷��ͷ� **/
#define DISPLAY_BUFFER_HD           "LAYER_SURFACE"

/*************************** Structure Definition ****************************/

typedef struct hiFbAlpha_S
{
    HI_BOOL bAlphaEnable;
    HI_BOOL bAlphaChannel;
    HI_U8 u8Alpha0;
    HI_U8 u8Alpha1;
    HI_U8 u8GlobalAlpha;
    HI_U8 u8Reserved;
}HI_FB_ALPHA_S;


typedef struct hiGfxDisplayInfo_S
{
    HI_U32 u32Stride;
    HI_U32 u32ScreenAddr;
    HI_GO_RECT_S stInRect;
    HI_GO_RECT_S stOutRect;
    HI_FB_ALPHA_S stAlpha;
}HI_GFX_DISPLAY_INFO_S;


/********************** Global Variable declaration **************************/


/******************************* API declaration *****************************/
/*****************************************************************************
* func            : HI_GFX_ADP_CreateLayer
* description     : ����ͼ��
* in              : ͼ�����
* retval          : HI_SUCCESS
* retval          : HI_FAILURE
*****************************************************************************/
HI_S32 HI_GFX_ADP_CreateLayer(HI_GO_SURFACE_S *pstGfxSurface);

/*****************************************************************************
* func            : HI_GFX_ADP_SetLayerPos
* description     : ����layer��ʾ�ֱ��ʺ�λ����Ϣ
* in              : ͼ�����
* retval          : HI_SUCCESS
* retval          : HI_FAILURE
*****************************************************************************/
HI_S32 HI_GFX_ADP_SetLayerPos(HI_GO_SURFACE_S *pstGfxSurface,HI_U32 u32StartX, HI_U32 u32StartY);


/*****************************************************************************
* func            : HI_GFX_ADP_RefreshLayer
* description     : ˢ��ͼ��
* in              : ͼ�����
* retval          : HI_SUCCESS
* retval          : HI_FAILURE
*****************************************************************************/
HI_S32 HI_GFX_ADP_RefreshLayer(HI_GO_SURFACE_S *pstGfxSurface);


/*****************************************************************************
* func            : HI_GFX_ADP_DestoryLayer
* description     : ����ͼ��
* in              : ͼ�����
* retval          : HI_SUCCESS
* retval          : HI_FAILURE
*****************************************************************************/
HI_S32 HI_GFX_ADP_DestoryLayer(HI_GO_SURFACE_S *pstGfxSurface);


#endif /*__HI_GO_ADP_LAYER_H__ */