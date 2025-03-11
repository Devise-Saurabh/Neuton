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

File Name: uc_pwm.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_pwm_cfg.h"
#include "uc_pwm.h"

#ifdef UC_PWM_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"
#include "math.h"

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

#define UC_PWM_PIN_SKIP_READING           (3) 

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

UC_PWM_INSTRUCTION_PROGRAM_t UC_PWM_astrProgramInstruction[UC_PWM_PIN_AVAILABLE + UC_PWM_POUT_AVAILABLE + 1] = 
{
  {//1 Counter and Magnitude Compare PO0
    {
      0x02C20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x04000,
      0x4048,
      0x0,
      0x0,      
    },
  },
  {//2 Counter and Magnitude Compare PO1
    {
      0x06C20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x08000,
      0x8048,
      0x0,
      0x0,      
    },
  },
  {//3 Counter and Magnitude Compare PO2
    {
      0x0AC20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x0C000,
      0xC048,
      0x0,
      0x0,      
    },
  },
  {//4 Counter and Magnitude Compare PO3
    {
      0x0EC20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x10000,
      0x10048,
      0x0,
      0x0,      
    },
  },
  {//5 Counter and Magnitude Compare PO4
    {
      0x12C20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x14000,
      0x14048,
      0x0,
      0x0,      
    },
  },
  {//6 Counter and Magnitude Compare PO5
    {
      0x16C20,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x18000,
      0x18048,
      0x0,
      0x0,      
    },
  },
  {//7 PCNT for Frequency and Duty Cycle PI0
    {
      0x1AE00,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x1CE20,
      0x0,
      0x0,
      0x0,      
    },
  },
  {//8 PCNT for Frequency and Duty Cycle PI1
    {
      0x1EE00,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x20E20,
      0x0,
      0x0,
      0x0,      
    },
  },
  {//9 PCNT for Frequency and Duty Cycle PI2
    {
      0x22E00,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x24E20,
      0x0,
      0x0,
      0x0,      
    },
  },
  {//10 PCNT for Frequency and Duty Cycle PI3
    {
      0x26E00,
      0x0,
      0x0,
      0x0,      
    },
    {
      0x28E20,
      0x0,
      0x0,
      0x0,      
    },
  },  
  {//11 Jump to Loop Start
    { // Branch back to beginning .. BR instruction
      0x00001A00,
      0x00000000,
      0x00000000,
      0x00000000, 
    },
    { // Redundant instrucion .. will not be executed
      0x0,
      0x0,
      0x0,
      0x0,
    },  
  }
};

float UC_PWM_fltLRP_Frequency = 0;
float UC_PWM_fltLRP_Time = 0;
uint8_t UC_PWM_u8ReadyFlag = 0;

  uint8_t u8DebugCounter = 0;

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/


extern UC_PWM_PIN_strPin_t UC_PWM_PIN_astrPin[UC_PWM_PIN_AVAILABLE];
extern UC_PWM_POUT_strPin_t UC_PWM_POUT_astrPin[UC_PWM_POUT_AVAILABLE];


/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/

STATUS_t local_UC_PWM_PIN_ReadFrequencyDutyCycle(uint8_t u8PinId);

