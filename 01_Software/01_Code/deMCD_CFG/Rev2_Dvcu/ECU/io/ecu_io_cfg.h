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
#define ECU_IO_PIN_NUM                          (3)
#define Noname_Pin_P13                       (0)
#define Noname_Pin_P14                       (1)
#define Noname_Pin_P62                       (2)


/* PWM Output Interfaces */
#define ECU_IO_POUT_NUM                         (6)
#define PWM_POUT_P16                           (0)
#define PWM_POUT_P7                           (1)
#define PWM_POUT_P12                           (2)
#define PWM_POUT_P11                           (3)
#define PWM_POUT_H                           (4)
#define PWM_POUT_P17                           (5)

#define ECU_IO_POUT_PWM_POUT_P16_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_P16_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_PWM_POUT_P7_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_P7_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_PWM_POUT_P12_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_P12_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_PWM_POUT_P11_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_P11_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_PWM_POUT_H_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_H_DEFAULT_FREQ    (200)

#define ECU_IO_POUT_PWM_POUT_P17_DEFAULT_DUTY    (50)
#define ECU_IO_POUT_PWM_POUT_P17_DEFAULT_FREQ    (200)


/* Digital Input Interfaces */
#define ECU_IO_DIN_NUM                          (19)

#define AUX_61_H_DI                     ( 0)
#define AUX_51_H_DI                     ( 1)
#define AUX_22_H_DI                     ( 2)
#define AUX_34_L_DI                     ( 3)
#define AUX_27_H_DI                     ( 4)
#define AUX_42_H_DI                     ( 5)
#define AUX_21_H_DI                     ( 6)
#define AUX_31_H_DI                     ( 7)
#define AUX_23_H_DI                     ( 8)
#define AUX_41_H_DI                     ( 9)
#define AUX_37_H_DI                     ( 10)
#define AUX_25_L_DI                     ( 11)
#define AUX_26_L_DI                     ( 12)
#define AUX_35_L_DI                     ( 13)
#define AUX_33_H_DI                     ( 14)
#define AUX_36_L_DI                     ( 15)
#define AUX_24_H_DI                     ( 16)
#define AUX_28_L_DI                     ( 17)
#define AUX_38_L_DI                     ( 18)

/* Digital Output Interfaces */
#define ECU_IO_DOUT_NUM                          (16)

#define Noname_Pin_P15                     ( 0)
#define Noname_Pin_P16                     ( 1)
#define Noname_Pin_P20                     ( 2)
#define Noname_Pin_P21                     ( 3)
#define Noname_Pin_P22                     ( 4)
#define Noname_Pin_P24                     ( 5)
#define Noname_Pin_P33                     ( 6)
#define Noname_Pin_P34                     ( 7)
#define Noname_Pin_P40                     ( 8)
#define Noname_Pin_P42                     ( 9)
#define Noname_Pin_P43                     ( 10)
#define Noname_Pin_P90                     ( 11)
#define Noname_Pin_P91                     ( 12)
#define Noname_Pin_P92                     ( 13)
#define Noname_Pin_P93                     ( 14)
#define Noname_Pin_P94                     ( 15)


/* Low Layer Interfaces */
#define ECU_IO_SPI_MODULE                      UC_SPI_MODULE_INDEX_0
#define ECU_IO_SPI_DEVICE                      UC_SPI_INDEX0_DEV_2
#define ECU_IO_INPUT_INT_PIN                   UC_DIO_INPUT_GIO18

/*Digita Outputs for internal use/ not accessed by application*/
#define ECU_IO_DOUT_INT_DIAG_HB                UC_DIO_OUTPUT_GIOHB3
#define ECU_IO_DOUT_INT_BOOT_HB                UC_DIO_OUTPUT_GIOHB2

#endif /*ECU_IO_CFG_H*/

