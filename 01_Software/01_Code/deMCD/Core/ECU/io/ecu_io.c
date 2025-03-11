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

File Name: ecu_io.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_io_cfg.h"
#include "ecu_io.h"

#ifdef ECU_IO_MODULE_ENABLE

#include "lib_types.h"
#include "lib_delay.h"
#include "uc.h"
#include "ecu_system.h"

#define ECU_IO_MAXIM_FRAME_BYTES_NUM                     (4)
#define ECU_IO_EXP_REG_INIT {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}


uint8_t ECU_IO_u8FrameReceived = (uint8_t) deMCD_FALSE;

uint8_t ECU_IO_au8ExpSpiArrayTx[6] = {0,0,0,0,0,0};
uint8_t ECU_IO_au8ExpSpiArrayRx[6] = {0,0,0,0,0,0};
uint8_t ECU_IO_u8FreezeFlag = 0;
uint8_t ECU_PWM_u8FreezeFlag = 0;


ECU_IO_strExpObj_t ECU_IO_strExpObj = 
{
  "MAX20091",
  ECU_IO_EXP_ST_NOT_INITIALIZED,
  deMCD_FALSE,
  deMCD_DEFAULT,
  deMCD_DEFAULT,
  deMCD_DEFAULT,
  ECU_IO_EXP_REG_INIT,
  deMCD_DEFAULT,
};

ECU_IO_eStatus_t ECU_IO_eStatus = ECU_IO_ST_NOT_INITIALIZED;

extern ECU_IO_strPwmObj_t ECU_IO_astrPwmObjInput[ECU_IO_PIN_NUM];
extern ECU_IO_strPwmObj_t ECU_IO_astrPwmObjOutput[ECU_IO_POUT_NUM];
extern ECU_IO_strObj_t ECU_IO_astrObjInput[ECU_IO_DIN_NUM];
extern ECU_IO_strObj_t ECU_IO_astrObjOutput[ECU_IO_DOUT_NUM];


void local_ECU_IO_vdDioMgr(void);
void local_ECU_PWM_vdPwmInputMgr(void);

#ifdef ECU_IO_SPI_EXPANDER_ENABLE

void local_ECU_IO_vdExpMgr(void);
STATUS_t local_ECU_IO_eSendReceiveFrame(uint32_t u32TxFrame, uint8_t u8RxBytesExpected, uint32_t* pu32RxFrame);
STATUS_t local_ECU_IO_eExpReadAllReg(void);
STATUS_t local_ECU_IO_eExpConfig(void);
void local_ECU_IO_vdExpSetTopology(void);
void local_ECU_IO_vdExpSetInterrupts(void);
STATUS_t local_ECU_IO_eExpReadInputs(void);
void local_ECU_IO_vdExpDecodeInputs(void);

void local_ECU_IO_vdReadSpiDataCallback(uint32_t u32RxData);
void local_ECU_IO_vdExpDataChangeCallback(void);

#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#if ECU_IO_POUT_NUM > 0
void local_ECU_IO_POUT_vdInitialize(void);
#endif /*ECU_IO_POUT_NUM*/

void ECU_IO_vdInit(void)
{ 
  
#if ECU_IO_POUT_NUM > 0
  local_ECU_IO_POUT_vdInitialize();
#endif /*ECU_IO_POUT_NUM*/
    
  
#ifdef ECU_IO_SPI_EXPANDER_ENABLE

  UC_SPI_eRegisterDeviceDataRxClbk(ECU_IO_SPI_MODULE, ECU_IO_SPI_DEVICE, local_ECU_IO_vdReadSpiDataCallback);
  //UC_SPI_eRegisterDeviceDataRxClbk(ECU_IO_SPI_MODULE, ECU_IO_SPI_DEVICE_lsd, local_ECU_IO_vdReadSpiDataCallback);
  UC_DIO_eRegisterInputEventClbk(ECU_IO_INPUT_INT_PIN, local_ECU_IO_vdExpDataChangeCallback);
  
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/
  

}

void ECU_IO_vdMgr(void)
{
  local_ECU_IO_vdDioMgr();

#ifdef ECU_IO_PWM_MODULE_ENABLE
  local_ECU_PWM_vdPwmInputMgr();
#endif /*ECU_IO_PWM_MODULE_ENABLE*/
  
#ifdef ECU_IO_SPI_EXPANDER_ENABLE
  local_ECU_IO_vdExpMgr();
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/
}

