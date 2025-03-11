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

File Name: ecu_mem_cfg.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/



#ifndef ECU_MEM_CFG_H
#define ECU_MEM_CFG_H

#define ECU_MEM_MODULE_ENABLE

#undef ECU_MEM_EXT_MODULE_ENABLE
#define ECU_MEM_INT_MODULE_ENABLE
#undef ECU_MEM_CODE_MODULE_ENABLE

#ifdef ECU_MEM_CODE_MODULE_ENABLE
#define ECU_MEM_CODE_MAX_PAGE_SIZE_IN_BYTES          (256)
#define ECU_MEM_CODE_BLOCKS_PER_PAGE                 (16)
#endif /*ECU_MEM_CODE_MODULE_ENABLE*/

#ifdef ECU_MEM_EXT_MODULE_ENABLE
#define ECU_MEM_EXT_SPI_BUS_ID                        UC_SPI_MODULE_INDEX_0
#define ECU_MEM_EXT_SPI_DEVICE_ID                     UC_SPI_INDEX0_DEV_1
#define ECU_MEM_EXT_EEP_HLD_PIN                       UC_DIO_OUTPUT_GIO4
#define ECU_MEM_EXT_EEP_WP_PIN                        UC_DIO_OUTPUT_GIO3
#define ECU_MEM_EXT_DATA_NUM                          (1)
#define ECU_MEM_EXT_DATA_ID0                          (0)
#define ECU_MEM_EXT_CS_HIGH_TIME_NS         (25000) 
#define ECU_MEM_EXT_PRECISION_FACTOR        (100)
#endif /*ECU_MEM_EXT_MODULE_ENABLE*/

#ifdef ECU_MEM_INT_MODULE_ENABLE

#define ECU_MEM_INT_SECTOR                         ECU_MEM_INT_SECTOR_1
#define ECU_MEM_INT_BOOT_SECTOR                    ECU_MEM_INT_SECTOR_0

#define ECU_MEM_INT_BOOT_DATA_NUM                        (64)

#define ECU_MEM_INT_DATA_NUM                             (18)

#define ECU_MEM_INT_VALID_SIGNALS_NUM               ECU_MEM_INT_DATA_NUM

#define ECU_MEM_INT_APP_VALID      (0)
#define ECU_MEM_INT_WDG_ENABLE     (1)
#define ECU_MEM_INT_XCP_ENABLE     (2)
#define ECU_MEM_INT_PREVIOUS_ENERGY_CONSUMPTION   (3)
#define ECU_MEM_INT_EEPROM_BOOTNUMBER   (4)
#define ECU_MEM_INT_CLB_NONAME_2   (5)
#define ECU_MEM_INT_CLB_NONAME_3   (6)
#define ECU_MEM_INT_CLB_NONAME_4   (7)
#define ECU_MEM_INT_CLB_NONAME_5   (8)
#define ECU_MEM_INT_CLB_NONAME_6   (9)
#define ECU_MEM_INT_CLB_NONAME_7   (10)
#define ECU_MEM_INT_CLB_NONAME_8   (11)
#define ECU_MEM_INT_DTC_NONAME_5   (12)
#define ECU_MEM_INT_DTC_NONAME_6   (13)
#define ECU_MEM_INT_DTC_BMS_FAULT   (14)
#define ECU_MEM_INT_DTC_NONAME_8   (15)
#define ECU_MEM_INT_DTC_NONAME_9   (16)
#define ECU_MEM_INT_DTC_NONAME_10   (17)

#endif /*ECU_MEM_INT_MODULE_ENABLE*/

/* Active Interface */
#define ECU_MEM_eWriteSignalValue ECU_MEM_INT_eWriteSignalValue
#define ECU_MEM_eReadSignalValue ECU_MEM_INT_eReadSignalValue


#endif /*ECU_MEM_CFG_H*/


