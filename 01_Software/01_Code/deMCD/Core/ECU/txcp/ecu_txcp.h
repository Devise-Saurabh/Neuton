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

File Name: ecu_txcp.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef ECU_TXCP_H
#define ECU_TXCP_H

#include "lib_types.h"

typedef enum ECU_TXCP_eGlobalEnable
{
   ECU_TXCP_GLOBAL_DISABLE = 0,
   ECU_TXCP_GLOBAL_ENABLE = 1,
} ECU_TXCP_eGlobalEnable_t;

typedef enum ECU_TXCP_eCalibEnable
{
   ECU_TXCP_CALIB_DISABLE = 0,
   ECU_TXCP_CALIB_ENABLE = 1,
} ECU_TXCP_eCalibEnable_t;

typedef enum ECU_TXCP_eHeartBeatEnable
{
   ECU_TXCP_HB_DISABLE = 0,
   ECU_TXCP_HB_ENABLE = 1,
} ECU_TXCP_eHeartBeatEnable_t;


void ECU_TXCP_vdInit(void);
void ECU_TXCP_vdDeInit(void);
void ECU_TXCP_vdMgr(void);
void ECU_TXCP_vdHandleRequests(void);

#endif /*ECU_TXCP_H*/



