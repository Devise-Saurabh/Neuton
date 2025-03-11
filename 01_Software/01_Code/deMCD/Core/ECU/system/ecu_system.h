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

File Name: ecu_system.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef ECU_SYSTEM_H
#define ECU_SYSTEM_H

#include "lib_types.h"

typedef enum ECU_SYS_eEcuModeTemplate
{
	 ECU_SYS_INIT = 0,
   ECU_SYS_DEFAULT = 1,
	 ECU_SYS_PROGRAMMING = 2,
   ECU_SYS_EXTENDED_DIAGNOSTIC = 3,
   ECU_SYS_DEINIT = 4,
} ECU_SYS_eEcuMode_t;


void ECU_SYS_vdInit(void);
void ECU_SYS_vdDeInit(void);
void ECU_SYS_vdMgr(void);
void ECU_SYS_vdShutdown(void);
void ECU_SYS_vdShutdownAndReset(void);
uint8_t ECU_SYS_u8IsShutdownAndReset(void);
void ECU_SYS_vdSleep(void);
void ECU_SYS_vdWakeup(void);
void ECU_SYS_vdReset(void);
void ECU_SYS_vdGetResetStatus(uint8_t* pu8IsExWdgReset);
void ECU_SYS_vdClearResetStatus(uint8_t u8IsExWdgResetNeeded);
void ECU_SYS_vdReInitialize(void);

void ECU_SYS_vdEnableInterrupts(void);
void ECU_SYS_vdDisableInterrupts(void);

void ECU_SYS_vdGoToApplication(uint32_t u32Address);

void ECU_SYS_vdSetEcuMode(ECU_SYS_eEcuMode_t eEcuMode);
ECU_SYS_eEcuMode_t ECU_SYS_eGetEcuMode(void);

void ECU_SYS_vdExtWdgManage(void);


#define ECU_SYS_ENTER_CRITICAL_SECTION ECU_SYS_vdDisableInterrupts();
#define ECU_SYS_EXIT_CRITICAL_SECTION ECU_SYS_vdEnableInterrupts();

#endif /*ECU_SYSTEM_H*/



