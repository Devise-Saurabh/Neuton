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

File Name: ecu_mem.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_mem_cfg.h"
#include "ecu_mem.h"


#ifdef ECU_MEM_MODULE_ENABLE

#include "uc.h"
#include "lib_delay.h"
#include "os.h"
#include "lib_data.h"
#include "ecu.h"

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

#define ECU_MEM_INT_START_INDEX         (1)
//#define ECU_MEM_INT_START_INDEX         (0)

#ifdef ECU_SYS_BOOT_ENABLE
  #define ECU_MEM_INT_OFFSET              (1)
//  #define ECU_MEM_INT_OFFSET              (0)
#else
  #define ECU_MEM_INT_OFFSET              (0)
#endif /*ECU_SYS_BOOT_ENABLE*/

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

#ifdef ECU_MEM_EXT_MODULE_ENABLE
uint8_t ECU_MEM_EXT_au8WriteAddressTx[ECU_MEM_EXT_WRITE_PAGE_FRAME_SIZE];
uint8_t ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_READ_PAGE_TXFRAME_SIZE];
uint8_t ECU_MEM_EXT_au8ReadAddressRx[ECU_MEM_EXT_READ_PAGE_RXFRAME_SIZE];
uint8_t ECU_MEM_EXT_au8WriteStatusTx[2] = {ECU_MEM_EXT_EEP_OPCODE_WRSR, 0x00};
uint8_t ECU_MEM_EXT_au8ReadStatusRx[3] = {0, 0, 0};
uint8_t ECU_MEM_EXT_au8EnableReadStatusTx[4] = {0x05, 0xFF, 0, 0};
uint8_t ECU_MEM_EXT_au8EnableWriteArrayTx[1] = {0x06};
uint8_t ECU_MEM_EXT_u8ShutDownSignal = 0;
#endif

#ifdef ECU_MEM_INT_MODULE_ENABLE
uint8_t u8ReadBootFlag = deMCD_FALSE;
#endif

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

#ifdef ECU_MEM_INT_MODULE_ENABLE
extern ECU_MEM_INT_strE2pSignalData_t ECU_MEM_INT_astrE2pData[ECU_MEM_INT_DATA_NUM];
extern ECU_MEM_INT_E2pModuleHandler_t ECU_MEM_INT_strE2pModuleHandler;
#endif

#ifdef ECU_MEM_EXT_MODULE_ENABLE
extern ECU_MEM_EXT_strE2pSignalData_t ECU_MEM_EXT_astrE2pData[ECU_MEM_EXT_DATA_NUM];
extern ECU_MEM_EXT_E2pModuleHandler_t ECU_MEM_EXT_strE2pModuleHandler;
#endif

/********************************************************************************************/
/******************************* CALLBLACKS DECLARATION *************************************/
/********************************************************************************************/



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/

#ifdef ECU_MEM_INT_MODULE_ENABLE
void local_ECU_MEM_INT_vdInit(void);
void local_ECU_MEM_INT_vdDeInit(void);
#endif

#ifdef ECU_MEM_EXT_MODULE_ENABLE
void local_ECU_MEM_EXT_vdInit(void);
void local_ECU_MEM_EXT_vdDeInit(void);
void local_ECU_MEM_EXT_vdReceiveDataClbk(uint32_t u32RxData);
STATUS_t local_ECU_MEM_EXT_eIsE2PROMBusy();
STATUS_t local_ECU_MEM_EXT_eWritePage();
STATUS_t local_ECU_MEM_EXT_eReadPage();
#endif

#ifdef ECU_MEM_CODE_MODULE_ENABLE
void local_ECU_MEM_CODE_vdInit(void);
void local_ECU_MEM_CODE_vdDeInit(void);
#endif


/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void ECU_MEM_vdInit(void)
{
#ifdef ECU_MEM_INT_MODULE_ENABLE
  local_ECU_MEM_INT_vdInit(); 
#endif /*#ifdef ECU_MEM_INT_MODULE_ENABLE*/
 
#ifdef ECU_MEM_EXT_MODULE_ENABLE
  local_ECU_MEM_EXT_vdInit();
#endif /*#ifdef ECU_MEM_EXT_MODULE_ENABLE*/
  
#ifdef ECU_MEM_CODE_MODULE_ENABLE
  local_ECU_MEM_CODE_vdInit();
#endif /*#ifdef ECU_MEM_CODE_MODULE_ENABLE*/
}

