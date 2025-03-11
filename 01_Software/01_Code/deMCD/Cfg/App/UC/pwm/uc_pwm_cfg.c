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

File Name: uc_pwm_cfg.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_pwm_cfg.h"
#include "uc_pwm.h"

UC_PWM_PIN_strPin_t UC_PWM_PIN_astrPin[UC_PWM_PIN_AVAILABLE] = 
{
  {
    /*Pin ID*/
    UC_PWM_PIN_ID_0,
    /*NHET ID*/
    UC_PWM_PIN_NHET_ID_0,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,   
    /*Frequency Trigger*/
    UC_PWM_PIN_Frequency_TRIG_RISE2RISE,
    /*Duty Cycle Trigger*/
    UC_PWM_PIN_DutyCycle_TRIG_RISE2FALL,
    /*Frequency Measured*/
    0,
    /*Duty Cycle Measured*/
    0,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_PIN_ID_0 + 6],
    /*Memory Address*/
    UC_PWM_PIN_NHET_MEMORY_START + 0x8U,
  },
  {
    /*Pin ID*/
    UC_PWM_PIN_ID_1,
    /*NHET ID*/
    UC_PWM_PIN_NHET_ID_1,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,   
    /*Frequency Trigger*/
    UC_PWM_PIN_Frequency_TRIG_RISE2RISE,
    /*Duty Cycle Trigger*/
    UC_PWM_PIN_DutyCycle_TRIG_RISE2FALL,
    /*Frequency Measured*/
    0,
    /*Duty Cycle Measured*/
    0,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_PIN_ID_1 + 6],
    /*Memory Address*/
    UC_PWM_PIN_NHET_MEMORY_START + 0x28U,    
  },
  {
    /*Pin ID*/
    UC_PWM_PIN_ID_2,
    /*NHET ID*/
    UC_PWM_PIN_NHET_ID_2,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,   
    /*Frequency Trigger*/
    UC_PWM_PIN_Frequency_TRIG_RISE2RISE,
    /*Duty Cycle Trigger*/
    UC_PWM_PIN_DutyCycle_TRIG_RISE2FALL,
    /*Frequency Measured*/
    0,
    /*Duty Cycle Measured*/
    0,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_PIN_ID_2 + 6],
    /*Memory Address*/
    UC_PWM_PIN_NHET_MEMORY_START + 0x48U,    
  },
  {
    /*Pin ID*/
    UC_PWM_PIN_ID_3,
    /*NHET ID*/
    UC_PWM_PIN_NHET_ID_3,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,   
    /*Frequency Trigger*/
    UC_PWM_PIN_Frequency_TRIG_RISE2RISE,
    /*Duty Cycle Trigger*/
    UC_PWM_PIN_DutyCycle_TRIG_RISE2FALL,
    /*Frequency Measured*/
    0,
    /*Duty Cycle Measured*/
    0,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_PIN_ID_3 + 6],
    /*Memory Address*/
    UC_PWM_PIN_NHET_MEMORY_START + 0x68U,    
  },
};

UC_PWM_POUT_strPin_t UC_PWM_POUT_astrPin[UC_PWM_POUT_AVAILABLE] = 
{
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_0,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_0,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error +/- */
//    deMCD_DEFAULT,    
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x8U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x4U,
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x18U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_0],
  },
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_1,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_1,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error*/
//    deMCD_DEFAULT,    
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x28U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x24U,
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x38U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_1],
  },
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_2,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_2,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error*/
//    deMCD_DEFAULT,
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x48U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x44U,
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x58U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_2],
  },
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_3,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_3,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error*/
//    deMCD_DEFAULT,
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x68U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x64U,    
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x78U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_3],
  },
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_4,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_4,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error*/
//    deMCD_DEFAULT,    
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x88U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x84U,    
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0x98U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_4],
  },
  {
    /*Pin ID*/
    UC_PWM_POUT_ID_5,
    /*NHET ID*/
    UC_PWM_POUT_NHET_ID_5,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controller Duty Cycle*/
    deMCD_DEFAULT,    
//    /*Frequency Error*/
//    deMCD_DEFAULT,    
    /*Frequency*/
    0,
    /*Duty Cycle*/
    0,
    /*Frequency Memory Data Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0xA8U,
    /*Frequency Memory Control Field*/
    UC_PWM_POUT_NHET_MEMORY_START + 0xA4U,    
    /*Duty Cycle Memory*/
    UC_PWM_POUT_NHET_MEMORY_START + 0xB8U,
    /*Program Instruction Field*/
    &UC_PWM_astrProgramInstruction[UC_PWM_POUT_ID_5], 
  },  
};