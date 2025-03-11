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

File Name: ecu_io.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_IO_H
#define ECU_IO_H

#include "lib_types.h"
#include "uc.h"

#define ECU_IO_MAXIM_PIN_NUM                                       (35)

#define ECU_IO_MAXIM_PIN_ID0                                       (0)
#define ECU_IO_MAXIM_PIN_ID1                                       (1)
#define ECU_IO_MAXIM_PIN_ID2                                       (2)
#define ECU_IO_MAXIM_PIN_ID3                                       (3)
#define ECU_IO_MAXIM_PIN_ID4                                       (4)
#define ECU_IO_MAXIM_PIN_ID5                                       (5)
#define ECU_IO_MAXIM_PIN_ID6                                       (6)
#define ECU_IO_MAXIM_PIN_ID7                                       (7)
#define ECU_IO_MAXIM_PIN_ID8                                       (8)
#define ECU_IO_MAXIM_PIN_ID9                                       (9)
#define ECU_IO_MAXIM_PIN_ID10                                      (10)
#define ECU_IO_MAXIM_PIN_ID11                                      (11)
#define ECU_IO_MAXIM_PIN_ID12                                      (12)
#define ECU_IO_MAXIM_PIN_ID13                                      (13)
#define ECU_IO_MAXIM_PIN_ID14                                      (14)
#define ECU_IO_MAXIM_PIN_ID15                                      (15)
#define ECU_IO_MAXIM_PIN_ID16                                      (16)
#define ECU_IO_MAXIM_PIN_ID17                                      (17)
#define ECU_IO_MAXIM_PIN_ID18                                      (18)
#define ECU_IO_MAXIM_PIN_ID19                                      (19)
#define ECU_IO_MAXIM_PIN_ID20                                      (20)
#define ECU_IO_MAXIM_PIN_ID21                                      (21)
#define ECU_IO_MAXIM_PIN_ID22                                      (22)
#define ECU_IO_MAXIM_PIN_ID23                                      (23)
#define ECU_IO_MAXIM_PIN_ID24                                      (24)
#define ECU_IO_MAXIM_PIN_ID25                                      (25)
#define ECU_IO_MAXIM_PIN_ID26                                      (26)
#define ECU_IO_MAXIM_PIN_ID27                                      (27)
#define ECU_IO_MAXIM_PIN_ID28                                      (28)
#define ECU_IO_MAXIM_PIN_ID29                                      (29)
#define ECU_IO_MAXIM_PIN_ID30                                      (30)
#define ECU_IO_MAXIM_PIN_ID31                                      (31)
#define ECU_IO_MAXIM_PIN_ID32                                      (32)
#define ECU_IO_MAXIM_PIN_ID33                                      (33)
#define ECU_IO_MAXIM_PIN_ID34                                      (34)

#define ECU_IO_MAXIM_REG_NUM                                       (30)

typedef enum ECU_IO_eMaximRegisterTemplate
{
   ECU_IO_MAXIM_REG_0X00 = 0x00,
   ECU_IO_MAXIM_REG_0X01 = 0x01,
   ECU_IO_MAXIM_REG_0X02 = 0x02,
   ECU_IO_MAXIM_REG_0X03 = 0x03,
   ECU_IO_MAXIM_REG_0X04 = 0x04,
   ECU_IO_MAXIM_REG_0X05 = 0x05,
   ECU_IO_MAXIM_REG_0X06 = 0x06,
   ECU_IO_MAXIM_REG_0X07 = 0x07,
   ECU_IO_MAXIM_REG_0X08 = 0x08,
   ECU_IO_MAXIM_REG_0X09 = 0x09,
   ECU_IO_MAXIM_REG_0X0A = 0x0A,
   ECU_IO_MAXIM_REG_0X0B = 0x0B,
   ECU_IO_MAXIM_REG_0X0C = 0x0C,
   ECU_IO_MAXIM_REG_0X0D = 0x0D,
   ECU_IO_MAXIM_REG_0X0E = 0x0E,
   ECU_IO_MAXIM_REG_0X0F = 0x0F,
   ECU_IO_MAXIM_REG_0X10 = 0x10,
   ECU_IO_MAXIM_REG_0X11 = 0x11,
   ECU_IO_MAXIM_REG_0X12 = 0x12,
   ECU_IO_MAXIM_REG_0X13 = 0x13,
   ECU_IO_MAXIM_REG_0X14 = 0x14,
   ECU_IO_MAXIM_REG_0X15 = 0x15,
   ECU_IO_MAXIM_REG_0X16 = 0x16,
   ECU_IO_MAXIM_REG_0X17 = 0x17,
   ECU_IO_MAXIM_REG_0X18 = 0x18,
   ECU_IO_MAXIM_REG_0X19 = 0x19,
   ECU_IO_MAXIM_REG_0X1A = 0x1A,
   ECU_IO_MAXIM_REG_0X1B = 0x1B,
   ECU_IO_MAXIM_REG_0X1C = 0x1C,
   ECU_IO_MAXIM_REG_0X1D = 0x1D,
   ECU_IO_MAXIM_REG_NA = 255,
} ECU_IO_eMaximRegister_t;   