void ECU_MEM_vdDeInit(void)
{
  
#ifdef ECU_MEM_INT_MODULE_ENABLE
  local_ECU_MEM_INT_vdDeInit(); 
#endif /*#ifdef ECU_MEM_INT_MODULE_ENABLE*/
  
#ifdef ECU_MEM_EXT_MODULE_ENABLE
  local_ECU_MEM_EXT_vdDeInit();
#endif /*#ifdef ECU_MEM_EXT_MODULE_ENABLE*/  
  
#ifdef ECU_MEM_CODE_MODULE_ENABLE
  local_ECU_MEM_CODE_vdDeInit();
#endif /*#ifdef ECU_MEM_CODE_MODULE_ENABLE*/
}

void ECU_MEM_vdMgr(void)
{

} 

#ifdef ECU_MEM_CODE_MODULE_ENABLE //Commented code is an alternative way
__ramfunc STATUS_t ECU_MEM_CODE_eWritePage(ECU_MEM_CODE_strPageMemory_t *pstrPageMemory)
{
  STATUS_t eStatus = STATUS_NOK;
  if(pstrPageMemory != deMCD_NULL)
  {
    uint8_t u8Counter;
    uint8_t u8LoopCounter;
    uint8_t u8LoopMax = pstrPageMemory->u8BlocksNumber;
    for(u8Counter = 0; u8Counter < u8LoopMax; u8Counter++)
    {
      ECU_MEM_strBlockMemory_t strTemp = {0, 0 , {0}, 0, 0};
      strTemp.u32Address = pstrPageMemory->u32PageStartingAddress + (16 * u8Counter);
      strTemp.u8DataBytesCount = 16;
      for(u8LoopCounter = 0; u8LoopCounter < 16; u8LoopCounter++)
      {
        strTemp.au8Byte[u8LoopCounter] = pstrPageMemory->UC_FLASH_astrBlocksOfMemory[u8Counter].au8Byte[u8LoopCounter];
      }
  //    strPageMemory->UC_FLASH_astrBlocksOfMemory[u8Counter].u32Address = strPageMemory->u32PageStartingAddress + (16 * u8Counter);
        eStatus = UC_FLASH_eWriteBlock(strTemp);
  //    eStatus = UC_FLASH_eWriteBlock(strPageMemory->UC_FLASH_astrBlocksOfMemory[u8Counter]);    
    }        
  }
  return eStatus;
}

__ramfunc STATUS_t ECU_MEM_CODE_eWriteBlocks(ECU_MEM_strBlockMemory_t *strBlocksArray, uint8_t u8BlocksNumber)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < u8BlocksNumber; u8Counter++)
  {
//    ECU_IO_eOutputControl(ECU_IO_DOUT_DASH_CHARGE,ECU_IO_OUT_COMMAND_ON);
    eStatus = UC_FLASH_eWriteBlock(strBlocksArray[u8Counter]);
//    ECU_IO_eOutputControl(ECU_IO_DOUT_DASH_CHARGE,ECU_IO_OUT_COMMAND_OFF);
    if(eStatus == STATUS_NOK)
    {
      return eStatus;
    }
  }    
  eStatus = STATUS_OK;
  return eStatus;
}

__ramfunc STATUS_t ECU_MEM_CODE_eReadPage(ECU_MEM_CODE_strPageMemory_t *strPage)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < strPage->u8BlocksNumber; u8Counter++)
  {
    strPage->UC_FLASH_astrBlocksOfMemory[u8Counter].u32Address = strPage->u32PageStartingAddress + (u8Counter * ECU_MEM_CODE_BLOCKS_PER_PAGE);
    eStatus = UC_FLASH_eReadBlock(&(strPage->UC_FLASH_astrBlocksOfMemory[u8Counter]));
    if(eStatus != STATUS_OK)
    {
      return eStatus;
    }
  }
  return eStatus;
}

__ramfunc STATUS_t ECU_MEM_CODE_eReadBlock(ECU_MEM_strBlockMemory_t *strBlock)
{
  STATUS_t eStatus = STATUS_NOK;
  eStatus = UC_FLASH_eReadBlock(strBlock);
  return eStatus;
}

__ramfunc STATUS_t ECU_MEM_CODE_eEraseSector(uint32_t u32MemoryAddress, uint8_t* pu8MemorySector)
{
  STATUS_t eStatus;
  eStatus = UC_FLASH_eEraseSector(u32MemoryAddress, pu8MemorySector);
  return eStatus;
}

#endif /*#ifdef ECU_MEM_CODE_MODULE_ENABLE*/

#ifdef ECU_MEM_EXT_MODULE_ENABLE
STATUS_t ECU_MEM_EXT_eReadSignalValue(uint8_t u8SignalID, float* pfltValue)
{
  STATUS_t eStatus = STATUS_BUSY;
  uint32_t u32Value;

  if(u8SignalID > ECU_MEM_EXT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    u32Value = ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue;
    *pfltValue = LIB_DATA_fltRaw2Phy(u32Value, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset);
    ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = *pfltValue;
    eStatus = STATUS_OK;
  }
  return eStatus;
}

