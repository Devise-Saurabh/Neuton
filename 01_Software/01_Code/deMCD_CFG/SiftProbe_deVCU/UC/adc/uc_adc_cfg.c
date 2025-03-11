/*
***************************************************************************
***************************************************************************
(C) Copyright 2020 2021 Devise Electronics Pvt Ltd.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: uc_adc_cfg.c
Author: Karim Mansour 
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc_adc_cfg.h"
#include "uc_adc.h"

UC_ADC_strChannel_t UC_ADC_astrSignals[UC_ADC_CORE1_SIG_NUM] = 
{
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID0,
    /*Channel ID*/
    UC_ADC_CHANNEL_15,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID1,
    /*Channel ID*/
    UC_ADC_CHANNEL_23,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID2,
    /*Channel ID*/
    UC_ADC_CHANNEL_8,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID3,
    /*Channel ID*/
    UC_ADC_CHANNEL_14,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID4,
    /*Channel ID*/
    UC_ADC_CHANNEL_22,   //Power supply
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID5,
    /*Channel ID*/
    UC_ADC_CHANNEL_6,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID6,
    /*Channel ID*/
    UC_ADC_CHANNEL_13,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID7,
    /*Channel ID*/
    UC_ADC_CHANNEL_5,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID8,
    /*Channel ID*/
    UC_ADC_CHANNEL_4,          //UC_ADC_CHANNEL_12 - 4
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID9,
    /*Channel ID*/
    UC_ADC_CHANNEL_11,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID10,
    /*Channel ID*/
    UC_ADC_CHANNEL_3,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID11,
    /*Channel ID*/
    UC_ADC_CHANNEL_2,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID12,
    /*Channel ID*/
    UC_ADC_CHANNEL_10,   //     
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID13,
    /*Channel ID*/
    UC_ADC_CHANNEL_1,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID14,
    /*Channel ID*/
    UC_ADC_CHANNEL_9,   
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID15,
    /*Channel ID*/
    UC_ADC_CHANNEL_21,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID16,
    /*Channel ID*/
    UC_ADC_CHANNEL_20,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID17,
    /*Channel ID*/
    UC_ADC_CHANNEL_19,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID18,
    /*Channel ID*/
    UC_ADC_CHANNEL_18,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID19,
    /*Channel ID*/
    UC_ADC_CHANNEL_7,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID20,
    /*Channel ID*/
    UC_ADC_CHANNEL_0,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID21,
    /*Channel ID*/
    UC_ADC_CHANNEL_17
      ,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
  {
    /*Channel Index*/
    UC_ADC_CORE1_SIG_ID22,
    /*Channel ID*/
    UC_ADC_CHANNEL_12,
    /*Value*/
    (uint16_t)deMCD_DEFAULT
  },
};

UC_ADC_strModule_t UC_ADC_astrModule[UC_ADC_CORE_NUM] = 
{
  {
    /*Module Id*/
    UC_ADC_CORE1_ID,
    /*Module Id*/
    UC_ADC_OBJECT_1,
    /*Pointer to the module object*/
    &UC_ADC_astrObj[UC_ADC_OBJECT_1],
    /*Conversion frequency in Mhz*/
    10,
    /*Core size */
    UC_ADC_CORE_SIZE_16,
    /*Size of Events*/
    UC_ADC_GROUP_SIZE_2,
    /*Size of Group 1*/
    UC_ADC_GROUP_SIZE_14,
    /*Number of signals*/
    UC_ADC_CORE1_SIG_NUM,
    /*Array Signals*/
    UC_ADC_astrSignals
  }
};
