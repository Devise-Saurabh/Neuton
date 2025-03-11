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

File Name: ecu_anlg_cfg.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_anlg_cfg.h"
#include "ecu_anlg.h"

ECU_ANLG_strSignal_t ECU_ANLG_astrSignal[ECU_ANLG_SIG_NUM] = 
{
  {
    /*Signal Id*/
    ADC_5v_P60,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID2    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P30,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID8    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P29,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID9    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P69,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID0    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P59,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID1    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P49,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID3    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P50,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID5    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    Power_Supply24v,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID4    ,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P39,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID6,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P40,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID7,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P73,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID12,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P75,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID10,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P74,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID11,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P72,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID13,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P71,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID14,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P80,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID15,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P79,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID16,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P78,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID17,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P77,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID18,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P76,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID19,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    ADC_5v_P70,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID20,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    Temp_Sensor1,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID21,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
  {
    /*Signal Id*/
    Temp_Sensor2,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,    
    /*Tester Controlled Physical Value*/
    deMCD_DEFAULT,  
    /*ADC Id*/
    UC_ADC_CORE1_SIG_ID22,
    /*Raw Value*/
    deMCD_DEFAULT,
    /*Physical Value*/
    deMCD_DEFAULT,
    /*Resolution Num*/
    100,
    /*Resolution Den*/
    1023,
    /*Offset Num*/
    0,
    /*Offset Den*/
    1,
    /*Unit*/
    "%",
  },
};

