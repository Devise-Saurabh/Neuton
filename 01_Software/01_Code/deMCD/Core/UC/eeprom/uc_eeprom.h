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

File Name: uc_eeprom.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/


#ifndef UC_EEPROM_H
#define UC_EEPROM_H


#include "lib_types.h"
#include "uc_header.h"

typedef enum UC_EEPROM_eAddressSectorTemplate
{
  UC_EEPROM_SECTOR_0 = 0xF0200000,
  UC_EEPROM_SECTOR_1 = 0xF0204000,  
  UC_EEPROM_SECTOR_2 = 0xF0208000,
  UC_EEPROM_SECTOR_3 = 0xF020C000,
} UC_EEPROM_eAddressSector_t;

void UC_EEPROM_vdInit(void);
void UC_EEPROM_vdDeInit(void);
STATUS_t UC_EEPROM_WRITE(uint32_t u32Address, uint8_t* au8BytesBuffer, uint8_t u8BufferLength);
STATUS_t UC_EEPROM_READ(uint32_t u32Address, uint32_t* au32BytesBuffer, uint32_t u32BufferLength);
STATUS_t UC_EEPROM_ERASE_SECTOR(UC_EEPROM_eAddressSector_t eSector);

#endif /*UC_EEPROM_H*/
