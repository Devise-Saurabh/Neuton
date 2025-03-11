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

File Name: uc_timer.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc_timer_cfg.h"
#include "uc_timer.h"

#ifdef UC_TIMER_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"

#define UC_TIMER_SYSTEM_INPUT_FREQUENCY_MHZ          (UC_SYSTEM_FREQUENCY_MHZ/4)
#define RTI_TICK_PER_SEC   2000

uint8_t gu8_Task100msTrigger = 0;

extern UC_TIMER_TimeOutSignal_t UC_TIMER_strTimeOutSignals[UC_TIMER_SIGNALS_NUMBER];

UC_TIMER_pftTickCallback_t UC_TIMER_pftTickCallback = NULL;
UC_TIMER_pftTimerCallback_t UC_TIMER_pftTimerCallback = NULL;

__irq __arm void VIM_RTIC0_Handler (void);

void UC_TIMER_vdInit(void)
{
  /* Init RTI */
  RCLKSRC_bit.RTI1SRC = 1;  // RTI clock 1 form PLL = 160 Mhz
  RCLKSRC_bit.RTI1DIV = 2;  // RTI clock 1 divider /4 = 160/4 = 40Mhz
  RTIGCTRL = 0;             // disable both counters
  RTIFRC0  = 0;             // Clear free-running counter
  
  /*Set the frequency of the counter in Hz*/
  RTICPUC0 = ((UC_TIMER_SYSTEM_INPUT_FREQUENCY_MHZ*(1e6))/UC_TIMER_SYSTEM_TICK_HZ)-1;

  RTICOMP0 = RTIUDCP0 = 1;   // set number of counts (How many RTICPUC0 overflows)
//  RTIGCTRL_bit.CNT0EN = 1;  // enable counter0
  
  /* Enable RTI interrupt */
  UC_SYS_vdRegisterISR(VIM_RTIC0, VIM_RTIC0_Handler);
  RTIINTFLAG_bit.INT0 = 1;
  RTISETINTENA_bit.SETINT0 = 1;
  UC_SYS_vdEnableISR(VIM_RTIC0);
}

void UC_TIMER_vdRegisterTickCallback(UC_TIMER_pftTickCallback_t p2f)
{
  UC_TIMER_pftTickCallback = p2f;
}

void UC_TIMER_vdRegisterTimeOutSignal(UC_TIMER_pftTimerCallback_t p2f, uint32_t u32TimeOutUs, uint8_t u8SignalID)
{
  UC_TIMER_strTimeOutSignals[u8SignalID].u8ModeIsActive = 1;
  UC_TIMER_strTimeOutSignals[u8SignalID].u32TimeOutUs = (u32TimeOutUs/UC_TIMER_SYSTEM_TICK_US);
  UC_TIMER_strTimeOutSignals[u8SignalID].p2fCallbackFunction = p2f;
//  uint8_t u8Count;
//  for(u8Count = 0; u8Count < UC_TIMER_SIGNALS_NUMBER; u8Count++)
//  {
//    if(UC_TIMER_strTimeOutSignals[u8Count].u8ModeIsActive == 0)
//    {
//      UC_TIMER_strTimeOutSignals[u8Count].u8ModeIsActive = 1;
//      UC_TIMER_strTimeOutSignals[u8Count].u32TimeOutUs = (u32TimeOutUs/UC_TIMER_SYSTEM_TICK_US);
//      UC_TIMER_strTimeOutSignals[u8Count].p2fCallbackFunction = p2f;
//      break;
//    }
//  }
}

void UC_TIMER_vdDeregisterTimeOutSignal(uint8_t u8SignalID)
{
  UC_TIMER_strTimeOutSignals[u8SignalID].u8ModeIsActive = 0;
  UC_TIMER_strTimeOutSignals[u8SignalID].u32CurrentTime = 0;
//  uint8_t u8Count;
//  for(u8Count = 0; u8Count < UC_TIMER_SIGNALS_NUMBER; u8Count++)
//  {
//    if(UC_TIMER_strTimeOutSignals[u8Count].u8ModeIsActive == 0)
//    {
//      UC_TIMER_strTimeOutSignals[u8Count].u8ModeIsActive = 1;
//      UC_TIMER_strTimeOutSignals[u8Count].u32TimeOutUs = (u32TimeOutUs/UC_TIMER_SYSTEM_TICK_US);
//      UC_TIMER_strTimeOutSignals[u8Count].p2fCallbackFunction = p2f;
//      break;
//    }
//  }
}

void UC_TIMER_vdEnable(void)
{
  RTIGCTRL_bit.CNT0EN = 1;
}

void UC_TIMER_vdDisable(void)
{
  RTIGCTRL_bit.CNT0EN = 0;
}

uint32_t UC_TIMER_u32TimerTickUs(void)
{
  uint32_t u32TickUs;
  
  u32TickUs = (uint32_t)((1e6)/UC_TIMER_SYSTEM_TICK_HZ);
  
  return u32TickUs;
}

__irq __arm void VIM_RTIC0_Handler (void)
{
  uint8_t u8Counter;
  if(UC_TIMER_pftTickCallback != deMCD_NULL)
  {
    UC_TIMER_pftTickCallback();
  }

  for(u8Counter = 0; u8Counter < UC_TIMER_SIGNALS_NUMBER; u8Counter++)
  {
    if(UC_TIMER_strTimeOutSignals[u8Counter].u8ModeIsActive == 1 && UC_TIMER_strTimeOutSignals[u8Counter].p2fCallbackFunction != deMCD_NULL)
    {
      UC_TIMER_strTimeOutSignals[u8Counter].u32CurrentTime++;
      if(UC_TIMER_strTimeOutSignals[u8Counter].u32CurrentTime == UC_TIMER_strTimeOutSignals[u8Counter].u32TimeOutUs)
      {
        UC_TIMER_strTimeOutSignals[u8Counter].p2fCallbackFunction();
        UC_TIMER_strTimeOutSignals[u8Counter].u32CurrentTime = 0;
      }
    }
  }
  /*Indicate that the interrupt has been handled */
  RTIINTFLAG_bit.INT0 = 1;
}

#endif /*UC_TIMER_MODULE_ENABLE*/