STATUS_t ECU_MEM_EXT_eWriteSignalValue(uint8_t u8SignalID, float fltValue)
{
  STATUS_t eStatus = STATUS_BUSY;
  uint32_t u32Value;
  
  if(u8SignalID > ECU_MEM_EXT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = fltValue;
    u32Value = LIB_DATA_u32Phy2Raw(fltValue, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset);
    ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue = u32Value;
    eStatus = STATUS_OK;
  }
  return eStatus;  
}
#endif /*#ifdef ECU_MEM_EXT_MODULE_ENABLE*/  

#ifdef ECU_MEM_INT_MODULE_ENABLE
STATUS_t ECU_MEM_INT_eDirectWriteSignalValue(uint8_t u8SignalID, float fltValue, uint32_t u32ValueInput)
{
  STATUS_t eStatus = STATUS_BUSY;
  uint32_t u32Value;
  uint8_t u8LoopCounter;
  uint8_t u8WriteByte;
  if(u8SignalID > ECU_MEM_INT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    if(ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution == 1 && ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset == 0)
    {
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue = u32ValueInput;
      eStatus = STATUS_OK;
    }
    else
    {    
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = fltValue;
      u32Value = LIB_DATA_u32Phy2Raw(fltValue, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset);
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue = u32Value;
    }
    for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_INT_SIGNAL_BYTES_NUM; u8LoopCounter++) // write byte-by-byte of the signal word
    {
      u8WriteByte = ECU_MEM_INT_astrE2pData[u8SignalID].u32RawValue >> (24-(u8LoopCounter*8));
      UC_EEPROM_WRITE(ECU_MEM_INT_astrE2pData[u8SignalID].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_astrE2pData[u8SignalID].u32ECU_MEM_INT_SignalOffset + u8LoopCounter, &u8WriteByte, 1);
    }    
    eStatus = STATUS_OK;
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eWriteSignalValue(uint8_t u8SignalID, float fltValue, uint32_t u32ValueInput)
{
  STATUS_t eStatus = STATUS_BUSY;
  uint32_t u32Value;
  if(u8SignalID > ECU_MEM_INT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    if(ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution == 1 && ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset == 0)
    {
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue = u32ValueInput;
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = fltValue;
      eStatus = STATUS_OK;
    }
    else
    {
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = fltValue;
      u32Value = LIB_DATA_u32Phy2Raw(fltValue, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset);
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue = u32Value;
      eStatus = STATUS_OK;
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eReadSignalValueByAddress(uint32_t u32Address, uint32_t* u32RawValue)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < ECU_MEM_INT_DATA_NUM; u8Counter++)
  {
    uint32_t u32AddressTemp = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].u32ECU_MEM_INT_SignalOffset);
    if(u32Address == u32AddressTemp)
    {
      eStatus = STATUS_OK;
      *u32RawValue = ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].u32RawValue;
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eWriteSignalValueByAddress(uint32_t u32Address, uint32_t u32RawValue)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < ECU_MEM_INT_DATA_NUM; u8Counter++)
  {
    uint32_t u32AddressTemp = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].u32ECU_MEM_INT_SignalOffset);
    if(u32Address == u32AddressTemp)
    {
      eStatus = STATUS_OK;
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].fltPysicValue = LIB_DATA_fltRaw2Phy(u32RawValue, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].fltOffset);
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].u32RawValue = u32RawValue;      
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eReadSignalValue(uint8_t u8SignalID, float* pfltValue)
{
  STATUS_t eStatus = STATUS_BUSY;
  uint32_t u32Value;

  if(u8SignalID > ECU_MEM_INT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    u32Value = ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue;
    *pfltValue = LIB_DATA_fltRaw2Phy(u32Value, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltOffset);
    ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltPysicValue = *pfltValue;
    eStatus = STATUS_OK;
  }
  return eStatus;
}

uint16_t ECU_MEM_INT_u16ReadSignalResolution(uint8_t u8SignalID)
{
  float fltResolution = ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].fltResolution;
  uint16_t u16Resolution = (uint16_t)(1/fltResolution);
  return u16Resolution;
}