/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_PWM_vdInit(void)
{
  uint8_t u8LoopCounter;
  float fltFrequTempVar = 0.0;
  uint32_t u32FrequTempVar3 = 0;
  uint32_t u32DutyCycleCount = 0;
  float fltDutyCycleTempVar = 0.0;
  uint8_t u8Temp = (UC_PWM_SYSTEM_INPUT_FREQUENCY_MHZ);
  UC_PWM_fltLRP_Time = UC_PWM_LR;
  UC_PWM_fltLRP_Time = (float)(UC_PWM_fltLRP_Time / u8Temp); //2.5 MHz == 0.4 MicroSec
  UC_PWM_fltLRP_Time = UC_PWM_fltLRP_Time*1e-6;
  UC_PWM_fltLRP_Frequency = UC_PWM_LR;
  UC_PWM_fltLRP_Frequency = (float)(u8Temp / UC_PWM_fltLRP_Frequency); //2.5 MHz == 0.4 MicroSec    
  UC_PWM_fltLRP_Frequency = UC_PWM_fltLRP_Frequency*1e6;    
//  float fltFrequTempVar2 = 0.0; Uncomment for frequency error calculation
//  uint32_t u32FrequTempVar4 = 0; Uncomment for frequency error calculation
//  uint32_t u32FrequTempVar5 = 0; Uncomment for frequency error calculation
  HET1GCR |= 0U;  
  HET1PFR = UC_PWM_LRPFC << 8U;  

  // Initialize NHET Instructions for Pout
  for(u8LoopCounter = 0; u8LoopCounter < UC_PWM_POUT_NUM; u8LoopCounter++)
  {
    /*Enable PWM output pin*/
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION.PWM_NHET_CONTROL_WORD |= (1U << 22);
    /*Select PWM output Pin*/
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION.PWM_NHET_CONTROL_WORD |= (UC_PWM_POUT_astrPin[u8LoopCounter].u8NhetID << 8);
    /*Counter Instructions for Frequency Generation*/
    fltFrequTempVar = (float) UC_PWM_POUT_astrPin[u8LoopCounter].u32FrequencyHz;
    fltFrequTempVar = (float)(1 / fltFrequTempVar);
    fltFrequTempVar = (fltFrequTempVar / UC_PWM_fltLRP_Time);
    u32FrequTempVar3 = (uint32_t) fltFrequTempVar; // Number of counts loaded to CNT instruction
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_FREQUENCY_OR_COUNTER_INSTRUCTION.PWM_NHET_CONTROL_WORD = (u32FrequTempVar3);
//    /*Calculate Error in Frequency between Desired and Output*/
//    fltFrequTempVar2 = UC_PWM_fltLRP_Time / u32FrequTempVar3;
//    u32FrequTempVar4 = (uint32_t) fltFrequTempVar2;
//    u32FrequTempVar5 = UC_PWM_POUT_astrPin[u8LoopCounter].u32FrequencyHz;
//    UC_PWM_POUT_astrPin[u8LoopCounter].u32FreqError = (u32FrequTempVar4 - u32FrequTempVar5);
    /*Magnitude Compare for Duty Cycle Generation*/
    fltDutyCycleTempVar = (float) UC_PWM_POUT_astrPin[u8LoopCounter].u8DutyCycle;
    fltDutyCycleTempVar = (float) (fltDutyCycleTempVar / 100 );
    u32DutyCycleCount = (uint32_t)(fltDutyCycleTempVar * (u32FrequTempVar3 + 1)); // because counting starts from 0 in co-processor
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION.PWM_NHET_DATA_WORD = u32DutyCycleCount << 7U;
    /*Clear Variables*/
    fltFrequTempVar = 0.0;
    u32FrequTempVar3 = 0.0;
//    fltFrequTempVar2 = 0.0; Uncomment for frequency error calculation    
//    u32FrequTempVar4 = 0; Uncomment for frequency error calculation
//    u32FrequTempVar5 = 0; Uncomment for frequency error calculation
  }
    
  
  // Initialize NHET Instructions for Pin
  for(u8LoopCounter = 6; u8LoopCounter < UC_PWM_PIN_NUM + 6; u8LoopCounter++)
  {
    /*Frequency Instructions*/
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_FREQUENCY_OR_COUNTER_INSTRUCTION.PWM_NHET_PROGRAM_WORD |= UC_PWM_PIN_astrPin[u8LoopCounter - 6].u8NhetID;
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_FREQUENCY_OR_COUNTER_INSTRUCTION.PWM_NHET_PROGRAM_WORD |= UC_PWM_PIN_astrPin[u8LoopCounter - 6].eFrequTrig << 6U; 
    /*Duty Cycle Instructions*/
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION.PWM_NHET_PROGRAM_WORD |= UC_PWM_PIN_astrPin[u8LoopCounter - 6].u8NhetID;
    UC_PWM_astrProgramInstruction[u8LoopCounter].UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION.PWM_NHET_PROGRAM_WORD |= UC_PWM_PIN_astrPin[u8LoopCounter - 6].eDutyTrig << 6U; 
  }  
  /*Copy instructions to NHET memory*/  
  memcpy((void*)UC_PWM_POUT_NHET_MEMORY_START, UC_PWM_astrProgramInstruction, sizeof(UC_PWM_astrProgramInstruction));	
  
  /*IOMM Configure for NHET19*/
  IOMM_PINMMR08 |= 1 << 9;
  IOMM_PINMMR08 &= ~(1 << 8);
  IOMM_PINMMR24 &= ~(1 << 24);
  /*Input Pins Configuration*/
  HET1PULDIS |= 0U << 19;
  HET1PSL |= 0U << 19;
  HET1PULDIS |= 0U << 4;
  HET1PSL |= 0U << 4;
  HET1PULDIS |= 0U << 9;
  HET1PSL |= 0U << 9;
  HET1PULDIS |= 0U << 7;
  HET1PSL |= 0U << 7;
  HET1DIR |= (0U << 19);
  HET1DIR |= (0U << 4);
  HET1DIR |= (0U << 9);
  HET1DIR |= (0U << 7);
  /*Output Pins Configuration*/
  HET1PULDIS |= 0U << 1;
  HET1PSL |= 1U << 1;
  HET1PULDIS |= 0U << 22;
  HET1PSL |= 1U << 22;
  HET1PULDIS |= 0U << 3;
  HET1PSL |= 1U << 3;
  HET1PULDIS |= 0U;
  HET1PSL |= 1U;
  HET1PULDIS |= 0U << 2;
  HET1PSL |= 1U << 2;
  HET1PULDIS |= 0U << 5;
  HET1PSL |= 1U << 5;
  HET1DIR |= (1U << 22);
  HET1DIR |= (1U << 1);
  HET1DIR |= (1U << 3);
  HET1DIR |= (1U);
  HET1DIR |= (1U << 2);
  HET1DIR |= (1U << 5);

  /*N2HEt1 Module Configuration*/
  HET1GCR |= 1U << 18; /* Protect Program field 	*/
  HET1GCR |= 1U << 17; /* Ignore Suspend			*/
  HET1GCR |= 1U << 16; /* NHET is master			*/ 
  HET1GCR |= 1U; /* Turn NHET on				*/                                    
}

