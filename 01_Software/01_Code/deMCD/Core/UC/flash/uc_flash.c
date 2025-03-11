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

File Name: uc_flash.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/


#include "uc_flash_cfg.h"
#include "uc_flash.h"

#ifdef UC_FLASH_MODULE_ENABLE

#define _STDINT
#include "F021.h"
#include "uc_system_cfg.h"
#include "uc_system.h"
//#include "uc_flash_cfg.c"
//#include <texasinstruments/iotms570LS3137pge.h>
#include "lib_delay.h"


/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

#define   BYTES_PER_BLOCK     (16)
#define   BYTES_PER_WORD      (4)

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

uint8_t UC_FLASH_u8BankIndex;
uint8_t UC_FLASH_au8Sectors[16] = {0};
uint8_t UC_FLASH_u8SectorNumber;
uint32_t UC_FLASH_u32SectorAddressStart;
uint8_t UC_FLASH_u8Counter = 0;
UC_FLASH_strAddressSectorID_t eAddressSectorArray[UC_FLASH_ADDRESS_SECTOR_NUMBER] = // memory sectors except BL sector
{
  {
    0,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_1,
  },
  {
    1,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_2,
  },
  {
    2,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_3,
  },
  {
    3,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_4,
  },
  {
    4,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_5,
  },
  {
    5,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_6,
  },
  {
    6,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_7,
  },
  {
    7,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_8,
  },
  {
    8,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_9,
  },
  {
    9,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_10,
  },
  {
    10,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_11,
  },
  {
    11,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_12,
  },
  {
    12,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_13,
  },
  {
    13,
    (uint32_t)UC_FLASH_BANK_0_SECTOR_14,
  },
  {
    14,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_0,
  },  
  {
    15,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_1,
  },  
  {
    16,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_2,
  },  
  {
    17,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_3,
  },  
  {
    18,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_4,
  },  
  {
    19,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_5,
  },  
  {
    20,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_6,
  },  
  {
    21,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_7,
  },  
  {
    22,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_8,
  },  
  {
    23,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_9,
  },  
  {
    24,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_10,
  },    
  {
    25,
    (uint32_t)UC_FLASH_BANK_1_SECTOR_11,
  },  
};
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



/*Add __ramfunc for running bootloader from RAM*/
void UC_FLASH_vdInit(void)
{
  //UC_SYS_vdDisableInterrupts();
  FSM_WR_ENA = 0x5; // Enable registers for write
  FBFALLBACK_bit.BANKPWR0 = 0x3; // Power-on bank0
  FBFALLBACK_bit.BANKPWR1 = 0x3;// Power-on bank1
  FBFALLBACK_bit.BANKPWR7 = 0x3; // // Power-on bank7, This should be always enabled before initializing flash banks api call
  FAPI_WRITE_EWAIT((3));  // Set Wait states  
  // Detect which bank will be written to
//  if(STARTING_ADDRESS < 0x00180000)
//  {
//    UC_FLASH_u8BankIndex = Fapi_FlashBank0;
//  }
//  else
//  {
//    UC_FLASH_u8BankIndex = Fapi_FlashBank1;
//  }
//  // initialize Fapi library
//  if(Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ) == Fapi_Status_Success)
//  {
//    Fapi_setActiveFlashBank((Fapi_FlashBankType)UC_FLASH_u8BankIndex);
//    Fapi_enableMainBankSectors(0xFFFF);  
//    while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
//  }
  // Function that parses SREC lines and send data to be written to flash
  //local_UC_FLASH_vdParseSrecLines(UC_FLASH_astrBlockMemory, 0, RECORDS_NUM);
  //UC_SYS_vdEnableInterrupts();
}

void UC_FLASH_vdDeInit(void)
{

}

/*Add __ramfunc for running bootloader from RAM*/
__ramfunc STATUS_t UC_FLASH_eEraseSector(uint32_t u32MemoryAddress, uint8_t* pu8SectorID) // erase memory sector and return memory sector ID
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < UC_FLASH_ADDRESS_SECTOR_NUMBER; u8Counter++) // detect memory sector id
  {
    if(u32MemoryAddress < eAddressSectorArray[u8Counter].u32Address)
    {
      *pu8SectorID = u8Counter;
      break;
    }
  }
  Fapi_issueAsyncCommand(Fapi_ClearStatus);
  Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ);
  if(u32MemoryAddress < UC_FLASH_BANK_1_SECTOR_0) // bank 0
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank0);    
  }
  else // bank 1
  {
    Fapi_setActiveFlashBank(Fapi_FlashBank1);    
  }
  Fapi_enableMainBankSectors(0xFFFF);
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );  
  Fapi_StatusType eFapiStatus = Fapi_issueAsyncCommandWithAddress(Fapi_EraseSector, (uint32_t *)u32MemoryAddress); // erase memory sector
  if(eFapiStatus != Fapi_Status_Success)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    eStatus = STATUS_OK;
  }
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );       
  return eStatus;
}

