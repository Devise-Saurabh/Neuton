/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd All rights reserved.

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

File Name: ecu_io_cfg.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/


#include "ecu_io_cfg.h"
#include "ecu_io.h"
#include "uc.h"

ECU_IO_strPwmObj_t ECU_IO_astrPwmObjInput[ECU_IO_PIN_NUM] =
{
  {
    /*PWM Object Id */
    Noname_Pin_P13,
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_PIN_ID_2,    
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,          
    /*Frequency Value*/
    deMCD_DEFAULT,
    /*DutyCycle Value*/
    (float)deMCD_DEFAULT,    
  },
  {
    /*PWM Object Id */
    Noname_Pin_P14,
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_PIN_ID_1,    
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,          
    /*Frequency Value*/
    deMCD_DEFAULT,
    /*DutyCycle Value*/
    (float)deMCD_DEFAULT,    
  },
  {
    /*PWM Object Id */
    Noname_Pin_P62,
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_PIN_ID_0,    
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,          
    /*Frequency Value*/
    deMCD_DEFAULT,
    /*DutyCycle Value*/
    (float)deMCD_DEFAULT,    
  },
};

ECU_IO_strPwmObj_t ECU_IO_astrPwmObjOutput[ECU_IO_POUT_NUM] = 
{
  {
    /*PWM Object Id*/
    PWM_POUT_P16,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_4,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_P16_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_P16_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    PWM_POUT_P7,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_1,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_P7_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_P7_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    PWM_POUT_P12,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_3,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_P12_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_P12_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    PWM_POUT_P11,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_2,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_P11_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_P11_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    PWM_POUT_H,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_0,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_H_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_H_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    PWM_POUT_P17,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_5,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_PWM_POUT_P17_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_PWM_POUT_P17_DEFAULT_DUTY
  },
};

ECU_IO_strObj_t ECU_IO_astrObjInput[ECU_IO_DIN_NUM] = 
{
  {
    /*DIO Object Id*/
    AUX_61_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID0        ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_51_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID1        ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_22_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID6          ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_34_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID10,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_27_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID15,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_42_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID3,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_21_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID4,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_31_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID5,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_23_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID7,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_41_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID2,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_37_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID16,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_25_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID11,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_26_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID13,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_35_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID12,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_33_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID8,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_36_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID14,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_24_H_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_VBAT,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID9,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_28_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID17,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    AUX_38_L_DI,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,    
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,     
    /*Tester Controlled Value*/
    deMCD_DEFAULT,  
    /*Direction*/
    ECU_IO_DIR_INPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_MAXIM_CHIP,
    /*States ID*/
    ECU_IO_SWITCH_OC_GND,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    ECU_IO_MAXIM_PIN_ID18,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_ENABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
};

ECU_IO_strObj_t ECU_IO_astrObjOutput[ECU_IO_DOUT_NUM] = 
{
  {
    /*DIO Object Id*/
    Noname_Pin_LSDResetPin,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO7  ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    Noname_Pin_Reserve1_,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO24 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    Noname_Pin_Reserve2_,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO6  ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD4_OUT4_P20,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO20 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    HSD_Reset_Pin,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO8  ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    H_Bridge1_Direction,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO23 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD2_OUT4_P2,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO10 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD3_OUT1_P8,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO11 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD4_OUT1_P5,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO21 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD3_OUT2_P3,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO12 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD3_OUT4_P9,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO13 ,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD2_OUT2_P6,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO5,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD3_OUT3_P4,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO22,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD4_OUT2_P10,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO14,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD4_OUT3_P15,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO15,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
  {
    /*DIO Object Id*/
    ECU_HSD2_OUT3_P1,
    /*Pin Current State*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,   
    /*Under Tester Control*/
    deMCD_FALSE, 
    /*Tester Freeze Command*/
    deMCD_DEFAULT,    
    /*Tester Controlled Command*/
    (UC_DIO_eOutputCommand_t)deMCD_DEFAULT,       
    /*Tester Controlled Value*/
    deMCD_DEFAULT, 
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*Active Type*/
    ECU_IO_ACTIVE_HIGH,
    /*Module Type*/
    ECU_IO_TYPE_CORE_DIO,
    /*States ID*/
    ECU_IO_SWITCH_0V_3V3,
    /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
    UC_DIO_OUTPUT_GIO9,
    /*Value*/
    deMCD_DEFAULT,
    /*Event Callback Enable*/
    ECU_IO_CLBK_DISABLE,
    /*Event Type*/
    ECU_IO_EVENT_NA,
    /*Event Callback*/
    deMCD_NULL,
  },
};