void UC_PWM_vdPoutMgr(void)
{

}

void UC_PWM_vdPinMgr(void)
{

  uint8_t u8ReadCounter;
  if (UC_PWM_u8ReadyFlag == 0)
  {
    for(u8ReadCounter = 0; u8ReadCounter < UC_PWM_PIN_SKIP_READING; u8ReadCounter++)
    {
      local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_0);
      local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_1);
      local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_2); 
      local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_3);
      u8ReadCounter++;
    }
    UC_PWM_u8ReadyFlag = 1;
  }
  else
  {
    local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_0);
    local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_1);
    local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_2); 
    local_UC_PWM_PIN_ReadFrequencyDutyCycle(UC_PWM_PIN_ID_3);    
  }	
}

STATUS_t UC_PWM_PIN_eRead(uint8_t u8PinId, uint32_t* pu32FreqHz, uint8_t* pu8DutyCycle)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8PinId < UC_PWM_PIN_AVAILABLE)
  {
    if(UC_PWM_u8ReadyFlag == 0)
    {
      eStatus = STATUS_BUSY;
      return eStatus;  
    }
    else
    {
      *pu32FreqHz = (uint32_t) UC_PWM_PIN_astrPin[u8PinId].u32FrequMeasured;
      *pu8DutyCycle = UC_PWM_PIN_astrPin[u8PinId].u8DutyCycleMeasured;
      eStatus = STATUS_OK;
    }
  }  
  return eStatus;  
}