STATUS_t ECU_IO_eRegisterInputEventCallback(uint8_t u8IdInput, ECU_IO_eEvent_t eEvent, ECU_IO_p2fEventClbk_t p2fEventClbk)
{
  STATUS_t eStatus = STATUS_NOK;
  
  /*Ceck if the Id is in the valid range*/
  if(u8IdInput < ECU_IO_DIN_NUM)
  {
    /* Check if the pin is not already registered */
    if(ECU_IO_astrObjInput[u8IdInput].p2fEventClbk == deMCD_NULL)
    {
      /*Register the function*/
      ECU_IO_astrObjInput[u8IdInput].p2fEventClbk = p2fEventClbk;
      
      /*Save the Event type*/
      ECU_IO_astrObjInput[u8IdInput].eEvent = eEvent;
      
      eStatus = STATUS_OK;
      
      /*In case the input pin is in the controller, register it directly to the dio core*/
      if(ECU_IO_astrObjInput[u8IdInput].eType == ECU_IO_TYPE_CORE_DIO)
      {
        eStatus = UC_DIO_eRegisterInputEventClbk(ECU_IO_astrObjInput[u8IdInput].u8IdPin, ECU_IO_astrObjInput[u8IdInput].p2fEventClbk);
        /*TO DO: REGISTER UC_DIO_EVENT*/
      }
    }
  }
  
  
  return eStatus;
}

STATUS_t ECU_IO_eOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand)
{
  STATUS_t eStatus = STATUS_NOK;
  UC_DIO_eOutputCommand_t eLyOutputCommand;
   
  if(u8IdOutput < ECU_IO_DOUT_NUM)
  {
    if(ECU_IO_astrObjOutput[u8IdOutput].eType == ECU_IO_TYPE_CORE_DIO)
    {
      if(ECU_IO_astrObjOutput[u8IdOutput].u8TesterControl == deMCD_FALSE)
      {
        switch(eOutputCommand)
        {
          case ECU_IO_OUT_COMMAND_OFF: 
            if(ECU_IO_astrObjOutput[u8IdOutput].eActiveType == ECU_IO_ACTIVE_HIGH)
            {
              eLyOutputCommand = UC_DIO_OUT_COMMAND_OFF;
            }
            else
            {
              eLyOutputCommand = UC_DIO_OUT_COMMAND_ON;
            }
            break;
          case ECU_IO_OUT_COMMAND_ON:
            if(ECU_IO_astrObjOutput[u8IdOutput].eActiveType == ECU_IO_ACTIVE_HIGH)
            {
              eLyOutputCommand = UC_DIO_OUT_COMMAND_ON;
            }
            else
            {
              eLyOutputCommand = UC_DIO_OUT_COMMAND_OFF;
            }
            break;
          case UC_DIO_OUT_COMMAND_TOGGLE:
            eLyOutputCommand = UC_DIO_OUT_COMMAND_TOGGLE;
            break;
        default:
            eLyOutputCommand = (UC_DIO_eOutputCommand_t)eOutputCommand;
          break;
        }
        ECU_IO_astrObjOutput[u8IdOutput].eOutputCurrentState = eLyOutputCommand;
        eStatus = UC_DIO_eCommandOutputPin(ECU_IO_astrObjOutput[u8IdOutput].u8IdPin, eLyOutputCommand);        
      }
      else
      {
        if(ECU_IO_astrObjOutput[u8IdOutput].u8TesterFreezeCommand == deMCD_TRUE)
        {
          if(ECU_IO_u8FreezeFlag == 0) // first call of function during freeze state
          {
            ECU_IO_u8FreezeFlag = 1;
            ECU_IO_astrObjOutput[u8IdOutput].eTesterOutputCommand = ECU_IO_astrObjOutput[u8IdOutput].eOutputCurrentState;
            eStatus = UC_DIO_eCommandOutputPin(ECU_IO_astrObjOutput[u8IdOutput].u8IdPin, ECU_IO_astrObjOutput[u8IdOutput].eTesterOutputCommand);
          }
          else // following calls of function during freeze
          {
            eStatus = UC_DIO_eCommandOutputPin(ECU_IO_astrObjOutput[u8IdOutput].u8IdPin, ECU_IO_astrObjOutput[u8IdOutput].eTesterOutputCommand);
          }
        }
        else
        {
          ECU_IO_u8FreezeFlag = 0;
        }          
      }
    }
  }
  return eStatus;
}

STATUS_t ECU_IO_eInternalOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand)
{
  STATUS_t eStatus = STATUS_NOK;
  UC_DIO_eOutputCommand_t eLyOutputCommand;
  switch(eOutputCommand)
  {
    case ECU_IO_OUT_COMMAND_OFF: 
      eLyOutputCommand = UC_DIO_OUT_COMMAND_OFF;
      break;
    case ECU_IO_OUT_COMMAND_ON:
      eLyOutputCommand = UC_DIO_OUT_COMMAND_ON;
      break;
    case UC_DIO_OUT_COMMAND_TOGGLE:
      eLyOutputCommand = UC_DIO_OUT_COMMAND_TOGGLE;
      break;
    default:
        eLyOutputCommand = (UC_DIO_eOutputCommand_t)eOutputCommand;
      break;
  }
  eStatus = UC_DIO_eCommandOutputPin(u8IdOutput, eLyOutputCommand);
  return eStatus;
}

