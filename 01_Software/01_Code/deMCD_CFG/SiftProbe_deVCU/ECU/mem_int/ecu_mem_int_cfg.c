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

Devise Electronics Pvt Ltd,
Bavdhan,
411021, Pune,
India

File Name: ecu_mem_int_cfg.c
Author: Devise Electronics Embedded Team
E-mail: devcu@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "ecu_mem_int_cfg.h"
#include "ecu_mem_int.h"


ECU_MEM_INT_strE2pSignalData_t ECU_MEM_INT_astrE2pData[ECU_MEM_INT_DATA_NUM] =
{
  {
    /*Data Id*/    
    ECU_MEM_INT_DATA_ID0,
    /*Data Address Sector Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    0,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,    
  },
  {
    /*Data Id*/    
    ECU_MEM_INT_DATA_ID1,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    4,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    11,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID2,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    8,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    21,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID3,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    12,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    31,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID4,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    16,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    4,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID5,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    20,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    5,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID6,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    24,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    6,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID7,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    28,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    7,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID8,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    32,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    8,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID9,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    36,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    9,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID10,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    40,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID11,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    44,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    11,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID12,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    48,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    12,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID13,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    52,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    13,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID14,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    56,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    14,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID15,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    60,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    151,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID16,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    64,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID17,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    68,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    11,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID18,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    72,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    21,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID19,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    76,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    31,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID20,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    80,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    41,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID21,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    84,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    512,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID22,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    88,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    6,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID23,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    92,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    7,    
  },
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID24,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    96,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    8,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID25,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    100,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    9,    
  },   
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID26,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    104,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,    
  },    
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID27,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    108,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    11,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID28,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    112,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    12,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID29,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    116,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    13,    
  },    
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID30,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    120,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    14,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID31,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    124,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    15,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID32,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    128,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    10,    
  },    
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID33,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    132,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    11,    
  },  
  {
    /*Data Id*/
    ECU_MEM_INT_DATA_ID34,
    /*Data Address Page Number*/
    ECU_MEM_INT_SECTOR_0,
    /*Data Address Offset*/
    136,
    /*Pysical Value*/
    deMCD_DEFAULT,
    /*Resolution*/
    0.01,
    /*Offset*/
    0,
    /*Raw Value*/
    21,    
  },    
  //  
};

ECU_MEM_INT_E2pModuleHandler_t ECU_MEM_INT_strE2pModuleHandler =
{
  /*Number of Objects*/
  ECU_MEM_INT_DATA_NUM,
  /*Array of E2PROM Objects*/
  ECU_MEM_INT_astrE2pData,
};