STATUS_t UC_PWM_POUT_eFrequencyChange(uint8_t u8PinId, uint32_t u32Frequency)
{
  if(UC_PWM_POUT_astrPin[u8PinId].u8TesterControl == deMCD_TRUE || UC_PWM_POUT_astrPin[u8PinId].u8TesterFreeze == deMCD_TRUE)
  {
    u32Frequency = UC_PWM_POUT_astrPin[u8PinId].u16TesterControlledFrequencyHz;
  }
  STATUS_t eStatus = STATUS_NOK;
  float fltFrequTempVar = 0.0;
  uint32_t u32FrequTempVar2 = 0;
  uint32_t u32FrequTempVar3 = 0;    
  uint32_t u32DutyCycle = 0;
  float fltDutyCycleTempVar = 0.0;  
  uint32_t* pu32MemoryLocationData_DutyCycle = (uint32_t*)UC_PWM_POUT_astrPin[u8PinId].u32DutyCycleMemory;
  uint32_t* pu32MemoryLocationControl_Frequency = (uint32_t*)UC_PWM_POUT_astrPin[u8PinId].u32FrequMemoryControlField;
  uint32_t u32MemoryLocationData_Frequency = UC_PWM_POUT_astrPin[u8PinId].u32FrequMemoryDataField;
  if(u8PinId < UC_PWM_POUT_AVAILABLE)
  {
    HET1GCR |= 0U; /* Turn NHET off				*/       
    UC_PWM_POUT_astrPin[u8PinId].u32FrequencyHz = u32Frequency;
    /*Counter Instructions for Frequency Generation*/
    fltFrequTempVar = (float) u32Frequency;
    fltFrequTempVar = (float)(1 / fltFrequTempVar);
    fltFrequTempVar = (fltFrequTempVar / UC_PWM_fltLRP_Time);
    u32FrequTempVar2 = (uint32_t) fltFrequTempVar; // Number of counts loaded to CNT instruction
    u32FrequTempVar2 = u32FrequTempVar2;// - 1; 
    /*Memcpy is used here to clear control data field of CNT instruction*/
    memcpy((uint32_t*)u32MemoryLocationData_Frequency, &u32FrequTempVar3, sizeof(u32FrequTempVar3));    
    *pu32MemoryLocationControl_Frequency = u32FrequTempVar2;
    /*Magnitude Compare Instruction value to maintain same duty cycle ratio to frequency*/
    fltDutyCycleTempVar = (float) (UC_PWM_POUT_astrPin[u8PinId].u8DutyCycle);
    fltDutyCycleTempVar = (float) (fltDutyCycleTempVar / 100);
    u32DutyCycle = (uint32_t) (fltDutyCycleTempVar * (u32FrequTempVar2 + 1)); // because counting starts from 0 in co-processor
    u32DutyCycle = u32DutyCycle << 7U;
    *pu32MemoryLocationData_DutyCycle = u32DutyCycle;
    HET1GCR |= 1U; /* Turn NHET on				*/       
    eStatus = STATUS_OK;
  }
    return eStatus;
}

