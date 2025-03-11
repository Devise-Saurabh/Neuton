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

File Name: uc_spi_cfg.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_SPI_CFG_H
#define UC_SPI_CFG_H

#define UC_SPI_MODULE_ENABLE

#define UC_SPI_OS_TASK_MS                       (1)

#define UC_SPI_BUSY_TIMEOUT_MS                  (2)

#define UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ       (UC_SYSTEM_FREQUENCY_MHZ/2)
#define UC_SPI_BUS_FREQUENCY_KHZ                (500U)
#define UC_SPI_CS_LEAD_CLK_CYCLES               (1U)
#define UC_SPI_CS_LAG_CLK_CYCLES                (1U)

#define UC_SPI_MODULE_NUM                          (1)

#define UC_SPI_MODULE_INDEX_0                      (0)


/* SPI INDEX 0 CONFIGURATIONS */
#define UC_SPI_INDEX0_DEVICES_NUM                  (3)

#define UC_SPI_INDEX0_DEV_0                        (0)
#define UC_SPI_INDEX0_DEV_1                        (1)
#define UC_SPI_INDEX0_DEV_2                        (2)
#define UC_SPI_INDEX0_DEV_3                        (3)
#define UC_SPI_INDEX0_DEV_4                        (4)



/* MAP THE HARDWARE AND THE SOFTWARE MODULES FOR INTERRUPTS */
#ifdef UC_SPI_MODULE_INDEX_0
  #define UC_SPI_MIBSPI3_SW_SPI_MODULE            UC_SPI_MODULE_INDEX_0
#endif /*UC_CAN_MODULE_INDEX_0*/

//#define PATCH_BUG_SPI_8BIT

#endif /*UC_SPI_CFG_H*/
