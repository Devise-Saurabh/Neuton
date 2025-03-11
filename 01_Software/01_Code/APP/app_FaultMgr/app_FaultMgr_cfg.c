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

File Name: app_FaultMgr_cfg.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "app_FaultMgr_cfg.h"
#include "app_FaultMgr.h"


APP_FLT_strDtc_t FLT_astrDtc[APP_FLT_DTC_NUM] = 
{
  {
    /* DTC ID 0*/
    APP_FLT_DTC_DTC_NONAME_5,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L2,
    /*Reset Delta Time*/
    100,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    10,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_NONAME_5,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_NONAME_5,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_NONAME_5,
  },
  {
    /* DTC ID 1*/
    APP_FLT_DTC_DTC_NONAME_6,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L1,
    /*Reset Delta Time*/
    100,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    10,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_NONAME_6,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_NONAME_6,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_NONAME_6,
  },
  {
    /* DTC ID 2*/
    APP_FLT_DTC_DTC_BMS_FAULT,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L2,
    /*Reset Delta Time*/
    5000,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    5,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_BMS_FAULT,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_BMS_FAULT,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_BMS_FAULT,
  },
  {
    /* DTC ID 3*/
    APP_FLT_DTC_DTC_NONAME_8,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L2,
    /*Reset Delta Time*/
    5000,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    5,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_NONAME_8,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_NONAME_8,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_NONAME_8,
  },
  {
    /* DTC ID 4*/
    APP_FLT_DTC_DTC_NONAME_9,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L2,
    /*Reset Delta Time*/
    5000,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    5,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_NONAME_9,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_NONAME_9,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_NONAME_9,
  },
  {
    /* DTC ID 5*/
    APP_FLT_DTC_DTC_NONAME_10,
    /* DTC Severity*/
    APP_FLT_DTC_SEV_FAULT_L1,
    /*Reset Delta Time*/
    100,
    /*Delta Time Counter*/
    deMCD_DEFAULT,
    /*Error Count Limit*/
    10,
    /*Error Flag*/
    deMCD_FALSE,
    /*Error Count*/
    deMCD_DEFAULT,
    /*Pointer to the RTE Read Error Set Signal*/
    RTE_Read_DTC_NONAME_10,
    /*Pointer to the RTE Write Error Clear Signal*/
    RTE_Write_FLT_CLR_DTC_NONAME_10,
    /*Decided severity for the DTC*/
    APP_FLT_DTC_SEV_NO_ERROR,
    /*Memory Id*/
    ECU_MEM_INT_DTC_NONAME_10,
  },
};



