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

File Name: uc_system.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_SYSTEM_H
#define UC_SYSTEM_H

#include "uc_system_cfg.h"
#include "lib_types.h"

typedef void(__irq __arm  * p_intr_hadler_t)(void);

void UC_SYS_vdRegisterISR(uint8_t u8IdVim, p_intr_hadler_t p2fISR);
void UC_SYS_vdEnableISR(uint8_t u8IdVim);
void UC_SYS_vdDisableISR(uint8_t u8IdVim);
void UC_SYS_vdEnableInterrupts(void);
void UC_SYS_vdDisableInterrupts(void);
void UC_SYS_vdInit(void);
uint8_t UC_SYS_u8IsExReset(void);
void UC_SYS_vdClearExReset(void);
uint8_t UC_SYS_u8IsPowReset(void);
void UC_SYS_vdClearPowReset(void);
uint8_t UC_SYS_u8IsSwReset(void);
void UC_SYS_vdClearSwReset(void);
void UC_SYS_vdSwReset(void);
void UC_SYS_vdSleep(void);
__ramfunc void UC_SYS_vdJumpToAddress(uint32_t u32Address);

#define UC_SYS_ENTER_CRITICAL_SECTION UC_SYS_vdDisableInterrupts();
#define UC_SYS_EXIT_CRITICAL_SECTION UC_SYS_vdEnableInterrupts();

#endif /*UC_SYSTEM_H*/

