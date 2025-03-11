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

File Name: ecu_wdg.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_WDG_H
#define ECU_WDG_H

#include "lib_types.h"


typedef enum ECU_WDG_eControlCmdTemplate
{
	 ECU_WDG_CMD_NO_REFRESH = 0,
   ECU_WDG_CMD_REFRESH = 1,
} ECU_WDG_eControlCmd_t;

typedef enum ECU_WDG_eEnableCmdTemplate
{
	 ECU_WDG_CMD_DISABLE = 0,
   ECU_WDG_CMD_ENABLE = 1,
} ECU_WDG_eEnableCmd_t;


void ECU_WDG_vdInit(void);
void ECU_WDG_vdDeInit(void);
void ECU_WDG_vdMgr(void);
void ECU_WDG_vdControl(ECU_WDG_eControlCmd_t eControlCmd);
void ECU_WDG_vdEnable(ECU_WDG_eEnableCmd_t eEnableCmd);


#endif /*ECU_WDG_H*/



