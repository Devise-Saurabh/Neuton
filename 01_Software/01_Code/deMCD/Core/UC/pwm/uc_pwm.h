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

File Name: uc_pwm.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/


#ifndef UC_PWM_H
#define UC_PWM_H

#include "lib_types.h"
#include "uc_header.h"

#define UC_PWM_PIN_AVAILABLE              (4)
#define UC_PWM_POUT_AVAILABLE             (6)

#define UC_PWM_PI0_MIN_FREQ               (500)
#define UC_PWM_PI0_MAX_FREQ               (2500)
#define UC_PWM_PI1_MIN_FREQ               (500)
#define UC_PWM_PI1_MAX_FREQ               (2500)
#define UC_PWM_PI2_MIN_FREQ               (500)
#define UC_PWM_PI2_MAX_FREQ               (2500)
#define UC_PWM_PI3_MIN_FREQ               (500)
#define UC_PWM_PI3_MAX_FREQ               (2500)

#define UC_PWM_POUT_NHET_MEMORY_START            (0xFF460000U)
#define UC_PWM_PIN_NHET_MEMORY_START             (0xFF4600C0U)

#define UC_PWM_LRPFC                      (UC_PWM_LRPFC_32)
#define UC_PWM_LR                         (32U)

typedef enum UC_PWM_eLRPFC_Template
{
  UC_PWM_LRPFC_128 =  111U,
  UC_PWM_LRPFC_64  =  110U,
  UC_PWM_LRPFC_32  =  101U,
  UC_PWM_LRPFC_16  =  100U,
  UC_PWM_LRPFC_8   =  011U,
  UC_PWM_LRPFC_4   =  010U,
  UC_PWM_LRPFC_2   =  001U,
  UC_PWM_LRPFC_1   =  000U,
} UC_PWM_eLRPFC_t;

typedef enum UC_PWM_PIN_eFrequencyTrigTemplate
{
  UC_PWM_PIN_Frequency_TRIG_RISE2RISE = 11U,
  UC_PWM_PIN_Frequency_TRIG_RISE2FALL = 01U,
  UC_PWM_PIN_Frequency_TRIG_FALL2RISE = 00U,
  UC_PWM_PIN_Frequency_TRIG_FALL2FALL = 10U,
} UC_PWM_PIN_eFrequencyTrig_t;

typedef enum UC_PWM_PIN_eDutyCycleTrigTemplate
{
  UC_PWM_PIN_DutyCycle_TRIG_RISE2RISE = 11U,
  UC_PWM_PIN_DutyCycle_TRIG_RISE2FALL = 01U,
  UC_PWM_PIN_DutyCycle_TRIG_FALL2RISE = 00U,
  UC_PWM_PIN_DutyCycle_TRIG_FALL2FALL = 10U,
} UC_PWM_PIN_eDutyCycleTrig_t;

typedef struct UC_PWM_NHET_INSTRUCTION_Template
{
  uint32_t PWM_NHET_PROGRAM_WORD;
  uint32_t PWM_NHET_CONTROL_WORD;
  uint32_t PWM_NHET_DATA_WORD;
  uint32_t PWM_NHET_RESERVED_WORD;
} UC_PWM_NHET_INSTRUCTION_t;

typedef struct UC_PWM_PIN_INSTRUCTION_PROGRAM_Template
{
  UC_PWM_NHET_INSTRUCTION_t UC_PWM_FREQUENCY_OR_COUNTER_INSTRUCTION;
  UC_PWM_NHET_INSTRUCTION_t UC_PWM_DUTYCYCLE_OR_MAGNITUDE_COMPARE_INSTRUCTION;
} UC_PWM_INSTRUCTION_PROGRAM_t;

typedef struct UC_PWM_PIN_strPinTemplate
{
  /*Pin ID*/
  uint8_t u8PinId;
  /*NHET ID*/
  uint8_t u8NhetID;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Controlled Frequency*/
  uint16_t u16TesterControlledFrequencyHz;
  /*Tester Controller Duty Cycle*/
  uint8_t u8TesterControlledDutyCycle;
  /*Frequency Trigger*/
  UC_PWM_PIN_eFrequencyTrig_t eFrequTrig;
  /*Duty Cycle Trigger*/
  UC_PWM_PIN_eDutyCycleTrig_t eDutyTrig;
  /*Frequency Measured*/
  uint32_t u32FrequMeasured;
  /*Duty Cycle Measured*/
  uint8_t u8DutyCycleMeasured;
  /*Program Instruction Field*/
  UC_PWM_INSTRUCTION_PROGRAM_t* pstrInstructionProgram;
  /*Memory Address*/
  uint32_t u32MemAddress;
}UC_PWM_PIN_strPin_t;

typedef struct UC_PWM_POUT_strPinTemplate
{
  /*Pout ID*/
  uint8_t u8PoutId;
  /*NHET ID*/
  uint8_t u8NhetID;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Freeze Command*/
  uint8_t u8TesterFreeze;
  /*Tester Controlled Frequency*/
  uint16_t u16TesterControlledFrequencyHz;
  /*Tester Controller Duty Cycle*/
  uint8_t u8TesterControlledDutyCycle;  
//  /*Frequency Error*/
//  uint32_t u32FreqError;
  /*Frequency*/
  uint32_t u32FrequencyHz;  // in Hz
  /*Duty Cycle*/ 
  uint8_t u8DutyCycle;  // 0 to 100
  /*Frequency Memory Data Field*/
  uint32_t u32FrequMemoryDataField;
  /*Frequency Memory Control Field*/
  uint32_t u32FrequMemoryControlField;
  /*Duty Cycle Memory*/
  uint32_t u32DutyCycleMemory;
  /*Program Instruction Field*/
  UC_PWM_INSTRUCTION_PROGRAM_t* pstrInstructionProgram;
}UC_PWM_POUT_strPin_t;

extern UC_PWM_INSTRUCTION_PROGRAM_t UC_PWM_astrProgramInstruction[UC_PWM_PIN_AVAILABLE + UC_PWM_POUT_AVAILABLE + 1];

void UC_PWM_vdInit(void);
void UC_PWM_vdPoutMgr(void);
void UC_PWM_vdPinMgr(void);
STATUS_t UC_PWM_POUT_eFrequencyChange(uint8_t u8PinId, uint32_t u32Frequency);
STATUS_t UC_PWM_POUT_eDutyCycleChange(uint8_t u8PinId, uint8_t u8DutyCycle);
STATUS_t UC_PWM_PIN_eRead(uint8_t u8PinId, uint32_t* pu32FreqHz, uint8_t* pu8DutyCycle);
STATUS_t UC_PWM_POUT_eResetToDefault(uint8_t u8PinId);
STATUS_t UC_PWM_POUT_eReturnControlToECU(uint8_t u8PinId);
STATUS_t UC_PWM_POUT_eFreezeCurrentState(uint8_t u8PinId);
STATUS_t UC_PWM_POUT_eAdjustPinValue(uint8_t u8PinId, uint16_t u16Freq, uint8_t u8DutyCycle);

#endif /*UC_PWM_H*/
