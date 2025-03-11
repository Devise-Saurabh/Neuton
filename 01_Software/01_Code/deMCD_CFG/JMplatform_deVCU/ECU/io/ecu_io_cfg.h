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

Devise Electronics Pvt Ltd
Bavdhan,
411021, Pune,
India

File Name: ecu_io_cfg.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_IO_CFG_H
#define ECU_IO_CFG_H

#define ECU_IO_MODULE_ENABLE

#define ECU_IO_SPI_EXPANDER_ENABLE
#define ECU_IO_PWM_MODULE_ENABLE

#define ECU_IO_OS_TASK_MS                       (10)

/* PWM Input Interfaces */
#define ECU_IO_PIN_NUM                          (2)
#define Noname_Pin_P56                       (0)
#define Noname_Pin_P66                       (1)


/* PWM Output Interfaces */
#define ECU_IO_POUT_NUM                         (2)
#define Noname_Pin_P59                           (0)
#define Noname_Pin_P23                           (1)

#define ECU_IO_POUT_Noname_Pin_P59_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_Noname_Pin_P59_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_Noname_Pin_P23_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_Noname_Pin_P23_DEFAULT_FREQ    (200)


/* Digital Input Interfaces */
#define ECU_IO_DIN_NUM                          (19)

#define Noname_Pin_P07                     ( 0)
#define Noname_Pin_P08                     ( 1)
#define Noname_Pin_P11                     ( 2)
#define Noname_Pin_P12                     ( 3)
#define Noname_Pin_P13                     ( 4)
#define Noname_Pin_P25                     ( 5)
#define Noname_Pin_P27                     ( 6)
#define Noname_Pin_P28                     ( 7)
#define Noname_Pin_P29                     ( 8)
#define Noname_Pin_P30                     ( 9)
#define Noname_Pin_P32                     ( 10)
#define Noname_Pin_P35                     ( 11)
#define Noname_Pin_P36                     ( 12)
#define Noname_Pin_P38                     ( 13)
#define Noname_Pin_P52                     ( 14)
#define Noname_Pin_P53                     ( 15)
#define Noname_Pin_P54                     ( 16)
#define Noname_Pin_P55                     ( 17)
#define Noname_Pin_P61                     ( 18)

/* Digital Output Interfaces */
#define ECU_IO_DOUT_NUM                          (15)

#define Noname_Pin_P15                     ( 0)
#define Noname_Pin_P16                     ( 1)
#define Noname_Pin_P17                     ( 2)
#define Noname_Pin_P20                     ( 3)
#define Noname_Pin_P21                     ( 4)
#define Noname_Pin_P22                     ( 5)
#define Noname_Pin_P24                     ( 6)
#define Noname_Pin_P33                     ( 7)
#define Noname_Pin_P34                     ( 8)
#define Noname_Pin_P40                     ( 9)
#define Noname_Pin_P41                     ( 10)
#define Noname_Pin_P42                     ( 11)
#define Noname_Pin_P43                     ( 12)
#define Noname_Pin_P44                     ( 13)
#define Noname_Pin_P78                     ( 14)


/* Low Layer Interfaces */
#define ECU_IO_SPI_MODULE                      UC_SPI_MODULE_INDEX_0
#define ECU_IO_SPI_DEVICE                      UC_SPI_INDEX0_DEV_2
#define ECU_IO_INPUT_INT_PIN                   UC_DIO_INPUT_GIO18

/*Digita Outputs for internal use/ not accessed by application*/
#define ECU_IO_DOUT_INT_DIAG_HB                UC_DIO_OUTPUT_GIOHB3
#define ECU_IO_DOUT_INT_BOOT_HB                UC_DIO_OUTPUT_GIOHB2

#endif /*ECU_IO_CFG_H*/

