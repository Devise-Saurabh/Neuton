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

File Name: uc.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_H
#define UC_H

#include "uc_system_cfg.h"
#include "uc_system.h"
#include "uc_eeprom_cfg.h"
#include "uc_eeprom.h"
#include "uc_timer_cfg.h"
#include "uc_timer.h"
#include "uc_dio_cfg.h"
#include "uc_dio.h"
#include "uc_can_cfg.h"
#include "uc_can.h"
#include "uc_adc_cfg.h"
#include "uc_adc.h"
#include "uc_spi_cfg.h"
#include "uc_spi.h"
#include "uc_uart_cfg.h"
#include "uc_uart.h"
#include "uc_pwm_cfg.h"
#include "uc_pwm.h"
#include "uc_wdg_cfg.h"
#include "uc_wdg.h"
#include "uc_flash_cfg.h"
#include "uc_flash.h"

void UC_vdInit(void);
void UC_vdDeInit(void);

#endif /*UC_H*/