STATUS_t UC_PWM_POUT_eDutyCycleChange(uint8_t u8PinId, uint8_t u8DutyCycle)
{
  if(UC_PWM_POUT_astrPin[u8PinId].u8TesterControl == deMCD_TRUE || UC_PWM_POUT_astrPin[u8PinId].u8TesterFreeze == deMCD_TRUE)
  {
    u8DutyCycle = UC_PWM_POUT_astrPin[u8PinId].u8TesterControlledDutyCycle;
  }  
  STATUS_t eStatus = STATUS_NOK;
  float fltDutyCycleTempVar = 0.0;
  uint32_t u32DutyCycle = 0;
  float fltFrequTempVar = 0.0;
  uint32_t u32FrequTempVar2 = 0;
  uint32_t* pu32MemoryLocationData = (uint32_t*)UC_PWM_POUT_astrPin[u8PinId].u32DutyCycleMemory;
  if(u8PinId < UC_PWM_POUT_NUM)
  {
    /*Load structure duty cycle value with new value*/
    UC_PWM_POUT_astrPin[u8PinId].u8DutyCycle = u8DutyCycle;
    /*Counter Value corresponding to Frequency*/
    fltFrequTempVar = (float) UC_PWM_POUT_astrPin[u8PinId].u32FrequencyHz;
    fltFrequTempVar = (float)(1 / fltFrequTempVar);
    fltFrequTempVar = (fltFrequTempVar / UC_PWM_fltLRP_Time);
    u32FrequTempVar2 = (uint32_t) fltFrequTempVar; // Number of counts loaded to CNT instruction - 1; because counting starts from 0 in co-processor
    fltDutyCycleTempVar = (float) (u8DutyCycle);
    fltDutyCycleTempVar = (float) (fltDutyCycleTempVar / 100);
    u32DutyCycle = (uint32_t) (fltDutyCycleTempVar * (u32FrequTempVar2 + 1)); // because counting starts from 0 in co-processor
    u32DutyCycle = u32DutyCycle << 7U;
    *pu32MemoryLocationData = (u32DutyCycle);// + 1);
    eStatus = STATUS_OK;
  }
  return eStatus;
}

STATUS_t UC_PWM_POUT_eResetToDefault(uint8_t u8PinId)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8PinId < UC_PWM_POUT_AVAILABLE)
  {
    UC_PWM_POUT_eFrequencyChange(u8PinId, deMCD_DEFAULT);
    UC_PWM_POUT_eDutyCycleChange(u8PinId, deMCD_DEFAULT);
    eStatus = STATUS_OK;
  }  
  return eStatus;   
}

STATUS_t UC_PWM_POUT_eFreezeCurrentState(uint8_t u8PinId)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8PinId < UC_PWM_POUT_AVAILABLE)
  {
    UC_PWM_POUT_astrPin[u8PinId].u8TesterFreeze = deMCD_TRUE;
    UC_PWM_POUT_astrPin[u8PinId].u16TesterControlledFrequencyHz = UC_PWM_POUT_astrPin[u8PinId].u32FrequencyHz;
    UC_PWM_POUT_astrPin[u8PinId].u8TesterControlledDutyCycle = UC_PWM_POUT_astrPin[u8PinId].u8DutyCycle;
    eStatus = STATUS_OK;
  }  
  return eStatus;   
}

STATUS_t UC_PWM_POUT_eReturnControlToECU(uint8_t u8PinId)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8PinId < UC_PWM_POUT_AVAILABLE)
  {
    UC_PWM_POUT_astrPin[u8PinId].u8TesterControl = deMCD_FALSE;
    UC_PWM_POUT_astrPin[u8PinId].u8TesterFreeze = deMCD_FALSE;
    eStatus = STATUS_OK;
  }  
  return eStatus;   
}

STATUS_t UC_PWM_POUT_eAdjustPinValue(uint8_t u8PinId, uint16_t u16Freq, uint8_t u8DutyCycle)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8PinId < UC_PWM_POUT_AVAILABLE)
  {
    UC_PWM_POUT_astrPin[u8PinId].u8TesterControl = deMCD_TRUE;
    UC_PWM_POUT_astrPin[u8PinId].u16TesterControlledFrequencyHz = u16Freq;
    UC_PWM_POUT_astrPin[u8PinId].u8TesterControlledDutyCycle = u8DutyCycle;
    UC_PWM_POUT_eFrequencyChange(u8PinId,u16Freq);
    UC_PWM_POUT_eDutyCycleChange(u8PinId,u8DutyCycle);
    eStatus = STATUS_OK;
  }  
  return eStatus;   
}

/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

