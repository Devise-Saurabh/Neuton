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

File Name: ecu_mem.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/


#ifndef ECU_MEM_H
#define ECU_MEM_H

#include "lib_types.h"
#include "uc.h"

typedef UC_FLASH_strBlockMemory_t ECU_MEM_strBlockMemory_t;

#ifdef ECU_MEM_CODE_MODULE_ENABLE
//#define       ECU_MEM_CODE_STARTING_ADDRESS      (0x100000)
#define       ECU_MEM_CODE_CHECKSUM_BYTE         (0x80)
#define       ECU_MEM_CODE_RECORDS_NUM           (32/*274*/)


typedef struct ECU_MEM_CODE_strPageMemoryTemplate
{
  /*Page Starting Address*/
  uint32_t u32PageStartingAddress;
  /*Number of Blocks*/
  uint8_t u8BlocksNumber;
  /*Total Bytes Number*/
  uint16_t u16BytesNumber;
  /*Array of Blocks*/
  UC_FLASH_strBlockMemory_t UC_FLASH_astrBlocksOfMemory[16];
  /*Page Check Sum*/
  uint8_t u8Checksum;
  /*Transfer Block Sequence Counter*/ // this variable is used when flashing
  uint8_t u8TransferDataBlockSequenceCounter;
} ECU_MEM_CODE_strPageMemory_t;

STATUS_t ECU_MEM_CODE_eWritePageAsArrayOfBytes(uint8_t* au8PageArray, uint32_t u32Address, uint16_t u16BytesNumber);
STATUS_t ECU_MEM_CODE_eWritePage(ECU_MEM_CODE_strPageMemory_t *strPageMemory);
STATUS_t ECU_MEM_CODE_eWriteBlocks(ECU_MEM_strBlockMemory_t *strBlocksArray, uint8_t u8BlocksNumber);
STATUS_t ECU_MEM_CODE_eReadPage(ECU_MEM_CODE_strPageMemory_t *strPage);
STATUS_t ECU_MEM_CODE_eReadBlock(ECU_MEM_strBlockMemory_t *strBlock);
STATUS_t ECU_MEM_CODE_eEraseSector(uint32_t u32MemoryAddress, uint8_t* pu8MemorySector);
#endif /*ECU_MEM_CODE_MODULE_ENABLE*/

#ifdef ECU_MEM_EXT_MODULE_ENABLE

#define ECU_MEM_EXT_PAGE_BYTES_NUM                         (64)
#define ECU_MEM_EXT_COMMAND_BYTES_NUM                      (1)
#define ECU_MEM_EXT_ADDRESS_BYTES_NUM                      (2)

#define ECU_MEM_EXT_SIGNAL_BYTES_NUM                       (4)
#define ECU_MEM_EXT_PAGE_SIGNALS_NUM                       (ECU_MEM_EXT_PAGE_BYTES_NUM/ECU_MEM_EXT_SIGNAL_BYTES_NUM)

#define ECU_MEM_EXT_OP_CODE_LOC                            (0)
#define ECU_MEM_EXT_ADDRESS_HB_LOC                         (1)
#define ECU_MEM_EXT_ADDRESS_LB_LOC                         (2)

#define ECU_MEM_EXT_READTX_BUF_SHIFT_BYTES                 (2)
#define ECU_MEM_EXT_READRX_BUF_SHIFT_BYTES                 (1)

#define ECU_MEM_EXT_WRITE_PAGE_FRAME_SIZE      (ECU_MEM_EXT_COMMAND_BYTES_NUM+ECU_MEM_EXT_ADDRESS_BYTES_NUM+ECU_MEM_EXT_PAGE_BYTES_NUM)
#define ECU_MEM_EXT_READ_PAGE_TXFRAME_SIZE     (ECU_MEM_EXT_COMMAND_BYTES_NUM+ECU_MEM_EXT_ADDRESS_BYTES_NUM+ECU_MEM_EXT_PAGE_BYTES_NUM+ECU_MEM_EXT_READTX_BUF_SHIFT_BYTES)
#define ECU_MEM_EXT_READ_PAGE_RXFRAME_SIZE     (ECU_MEM_EXT_COMMAND_BYTES_NUM+ECU_MEM_EXT_ADDRESS_BYTES_NUM+ECU_MEM_EXT_PAGE_BYTES_NUM+ECU_MEM_EXT_READRX_BUF_SHIFT_BYTES)