STATUS_t ECU_IO_eInputRead(uint8_t u8IdInput, uint8_t* pu8Value)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8IdInput < ECU_IO_DIN_NUM)
  {
    if(ECU_IO_astrObjInput[u8IdInput].u8TesterControl == deMCD_FALSE)
    {
      ECU_IO_u8FreezeFlag = 0;
      
#ifdef ECU_IO_SPI_EXPANDER_ENABLE
      if(ECU_IO_eStatus == ECU_IO_ST_READY)
      { 
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/
        eStatus = STATUS_OK;
#ifdef ECU_IO_SPI_EXPANDER_ENABLE
      }
      else
      {
        ECU_IO_astrObjInput[u8IdInput].u8Value = deMCD_FALSE;
        eStatus = STATUS_NOK;      
      }
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/
      
      if(ECU_IO_astrObjOutput[u8IdInput].eActiveType == ECU_IO_ACTIVE_LOW)
      {
        if(ECU_IO_astrObjInput[u8IdInput].u8Value != (uint8_t)deMCD_FALSE)
        {
          *pu8Value = (uint8_t)deMCD_FALSE;
        }
        else
        {
          *pu8Value = (uint8_t)deMCD_TRUE;
        }
      }
      else
      {
        *pu8Value = ECU_IO_astrObjInput[u8IdInput].u8Value;
      }
    }
    else
    {
      if(ECU_IO_astrObjInput[u8IdInput].u8TesterFreezeCommand == deMCD_TRUE)
      {
        if(ECU_IO_u8FreezeFlag == 0)
        {
          ECU_IO_u8FreezeFlag = 1;
          ECU_IO_astrObjInput[u8IdInput].u8TesterInputValue = ECU_IO_astrObjInput[u8IdInput].u8Value;
        }
        *pu8Value = ECU_IO_astrObjInput[u8IdInput].u8TesterInputValue;
      }
      else
      {
        ECU_IO_u8FreezeFlag = 0;
        *pu8Value = ECU_IO_astrObjInput[u8IdInput].u8TesterInputValue;
      }
    }    
  }
  else
  {
    *pu8Value = deMCD_FALSE;
  }
  return eStatus;
}

STATUS_t ECU_IO_eResetPinToDefault(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8DigitalPin == deMCD_TRUE)
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_DIN_NUM)
      {
        ECU_IO_astrObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjInput[u16PinID].u8TesterInputValue = deMCD_DEFAULT;
        eStatus = STATUS_OK;
      }
    }
    else
    {
      if(u16PinID < ECU_IO_DOUT_NUM)
      {
        ECU_IO_astrObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjOutput[u16PinID].eTesterOutputCommand = (UC_DIO_eOutputCommand_t)deMCD_DEFAULT; 
      }
    }      
  }
  else
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_PIN_NUM)
      {
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjInput[u16PinID].u16TesterFreq = deMCD_DEFAULT;
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterDutyCycle = deMCD_DEFAULT;
        eStatus = STATUS_OK;
      }
    }
    else
    {
      if(u16PinID < ECU_IO_POUT_NUM)
      {
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjOutput[u16PinID].u16TesterFreq = deMCD_DEFAULT; 
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterDutyCycle = deMCD_DEFAULT; 
        UC_PWM_POUT_eResetToDefault(ECU_IO_astrPwmObjOutput[u16PinID].u8IdPin);
        eStatus = STATUS_OK;
      }
    }
  }
  return eStatus;
}

STATUS_t ECU_IO_eReturnControlToECU(uint16_t u16PinID, uint8_t u8InputPin, uint8_t u8DigitalPin)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8DigitalPin == deMCD_TRUE)
  {
    if(u8InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_DIN_NUM)
      {
        ECU_IO_astrObjInput[u16PinID].u8TesterControl = deMCD_FALSE; 
        ECU_IO_astrObjInput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_DOUT_NUM)
      {
        ECU_IO_astrObjOutput[u16PinID].u8TesterControl = deMCD_FALSE; 
        ECU_IO_astrObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        eStatus = STATUS_OK;
      }
    }
  }
  else
  {
    if(u8InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_PIN_NUM)
      {
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterControl = deMCD_FALSE; 
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_POUT_NUM)
      {
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterControl = deMCD_FALSE; 
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        UC_PWM_POUT_eReturnControlToECU(ECU_IO_astrPwmObjOutput[u16PinID].u8IdPin);
        eStatus = STATUS_OK;
      }
    }    
  }
  return eStatus;
}

STATUS_t ECU_IO_eFreezePinCurrentState(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8DigitalPin == deMCD_TRUE)
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_DIN_NUM)
      {
        ECU_IO_astrObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjInput[u16PinID].u8TesterFreezeCommand = deMCD_TRUE;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_DOUT_NUM)
      {
        ECU_IO_astrObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_TRUE;
        eStatus = STATUS_OK;
      }        
    }    
  }
  else
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_PIN_NUM)
      {
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterFreezeCommand = deMCD_TRUE;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_POUT_NUM)
      {
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_TRUE;
        UC_PWM_POUT_eFreezeCurrentState(ECU_IO_astrPwmObjOutput[u16PinID].u8IdPin);
        eStatus = STATUS_OK;
      }        
    }    
  }
  return eStatus;
}

