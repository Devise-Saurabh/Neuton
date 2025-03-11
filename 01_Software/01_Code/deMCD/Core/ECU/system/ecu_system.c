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

File Name: ecu_system.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_system_cfg.h"
#include "ecu_system.h"


#ifdef ECU_SYS_MODULE_ENABLE

#include "lib_types.h"
#include "os.h"
#include "uc.h"
#include "ecu.h"
#include "lib_delay.h"

#ifdef ECU_SYS_BOOT_ENABLE
  ECU_SYS_eEcuMode_t ECU_SYS_eEcuMode = ECU_SYS_PROGRAMMING;
#else
  ECU_SYS_eEcuMode_t ECU_SYS_eEcuMode = ECU_SYS_INIT;
#endif /*ECU_SYS_BOOT_ENABLE*/

uint8_t ECU_SYS_u8ShutdownAndResetReq = deMCD_FALSE;
  
void ECU_SYS_vdInit(void)
{
  /* Turn on the main system power supply*/
#ifdef ECU_SYS_POWER_SUPPLY_PIN
  UC_DIO_eCommandOutputPin(ECU_SYS_POWER_SUPPLY_PIN, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_POWER_SUPPLY_PIN*/
}

void ECU_SYS_vdDeInit(void)
{
  /* Turn off the main system power supply*/
 #ifdef ECU_SYS_POWER_SUPPLY_PIN
  UC_DIO_eCommandOutputPin(ECU_SYS_POWER_SUPPLY_PIN, UC_DIO_OUT_COMMAND_OFF);
 #endif /*ECU_SYS_POWER_SUPPLY_PIN*/
}

void ECU_SYS_vdMgr(void)
{
  /* Make sure that the main system power supply is always turned on*/
#ifdef ECU_SYS_POWER_SUPPLY_PIN
  UC_DIO_eCommandOutputPin(ECU_SYS_POWER_SUPPLY_PIN, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_POWER_SUPPLY_PIN*/
}


void ECU_SYS_vdEnableInterrupts(void)
{
  UC_SYS_vdEnableInterrupts();
}

void ECU_SYS_vdDisableInterrupts(void)
{
  UC_SYS_vdDisableInterrupts();
}

void ECU_SYS_vdShutdown(void)
{
  OS_vdShutDown();
}

void ECU_SYS_vdReInitialize(void)
{
  OS_vdReinitialize();
}


void ECU_SYS_vdSleep(void)
{
  /*Not a sleep mode; sleep mode is not yet implemented, the designed hardware should disconnect the power before this point*/
  
  /* Indicate the mode through LEDs*/
#ifdef ECU_SYS_SLEEP_MODE_PIN1
  UC_DIO_eCommandOutputPin(ECU_SYS_SLEEP_MODE_PIN1, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_SLEEP_MODE_PIN1*/
#ifdef ECU_SYS_SLEEP_MODE_PIN2
  UC_DIO_eCommandOutputPin(ECU_SYS_SLEEP_MODE_PIN2, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_SLEEP_MODE_PIN2*/
#ifdef ECU_SYS_SLEEP_MODE_PIN3
  UC_DIO_eCommandOutputPin(ECU_SYS_SLEEP_MODE_PIN3, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_SLEEP_MODE_PIN3*/
#ifdef ECU_SYS_SLEEP_MODE_PIN4
  UC_DIO_eCommandOutputPin(ECU_SYS_SLEEP_MODE_PIN4, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_SYS_SLEEP_MODE_PIN4*/

#ifdef ECU_WDG_MODULE_ENABLE
  /* It should not reach here, refresh the watchdog and enable it to get the software out of this point*/
  /*Refresh watchdog manually*/
  ECU_WDG_vdMgr();
  LIB_DELAY_vdNanoSeconds(ECU_SYS_WDG_SLEEP_TOGGLE_TIME_NS);
  ECU_WDG_vdMgr();
  LIB_DELAY_vdNanoSeconds(ECU_SYS_WDG_SLEEP_TOGGLE_TIME_NS);
  ECU_WDG_vdMgr();
  
  /*Enable Watchdog*/
  ECU_WDG_vdEnable(ECU_WDG_CMD_ENABLE);
#endif /*ECU_WDG_MODULE_ENABLE*/
  
  UC_SYS_vdSleep();
}

void ECU_SYS_vdWakeup(void)
{
  
}

void ECU_SYS_vdGoToApplication(uint32_t u32Address)
{
  UC_SYS_vdJumpToAddress(u32Address);
}

void ECU_SYS_vdReset(void)
{
  UC_SYS_vdSwReset();
}

void ECU_SYS_vdGetResetStatus(uint8_t* pu8IsExWdgReset)
{
  uint8_t u8IsPowReset;
  uint8_t u8IsExWdgReset;
  uint8_t u8IsSwReset;
  
  u8IsPowReset = UC_SYS_u8IsPowReset();
  u8IsSwReset = UC_SYS_u8IsSwReset();
  u8IsExWdgReset = UC_SYS_u8IsExReset();

  
  if(u8IsPowReset == (uint8_t)deMCD_TRUE)
  {
    UC_SYS_vdClearPowReset();
    UC_SYS_vdClearSwReset();
    *pu8IsExWdgReset = deMCD_FALSE;
  }
  else if(u8IsSwReset == (uint8_t)deMCD_TRUE)
  {
    UC_SYS_vdClearSwReset();
    *pu8IsExWdgReset = deMCD_FALSE;
  }
  else if(u8IsExWdgReset == (uint8_t)deMCD_TRUE)
  {
    *pu8IsExWdgReset = deMCD_TRUE;
  }
  else
  {
    *pu8IsExWdgReset = deMCD_FALSE;
  }
  
}

void ECU_SYS_vdClearResetStatus(uint8_t u8IsExWdgResetNeeded)
{
  if(u8IsExWdgResetNeeded == deMCD_TRUE)
  {
    UC_SYS_vdClearExReset();
  }
}


void ECU_SYS_vdSetEcuMode(ECU_SYS_eEcuMode_t eEcuMode)
{
  ECU_SYS_eEcuMode = eEcuMode;
}

ECU_SYS_eEcuMode_t ECU_SYS_eGetEcuMode(void)
{
  return ECU_SYS_eEcuMode;
}

void ECU_SYS_vdShutdownAndReset(void)
{
  ECU_SYS_u8ShutdownAndResetReq = deMCD_TRUE;
  
  ECU_SYS_vdShutdown();
}

uint8_t ECU_SYS_u8IsShutdownAndReset(void)
{
  return ECU_SYS_u8ShutdownAndResetReq;
} 

void ECU_SYS_vdExtWdgManage(void)
{
#ifdef ECU_WDG_MODULE_ENABLE

#ifdef ECU_MEM_INT_MODULE_ENABLE
  uint32_t u32ExtWdgEnable = deMCD_FALSE;
  
  ECU_MEM_INT_eReadRawSignalValue(ECU_SYS_MEM_WDG_ENABLE, &u32ExtWdgEnable);
  
  if(u32ExtWdgEnable == deMCD_TRUE)
  {
    /* Enable External Watchdog Hardware Module*/
    ECU_WDG_vdEnable(ECU_WDG_CMD_ENABLE);
  }
  else
  {
    /* Disable External Watchdog Hardware Module*/
    ECU_WDG_vdEnable(ECU_WDG_CMD_DISABLE);
  }
#else
  /* Enable External Watchdog Hardware Module*/
  ECU_WDG_vdEnable(ECU_WDG_CMD_ENABLE);
#endif /*ECU_MEM_INT_MODULE_ENABLE*/
#else
  /*Make sure the external watchdog is disabled*/
  /*Active Low*/
  UC_DIO_eCommandOutputPin(ECU_SYS_WDG_ENABLE_PIN, UC_DIO_OUT_COMMAND_ON);
#endif /*ECU_WDG_MODULE_ENABLE*/

}

#endif /*ECU_SYS_MODULE_ENABLE*/
