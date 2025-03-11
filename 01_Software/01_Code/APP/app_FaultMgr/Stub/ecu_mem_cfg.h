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

File Name: ecu_mem_cfg.h
Author: TAPAS Generated 
E-mail: N/A 
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

#define ECU_MEM_INT_DATA_NUM                             (8)

#define ECU_MEM_INT_VALID_SIGNALS_NUM               ECU_MEM_INT_DATA_NUM

#define ECU_MEM_INT_APP_VALID      (0)
#define ECU_MEM_INT_WDG_ENABLE     (1)
#define ECU_MEM_INT_XCP_ENABLE     (2)
#define ECU_MEM_INT_MOTDRVGTQMAX   (3)
#define ECU_MEM_INT_WHEEL_RADIUS   (4)
#define ECU_MEM_INT_FINAL_DRIVE_RATIO   (5)
#define ECU_MEM_INT_TESTDTC0   (6)
#define ECU_MEM_INT_TESTDTC1   (7)

#endif /*ECU_MEM_INT_MODULE_ENABLE*/

/* Active Interface */
#define ECU_MEM_eWriteSignalValue ECU_MEM_INT_eWriteSignalValue
#define ECU_MEM_eReadSignalValue ECU_MEM_INT_eReadSignalValue


#endif /*ECU_MEM_CFG_H*/