STATUS_t ECU_MEM_INT_eReadRawSignalValue(uint8_t u8SignalID, uint32_t* u32Value)
{
  STATUS_t eStatus = STATUS_BUSY;
  if(u8SignalID > ECU_MEM_INT_DATA_NUM)
  {
    eStatus = STATUS_NOK;
  }
  else
  {
    *u32Value = ECU_MEM_INT_strE2pModuleHandler.astrObj[u8SignalID].u32RawValue;
    eStatus = STATUS_OK;
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eEraseSector(ECU_MEM_INT_eAddressSector_t eSector)
{
  STATUS_t eStatus = UC_EEPROM_ERASE_SECTOR((UC_EEPROM_eAddressSector_t)eSector);
  return eStatus;
}

STATUS_t ECU_MEM_INT_eReadBlock(uint32_t u32Address, uint8_t* pu8BlockData)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32DataBytes[4] = {0};
  uint8_t u8Counter;
  uint8_t u8Count;
  eStatus = UC_EEPROM_READ(u32Address, u32DataBytes, 4);
  for(u8Counter = 0; u8Counter < 4; u8Counter++)
  {
    for(u8Count = 0; u8Count < 4; u8Count++)
    {
      pu8BlockData[(u8Counter * 4) + u8Count] = (u32DataBytes[u8Counter] >> (32 - 8 * (u8Count+1)));
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eReadFourSignalsByAddress(uint32_t u32Address, uint8_t* pu8BlockData)
{
  uint8_t u8Flag = deMCD_FALSE;
  uint8_t u8Count;
  uint8_t u8LoopCounter;
  STATUS_t eStatus = STATUS_NOK;  
  for(u8Count = 0; u8Count < ECU_MEM_INT_VALID_SIGNALS_NUM; u8Count++)
  {
    if(u8Flag == deMCD_TRUE)
    {
      break;
    }
    uint32_t u32AddressTemp = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].u32ECU_MEM_INT_SignalOffset) ;    
    if(u32AddressTemp == u32Address)
    {
      u8Flag = deMCD_TRUE;
      eStatus = STATUS_OK;  
      for(u8LoopCounter = 0; u8LoopCounter < 16; u8LoopCounter++)
      {
        uint8_t u8Value;
        if(u8LoopCounter == 0)
        {
          pu8BlockData[u8LoopCounter] = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].u32RawValue >> 24);
        }
        else if(u8LoopCounter % 4 == 0)
        {
          u8Count = u8Count + 1;
          u8Value =  (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].u32RawValue >> 24);
          pu8BlockData[u8LoopCounter] = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].u32RawValue >> 24);          
        }
        else
        {
          uint8_t u8Shift = (u8LoopCounter % 4);
          u8Value =  (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Count].u32RawValue >> (24 - (u8Shift * 8)));
          pu8BlockData[u8LoopCounter] = u8Value;
        }
      }
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eWriteFourSignalsByAddress(uint32_t u32Address, uint8_t* pu8BlockData, uint8_t u8DataSize) // Used in WriteMemoryByAddress SID 0x3D
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < ECU_MEM_INT_DATA_NUM; u8Counter++) // check on all signals; if not found Status_Nok is reutrned
  {
    uint32_t u32AddressTemp = (ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_strE2pModuleHandler.astrObj[u8Counter].u32ECU_MEM_INT_SignalOffset) ;
    if(u32AddressTemp == u32Address) // check if correct signal
    {
      eStatus = STATUS_OK;
      uint8_t u8CorrectSignal = u8Counter; // store correct signal index
      u8Counter = ECU_MEM_INT_DATA_NUM; // to skip outer loop after writing is finished
      uint8_t u8LoopCount;
      uint32_t u32TempSignal = 0;
      for(u8LoopCount = 0; u8LoopCount < u8DataSize; u8LoopCount++) // loop to write data to corresponding signals
      {
        if(u8LoopCount % 4 == 0) // if 4 signals are collected -> 1 address field 
        {
          if(u8LoopCount != 0) // if not first loop
          {
            ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltPysicValue = LIB_DATA_fltRaw2Phy(u32TempSignal, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltOffset);
            ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].u32RawValue = u32TempSignal;
            u8CorrectSignal++; // to write in next address (4 signals later)
            u32TempSignal = 0; // re-initialize variable
            u32TempSignal = (pu8BlockData[u8LoopCount] << 24U); // write data to signal
          }
          else
          {
            u32TempSignal = (pu8BlockData[u8LoopCount] << 24U); // dont store value
          }
        }
        else if((u8LoopCount + 1) == u8DataSize) // last loop, add last byte and store
        {
          u32TempSignal |= (pu8BlockData[u8LoopCount] << (24 - (8 * (u8LoopCount % 4)))); // collect 4 bytes of each signal; first byte is MSB
          ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltPysicValue = LIB_DATA_fltRaw2Phy(u32TempSignal, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].fltOffset);
          ECU_MEM_INT_strE2pModuleHandler.astrObj[u8CorrectSignal].u32RawValue = u32TempSignal;          
        }
        else
        {
          uint8_t u8TempValue = (u8LoopCount % 4);
          u32TempSignal |= (pu8BlockData[u8LoopCount] << (24 - (8 * u8TempValue))); // collect 4 bytes of each signal; first byte is MSB
        }
      }
    }
  }
  return eStatus;
}