typedef enum ECU_IO_eMaximRegisterBitTemplate
{
   ECU_IO_MAXIM_REG_BIT0 = 0,
   ECU_IO_MAXIM_REG_BIT1 = 1,
   ECU_IO_MAXIM_REG_BIT2 = 2,
   ECU_IO_MAXIM_REG_BIT3 = 3,
   ECU_IO_MAXIM_REG_BIT4 = 4,
   ECU_IO_MAXIM_REG_BIT5 = 5,
   ECU_IO_MAXIM_REG_BIT6 = 6,
   ECU_IO_MAXIM_REG_BIT7 = 7,
   ECU_IO_MAXIM_REG_BIT_NA = 255,
} ECU_IO_eMaximRegisterBit_t;  

typedef enum ECU_IO_eExpCommandTemplate
{
  ECU_IO_EXP_CMD_RESET = 0x04000000,
  ECU_IO_EXP_CMD_WRITE = 0x01000000,
  ECU_IO_EXP_CMD_READ  = 0x02000000,
} ECU_IO_eExpCommand_t;

typedef enum ECU_IO_eExpStatusTemplate
{
  ECU_IO_EXP_ST_NOT_INITIALIZED = 0,
  ECU_IO_EXP_ST_RESET = 1,
  ECU_IO_EXP_ST_READ_ALL  = 2,
  ECU_IO_EXP_ST_CONFIG  = 3,
  ECU_IO_EXP_ST_MONITOR = 4,
  ECU_IO_EXP_ST_READ_INPUTS = 5,
} ECU_IO_eExpStatus_t;

typedef struct ECU_IO_strMaxiPinObjTemplate
{
  uint8_t u8IdPin;
  ECU_IO_eMaximRegister_t eMaxReg_SS;
  ECU_IO_eMaximRegisterBit_t eMaxBit_SS;
  ECU_IO_eMaximRegister_t eMaxReg_LH;
  ECU_IO_eMaximRegisterBit_t eMaxBit_LH;
  ECU_IO_eMaximRegister_t eMaxReg_IE;
  ECU_IO_eMaximRegisterBit_t eMaxBit_IE;
  ECU_IO_eMaximRegister_t eMaxReg_W0;
  ECU_IO_eMaximRegisterBit_t eMaxBit_W0;
  ECU_IO_eMaximRegister_t eMaxReg_W1;
  ECU_IO_eMaximRegisterBit_t eMaxBit_W1;
  ECU_IO_eMaximRegister_t eMaxReg_TH0;
  ECU_IO_eMaximRegisterBit_t eMaxBit_TH0;
  ECU_IO_eMaximRegister_t eMaxReg_TH1;
  ECU_IO_eMaximRegisterBit_t eMaxBit_TH1;
} ECU_IO_strMaximPinObj_t;

typedef struct ECU_IO_strExpObjTemplate
{
  unsigned char* stringChipId;
  ECU_IO_eExpStatus_t eExpState;
  uint8_t u8SpiFrameReceived;
  uint32_t u32TxFrame;
  uint32_t u32RxFrame;
  uint8_t u8RxBytesExpected;
  uint8_t au8Register[ECU_IO_MAXIM_REG_NUM];
  uint8_t u8ReadingReqNum;
} ECU_IO_strExpObj_t;

typedef void (*ECU_IO_p2fEventClbk_t)(void);

typedef enum ECU_IO_eDirectionTemplate
{
  ECU_IO_DIR_INPUT = 0,
  ECU_IO_DIR_OUTPUT  = 1,
} ECU_IO_eDirection_t;

typedef enum ECU_IO_eEventTemplate
{
   ECU_IO_EVENT_INPUT_NEG_EDGE = 0,
	 ECU_IO_EVENT_INPUT_POS_EDGE = 1,
	 ECU_IO_EVENT_INPUT_NEG_POS_EDGE = 2,
   ECU_IO_EVENT_NA = 255,
} ECU_IO_eEvent_t;

typedef enum ECU_IO_eTypeTemplate
{
   ECU_IO_TYPE_CORE_DIO = 0,
	 ECU_IO_TYPE_MAXIM_CHIP = 1,
} ECU_IO_eType_t;

typedef enum ECU_IO_eActiveTypeTemplate
{
   ECU_IO_ACTIVE_HIGH = 0,
	 ECU_IO_ACTIVE_LOW = 1,
} ECU_IO_eActiveType_t;

typedef enum ECU_IO_eClbkEnTemplate
{
   ECU_IO_CLBK_DISABLE = 0,
	 ECU_IO_CLBK_ENABLE = 1,
} ECU_IO_eClbkEn_t;

typedef enum ECU_IO_eSwitchStatesTemplate
{
	 ECU_IO_SWITCH_0V_3V3 = 0,
   ECU_IO_SWITCH_OC_GND = 1,
	 ECU_IO_SWITCH_OC_VBAT = 2,
} ECU_IO_eSwitchStates_t;

