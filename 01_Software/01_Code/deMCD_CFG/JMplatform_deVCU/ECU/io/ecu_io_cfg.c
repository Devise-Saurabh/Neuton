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
    Noname_Pin_P56,
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
  {
    /*PWM Object Id */
    Noname_Pin_P66,
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
};

ECU_IO_strPwmObj_t ECU_IO_astrPwmObjOutput[ECU_IO_POUT_NUM] = 
{
  {
    /*PWM Object Id*/
    Noname_Pin_P59,
    /*Direction*/
    ECU_IO_DIR_OUTPUT,
    /*DIO Pin Id = Lower Layer Id */
    UC_PWM_POUT_ID_0 ,
    /*Under Tester Control*/
    deMCD_FALSE,
    /*Tester Freeze Command*/
    deMCD_FALSE,
    /*Tester Controlled Frequency*/
    deMCD_DEFAULT,
    /*Tester Controlled Duty Cycle*/
    deMCD_DEFAULT,    	
    /*Frequency Value*/
    ECU_IO_POUT_Noname_Pin_P59_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_Noname_Pin_P59_DEFAULT_DUTY
  },
  {
    /*PWM Object Id*/
    Noname_Pin_P23,
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
    ECU_IO_POUT_Noname_Pin_P23_DEFAULT_FREQ,
    /*DutyCycle Value*/
    ECU_IO_POUT_Noname_Pin_P23_DEFAULT_DUTY
  },
};

ECU_IO_strObj_t ECU_IO_astrObjInput[ECU_IO_DIN_NUM] = 
{
  {
    /*DIO Object Id*/
    Noname_Pin_P07,
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
    Noname_Pin_P08,
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
    Noname_Pin_P11,
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
    Noname_Pin_P12,
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
    Noname_Pin_P13,
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
    Noname_Pin_P25,
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
    Noname_Pin_P27,
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
    Noname_Pin_P28,
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
    Noname_Pin_P29,
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
    Noname_Pin_P30,
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
    Noname_Pin_P32,
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
    Noname_Pin_P35,
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
    Noname_Pin_P36,
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
    Noname_Pin_P38,
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
    Noname_Pin_P52,
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
    Noname_Pin_P53,
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
    Noname_Pin_P54,
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
    Noname_Pin_P55,
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
    Noname_Pin_P61,
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
    Noname_Pin_P15,
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
    Noname_Pin_P16,
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
    Noname_Pin_P17,
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
    UC_DIO_OUTPUT_GIO9  ,
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
    Noname_Pin_P20,
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
    Noname_Pin_P21,
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
    Noname_Pin_P22,
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
    Noname_Pin_P24,
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
    Noname_Pin_P33,
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
    Noname_Pin_P34,
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
    Noname_Pin_P40,
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
    Noname_Pin_P41,
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
    UC_DIO_OUTPUT_GIO22 ,
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
    Noname_Pin_P42,
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
    Noname_Pin_P43,
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
    Noname_Pin_P44,
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
    UC_DIO_OUTPUT_GIO14 ,
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
    Noname_Pin_P78,
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
    UC_DIO_OUTPUT_GIO5  ,
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