STATUS_t ECU_MEM_INT_eWriteBlock(uint32_t u32Address, uint8_t* pu8BlockData)
{
  STATUS_t eStatus = STATUS_NOK;
  eStatus = UC_EEPROM_WRITE(u32Address, pu8BlockData, 16);
  return eStatus;
}

void ECU_MEM_INT_vdReadBootMemory(void)
{
  u8ReadBootFlag = deMCD_TRUE;
}

#endif /*#ifdef ECU_MEM_INT_MODULE_ENABLE*/

/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/
#ifdef ECU_MEM_EXT_MODULE_ENABLE
STATUS_t local_ECU_MEM_EXT_eIsE2PROMBusy()
{
  STATUS_t eStatus = STATUS_BUSY;
  static uint8_t saRead_Status[3] = {0, 0, 0};
  UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableWriteArrayTx, 1, deMCD_NULL, 0);
  LIB_DELAY_vdNanoSeconds(ECU_MEM_EXT_CS_HIGH_TIME_NS * 2);
  UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableReadStatusTx, 4, saRead_Status, 3);
  LIB_DELAY_vdNanoSeconds(ECU_MEM_EXT_CS_HIGH_TIME_NS * 2);
  if((saRead_Status[2] & 0x01) == 0)
  {
    eStatus = STATUS_OK;
  }

  return eStatus;
}

