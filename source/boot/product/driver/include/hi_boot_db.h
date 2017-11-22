/******************************************************************************
*
* Copyright (C) 2014 Hisilicon Technologies Co., Ltd.  All rights reserved. 
*
* This program is confidential and proprietary to Hisilicon  Technologies Co., Ltd. (Hisilicon), 
* and may not be copied, reproduced, modified, disclosed to others, published or used, in
* whole or in part, without the express prior written permission of Hisilicon.
*
******************************************************************************
File Name           : hi_boot_db.h
Version             : Initial Draft
Author              : 
Created             : 2014/10/21
Description         : 
Function List       : 
History             :
Date                       Author                   Modification
2014/10/21                                          Created file        
******************************************************************************/


#ifndef __HI_BOOT_DB_H__
#define __HI_BOOT_DB_H__

#include "hi_type.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_DB_CHECK_LEN     4
#define HI_DB_MAX_SIZE      (8*1024)
#define HI_DB_MAX_NAME_LEN  32

#define HI_ERR_DB(format, arg...)    printf( "%s,%d: " format , __FUNCTION__, __LINE__, ## arg)
//#define HI_INFO_DB(format, arg...)    printf( "%s,%d: " format , __FUNCTION__, __LINE__, ## arg)
#define HI_INFO_DB(format, arg...)

typedef struct hiDB_S
{
    HI_U32      u32DataLen;
    HI_U8       *pData;
}HI_DB_S;

typedef struct hiDB_TABLE_S
{
    HI_DB_S     *pstDB;
    HI_CHAR     Name[HI_DB_MAX_NAME_LEN];
    HI_U32      u32DataSize;
    HI_U8       *pData;
}HI_DB_TABLE_S;

typedef struct hiDB_KEY_S
{
    HI_CHAR     Name[HI_DB_MAX_NAME_LEN];
    HI_U32      u32ValueSize;
    HI_VOID     *pValue;
}HI_DB_KEY_S;

HI_S32 HI_DB_Create(HI_DB_S *pstDB);

HI_S32 HI_DB_Destroy(HI_DB_S *pstDB);

HI_S32 HI_DB_GetDBFromMem(HI_U8 *pDBMem, HI_DB_S *pstDB);

HI_S32 HI_DB_InsertTable(HI_DB_S *pstDB, HI_DB_TABLE_S *pstTable);

HI_S32 HI_DB_DeleteTable(HI_DB_S *pstDB, HI_CHAR TableName[]);

HI_S32 HI_DB_GetTableByName(HI_DB_S *pstDB, HI_CHAR TableName[], HI_DB_TABLE_S *pstTable);

HI_S32 HI_DB_InsertKey(HI_DB_TABLE_S *pstTable, HI_DB_KEY_S *pstKey);

HI_S32 HI_DB_DeleteKey(HI_DB_TABLE_S *pstTable, HI_CHAR KeyName[]);

HI_S32 HI_DB_GetKeyByName(HI_DB_TABLE_S *pstTable, HI_CHAR KeyName[], HI_DB_KEY_S *pstKey);

#ifdef __cplusplus
}
#endif

#endif