STATUS_t local_UC_PWM_PIN_ReadFrequencyDutyCycle(uint8_t u8PinId)
{
  STATUS_t eStatus = STATUS_NOK;
  /*Variables used*/
  uint8_t u8LoopCounter;
  uint32_t u32Frequency_Data;
  uint32_t u32Frequency_Control;
  float fltFrequencyCaptured;
  uint32_t u32Duty_Data;
  float fltDutyCaptured;
  uint32_t u32FrequencyTempVar;
  uint32_t u32FrequencyTempVar2;
  uint32_t u32FrequencyTempVar3;
  float fltFrequencyTempVar4;
  float fltFrequencyTempVar5;
  uint32_t u32DutyTempVar;
  uint32_t u32DutyTempVar2;
  uint32_t u32DutyTempVar3;
  float fltDutyTempVar4;
  float fltDutyTempVar5;
  float fltLRP = UC_PWM_LR;
  uint8_t u8Temp = UC_PWM_SYSTEM_INPUT_FREQUENCY_MHZ;
  fltLRP = (float)(fltLRP / u8Temp); //2.5 MHz == 0.4 MicroSec
  float fltHRP = (float) 1 / u8Temp; //80 MHz == 12.5 NanoSec
  uint8_t u8HRValue;
  uint8_t u8MaxCount;
  uint8_t u8ShiftBits;
  uint32_t* pu32FreqMem_Data;  
  uint32_t* pu32FreqMem_Control;
  uint32_t* pu32DutyMem_Data;
//  uint32_t u32MaxFrequCount;
  float fltMinFrequTempVar;
  uint32_t u32MinFrequCount;
  uint8_t u8LogicBit;
  uint32_t u32MaxFreq;
  uint32_t u32MinFreq;
  switch (u8PinId)
  {
  case 0:
    u32MaxFreq = UC_PWM_PI0_MAX_FREQ;
    u32MinFreq = UC_PWM_PI0_MIN_FREQ; 
    fltMinFrequTempVar = (float)UC_PWM_PI0_MIN_FREQ;
    break;
  case 1:
    u32MaxFreq = UC_PWM_PI0_MAX_FREQ;
    u32MinFreq = UC_PWM_PI0_MIN_FREQ;     
    fltMinFrequTempVar = (float)UC_PWM_PI1_MIN_FREQ;
    break;
  case 2:
    u32MaxFreq = UC_PWM_PI0_MAX_FREQ;
    u32MinFreq = UC_PWM_PI0_MIN_FREQ;     
    fltMinFrequTempVar = (float)UC_PWM_PI2_MIN_FREQ;      
    break;
  case 3:
    u32MaxFreq = UC_PWM_PI0_MAX_FREQ;
    u32MinFreq = UC_PWM_PI0_MIN_FREQ;     
    fltMinFrequTempVar = (float)UC_PWM_PI3_MIN_FREQ;      
    break;      
  default:
    break;  
  }
//  /*Calculating counts corresponding to maximum frequency*/
//  fltMaxFrequTempVar = (float)(1 / fltMaxFrequTempVar);
//  fltMaxFrequTempVar = (fltMaxFrequTempVar / UC_PWM_fltLRP_Time);
//  u32MaxFrequCount = (uint32_t) fltMaxFrequTempVar; // Number of counts corresponding to Max freq
  /*Calculating counts corresponding to minimum frequency*/
  fltMinFrequTempVar = (float)(1 / fltMinFrequTempVar);
  fltMinFrequTempVar = (fltMinFrequTempVar / UC_PWM_fltLRP_Time);
  u32MinFrequCount = (uint32_t) fltMinFrequTempVar; // Number of counts corresponding to Min freq
  
  if(u8PinId < UC_PWM_PIN_NUM)
  {    
    /*Determining Shift bits and Max count value according to Prescale factor encoding Table 20-5*/
    switch (UC_PWM_LR)
    {
    case 128:
      u8MaxCount = 7U;
      u8ShiftBits = 0U;
      break;
 
    case 64:
      u8MaxCount = 6U;
      u8ShiftBits = 1U;
      break;      
      
    case 32:
      u8MaxCount = 5U;
      u8ShiftBits = 2U;
      break;            
      
    case 16:
      u8MaxCount = 4U;
      u8ShiftBits = 3U;
      break;            
      
    case 8:
      u8MaxCount = 3U;
      u8ShiftBits = 4U;
      break;            
      
    case 4:
      u8MaxCount = 2U;
      u8ShiftBits = 5U;
      break;            
      
    case 2:
      u8MaxCount = 1U;
      u8ShiftBits = 6U;
      break;            
      
    case 1:
      u8MaxCount = 0U;
      u8ShiftBits = 7U;
      break;            
    default:
      break;
      
    }
    /*Assigning memory location to variables*/
    pu32FreqMem_Data = (uint32_t*)UC_PWM_PIN_astrPin[u8PinId].u32MemAddress;
    pu32FreqMem_Control = (uint32_t*)(UC_PWM_PIN_astrPin[u8PinId].u32MemAddress - 0x4U); // read same memory address control field
    pu32DutyMem_Data = (uint32_t*)(UC_PWM_PIN_astrPin[u8PinId].u32MemAddress + 16U); // read next memory address data field
    //pu32DutyMem_Control = (uint32_t*)(((UC_PWM_PIN_astrPin[u8PinId].u32MemAddress) - 0x4U) + 16U); // read next memory address control field
    
    /*Read frequency value from memory*/
    u32Frequency_Data = *pu32FreqMem_Data;
    u32Frequency_Control = *pu32FreqMem_Control;
    
    /*Extracting counter value*/
    u32Frequency_Control = u32Frequency_Control & (0xFFFFFF);
    /*Check if the counter value exceeds the limt*/
    if(u32Frequency_Control > (2 * u32MinFrequCount))
    {
      u8LogicBit = (HET1DIN >> UC_PWM_PIN_astrPin[u8PinId].u8NhetID) & (0x1);
      if(u8LogicBit == 0)
      {
        UC_PWM_PIN_astrPin[u8PinId].u32FrequMeasured = 0;
        UC_PWM_PIN_astrPin[u8PinId].u8DutyCycleMeasured = 0;
        eStatus = STATUS_OK;
        return eStatus;        
      }
      else if (u8LogicBit == 1)
      {
        UC_PWM_PIN_astrPin[u8PinId].u32FrequMeasured = 0;
        UC_PWM_PIN_astrPin[u8PinId].u8DutyCycleMeasured = 100;
        eStatus = STATUS_OK;
        return eStatus;        
      }
    }
    /*Converting HR value to decimal value*/
    u32FrequencyTempVar = (u32Frequency_Data & (0xFFFFFF80U)); // Extract Data bits
    u32FrequencyTempVar = (uint32_t)u32FrequencyTempVar >> 7U; // Shift Data bits to get correct value   
    u32FrequencyTempVar2 =  (uint32_t)u32Frequency_Data & (0x7F); // Extract HR Data bits
    u32FrequencyTempVar2 =  u32FrequencyTempVar2 >> u8ShiftBits; // Remove D[0] and D[1] since lr = 32
    fltFrequencyTempVar4 = (float)(u32FrequencyTempVar+1)*fltLRP; // Calculate Frequency value wrt Data bits only
    u8HRValue = UC_PWM_LR;
    
    for(u8LoopCounter = 0; u8LoopCounter < u8MaxCount; u8LoopCounter++) // Loop to calculate Frequency value wrt HR Data bits only
    {
      u32FrequencyTempVar3 = (uint32_t)u32FrequencyTempVar2 & (1U);
      fltFrequencyTempVar5 = fltFrequencyTempVar5 + ((float)u32FrequencyTempVar3/(float)u8HRValue);
      u8HRValue = u8HRValue / 2;
      u32FrequencyTempVar2 = (uint32_t)u32FrequencyTempVar2 >> 1U;
    }
    fltFrequencyTempVar5 = fltFrequencyTempVar5 * UC_PWM_LR * fltHRP;
    fltFrequencyCaptured = (fltFrequencyTempVar4 + (fltFrequencyTempVar5/1000));  
    fltFrequencyCaptured = fltFrequencyCaptured * (1e-6); // Calculate exact Frequency value in MicroSeconds
    if (fltFrequencyCaptured == 0) // Check if measured value is 0 to avoid "1/0" calculation
    {
      u32Frequency_Data = 0;
      u32FrequencyTempVar2=0;
      u32FrequencyTempVar3=0;
      fltFrequencyTempVar4=0;
      fltFrequencyTempVar5=0; 
    }
    else
    {
      fltFrequencyCaptured = 1/fltFrequencyCaptured; // Calculate exact Frequency value in Herz
      /*Check on measured signal frequency is within specified range*/
      if((fltFrequencyCaptured < u32MinFreq) || (fltFrequencyCaptured == u32MinFreq) || (fltFrequencyCaptured > u32MaxFreq) || (fltFrequencyCaptured == u32MaxFreq))
      {
        UC_PWM_PIN_astrPin[u8PinId].u32FrequMeasured = 0;
        UC_PWM_PIN_astrPin[u8PinId].u8DutyCycleMeasured = 0;
        eStatus = STATUS_OK;
        return eStatus;
      }
      u32Frequency_Data = 0;
      u32FrequencyTempVar2=0;
      u32FrequencyTempVar3=0;
      fltFrequencyTempVar4=0;
      fltFrequencyTempVar5=0; 
    }
    
    /*Read duty cycle value from memory*/
    u32Duty_Data = *pu32DutyMem_Data;
    //u32Duty_Control = *pu32DutyMem_Control;
    
    /*Converting HR value to decimal value*/
    u8LoopCounter = 0;;
    u32DutyTempVar = (u32Duty_Data & (0xFFFFFF80U));
    u32DutyTempVar = (uint32_t)u32DutyTempVar >> 7U;
    u32DutyTempVar2 =  (uint32_t)u32Duty_Data & (0x7F);
    u32DutyTempVar2 =  u32DutyTempVar2 >> u8ShiftBits;    
    fltDutyTempVar4 = (float)(u32DutyTempVar)*fltLRP;
    u8HRValue = 32U;
    for(u8LoopCounter = 0; u8LoopCounter < u8MaxCount; u8LoopCounter++)
    {
      u32DutyTempVar3 = (uint32_t)u32DutyTempVar2 & (1U);
      fltDutyTempVar5 = fltDutyTempVar5 + ((float)u32DutyTempVar3/(float)u8HRValue);
      u8HRValue = u8HRValue / 2;
      u32DutyTempVar2 = (uint32_t)u32DutyTempVar2 >> 1U;
    }
    fltDutyTempVar5 = fltDutyTempVar5 * UC_PWM_LR * fltHRP;
    fltDutyCaptured = (fltDutyTempVar4 + (fltDutyTempVar5/1000));  
    fltDutyCaptured = fltDutyCaptured * (1e-6);
    if(fltDutyCaptured == 0)
    {
      u32Duty_Data = 0;
      u32DutyTempVar2=0;
      u32DutyTempVar3=0;
      fltDutyTempVar4=0;
      fltDutyTempVar5=0;  
    }
    else
    {
      fltDutyCaptured = 1/fltDutyCaptured;
      fltDutyCaptured = fltFrequencyCaptured / fltDutyCaptured;
      fltDutyCaptured = fltDutyCaptured * 100;
      u32Duty_Data = 0;
      u32DutyTempVar2=0;
      u32DutyTempVar3=0;
      fltDutyTempVar4=0;
      fltDutyTempVar5=0;  
    }
    
       /*Assiging read value to corresponding variables*/
    UC_PWM_PIN_astrPin[u8PinId].u32FrequMeasured = (uint32_t)(round(fltFrequencyCaptured));
    UC_PWM_PIN_astrPin[u8PinId].u8DutyCycleMeasured = (uint8_t)(round(fltDutyCaptured));     
  
    fltFrequencyCaptured = 0;
    fltDutyCaptured = 0;
    eStatus = STATUS_OK;
  }
  return eStatus;
}


/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

#endif /*UC_PWM_MODULE_ENABLE*/