void local_ECU_MEM_EXT_vdInit(void)
{
  uint8_t u8SignalIndex;
  uint16_t u16ArraySize;  
  uint16_t u16AddressIndex;
  uint8_t u8LoopCounter;
  UC_SPI_eRegisterDeviceDataRxClbk(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, local_ECU_MEM_EXT_vdReceiveDataClbk);
  
  UC_DIO_eCommandOutputPin(ECU_MEM_EXT_EEP_WP_PIN, UC_DIO_OUT_COMMAND_ON); // WP pin
  UC_DIO_eCommandOutputPin(ECU_MEM_EXT_EEP_HLD_PIN, UC_DIO_OUT_COMMAND_ON); // HLD pin
       
         /*Clear Status Register*/
  UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableWriteArrayTx, 1, deMCD_NULL, 0);
  UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8WriteStatusTx, 2, deMCD_NULL, 0);
  UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableReadStatusTx, 4, ECU_MEM_EXT_au8ReadStatusRx, 3);
  
         /*Intializing ReadAddressTx */
  for(u8SignalIndex=0; u8SignalIndex < ECU_MEM_EXT_READ_PAGE_TXFRAME_SIZE; u8SignalIndex++)
  {
    if(u8SignalIndex == 0)
      {
        ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_OP_CODE_LOC] = ECU_MEM_EXT_EEP_OPCODE_READ;
      }
    else
      {
        ECU_MEM_EXT_au8ReadAddressTx[u8SignalIndex] = 0;
      }
  }
        /*Intializing ReadAddressRx */
  for(u8SignalIndex=0; u8SignalIndex < ECU_MEM_EXT_READ_PAGE_RXFRAME_SIZE; u8SignalIndex++)
  {
      ECU_MEM_EXT_au8ReadAddressRx[u8SignalIndex] = 0;
  }
        /*Intializing Raw values of Signals */
  for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_EXT_DATA_NUM; u8LoopCounter++)
  {
    ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8LoopCounter].u32RawValue = 0;
  }  
        /*Reading Signals Values from E2PROM*/
  for(u8SignalIndex = 0; u8SignalIndex < ECU_MEM_EXT_DATA_NUM; u8SignalIndex = u8SignalIndex + ECU_MEM_EXT_PAGE_SIGNALS_NUM)
  {
    u16AddressIndex = ((u8SignalIndex/ECU_MEM_EXT_PAGE_SIGNALS_NUM)*ECU_MEM_EXT_PAGE_BYTES_NUM);
    ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_ADDRESS_HB_LOC] |= u16AddressIndex >> 8;
    ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_ADDRESS_LB_LOC] |= u16AddressIndex; 
    
    if((u8SignalIndex + ECU_MEM_EXT_PAGE_SIGNALS_NUM) < ECU_MEM_EXT_DATA_NUM)
    {
      u16ArraySize = ECU_MEM_EXT_PAGE_BYTES_NUM+ECU_MEM_EXT_COMMAND_BYTES_NUM+ECU_MEM_EXT_ADDRESS_BYTES_NUM;
    }
    else 
    {
      u16ArraySize = ((ECU_MEM_EXT_DATA_NUM - u8SignalIndex)*ECU_MEM_EXT_SIGNAL_BYTES_NUM)+ECU_MEM_EXT_COMMAND_BYTES_NUM+ECU_MEM_EXT_ADDRESS_BYTES_NUM;
    }
    
    ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_ADDRESS_HB_LOC] |= u16AddressIndex >> 8;
    ECU_MEM_EXT_au8ReadAddressTx[ECU_MEM_EXT_ADDRESS_LB_LOC] |= u16AddressIndex; 
    /*Enable Write*/
    UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableWriteArrayTx, 1, deMCD_NULL, 0);
    for(int i =0; i<500; i++);
    /*Read from Address */
    UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8ReadAddressTx, u16ArraySize + ECU_MEM_EXT_READTX_BUF_SHIFT_BYTES, ECU_MEM_EXT_au8ReadAddressRx, u16ArraySize + ECU_MEM_EXT_READRX_BUF_SHIFT_BYTES );
    for(int i =0; i<500; i++);
    /*Assigning Raw Values to Corresponding Signals*/
    uint8_t u8SignalArrayIndex = u8SignalIndex;
    for(int i = 4; i <= u16ArraySize + ECU_MEM_EXT_READRX_BUF_SHIFT_BYTES; i++)
    {
      switch(i % 4)
      {
      case 0:
        ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalArrayIndex].u32RawValue |= ECU_MEM_EXT_au8ReadAddressRx[i] << 24; 
        break;
      case 1:
        ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalArrayIndex].u32RawValue |= ECU_MEM_EXT_au8ReadAddressRx[i] << 16;
        break;
      case 2:
        ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalArrayIndex].u32RawValue |= ECU_MEM_EXT_au8ReadAddressRx[i] << 8; 
        break;        
      case 3:
        ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalArrayIndex].u32RawValue |= ECU_MEM_EXT_au8ReadAddressRx[i];
        u8SignalArrayIndex++;
        break;
      default:
        break;
      }   
      if(u8SignalArrayIndex > ECU_MEM_EXT_DATA_NUM)
      {
        break;
      }
    }
    /*Clear ReadAddressTx array*/
    for(u8LoopCounter = 1; u8LoopCounter < ECU_MEM_EXT_PAGE_BYTES_NUM + ECU_MEM_EXT_READTX_BUF_SHIFT_BYTES; u8LoopCounter++)
    {
        ECU_MEM_EXT_au8ReadAddressTx[u8LoopCounter] = 0;        
    }    
    /*Clear ReadAddressRx array*/
    for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_EXT_PAGE_BYTES_NUM + ECU_MEM_EXT_READRX_BUF_SHIFT_BYTES; u8LoopCounter++)
    {
        ECU_MEM_EXT_au8ReadAddressRx[u8LoopCounter] = 0;        
    }    
  }
  /*Fill Physical Value of all Signals*/
  for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_EXT_DATA_NUM; u8LoopCounter++)
    {
      ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8LoopCounter].fltPysicValue = LIB_DATA_fltRaw2Phy(ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8LoopCounter].u32RawValue, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8LoopCounter].fltResolution, ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8LoopCounter].fltOffset);
    }  
}


