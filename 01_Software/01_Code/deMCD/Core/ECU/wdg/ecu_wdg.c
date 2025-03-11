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

File Name: ecu_wdg.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "ecu_wdg_cfg.h"
#include "ecu_wdg.h"


#ifdef ECU_WDG_MODULE_ENABLE

#include "lib_types.h"
#include "uc.h"


ECU_WDG_eControlCmd_t ECU_WDG_eControlCmd = ECU_WDG_CMD_REFRESH;
ECU_WDG_eEnableCmd_t ECU_WDG_eEnableCmd = ECU_WDG_CMD_DISABLE;

void ECU_WDG_vdInit(void)
{
  /* Disable External Watchdog Hardware Module*/
  ECU_WDG_vdEnable(ECU_WDG_CMD_DISABLE);
}

void ECU_WDG_vdDeInit(void)
{
  /* Disable External Watchdog Hardware Module*/
  ECU_WDG_vdEnable(ECU_WDG_CMD_DISABLE);
}

void ECU_WDG_vdMgr(void)
{
  ECU_WDG_vdEnable(ECU_WDG_eEnableCmd);
  
  if(ECU_WDG_eControlCmd == ECU_WDG_CMD_REFRESH)
  {
    UC_DIO_eCommandOutputPin(ECU_WDG_REFRESH_PIN, UC_DIO_OUT_COMMAND_TOGGLE);
  }
}

void ECU_WDG_vdControl(ECU_WDG_eControlCmd_t eControlCmd)
{
  ECU_WDG_eControlCmd = eControlCmd;
}

void ECU_WDG_vdEnable(ECU_WDG_eEnableCmd_t eEnableCmd)
{
  ECU_WDG_eEnableCmd = eEnableCmd;
  
  /*Active High*/
  if(eEnableCmd == ECU_WDG_CMD_DISABLE)
  {
    UC_DIO_eCommandOutputPin(ECU_WDG_ENABLE_PIN, UC_DIO_OUT_COMMAND_OFF);
  }
  else
  {
    UC_DIO_eCommandOutputPin(ECU_WDG_ENABLE_PIN, UC_DIO_OUT_COMMAND_ON);  
  }
}

#endif /*ECU_SYS_MODULE_ENABLE*/
