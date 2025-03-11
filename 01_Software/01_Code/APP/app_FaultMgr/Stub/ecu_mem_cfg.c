/*
***************************************************************************
***************************************************************************
(C) 2016 SIGRA Technologies GmbH  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

SIGRA Technologies GmbH
Agnes-Pockels-Bogen 1,
80992, Munich,
Germany

File Name: ecu_mem_cfg.c
Author: TAPAS Generated 
E-mail: N/A 
***************************************************************************
***************************************************************************
*/

#include "ecu_mem_cfg.h"
#include "ecu_mem.h"


#ifdef ECU_MEM_EXT_MODULE_ENABLE
ECU_MEM_EXT_strE2pSignalData_t ECU_MEM_EXT_astrE2pData[ECU_MEM_EXT_DATA_NUM] =
{
  {
    /*Data Id*/    
    ECU_MEM_EXT_DATA_ID0,
    /*Data Address Page Number*/
    ECU_MEM_EXT_PAGE_0,
    /*Data Address Offset*/
    ECU_MEM_EXT_OFFSET_0,
    /*Pysical Value*/
    TAPAS_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,   
  },
};

ECU_MEM_EXT_E2pModuleHandler_t ECU_MEM_EXT_strE2pModuleHandler =
{
  /*Number of Objects*/
  ECU_MEM_EXT_DATA_NUM,
  /*Array of E2PROM Objects*/
  ECU_MEM_EXT_astrE2pData,
  /*Active Signal Write*/
  TAPAS_DEFAULT,
  /*Active Signal Read*/
  TAPAS_DEFAULT,
};
#endif /*ECU_MEM_EXT_MODULE_ENABLE*/

#ifdef ECU_MEM_INT_MODULE_ENABLE
ECU_MEM_INT_strE2pSignalData_t ECU_MEM_INT_astrE2pData[ECU_MEM_INT_DATA_NUM] =
{
  {
    /*Data Id*/ 
    ECU_MEM_INT_APP_VALID,
    /*Data Address Sector Number*/
    ECU_MEM_INT_BOOT_SECTOR,
    /*Data Address Offset*/
    (0*4),
    /*Pysical Value*/
    0,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    0,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_WDG_ENABLE,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (0*4),
    /*Pysical Value*/
    0,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    0,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_XCP_ENABLE,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (1*4),
    /*Pysical Value*/
    0,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    0,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_MOTDRVGTQMAX,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (2*4),
    /*Pysical Value*/
    700,
    /*Resolution*/
    0.001,
    /*Offset*/
    0,
    /*Raw Value*/
    700000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_WHEEL_RADIUS,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (3*4),
    /*Pysical Value*/
    0.423,
    /*Resolution*/
    0.001,
    /*Offset*/
    0,
    /*Raw Value*/
    423,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_FINAL_DRIVE_RATIO,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (4*4),
    /*Pysical Value*/
    18.53,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1853,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_TESTDTC0,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (5*4),
    /*Pysical Value*/
    0,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    0,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_TESTDTC1,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (6*4),
    /*Pysical Value*/
    0,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    0,
  },
};

ECU_MEM_INT_E2pModuleHandler_t ECU_MEM_INT_strE2pModuleHandler =
{
  /*Number of Objects*/
  ECU_MEM_INT_DATA_NUM,
  /*Array of E2PROM Objects*/
  ECU_MEM_INT_astrE2pData,
};

#endif /*ECU_MEM_INT_MODULE_ENABLE*/