typedef enum ECU_MEM_EXT_eE2promStatusTemplate
{
  ECU_MEM_EXT_EEP_ST_INIT = 0,
  ECU_MEM_EXT_EEP_ST_WRITE_STATUS_REG = 1,
  ECU_MEM_EXT_EEP_ST_READ_STATUS_REG = 2,
} ECU_MEM_EXT_eE2promStatus_t;

typedef enum ECU_MEM_EXT_eE2promRegTemplate
{
  ECU_MEM_EXT_EEP_REG_INIT = 0,
  ECU_MEM_EXT_EEP_REG_WRITE = 1,
  ECU_MEM_EXT_EEP_REG_READ = 2,
} ECU_MEM_EXT_eE2promReg_t;

typedef enum ECU_MEM_EXT_eE2promOpCodeTemplate
{
  ECU_MEM_EXT_EEP_OPCODE_WREN = 0x06,
  ECU_MEM_EXT_EEP_OPCODE_WRDI = 0x04,
  ECU_MEM_EXT_EEP_OPCODE_RDSR = 0x05,
  ECU_MEM_EXT_EEP_OPCODE_WRSR = 0x01,
  ECU_MEM_EXT_EEP_OPCODE_READ = 0x03,
  ECU_MEM_EXT_EEP_OPCODE_WRITE = 0x02,
} ECU_MEM_EXT_eE2promOpCode_t;

typedef enum ECU_MEM_EXT_eAddressPageTemplate
{
  ECU_MEM_EXT_PAGE_0 = 0x0000,
  ECU_MEM_EXT_PAGE_1 = 0x0040,  
  ECU_MEM_EXT_PAGE_2 = 0x0080,
  ECU_MEM_EXT_PAGE_3 = 0x00C0,
  ECU_MEM_EXT_PAGE_4 = 0x0100,
  ECU_MEM_EXT_PAGE_5 = 0x0140,
  ECU_MEM_EXT_PAGE_6 = 0x0180,
  ECU_MEM_EXT_PAGE_7 = 0x01C0,
  ECU_MEM_EXT_PAGE_8 = 0x0200,
  ECU_MEM_EXT_PAGE_9 = 0x0240,
  ECU_MEM_EXT_PAGE_10 = 0x0280,
  ECU_MEM_EXT_PAGE_11 = 0x02C0,
  ECU_MEM_EXT_PAGE_12 = 0x0300,
  ECU_MEM_EXT_PAGE_13 = 0x0340,
  ECU_MEM_EXT_PAGE_14 = 0x0380,
  ECU_MEM_EXT_PAGE_15 = 0x03C0,
  ECU_MEM_EXT_PAGE_16 = 0x0400,
} ECU_MEM_EXT_eAddressPage_t;

typedef enum ECU_MEM_EXT_eSignalOffset
{
  ECU_MEM_EXT_OFFSET_0 = 0x0,
  ECU_MEM_EXT_OFFSET_1 = 0x4,
  ECU_MEM_EXT_OFFSET_2 = 0x8,
  ECU_MEM_EXT_OFFSET_3 = 0xC,
  ECU_MEM_EXT_OFFSET_4 = 0x10,
  ECU_MEM_EXT_OFFSET_5 = 0x14,
  ECU_MEM_EXT_OFFSET_6 = 0x18,
  ECU_MEM_EXT_OFFSET_7 = 0x1C,
  ECU_MEM_EXT_OFFSET_8 = 0x20,
  ECU_MEM_EXT_OFFSET_9 = 0x24,
  ECU_MEM_EXT_OFFSET_10 = 0x28,
  ECU_MEM_EXT_OFFSET_11 = 0x2C,
  ECU_MEM_EXT_OFFSET_12 = 0x30,
  ECU_MEM_EXT_OFFSET_13 = 0x34,
  ECU_MEM_EXT_OFFSET_14 = 0x38,
  ECU_MEM_EXT_OFFSET_15 = 0x3C,
} ECU_MEM_EXT_eSignalOffset_t;


typedef struct ECU_MEM_EXT_strE2pSignalDataTemplate //MSBs are in lower address
{
  /*Data Id*/
  uint8_t u8Id;
  /*Data Address Page Number*/
  ECU_MEM_EXT_eAddressPage_t ECU_MEM_EXT_eAddressPage;
  /*Data Address Offset*/
  ECU_MEM_EXT_eSignalOffset_t ECU_MEM_EXT_eSignalOffset;
  /*Pysical Value*/
  float fltPysicValue;
  /*Resolution*/
  float fltResolution;
  /*Offset*/
  float fltOffset;
  /*Raw Value*/
  uint32_t u32RawValue;
} ECU_MEM_EXT_strE2pSignalData_t;