STATUS_t ECU_IO_eAdjustPinValue(uint16_t u16PinID, uint8_t u8Value, uint16_t u16Frequ, uint8_t u8Duty, uint8_t InputPin, uint8_t u8DigitalPin)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8DigitalPin == deMCD_TRUE)
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_DIN_NUM)
      {
        ECU_IO_astrObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjInput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;      
        ECU_IO_astrObjInput[u16PinID].u8TesterInputValue = u8Value;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_DOUT_NUM)
      {
        ECU_IO_astrObjOutput[u16PinID].eTesterOutputCommand = (UC_DIO_eOutputCommand_t)u8Value;
        ECU_IO_astrObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;      
        eStatus = UC_DIO_eCommandOutputPin(ECU_IO_astrObjOutput[u16PinID].u8IdPin, ECU_IO_astrObjOutput[u16PinID].eTesterOutputCommand);

      }        
    }   
  }
  else
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_PIN_NUM)
      {
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        ECU_IO_astrPwmObjInput[u16PinID].u16TesterFreq = u16Frequ;
        ECU_IO_astrPwmObjInput[u16PinID].u8TesterDutyCycle = u8Duty;
        eStatus = STATUS_OK;
      }    
    }
    else
    {
      if(u16PinID < ECU_IO_POUT_NUM)
      {
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterControl = deMCD_TRUE; 
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterFreezeCommand = deMCD_FALSE;
        ECU_IO_astrPwmObjOutput[u16PinID].u16TesterFreq = u16Frequ;
        ECU_IO_astrPwmObjOutput[u16PinID].u8TesterDutyCycle = u8Duty;
        UC_PWM_POUT_eAdjustPinValue(ECU_IO_astrPwmObjOutput[u16PinID].u8IdPin, u16Frequ, u8Duty);
        eStatus = STATUS_OK;
      }        
    }    
  }  
  return eStatus;
}

STATUS_t ECU_IO_eReadPinValue(uint16_t u16PinID, uint8_t InputPin, uint8_t u8DigitalPin, uint8_t* u8Value, uint16_t* u16Frequ, uint8_t* u8Duty)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32FreqHz;
  uint8_t u8DutyCycle;
  if(u8DigitalPin == deMCD_TRUE)
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_DIN_NUM)
      {
        *u8Value = ECU_IO_astrObjInput[u16PinID].u8Value; 
        eStatus = STATUS_OK;
      }    
    }
  }
  else
  {
    if(InputPin == deMCD_TRUE)
    {
      if(u16PinID < ECU_IO_PIN_NUM)
      {
        eStatus = UC_PWM_PIN_eRead(ECU_IO_astrPwmObjInput[u16PinID].u8IdPin, &u32FreqHz, &u8DutyCycle);   
        *u16Frequ = (uint16_t)u32FreqHz;
        *u8Duty = u8DutyCycle;
      }    
    }    
  }
  return eStatus;
}

#ifdef ECU_IO_PWM_MODULE_ENABLE

void local_ECU_PWM_vdPwmInputMgr(void)
{
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < ECU_IO_PIN_NUM; u8Counter++)
  {
    uint32_t u32FrequencyReading;
    uint8_t u8DutyCycleReading;
    ECU_IO_eReadPwm(u8Counter, &u32FrequencyReading, &u8DutyCycleReading);
    ECU_IO_astrPwmObjInput[u8Counter].u16Frequency = u32FrequencyReading;
    ECU_IO_astrPwmObjInput[u8Counter].fDutyCycle = u8DutyCycleReading;
  }
}

STATUS_t ECU_IO_eSetPwm(uint8_t u8IdPout, uint32_t u32FreqHz, uint8_t u8DutyCycle)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IdPout < ECU_IO_POUT_NUM)
  {
    if(u32FreqHz != ECU_IO_astrPwmObjOutput[u8IdPout].u16Frequency)
    {
      eStatus = UC_PWM_POUT_eFrequencyChange(ECU_IO_astrPwmObjOutput[u8IdPout].u8IdPin, u32FreqHz);
      ECU_IO_astrPwmObjOutput[u8IdPout].u16Frequency = u32FreqHz;
    }
    else
    {
      eStatus = STATUS_OK;
    }
    
    if(eStatus == STATUS_OK)
    {
      eStatus = UC_PWM_POUT_eDutyCycleChange(ECU_IO_astrPwmObjOutput[u8IdPout].u8IdPin, u8DutyCycle);
      ECU_IO_astrPwmObjOutput[u8IdPout].fDutyCycle = u8DutyCycle;
    }
    
  }
  
  return eStatus;
}

