/*
***************************************************************************
***************************************************************************
(C) 2016 SIGRA Technologies GmbH  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

SIGRA Technologies GmbH
Agnes-Pockels-Bogen 1,
80992, Munich,
Germany

File Name: ecu_system_cfg.h
Author: Karim Mansour 
E-mail: karim@sigratech.de 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_SYSTEM_CFG_H
#define ECU_SYSTEM_CFG_H

#define ECU_SYS_MODULE_ENABLE

#undef ECU_SYS_BOOT_ENABLE 

#define ECU_SYS_POWER_SUPPLY_PIN               UC_DIO_OUTPUT_GIO15

#define ECU_SYS_WDG_ENABLE_PIN                 UC_DIO_OUTPUT_GIO1
#define ECU_SYS_MEM_WDG_ENABLE                 ECU_MEM_INT_WDG_ENABLE

#define ECU_SYS_SLEEP_MODE_PIN1                UC_DIO_OUTPUT_GIOHB1
#define ECU_SYS_SLEEP_MODE_PIN2                UC_DIO_OUTPUT_GIOHB2
#define ECU_SYS_SLEEP_MODE_PIN3                UC_DIO_OUTPUT_GIOHB3
#define ECU_SYS_SLEEP_MODE_PIN4                UC_DIO_OUTPUT_GIOHB4

#define ECU_SYS_WDG_SLEEP_TOGGLE_TIME_NS      (50000000)

#endif /*ECU_SYSTEM_CFG_H*/