/*Add __ramfunc for running bootloader from RAM*/
__ramfunc STATUS_t UC_FLASH_eWriteBlock(UC_FLASH_strBlockMemory_t UC_FLASH_strWriteBlock) //Maximum 32 Bytes
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t UC_FLASH_u8SectorNumber;
  if(UC_FLASH_strWriteBlock.u32Address < 0x00180000)
  {
    UC_FLASH_u8BankIndex = Fapi_FlashBank0;
  }
  else
  {
    UC_FLASH_u8BankIndex = Fapi_FlashBank1;
  }
  Fapi_issueAsyncCommand(Fapi_ClearStatus);
  Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ);
  Fapi_setActiveFlashBank((Fapi_FlashBankType)UC_FLASH_u8BankIndex);
  Fapi_enableMainBankSectors(0xFFFF);
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );    
  
  switch(UC_FLASH_u8BankIndex)
  {
  case 0:  
    if(UC_FLASH_strWriteBlock.u32Address > 0x00007FFF && UC_FLASH_strWriteBlock.u32Address < 0x00010000)
    {
      UC_FLASH_u8SectorNumber = 1;
    }
    if(UC_FLASH_strWriteBlock.u32Address > 0x0000FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00018000)
    {
      UC_FLASH_u8SectorNumber = 2;
    }
    if(UC_FLASH_strWriteBlock.u32Address > 0x00017FFF && UC_FLASH_strWriteBlock.u32Address < 0x00020000)
    {
      UC_FLASH_u8SectorNumber = 3;
    }    
    if(UC_FLASH_strWriteBlock.u32Address > 0x0001FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00040000)
    {
      UC_FLASH_u8SectorNumber = 4;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0003FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00060000)
    {
      UC_FLASH_u8SectorNumber = 5;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0005FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00080000)
    {
      UC_FLASH_u8SectorNumber = 6;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0007FFFF && UC_FLASH_strWriteBlock.u32Address < 0x000A0000)
    {
      UC_FLASH_u8SectorNumber = 7;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0009FFFF && UC_FLASH_strWriteBlock.u32Address < 0x000C0000)
    {
      UC_FLASH_u8SectorNumber = 8;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x000BFFFF && UC_FLASH_strWriteBlock.u32Address < 0x000E0000)
    {
      UC_FLASH_u8SectorNumber = 9;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x000DFFFF && UC_FLASH_strWriteBlock.u32Address < 0x00100000)
    {
      UC_FLASH_u8SectorNumber = 10;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x000FFFFF && UC_FLASH_strWriteBlock.u32Address < 0x00120000)
    {
      UC_FLASH_u8SectorNumber = 11;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0011FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00140000)
    {
      UC_FLASH_u8SectorNumber = 12;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0013FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00160000)
    {
      UC_FLASH_u8SectorNumber = 13;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0015FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00180000)
    {
      UC_FLASH_u8SectorNumber = 14;
    }
    break;
    
  case 1:
    if(UC_FLASH_strWriteBlock.u32Address > 0x0017FFFF && UC_FLASH_strWriteBlock.u32Address < 0x001A0000)
    {
      UC_FLASH_u8SectorNumber = 0;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0019FFFF && UC_FLASH_strWriteBlock.u32Address < 0x001C0000)
    {
      UC_FLASH_u8SectorNumber = 1;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x001BFFFF && UC_FLASH_strWriteBlock.u32Address < 0x001E0000)
    {
      UC_FLASH_u8SectorNumber = 2;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x001DFFFF && UC_FLASH_strWriteBlock.u32Address < 0x00200000)
    {
      UC_FLASH_u8SectorNumber = 3;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x001FFFFF && UC_FLASH_strWriteBlock.u32Address < 0x00220000)
    {
      UC_FLASH_u8SectorNumber = 4;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0021FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00240000)
    {
      UC_FLASH_u8SectorNumber = 5;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0023FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00260000)
    {
      UC_FLASH_u8SectorNumber = 6;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0025FFFF && UC_FLASH_strWriteBlock.u32Address < 0x00280000)
    {
      UC_FLASH_u8SectorNumber = 7;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0027FFFF && UC_FLASH_strWriteBlock.u32Address < 0x002A0000)
    {
      UC_FLASH_u8SectorNumber = 8;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x0029FFFF && UC_FLASH_strWriteBlock.u32Address < 0x002C0000)
    {
      UC_FLASH_u8SectorNumber = 9;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x002BFFFF && UC_FLASH_strWriteBlock.u32Address < 0x002E0000)
    {
      UC_FLASH_u8SectorNumber = 10;
    }
    else if(UC_FLASH_strWriteBlock.u32Address > 0x002DFFFF && UC_FLASH_strWriteBlock.u32Address < 0x00300000)
    {
      UC_FLASH_u8SectorNumber = 11;
    }
    break;
    
  default:
    break;
  }
  
  if(UC_FLASH_au8Sectors[UC_FLASH_u8SectorNumber] == 0)
  {
    Fapi_issueAsyncCommandWithAddress(Fapi_EraseSector, (uint32_t *)UC_FLASH_strWriteBlock.u32Address);
    while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
    while(FAPI_GET_FSM_STATUS != Fapi_Status_Success);
    UC_FLASH_au8Sectors[UC_FLASH_u8SectorNumber] = 1;
  }
  
  Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ);
  Fapi_setActiveFlashBank((Fapi_FlashBankType)UC_FLASH_u8BankIndex);
  Fapi_enableMainBankSectors(0xFFFF);          
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );      
//  if(UC_FLASH_strWriteBlock.u8DataBytesCount < UC_FLASH_MAX_BLOCK_SIZE_IN_BYTES)
  Fapi_issueProgrammingCommand((uint32_t *)UC_FLASH_strWriteBlock.u32Address , UC_FLASH_strWriteBlock.au8Byte, UC_FLASH_strWriteBlock.u8DataBytesCount, 0, 0, Fapi_AutoEccGeneration);
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );        
  eStatus = STATUS_OK;
  return eStatus;
}