STATUS_t ECU_IO_eReadPwm(uint8_t u8IdPin, uint32_t* pu32FreqHz, uint8_t* pu8DutyCycle)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32FreqHz;
  uint8_t u8DutyCycle;
  
  if(u8IdPin < ECU_IO_PIN_NUM)
  {
    if(ECU_IO_astrPwmObjInput[u8IdPin].u8TesterControl == deMCD_FALSE)
    {
      eStatus = UC_PWM_PIN_eRead(ECU_IO_astrPwmObjInput[u8IdPin].u8IdPin, &u32FreqHz, &u8DutyCycle);      
      if(eStatus != STATUS_OK)
      {
        u32FreqHz = (uint32_t)0;
        u8DutyCycle = (uint8_t)0;
      }
      ECU_IO_astrPwmObjInput[u8IdPin].u16TesterFreq = u32FreqHz;
      ECU_IO_astrPwmObjInput[u8IdPin].u8TesterDutyCycle = u8DutyCycle;
      
      *pu32FreqHz = u32FreqHz;
      *pu8DutyCycle = u8DutyCycle;      
    }
    else
    {
      if(ECU_IO_astrPwmObjInput[u8IdPin].u8TesterFreezeCommand == deMCD_TRUE)
      {
        if(ECU_PWM_u8FreezeFlag == 0)
        {
          ECU_PWM_u8FreezeFlag = 1;
          eStatus = UC_PWM_PIN_eRead(ECU_IO_astrPwmObjInput[u8IdPin].u8IdPin, &u32FreqHz, &u8DutyCycle);
          if(eStatus != STATUS_OK)
          {
            u32FreqHz = (uint32_t)0;
            u8DutyCycle = (uint8_t)0;            
          }
          ECU_IO_astrPwmObjInput[u8IdPin].u16TesterFreq = u32FreqHz;
          ECU_IO_astrPwmObjInput[u8IdPin].u8TesterDutyCycle = u8DutyCycle;
        }
        else
        {
          *pu32FreqHz = ECU_IO_astrPwmObjInput[u8IdPin].u16TesterFreq;
          *pu8DutyCycle = ECU_IO_astrPwmObjInput[u8IdPin].u8TesterDutyCycle;
          eStatus = STATUS_OK;
        }
      }
      else
      {
        ECU_PWM_u8FreezeFlag = 0;
        *pu32FreqHz = ECU_IO_astrPwmObjInput[u8IdPin].u16TesterFreq;
        *pu8DutyCycle = ECU_IO_astrPwmObjInput[u8IdPin].u8TesterDutyCycle;
        eStatus = STATUS_OK;
      }
    }
  }
    
  return eStatus;
}
#endif /*ECU_IO_PWM_MODULE_ENABLE*/

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
STATUS_t local_ECU_IO_eSendReceiveFrame(uint32_t u32TxFrame, uint8_t u8RxBytesExpected, uint32_t* pu32RxFrame)
{
  STATUS_t eBusStatus = STATUS_NOK;
  STATUS_t eStatus = STATUS_BUSY;
  uint8_t u8IndexByte;
  static uint8_t au8TxByteArray[ECU_IO_MAXIM_FRAME_BYTES_NUM];
  
  static uint8_t su8RxMode = (uint8_t)deMCD_FALSE;
  
  if(su8RxMode == deMCD_FALSE)
  {
    for(u8IndexByte = 0; u8IndexByte < ECU_IO_MAXIM_FRAME_BYTES_NUM; u8IndexByte++)
    {
      au8TxByteArray[u8IndexByte] = (u32TxFrame & (0xFF<<(8*(ECU_IO_MAXIM_FRAME_BYTES_NUM-u8IndexByte-1)))) >> (8*(ECU_IO_MAXIM_FRAME_BYTES_NUM-u8IndexByte-1));
    }
    ECU_IO_strExpObj.u8RxBytesExpected = u8RxBytesExpected; 
    eBusStatus = UC_SPI_eSendSpiFrame(ECU_IO_SPI_MODULE, ECU_IO_SPI_DEVICE, au8TxByteArray, ECU_IO_MAXIM_FRAME_BYTES_NUM);
    if(eBusStatus == STATUS_OK)
    {
      su8RxMode = deMCD_TRUE;
    }
  }
  else
  {
    if(ECU_IO_strExpObj.u8SpiFrameReceived == deMCD_TRUE)
    {
      ECU_IO_strExpObj.u8SpiFrameReceived = deMCD_FALSE;
      su8RxMode = deMCD_FALSE;
      *pu32RxFrame = ECU_IO_strExpObj.u32RxFrame;
      ECU_IO_strExpObj.u32RxFrame = 0;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

void local_ECU_IO_vdDioMgr(void)
{
  uint8_t u8IndexInput;
  STATUS_t eStatus;
  uint8_t u8Value;
  
  for(u8IndexInput = (uint8_t)0; u8IndexInput < (uint8_t)ECU_IO_DIN_NUM; u8IndexInput++)
  {
    if(ECU_IO_astrObjInput[u8IndexInput].eType == ECU_IO_TYPE_CORE_DIO)
    {
      eStatus = UC_DIO_eReadInputPin(ECU_IO_astrObjInput[u8IndexInput].u8IdPin, &u8Value);
      
      if(eStatus == STATUS_OK)
      {
        ECU_IO_astrObjInput[u8IndexInput].u8Value = u8Value;
      }
    }
  }
}

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdExpMgr(void)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32RxFrame;
  uint8_t u8PinStatus;
  
  switch(ECU_IO_strExpObj.eExpState)
  {
    case ECU_IO_EXP_ST_NOT_INITIALIZED:
    case ECU_IO_EXP_ST_RESET:
      eStatus = local_ECU_IO_eSendReceiveFrame(ECU_IO_EXP_CMD_RESET, 2, &u32RxFrame);
      if(eStatus == STATUS_OK)
      {
        ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_READ_ALL;
      }
      break;
    case ECU_IO_EXP_ST_READ_ALL:
      eStatus = local_ECU_IO_eExpReadAllReg();
      if(eStatus == STATUS_OK)
      {
        ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_CONFIG;
      }
      break;
    case ECU_IO_EXP_ST_CONFIG:
      eStatus = local_ECU_IO_eExpConfig();
      if(eStatus == STATUS_OK)
      {
        ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_READ_INPUTS;
      }
      break;
    case ECU_IO_EXP_ST_MONITOR:
      ECU_IO_eStatus = ECU_IO_ST_READY;
      if(ECU_IO_strExpObj.u8ReadingReqNum > (uint8_t)0)
      {
        ECU_IO_strExpObj.u8ReadingReqNum--;
        ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_READ_INPUTS;
      }
      else
      {
        u8PinStatus = deMCD_TRUE;
        eStatus = UC_DIO_eReadInputPin(ECU_IO_INPUT_INT_PIN, &u8PinStatus);
        /* If some how there are a reading request that has not been captured by the interrupt*/
        /* This condition should not be true; it is there in case of an exception*/
        if((eStatus == STATUS_OK) && (u8PinStatus == deMCD_FALSE))
        {
          ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_READ_INPUTS;
        }
      }
      break;
    case ECU_IO_EXP_ST_READ_INPUTS:
      eStatus = local_ECU_IO_eExpReadInputs();
      if(eStatus == STATUS_OK)
      {
        ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_MONITOR;
      }
      break;
    default:
      ECU_IO_strExpObj.eExpState = ECU_IO_EXP_ST_NOT_INITIALIZED;
      break;
  }
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/


#ifdef ECU_IO_SPI_EXPANDER_ENABLE
STATUS_t local_ECU_IO_eExpReadAllReg(void)
{
  STATUS_t eStatus = STATUS_BUSY;
  STATUS_t eBusStatus = STATUS_NOK;
  uint32_t u32TxFrame;
  uint32_t u32RxFrame;
  static uint8_t su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X00;

 
  u32TxFrame = (uint32_t)0x00000000          |
               ECU_IO_EXP_CMD_READ | 
               (su8IndexReg << 16)  |
               ((su8IndexReg+1) << 8);
 
  eBusStatus = local_ECU_IO_eSendReceiveFrame(u32TxFrame, 2, &u32RxFrame);

  if(eBusStatus == STATUS_OK)
  {
    ECU_IO_strExpObj.au8Register[su8IndexReg] = (u32RxFrame & 0x0000FF00) >> 8;
    ECU_IO_strExpObj.au8Register[su8IndexReg+1] = (u32RxFrame & 0x000000FF) >> 0;
    
    su8IndexReg = su8IndexReg + 2;
    
    if(su8IndexReg == ECU_IO_MAXIM_REG_NUM)
    {
      su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X00;
      eStatus = STATUS_OK;
    }
  }

  return eStatus;
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
STATUS_t local_ECU_IO_eExpConfig(void)
{
  STATUS_t eStatus = STATUS_BUSY;
  STATUS_t eBusStatus = STATUS_NOK;
  uint32_t u32TxFrame;
  uint32_t u32RxFrame;
  static uint8_t su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X05;
  static uint8_t su8ConfigDone = deMCD_FALSE;

  if(su8ConfigDone == deMCD_FALSE)
  {
    local_ECU_IO_vdExpSetTopology();
    local_ECU_IO_vdExpSetInterrupts();
    su8ConfigDone = deMCD_TRUE;
  }

  if(su8IndexReg < (ECU_IO_MAXIM_REG_NUM-1))
  {
    u32TxFrame = (uint32_t)0x00000000          |
                 ECU_IO_EXP_CMD_WRITE | 
                 (su8IndexReg << 16)  |
                 (ECU_IO_strExpObj.au8Register[su8IndexReg] << 8) |
                 (ECU_IO_strExpObj.au8Register[su8IndexReg+1] << 0);
  }
  else
  {
    u32TxFrame = (uint32_t)0x00000000          |
                 ECU_IO_EXP_CMD_WRITE | 
                 (su8IndexReg << 16)  |
                 (ECU_IO_strExpObj.au8Register[su8IndexReg] << 8) |
                 (0x00 << 0);

  }
 
  eBusStatus = local_ECU_IO_eSendReceiveFrame(u32TxFrame, 2, &u32RxFrame);

  if(eBusStatus == STATUS_OK)
  {
    su8IndexReg = su8IndexReg + 2;
    
    if(su8IndexReg == (ECU_IO_MAXIM_REG_NUM+1))
    {
      su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X05;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdExpSetTopology(void)
{
  uint16_t u16LhRegisters;
  uint16_t u16LhValues = 0x0000;
  uint8_t u8IndexInput;

  
  for(u8IndexInput = (uint8_t)0; u8IndexInput < (uint8_t)ECU_IO_DIN_NUM; u8IndexInput++)
  {
    if(ECU_IO_astrObjInput[u8IndexInput].eType == ECU_IO_TYPE_MAXIM_CHIP)
    {
      if(ECU_IO_astrObjInput[u8IndexInput].u8IdPin < ECU_IO_MAXIM_PIN_ID10)
      {
        if(ECU_IO_astrObjInput[u8IndexInput].eSwitchStates == ECU_IO_SWITCH_OC_VBAT)
        {
          u16LhValues |= 1 << ECU_IO_astrObjInput[u8IndexInput].u8IdPin;
        }
      }
    }
  }
  
    
  u16LhRegisters = (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X05] << 8) |
                   (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X06] << 0);
  /*Erase old LH Values*/
  u16LhRegisters &= 0xFC00;
  /*Set new values*/
  u16LhRegisters |= u16LhValues;
  /*Send back the values to the registers array*/
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X05] = (u16LhRegisters & 0xFF00) >> 8;
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X06] = (u16LhRegisters & 0x00FF) >> 0;
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/


#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdExpSetInterrupts(void)
{
  uint32_t u32IntValuesH = 0x00000000;
  uint32_t u32IntValuesL = 0x00000000;
  uint32_t u32IntRegistersH;
  uint32_t u32IntRegistersL;
  uint8_t u8IndexInput;

  for(u8IndexInput = (uint8_t)0; u8IndexInput < (uint8_t)ECU_IO_DIN_NUM; u8IndexInput++)
  {
    if(ECU_IO_astrObjInput[u8IndexInput].eType == ECU_IO_TYPE_MAXIM_CHIP)
    {
      if(ECU_IO_astrObjInput[u8IndexInput].eClbkEn == ECU_IO_CLBK_ENABLE)
      {
        if(ECU_IO_astrObjInput[u8IndexInput].u8IdPin < ECU_IO_MAXIM_PIN_ID32)
        {
          u32IntValuesL |= (1 << ECU_IO_astrObjInput[u8IndexInput].u8IdPin);
        }
        else
        {
          u32IntValuesH |= (1 << (ECU_IO_astrObjInput[u8IndexInput].u8IdPin - (uint8_t)32));
        }
      }
    }
  }
  
  u32IntRegistersL = (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X0B] << 0)   |
                     (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X0A] << 8)   |
                     (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X09] << 16)  |
                     (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X08] << 24);
  u32IntRegistersH = (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X07] << 0);
  
  /*Erase old Int Values*/
  u32IntRegistersL &= 0x0000003F;
  u32IntRegistersH &= 0xFFFFFF00;
  /*Set new values*/
  u32IntRegistersL |= (u32IntValuesL << 5);
  u32IntRegistersH |= ((u32IntValuesL & 0xF8000000) >> (32-5))|
                      ((u32IntValuesH  & 0x00000007) << (8-3));
  /*Send back the values to the registers array*/
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X0B] = (u32IntRegistersL & 0x000000FF) >> 0;
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X0A] = (u32IntRegistersL & 0x0000FF00) >> 8;
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X09] = (u32IntRegistersL & 0x00FF0000) >> 16;
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X08] = (u32IntRegistersL & 0xFF000000) >> 24;
  ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X07] = (u32IntRegistersH & 0x000000FF) >> 0;

}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/


