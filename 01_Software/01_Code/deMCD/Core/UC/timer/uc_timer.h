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


File Name: uc_timer.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef UC_TIMER_H
#define UC_TIMER_H

#include "uc_header.h"
#include "lib_types.h"

typedef void(* UC_TIMER_pftTickCallback_t)(void);
typedef void(* UC_TIMER_pftTimerCallback_t)(void); 

void UC_TIMER_vdInit(void);
void UC_TIMER_vdRegisterTickCallback(UC_TIMER_pftTickCallback_t p2f);
void UC_TIMER_vdEnable(void);
void UC_TIMER_vdDisable(void);
uint32_t UC_TIMER_u32TimerTickUs(void);
void UC_TIMER_vdSetRequestReceivedFlag(void);
void UC_TIMER_vdResetRequestReceivedFlag(void);
void UC_TIMER_vdRegisterTimeOutSignal(UC_TIMER_pftTimerCallback_t p2f, uint32_t u32TimeOutUs, uint8_t u8SignalID);
void UC_TIMER_vdDeregisterTimeOutSignal(uint8_t u8SignalID);

typedef struct UC_TIMER_TimeOutSignalTemplate
{
  /*Signal ID*/
  uint8_t u8SignalID;
  /*Mode; active or inactive*/
  uint8_t u8ModeIsActive;
  /*Timeout Value in Micro Seconds*/
  uint32_t u32TimeOutUs;
  /*Current Timer Count*/
  uint32_t u32CurrentTime;
  /*Call-back Function*/
  UC_TIMER_pftTimerCallback_t p2fCallbackFunction;
} UC_TIMER_TimeOutSignal_t;

#endif /*UC_TIMER_H*/