void local_ECU_MEM_EXT_vdDeInit(void)
{
  uint8_t u8SignalIndex = 0;
  uint8_t u8Signalnum = 0;
  uint16_t u16AddressIndex;
  uint8_t u8SignalCheck = 0;
  uint16_t u16ArraySize;
  uint8_t u8LoopCounter;
  UC_DIO_eCommandOutputPin(ECU_MEM_EXT_EEP_WP_PIN, UC_DIO_OUT_COMMAND_ON); // WP pin
  UC_DIO_eCommandOutputPin(ECU_MEM_EXT_EEP_HLD_PIN, UC_DIO_OUT_COMMAND_ON); // HOLD pin   
           /*Intializing WriteAddressTx */
  for(u8SignalIndex=0; u8SignalIndex < ECU_MEM_EXT_WRITE_PAGE_FRAME_SIZE; u8SignalIndex++)
    {
      if(u8SignalIndex == 0)
        {
          ECU_MEM_EXT_au8WriteAddressTx[ECU_MEM_EXT_OP_CODE_LOC] = ECU_MEM_EXT_EEP_OPCODE_WRITE;
        }
      else
        {
          ECU_MEM_EXT_au8WriteAddressTx[u8SignalIndex] = 0;
        }
    }
           /*Writing Signals Values to E2PROM */
  for(u8SignalIndex = 0; u8SignalIndex < ECU_MEM_EXT_DATA_NUM; u8SignalIndex = u8SignalIndex + ECU_MEM_EXT_PAGE_SIGNALS_NUM)
  {
    u16AddressIndex = ((u8SignalIndex/ECU_MEM_EXT_PAGE_SIGNALS_NUM)*ECU_MEM_EXT_PAGE_BYTES_NUM);
    ECU_MEM_EXT_au8WriteAddressTx[ECU_MEM_EXT_ADDRESS_HB_LOC] |= u16AddressIndex >> 8;
    ECU_MEM_EXT_au8WriteAddressTx[ECU_MEM_EXT_ADDRESS_LB_LOC] |= u16AddressIndex;        
    u16ArraySize = ECU_MEM_EXT_COMMAND_BYTES_NUM + ECU_MEM_EXT_ADDRESS_BYTES_NUM;
    
    u8SignalCheck = u8SignalIndex; // Variable to check when the signalnum will reach number of available signals
    for(u8Signalnum = 0; u8Signalnum < ECU_MEM_EXT_PAGE_SIGNALS_NUM; u8Signalnum++)
    {
      if(u8SignalCheck >= ECU_MEM_EXT_DATA_NUM)
      {
        break;
      }
      u16ArraySize = u16ArraySize + ECU_MEM_EXT_SIGNAL_BYTES_NUM;
      for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_EXT_SIGNAL_BYTES_NUM; u8LoopCounter++)
      {
        ECU_MEM_EXT_au8WriteAddressTx[(u8Signalnum*ECU_MEM_EXT_SIGNAL_BYTES_NUM)+u8LoopCounter+3] = ECU_MEM_EXT_strE2pModuleHandler.astrObj[u8SignalCheck].u32RawValue >> (8*(ECU_MEM_EXT_SIGNAL_BYTES_NUM-1-u8LoopCounter));
      }
      u8SignalCheck++;
    }
    
    /*Enable Write*/
    UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8EnableWriteArrayTx, 1, deMCD_NULL, 0);
    LIB_DELAY_vdNanoSeconds(ECU_MEM_EXT_CS_HIGH_TIME_NS);
    /*Write Frame*/
    UC_SPI_eSendSpiFrameSync(ECU_MEM_EXT_SPI_BUS_ID, ECU_MEM_EXT_SPI_DEVICE_ID, ECU_MEM_EXT_au8WriteAddressTx, u16ArraySize, deMCD_NULL, 0);
    LIB_DELAY_vdNanoSeconds(ECU_MEM_EXT_CS_HIGH_TIME_NS * 200);
    /*Clear WriteAddressTx array*/
    for(u8LoopCounter = 1; u8LoopCounter < u16ArraySize; u8LoopCounter++)
    {
        ECU_MEM_EXT_au8WriteAddressTx[u8LoopCounter] = 0;        
    }
  }
  UC_DIO_eCommandOutputPin(ECU_MEM_EXT_EEP_WP_PIN, UC_DIO_OUT_COMMAND_OFF);
}
 
void local_ECU_MEM_EXT_vdReceiveDataClbk(uint32_t u32RxData)
{

}

#endif /*#ifdef ECU_MEM_EXT_MODULE_ENABLE*/  

#ifdef ECU_MEM_INT_MODULE_ENABLE
void local_ECU_MEM_INT_vdInit(void)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8SignalIndex;
  uint8_t u8LoopCounter;
  uint32_t au32ReadDataBuffer[ECU_MEM_INT_DATA_NUM - 1];
  uint32_t au32ReadAppFlag[1];    
  uint32_t u32StartAddress = ECU_MEM_INT_strE2pModuleHandler.astrObj[ECU_MEM_INT_START_INDEX].ECU_MEM_INT_eAddressSector;
  