typedef struct ECU_MEM_EXT_E2pModuleHandlerTemplate
{
  /*Number of Signals*/
  uint8_t u8E2pSignalsNum;
  /*Array of E2PROM Signals*/
  ECU_MEM_EXT_strE2pSignalData_t* astrObj;
  /*Active Signal Write*/
  uint8_t u8WriteSignal;
  /*Active Signal Read*/
  uint8_t u8ReadSignal;
} ECU_MEM_EXT_E2pModuleHandler_t;

STATUS_t ECU_MEM_EXT_eWriteSignalValue(uint8_t u8SignalID, float fltValue);
STATUS_t ECU_MEM_EXT_eReadSignalValue(uint8_t u8SignalID, float* pfltValue);
#endif

#ifdef ECU_MEM_INT_MODULE_ENABLE
/*Former .h*/
#define ECU_MEM_INT_SECTOR_BYTES_NUM                       (16384)
#define ECU_MEM_INT_SIGNAL_BYTES_NUM                       (4)

typedef enum ECU_MEM_INT_eAddressSectorTemplate
{
  ECU_MEM_INT_SECTOR_0 = 0xF0200000,
  ECU_MEM_INT_SECTOR_1 = 0xF0204000,  
  ECU_MEM_INT_SECTOR_2 = 0xF0208000,
  ECU_MEM_INT_SECTOR_3 = 0xF020C000,
} ECU_MEM_INT_eAddressSector_t;

typedef struct ECU_MEM_INT_strE2pSignalDataTemplate //MSBs are in lower address
{
  /*Data Id*/
  uint8_t u8Id;
  /*Data Address Sector Number*/
  ECU_MEM_INT_eAddressSector_t ECU_MEM_INT_eAddressSector;
  /*Data Address Sector Offset*/ // range is from 0 to 16383
  uint32_t u32ECU_MEM_INT_SignalOffset;
  /*Pysical Value*/
  float fltPysicValue;
  /*Resolution*/
  float fltResolution;
  /*Offset*/
  float fltOffset;
  /*Raw Value*/
  uint32_t u32RawValue;
} ECU_MEM_INT_strE2pSignalData_t;

typedef struct ECU_MEM_INT_E2pModuleHandlerTemplate
{
  /*Number of Signals*/
  uint8_t u8E2pSignalsNum;
  /*Array of E2PROM Signals*/
  ECU_MEM_INT_strE2pSignalData_t* astrObj;
} ECU_MEM_INT_E2pModuleHandler_t;

STATUS_t ECU_MEM_INT_eDirectWriteSignalValue(uint8_t u8SignalID, float fltValue, uint32_t u32Value);
STATUS_t ECU_MEM_INT_eWriteSignalValue(uint8_t u8SignalID, float fltValue, uint32_t u32Value);
STATUS_t ECU_MEM_INT_eWriteSignalValueByAddress(uint32_t u32Address, uint32_t u32RawValue);
STATUS_t ECU_MEM_INT_eReadSignalValueByAddress(uint32_t u32Address, uint32_t* u32RawValue);
STATUS_t ECU_MEM_INT_eReadSignalValue(uint8_t u8SignalID, float* pfltValue);
uint16_t ECU_MEM_INT_u16ReadSignalResolution(uint8_t u8SignalID);
STATUS_t ECU_MEM_INT_eReadRawSignalValue(uint8_t u8SignalID, uint32_t* u32Value);
STATUS_t ECU_MEM_INT_eEraseSector(ECU_MEM_INT_eAddressSector_t eSector);
STATUS_t ECU_MEM_INT_eReadBlock(uint32_t u32Address, uint8_t* pu8BlockData);
STATUS_t ECU_MEM_INT_eWriteBlock(uint32_t u32Address, uint8_t* pu8BlockData);
STATUS_t ECU_MEM_INT_eWriteFourSignalsByAddress(uint32_t u32Address, uint8_t* pu8BlockData, uint8_t u8DataSize); // write 4 signals 
STATUS_t ECU_MEM_INT_eReadFourSignalsByAddress(uint32_t u32Address, uint8_t* pu8BlockData);
void ECU_MEM_INT_vdReadBootMemory(void);
#endif

void ECU_MEM_vdInit(void);
void ECU_MEM_vdDeInit(void);
void ECU_MEM_vdMgr(void);

#endif /*ECU_MEM_H*/