typedef enum ECU_IO_eOutputCommandTemplate
{
   ECU_IO_OUT_COMMAND_OFF = 0,
   ECU_IO_OUT_COMMAND_ON = 1,
   ECU_IO_OUT_COMMAND_TOGGLE = 2,
} ECU_IO_eOutputCommand_t;

typedef enum ECU_IO_eStatusTemplate
{
  ECU_IO_ST_NOT_INITIALIZED = 0,
  ECU_IO_ST_READY = 1,
} ECU_IO_eStatus_t;

typedef enum ECU_IO_ePwmDirectionTemplate
{
  ECU_IO_INPUT_PWM = 0,
  ECU_IO_OUTPUT_PWM = 1,
} ECU_IO_ePwmDirection_t;

typedef struct ECU_PWM_strObjTemplate
{
  /*PWM Pin Id*/
  uint8_t u8IdPwm;
  /*PWM Direction*/
  ECU_IO_ePwmDirection_t ePwmDirection;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Freeze Command*/
  uint8_t u8TesterFreezeCommand;
  /*Tester Controlled Frequency*/
  uint16_t u16TesterFreq;
  /*Tester Controlled Duty Cycle*/
  uint8_t u8TesterDutyCycle;
  /*Frequency Reading*/     // same down
  uint16_t u16FrequencyReading; // same down
  /*Duty Cycle Reading*/ // same down
  uint8_t u8DutyCycleReading; // same down
} ECU_PWM_strObj_t;


typedef struct ECU_IO_strObjTemplate
{
  /*DIO Object Id */
  uint8_t u8IdObject;
  /*Pin Current State*/
  UC_DIO_eOutputCommand_t eOutputCurrentState;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Freeze Command*/
  uint8_t u8TesterFreezeCommand;
  /*Tester Controlled Command*/
  UC_DIO_eOutputCommand_t eTesterOutputCommand;  
  /*Tester Controlled Value*/
  uint8_t u8TesterInputValue;
  /*Direction*/
  ECU_IO_eDirection_t eDirection;
  /*Active Type*/
  ECU_IO_eActiveType_t eActiveType;
  /*Module Type*/
  ECU_IO_eType_t eType;
  /*States ID*/
  ECU_IO_eSwitchStates_t eSwitchStates;
  /*DIO Pin Id = Lower Layer Id or External Chip Pin Id*/
  uint8_t u8IdPin;
  /*Value*/
  uint8_t u8Value;
  /*Event Callback Enable*/
  ECU_IO_eClbkEn_t eClbkEn;
  /*Event Type*/
  ECU_IO_eEvent_t eEvent;
  /*Event Callback*/
  ECU_IO_p2fEventClbk_t p2fEventClbk;
} ECU_IO_strObj_t;

typedef struct ECU_IO_strPwmObjTemplate
{
  /*PWM Object Id */
  uint8_t u8IdObject;
  /*Direction*/
  ECU_IO_eDirection_t eDirection;
  /*DIO Pin Id = Lower Layer Id */
  uint8_t u8IdPin;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Freeze Command*/
  uint8_t u8TesterFreezeCommand;
  /*Tester Controlled Frequency*/
  uint16_t u16TesterFreq;
  /*Tester Controlled Duty Cycle*/
  uint8_t u8TesterDutyCycle;
  /*Frequency Value*/
  uint16_t u16Frequency;
  /*DutyCycle Value*/
  float fDutyCycle;
} ECU_IO_strPwmObj_t;

void ECU_IO_vdInit(void);
void ECU_IO_vdMgr(void);
STATUS_t ECU_IO_eRegisterInputEventCallback(uint8_t u8IdInput, ECU_IO_eEvent_t eEvent, ECU_IO_p2fEventClbk_t p2fEventClbk);
STATUS_t ECU_IO_eOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand);
STATUS_t ECU_IO_eInputRead(uint8_t u8IdInput, uint8_t* pu8Value);
STATUS_t ECU_IO_eSetPwm(uint8_t u8IdPout, uint32_t u32FreqHz, uint8_t u8DutyCycle);
STATUS_t ECU_IO_eReadPwm(uint8_t u8IdPin, uint32_t* pu32FreqHz, uint8_t* pu8DutyCycle);
STATUS_t ECU_IO_eInternalOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand);
STATUS_t ECU_IO_eFreezePinCurrentState(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin);
STATUS_t ECU_IO_eResetPinToDefault(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin);
STATUS_t ECU_IO_eReturnControlToECU(uint16_t u16PinID, uint8_t u8InputPin, uint8_t u8DigitalPin);
STATUS_t ECU_IO_eAdjustPinValue(uint16_t u16PinID, uint8_t u8Value, uint16_t u16Frequ, uint8_t u8Duty, uint8_t InputPin, uint8_t u8DigitalPin);
STATUS_t ECU_IO_eReadPinValue(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin, uint8_t* u8Value, uint16_t* u16Frequ, uint8_t* u8Duty);

#endif /*ECU_IO_H*/

