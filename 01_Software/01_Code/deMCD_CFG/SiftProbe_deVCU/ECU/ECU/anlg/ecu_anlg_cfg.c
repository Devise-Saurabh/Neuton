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
Erandwane,
411038, Pune,
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
    ECU_AC_PP_SIG,
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
    VCU_Aux24V_P49,
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
    Noname_Pin_P60,
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
    BCS_Temp2_Sensor_P65,
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
    TCS_Temp_SensorInlet_P67,
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
    TCS_Temp_SensorOutlet_P68,
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
    TCS_Temp_SensorInlet_P69,
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
    ECU_Voltage,
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
};