//  /*Read App Valid Flag*/
  UC_EEPROM_READ(ECU_MEM_INT_strE2pModuleHandler.astrObj[ECU_MEM_INT_APP_VALID].ECU_MEM_INT_eAddressSector, au32ReadAppFlag, 1);
  ECU_MEM_INT_astrE2pData[ECU_MEM_INT_APP_VALID].u32RawValue = au32ReadAppFlag[0];
  ECU_MEM_INT_astrE2pData[ECU_MEM_INT_APP_VALID].fltPysicValue = au32ReadAppFlag[0];

  /*Reading Signals Values from E2PROM*/
  eStatus = UC_EEPROM_READ(u32StartAddress, au32ReadDataBuffer, ECU_MEM_INT_DATA_NUM - 1);
  
  /*Check if signal values were read properly from E2PROM*/
  if(eStatus == STATUS_OK)
  {
    /*Assigning Raw Values to Corresponding Signals*/
    for(u8SignalIndex = 0; u8SignalIndex < (ECU_MEM_INT_DATA_NUM-1); u8SignalIndex++)
    {    
      if(au32ReadDataBuffer[u8SignalIndex + ECU_MEM_INT_OFFSET] != 0xFFFFFFFF)
      {
        ECU_MEM_INT_astrE2pData[ECU_MEM_INT_START_INDEX+u8SignalIndex].u32RawValue = au32ReadDataBuffer[u8SignalIndex + ECU_MEM_INT_OFFSET];        
      }
    }        
    /*Fill Physical Value of all Signals*/
    for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_INT_DATA_NUM; u8LoopCounter++)
    {
      ECU_MEM_INT_strE2pModuleHandler.astrObj[u8LoopCounter].fltPysicValue = LIB_DATA_fltRaw2Phy(ECU_MEM_INT_strE2pModuleHandler.astrObj[u8LoopCounter].u32RawValue, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8LoopCounter].fltResolution, ECU_MEM_INT_strE2pModuleHandler.astrObj[u8LoopCounter].fltOffset);
    }        
  }
}

void local_ECU_MEM_INT_vdDeInit(void)
{
    uint8_t u8SignalIndex;
    uint8_t u8LoopCounter;
    uint8_t u8WriteByte;
    if(u8ReadBootFlag == deMCD_TRUE) // check whether reading boot section should be read during this reset
    {
      u8ReadBootFlag = deMCD_FALSE;
      //read bootloader signals
      uint32_t au32ReadDataBuffer[ECU_MEM_INT_BOOT_DATA_NUM] = {0};
      UC_EEPROM_READ(ECU_MEM_INT_BOOT_SECTOR, au32ReadDataBuffer, ECU_MEM_INT_BOOT_DATA_NUM);
      uint8_t u8Count;
      uint8_t u8LoopCounter;
      ECU_MEM_INT_eEraseSector(ECU_MEM_INT_BOOT_SECTOR);
      for(u8Count = 0; u8Count < ECU_MEM_INT_BOOT_DATA_NUM; u8Count++) // loop on bootloader signals
      {
        if(u8Count == 0)
        {
          for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_INT_SIGNAL_BYTES_NUM; u8LoopCounter++) // write byte-by-byte of the signal word
          {
            u8WriteByte = ECU_MEM_INT_astrE2pData[0].u32RawValue >> (24-(u8LoopCounter*8));
            UC_EEPROM_WRITE(ECU_MEM_INT_astrE2pData[0].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_astrE2pData[0].u32ECU_MEM_INT_SignalOffset + u8LoopCounter, &u8WriteByte, 1);
          }          
        }
        else
        {
          for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_INT_SIGNAL_BYTES_NUM; u8LoopCounter++) // write byte-by-byte of the signal word
          {
            u8WriteByte = au32ReadDataBuffer[u8Count] >> (24-(u8LoopCounter*8));
            UC_EEPROM_WRITE(ECU_MEM_INT_BOOT_SECTOR + (u8Count * 4) + u8LoopCounter, &u8WriteByte, 1);
          }           
        }
      }
    }
    ECU_MEM_INT_eEraseSector(ECU_MEM_INT_SECTOR);   
             /*Writing Signals Values to E2PROM */
    for(u8SignalIndex = 0; u8SignalIndex < ECU_MEM_INT_DATA_NUM; u8SignalIndex++)
    {    
      for(u8LoopCounter = 0; u8LoopCounter < ECU_MEM_INT_SIGNAL_BYTES_NUM; u8LoopCounter++) // write byte-by-byte of the signal word
      {
        u8WriteByte = ECU_MEM_INT_astrE2pData[u8SignalIndex].u32RawValue >> (24-(u8LoopCounter*8));
        UC_EEPROM_WRITE(ECU_MEM_INT_astrE2pData[u8SignalIndex].ECU_MEM_INT_eAddressSector + ECU_MEM_INT_astrE2pData[u8SignalIndex].u32ECU_MEM_INT_SignalOffset + u8LoopCounter, &u8WriteByte, 1);
      }
    }    
}
#endif /*#ifdef ECU_MEM_INT_MODULE_ENABLE*/

#ifdef ECU_MEM_CODE_MODULE_ENABLE
void local_ECU_MEM_CODE_vdInit(void)
{
  
}


void local_ECU_MEM_CODE_vdDeInit(void)
{    
  
}  
#endif /*#ifdef ECU_MEM_EXT_MODULE_ENABLE*/  
/********************************************************************************************/
/************************************* CALLBACKS ********************************************/
/********************************************************************************************/

#endif /*ECU_MEM_MODULE_ENABLE*/
