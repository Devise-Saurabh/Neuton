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

File Name: uc.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc.h"


void UC_vdInit(void)
{
#ifdef UC_SYSTEM_MODULE_ENABLE
  UC_SYS_vdInit();
#endif /*UC_SYSTEM_MODULE_ENABLE*/
  
#ifdef UC_FLASH_MODULE_ENABLE
  UC_FLASH_vdInit();
#endif /*UC_FLASH_MODULE_ENABLE*/

#ifdef UC_EEPROM_MODULE_ENABLE
  UC_EEPROM_vdInit();
#endif /*UC_EEPROM_MODULE_ENABLE*/
  
#ifdef UC_TIMER_MODULE_ENABLE
  UC_TIMER_vdInit();
#endif /*UC_TIMER_MODULE_ENABLE*/
  
#ifdef UC_CAN_MODULE_ENABLE
  UC_CAN_vdInit();
#endif /*UC_CAN_MODULE_ENABLE*/
  
#ifdef UC_ADC_MODULE_ENABLE
  UC_ADC_vdInit();
#endif /*UC_ADC_MODULE_ENABLE*/
  
#ifdef UC_SPI_MODULE_ENABLE
  UC_SPI_vdInit();
#endif /*UC_SPI_MODULE_ENABLE*/

#ifdef UC_UART_MODULE_ENABLE
  UC_UART_vdInit();
#endif /*UC_UART_MODULE_ENABLE*/
  
#ifdef UC_PWM_MODULE_ENABLE
  UC_PWM_vdInit();
#endif /*UC_PWM_MODULE_ENABLE*/
  
#ifdef UC_DIO_MODULE_ENABLE
  /*DIO has to be the last to be intialized*/
  UC_DIO_vdInit();
#endif /*UC_DIO_MODULE_ENABLE*/
}

void UC_vdDeInit(void)
{
#ifdef UC_EEPROM_MODULE_ENABLE
  UC_EEPROM_vdDeInit();
#endif /*UC_EEPROM_MODULE_ENABLE*/
}
