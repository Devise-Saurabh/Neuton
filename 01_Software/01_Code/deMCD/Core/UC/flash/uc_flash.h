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

File Name: uc_flash.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/


#ifndef UC_FLASH_H
#define UC_FLASH_H


#include "lib_types.h"
#include "uc_header.h"

#define UC_FLASH_ADDRESS_SECTOR_NUMBER      (26)

typedef struct UC_FLASH_strBlockMemoryTemplate
{
  /*Address*/
  uint32_t u32Address;
  /*Data Bytes Count*/
  uint8_t u8DataBytesCount;
  /*Array of Data Bytes*/
  uint8_t au8Byte[16];
  /*Checksum*/
  uint8_t u8CheckSum;
  /*Line Number*/
  uint32_t u32LineNumber;
} UC_FLASH_strBlockMemory_t;

typedef enum UC_FLASH_eAddressSectorTemplate
{
  UC_FLASH_BANK_0_SECTOR_0 = 0x00000000,
  UC_FLASH_BANK_0_SECTOR_1 = 0x00008000,  
  UC_FLASH_BANK_0_SECTOR_2 = 0x00010000,
  UC_FLASH_BANK_0_SECTOR_3 = 0x00018000,
  UC_FLASH_BANK_0_SECTOR_4 = 0x00020000,
  UC_FLASH_BANK_0_SECTOR_5 = 0x00040000,  
  UC_FLASH_BANK_0_SECTOR_6 = 0x00060000,
  UC_FLASH_BANK_0_SECTOR_7 = 0x00080000,
  UC_FLASH_BANK_0_SECTOR_8 = 0x000A0000,
  UC_FLASH_BANK_0_SECTOR_9 = 0x000C0000,  
  UC_FLASH_BANK_0_SECTOR_10 = 0x000E0000,
  UC_FLASH_BANK_0_SECTOR_11 = 0x00100000,
  UC_FLASH_BANK_0_SECTOR_12 = 0x00120000,
  UC_FLASH_BANK_0_SECTOR_13 = 0x00140000,  
  UC_FLASH_BANK_0_SECTOR_14 = 0x00160000,
  UC_FLASH_BANK_1_SECTOR_0 = 0x00180000,
  UC_FLASH_BANK_1_SECTOR_1 = 0x001A0000, 
  UC_FLASH_BANK_1_SECTOR_2 = 0x001C0000,
  UC_FLASH_BANK_1_SECTOR_3 = 0x001E0000,
  UC_FLASH_BANK_1_SECTOR_4 = 0x00200000,
  UC_FLASH_BANK_1_SECTOR_5 = 0x00220000, 
  UC_FLASH_BANK_1_SECTOR_6 = 0x00240000,
  UC_FLASH_BANK_1_SECTOR_7 = 0x00260000,
  UC_FLASH_BANK_1_SECTOR_8 = 0x00280000,
  UC_FLASH_BANK_1_SECTOR_9 = 0x002A0000, 
  UC_FLASH_BANK_1_SECTOR_10 = 0x002C0000,
  UC_FLASH_BANK_1_SECTOR_11 = 0x002E0000,
} UC_FLASH_eAddressSector_t;

typedef struct UC_FLASH_strAddressSectorIDTemplate
{
  uint8_t u8ID;
  uint32_t u32Address;
} UC_FLASH_strAddressSectorID_t;


/*Add __ramfunc for running bootloader from RAM*/
void UC_FLASH_vdInit(void);
void UC_FLASH_vdDeInit(void);
void UC_FLASH_vdMngr(void);
STATUS_t UC_FLASH_eWriteBlock(UC_FLASH_strBlockMemory_t UC_FLASH_strWriteBlock); //Maximum 32 Bytes
STATUS_t UC_FLASH_eReadBlock(UC_FLASH_strBlockMemory_t *UC_FLASH_strWriteBlock);
void UC_FLASH_vdBlockSize(uint8_t* pu8BlockSize);
STATUS_t UC_FLASH_eEraseSector(uint32_t u32MemoryAddress, uint8_t* pu8SectorID);
#endif /*UC_FLASH_H*/
