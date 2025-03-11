/*
***************************************************************************
***************************************************************************
(C) Devise electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt. Ltd

Devise Electronics Pvt. Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: uc_dio_cfg.c
Author: deMCD Generated 
E-mail: N/A 
***************************************************************************
***************************************************************************
*/

#include "uc_dio_cfg.h"
#include "uc_dio.h"


UC_DIO_strModule_t UC_DIO_astrOutput[UC_DIO_OUTPUT_NUM] = 
{
  {
    /*DIO Index*/
    UC_DIO_OUTPUT_GIO0,
    /*Module Id*/
    UC_DIO_MODULE_GIOA,
    /*Pin Id*/
    UC_DIO_PIN_2,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_GIOA],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO1,
    /*Module Id*/
    UC_DIO_MODULE_GIOA,
    /*Pin Id*/
    UC_DIO_PIN_5,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_GIOA],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO3,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI5,
    /*Pin Id*/
    UC_DIO_SPI_CS0,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI5],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO4,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_15,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO5,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI3,
    /*Pin Id*/
    UC_DIO_SPI_EN,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI3],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO6,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_SIMO,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO7,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_SOMI,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO8,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_CLK,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO9,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_EN,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_UP_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO10,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI5,
    /*Pin Id*/
    UC_DIO_SPI_EN,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI5],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_UP_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO11,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_CS0,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO12,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_8,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO13,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_10,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO14,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_14,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO15,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_30,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO17,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_16,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO19,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_18,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO20,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_20,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO21,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_12,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO22,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_28,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO24,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI5,
    /*Pin Id*/
    UC_DIO_SPI_CLK,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI5],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIOHB1,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI5,
    /*Pin Id*/
    UC_DIO_SPI_SOMI,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI5],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIOHB2,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_24,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIOHB3,
    /*Module Id*/
    UC_DIO_MODULE_NHET1,
    /*Pin Id*/
    UC_DIO_PIN_26,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_NHET1],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIOHB4,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI5,
    /*Pin Id*/
    UC_DIO_SPI_SIMO,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI5],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_OUTPUT_GIO23,
    /*Module Id*/
    UC_DIO_MODULE_AD1EVT,
    /*Pin Id*/
    UC_DIO_PIN_0,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_AD1EVT],
    /*Pin DIrection*/
    UC_DIO_DIR_OUTPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
};

UC_DIO_strModule_t UC_DIO_astrInput[UC_DIO_INPUT_NUM] = 
{
  {
    /*DIO Id*/
    UC_DIO_INPUT_GIO2,
    /*Module Id*/
    UC_DIO_MODULE_GIOA,
    /*Pin Id*/
    UC_DIO_PIN_6,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_GIOA],
    /*Pin DIrection*/
    UC_DIO_DIR_INPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_TRUE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_GIOA6,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_NEG_EDGE,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_INPUT_GIO16,
    /*Module Id*/
    UC_DIO_MODULE_MIBSPI1,
    /*Pin Id*/
    UC_DIO_SPI_CS1,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_MIBSPI1],
    /*Pin DIrection*/
    UC_DIO_DIR_INPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_FALSE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_NOT_USED,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_TRIGGER_NA,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
  {
    /*DIO Id*/
    UC_DIO_INPUT_GIO18,
    /*Module Id*/
    UC_DIO_MODULE_GIOA,
    /*Pin Id*/
    UC_DIO_PIN_7,
    /*Pointer to the module object*/
    &UC_DIO_astrObj[UC_DIO_MODULE_GIOA],
    /*Pin DIrection*/
    UC_DIO_DIR_INPUT,
    /*Pin Mode*/
    UC_DIO_PUSH_PULL_MODE,
    /*Pull functionality enable/disable*/
    UC_DIO_PULL_FCN_ENABLE,
    /*Pull mode if any */
    UC_DIO_PULL_DOWN_MODE,
    /*Interrupt Enable/Disable*/
    deMCD_TRUE,
    /*Interrupt Priority*/
    UC_DIO_INT_PRIORITY_LOW,
    /*Input Pin Interrupt Id */
    UC_DIO_INT_INPUT_GIOA7,
    /*Interrupt Trigger*/
    UC_DIO_INPUT_NEG_EDGE,
    /*Interrupt Callback */
    deMCD_NULL,
    /* Value */
    deMCD_DEFAULT,
  },
};