#ifdef ECU_IO_SPI_EXPANDER_ENABLE
STATUS_t local_ECU_IO_eExpReadInputs(void)
{
  STATUS_t eStatus = STATUS_BUSY;
  STATUS_t eBusStatus = STATUS_NOK;
  uint32_t u32TxFrame;
  uint32_t u32RxFrame;
  static uint8_t su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X00;
  
  u32TxFrame = (uint32_t)0x00000000          |
               ECU_IO_EXP_CMD_READ | 
               (su8IndexReg << 16)  |
               ((su8IndexReg+1) << 8);
 
  eBusStatus = local_ECU_IO_eSendReceiveFrame(u32TxFrame, 2, &u32RxFrame);

  if(eBusStatus == STATUS_OK)
  {
    ECU_IO_strExpObj.au8Register[su8IndexReg] = (u32RxFrame & 0x0000FF00) >> 8;
    if((su8IndexReg+1) <= ECU_IO_MAXIM_REG_0X04)
    {
      ECU_IO_strExpObj.au8Register[su8IndexReg+1] = (u32RxFrame & 0x000000FF) >> 0;
    }
    
    su8IndexReg = su8IndexReg + 2;
    
    if(su8IndexReg == ECU_IO_MAXIM_REG_0X06)
    {
      su8IndexReg = (uint8_t)ECU_IO_MAXIM_REG_0X00;
      local_ECU_IO_vdExpDecodeInputs();
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/


#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdExpDecodeInputs(void)
{
  uint8_t u8IndexInput;
  uint32_t u32InputsL = 0x00000000;
  uint32_t u32InputsH = 0x00000000;
  
  u32InputsL = (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X04] >> (8-3))  |
               (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X03] << (3+0))  | 
               (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X02] << (3+8))  | 
               (ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X01] << (3+16)) | 
               ((ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X00] & 0x1F) >> 0);
  u32InputsH = ECU_IO_strExpObj.au8Register[ECU_IO_MAXIM_REG_0X00] >> (8-3);
  
  for(u8IndexInput = (uint8_t)0; u8IndexInput < (uint8_t)ECU_IO_DIN_NUM; u8IndexInput++)
  {
    if(ECU_IO_astrObjInput[u8IndexInput].eType == ECU_IO_TYPE_MAXIM_CHIP)
    {
      if(ECU_IO_astrObjInput[u8IndexInput].u8IdPin < ECU_IO_MAXIM_PIN_ID32)
      {
        ECU_IO_astrObjInput[u8IndexInput].u8Value = (uint8_t)((u32InputsL & (1 << ECU_IO_astrObjInput[u8IndexInput].u8IdPin)) != (uint32_t)0);
      }
      else
      {
        ECU_IO_astrObjInput[u8IndexInput].u8Value = (uint8_t)((u32InputsH & (1 << (ECU_IO_astrObjInput[u8IndexInput].u8IdPin-32))) != (uint32_t)0);
      }
    }
  }
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdReadSpiDataCallback(uint32_t u32RxData)
{
  static uint8_t su8RxBytesCounter = 0;
  static uint32_t su32RxDataCollected = 0;
  ECU_SYS_eEcuMode_t eEcuMode;
  
  eEcuMode = ECU_SYS_eGetEcuMode();
  if(eEcuMode != ECU_SYS_INIT)
  {
    su8RxBytesCounter++;
    su32RxDataCollected |= (u32RxData << (8*(ECU_IO_strExpObj.u8RxBytesExpected-su8RxBytesCounter)));

    if(su8RxBytesCounter == ECU_IO_strExpObj.u8RxBytesExpected)
    {
      ECU_IO_strExpObj.u32RxFrame = su32RxDataCollected;
      su32RxDataCollected = 0;
      su8RxBytesCounter = 0;
      ECU_IO_strExpObj.u8SpiFrameReceived = deMCD_TRUE;
    }
  }
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#ifdef ECU_IO_SPI_EXPANDER_ENABLE
void local_ECU_IO_vdExpDataChangeCallback(void)
{
  ECU_SYS_eEcuMode_t eEcuMode;

  eEcuMode = ECU_SYS_eGetEcuMode();
  if(eEcuMode != ECU_SYS_INIT)
  {
    if(ECU_IO_strExpObj.u8ReadingReqNum < (uint8_t)255)
    {
      ECU_IO_strExpObj.u8ReadingReqNum++;
    }
  }
}
#endif /*ECU_IO_SPI_EXPANDER_ENABLE*/

#if ECU_IO_POUT_NUM > 0
void local_ECU_IO_POUT_vdInitialize(void)
{
  uint8_t u8IdPout;
  
  for(u8IdPout = (uint8_t)0; u8IdPout < ECU_IO_POUT_NUM; u8IdPout++)
  {
      UC_PWM_POUT_eFrequencyChange(ECU_IO_astrPwmObjOutput[u8IdPout].u8IdPin, (uint32_t)ECU_IO_astrPwmObjOutput[u8IdPout].u16Frequency);
      UC_PWM_POUT_eDutyCycleChange(ECU_IO_astrPwmObjOutput[u8IdPout].u8IdPin, (uint8_t)ECU_IO_astrPwmObjOutput[u8IdPout].fDutyCycle);
  }
}
#endif /*ECU_IO_POUT_NUM*/


#endif /*ECU_IO_MODULE_ENABLE*/

