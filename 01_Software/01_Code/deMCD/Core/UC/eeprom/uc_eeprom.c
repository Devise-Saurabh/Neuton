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

File Name: uc_eeprom.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/


#include "uc_eeprom_cfg.h"
#include "uc_eeprom.h"

#ifdef UC_EEPROM_MODULE_ENABLE

#define _STDINT
#include "F021.h"
#include "uc_system_cfg.h"


/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

#define EEPROM_START_ADDRESS            (0xF0200000)
#define EEPROM_END_ADDRESS              (0xF020FFFF)
#define EEPROM_SECTORS_NUMBER           (4)
#define SECTOR_0_START_ADDRESS          (0xF0200000)
#define SECTOR_1_START_ADDRESS          (0xF0204000)
#define SECTOR_2_START_ADDRESS          (0xF0208000)
#define SECTOR_3_START_ADDRESS          (0xF020C000)
#define SECTOR_0_ID          (0)
#define SECTOR_1_ID          (1)
#define SECTOR_2_ID          (2)
#define SECTOR_3_ID          (3)

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/



/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/



/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_EEPROM_vdInit(void)
{
  FSM_WR_ENA = 0x5;
  FBFALLBACK_bit.BANKPWR7 = 0x3;
  FAPI_WRITE_EWAIT((3));
  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank7);
    Fapi_enableEepromBankSectors(0xFFFF,0xFFFF);      
  }
  FSM_WR_ENA = 0xA;
}

void UC_EEPROM_vdDeInit(void)
{
  FSM_WR_ENA = 0x5;
  FBFALLBACK_bit.BANKPWR7 = 0x3;
  FAPI_WRITE_EWAIT((3));
  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank7);
    Fapi_enableEepromBankSectors(0xFFFF,0xFFFF);      
  }
  FSM_WR_ENA = 0xA;   
}

STATUS_t UC_EEPROM_WRITE(uint32_t u32Address, uint8_t* au8BytesBuffer, uint8_t u8BufferLength)
{
  STATUS_t eStatus = STATUS_BUSY;
  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank7);
    Fapi_enableEepromBankSectors(0xFFFF,0xFFFF);      
  }  
  if(u32Address < EEPROM_START_ADDRESS || u32Address > EEPROM_END_ADDRESS)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    Fapi_issueAsyncCommand(Fapi_ClearStatus);
    Fapi_issueProgrammingCommand((uint32_t *)u32Address, au8BytesBuffer, u8BufferLength, 0, 0, Fapi_DataOnly);
    while(FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy)
    {
      /*waiting*/
    }      
    eStatus = STATUS_OK;
  }
  return eStatus;
}

STATUS_t UC_EEPROM_READ(uint32_t u32Address, uint32_t* au32BytesBuffer, uint32_t u32BufferLength)
{
  STATUS_t eStatus = STATUS_BUSY;
  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank7);
    Fapi_enableEepromBankSectors(0xFFFF,0xFFFF);      
  }  
  if(u32Address < EEPROM_START_ADDRESS || u32Address > EEPROM_END_ADDRESS)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    Fapi_issueAsyncCommand(Fapi_ClearStatus);
    Fapi_doMarginRead((uint32_t *)u32Address, au32BytesBuffer, u32BufferLength, Fapi_NormalRead);
    while(FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy)
    {
      /*waiting*/
    }    
    eStatus = STATUS_OK;    
  }
  return eStatus;
}

STATUS_t UC_EEPROM_ERASE_SECTOR(UC_EEPROM_eAddressSector_t eSector)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32Address;
  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank7);
    Fapi_enableEepromBankSectors(0xFFFF,0xFFFF);      
  }
  switch(eSector)
  {
  case UC_EEPROM_SECTOR_0:
    u32Address = SECTOR_0_START_ADDRESS;
    eStatus = STATUS_OK;
    break;
  case UC_EEPROM_SECTOR_1:
    u32Address = SECTOR_1_START_ADDRESS;
    eStatus = STATUS_OK;
    break;
  case UC_EEPROM_SECTOR_2:
    u32Address = SECTOR_2_START_ADDRESS;
    eStatus = STATUS_OK;
    break;
  case UC_EEPROM_SECTOR_3:
    u32Address = SECTOR_3_START_ADDRESS;
    eStatus = STATUS_OK;
    break;
  default:
    eStatus = STATUS_NOK;
    break;
  }
  Fapi_issueAsyncCommandWithAddress(Fapi_EraseSector, (uint32_t *)u32Address);
  while(FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy)
  {
    /*waiting*/
  }
  return eStatus;
}


/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

#endif /*UC_EEPROM_MODULE_ENABLE*/
