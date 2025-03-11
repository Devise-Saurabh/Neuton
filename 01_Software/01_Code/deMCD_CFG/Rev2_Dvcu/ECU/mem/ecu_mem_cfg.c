/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Bavdhan,
411021, Pune,
India

File Name: ecu_mem_cfg.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
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
    deMCD_DEFAULT,
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
  deMCD_DEFAULT,
  /*Active Signal Read*/
  deMCD_DEFAULT,
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
    ECU_MEM_INT_PREVIOUS_ENERGY_CONSUMPTION,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (2*4),
    /*Pysical Value*/
    250,
    /*Resolution*/
    0.1,
    /*Offset*/
    0,
    /*Raw Value*/
    2500,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_EEPROM_BOOTNUMBER,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (3*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    1,
    /*Offset*/
    0,
    /*Raw Value*/
    10,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_2,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (4*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_3,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (5*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.0001,
    /*Offset*/
    0,
    /*Raw Value*/
    100000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_4,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (6*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_5,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (7*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_6,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (8*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_7,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (9*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.001,
    /*Offset*/
    0,
    /*Raw Value*/
    10000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_CLB_NONAME_8,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (10*4),
    /*Pysical Value*/
    10,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    1000,
  },
  {
    /*Data Id*/ 
    ECU_MEM_INT_DTC_NONAME_5,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (11*4),
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
    ECU_MEM_INT_DTC_NONAME_6,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (12*4),
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
    ECU_MEM_INT_DTC_BMS_FAULT,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (13*4),
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
    ECU_MEM_INT_DTC_NONAME_8,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (14*4),
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
    ECU_MEM_INT_DTC_NONAME_9,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (15*4),
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
    ECU_MEM_INT_DTC_NONAME_10,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR,
    /*Data Address Offset*/
    (16*4),
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