__ramfunc STATUS_t UC_FLASH_eReadBlock(UC_FLASH_strBlockMemory_t *UC_FLASH_strReadBlock)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t au32ReadDataTemp[(BYTES_PER_BLOCK / BYTES_PER_WORD)] = {0};
  uint8_t u8Counter;
  uint8_t u8LoopCounter;
  uint8_t u8Temp;
  Fapi_StatusType Fapi_Status = Fapi_Status_FsmBusy;
  if(UC_FLASH_strReadBlock->u32Address < 0x00180000)
  {
    UC_FLASH_u8BankIndex = Fapi_FlashBank0;
  }
  else
  {
    UC_FLASH_u8BankIndex = Fapi_FlashBank1;
  }
  Fapi_issueAsyncCommand(Fapi_ClearStatus);
  Fapi_initializeFlashBanks(UC_SYSTEM_FREQUENCY_MHZ);
  Fapi_setActiveFlashBank((Fapi_FlashBankType)UC_FLASH_u8BankIndex);
  Fapi_enableMainBankSectors(0xFFFF);
  while( FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy );
  while( FAPI_GET_FSM_STATUS!= Fapi_Status_Success );    
  Fapi_issueAsyncCommand(Fapi_ClearStatus);
  Fapi_Status = Fapi_doMarginRead((uint32_t *)UC_FLASH_strReadBlock->u32Address, au32ReadDataTemp, (BYTES_PER_BLOCK / BYTES_PER_WORD), Fapi_NormalRead);
  while(FAPI_CHECK_FSM_READY_BUSY == Fapi_Status_FsmBusy)
  {
    /*waiting*/
  }    
  if(Fapi_Status == Fapi_Status_Success)
  {
    for(u8Counter = 0; u8Counter < 4; u8Counter++)
    {
      for(u8LoopCounter = (u8Counter * 4); u8LoopCounter < (4 + (u8Counter * 4)); u8LoopCounter++)
      {
        u8Temp = (u8LoopCounter % 4);
        UC_FLASH_strReadBlock->au8Byte[u8LoopCounter] = au32ReadDataTemp[u8Counter] >> (24 - (8 * u8Temp));
      }
    }
    eStatus = STATUS_OK;    
  }
  return eStatus;
}
/*Add __ramfunc for running bootloader from RAM*/
void UC_FLASH_vdMngr(void)
{
}

void UC_FLASH_vdBlockSize(uint8_t* pu8BlockSize)
{
  *pu8BlockSize = UC_FLASH_MAX_BLOCK_SIZE_IN_BYTES;
}
/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

#endif /*UC_FLASH_MODULE_ENABLE*/
