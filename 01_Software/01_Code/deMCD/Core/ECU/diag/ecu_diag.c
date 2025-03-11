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

File Name: ecu_diag.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_diag_cfg.h"
#include "ecu_diag.h"


#ifdef ECU_DIAG_MODULE_ENABLE

#include "lib_types.h"
#include "uc.h"
#include "ecu_system.h"


ECU_DIAG_strPacket_t ECU_DIAG_strPacket =
{
  /* Program Control Information Byte*/
  (uint8_t)ECU_DIAG_DATA_DEFAULT,
  /* Service ID */
	(uint8_t)ECU_DIAG_DATA_DEFAULT,
  /* Sub-function value*/
  (uint8_t)ECU_DIAG_DATA_DEFAULT,
	/* Request Data Bytes */
	{
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,      
	},
	/* Response Data Bytes */
	{
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT,
		(uint8_t)ECU_DIAG_DATA_DEFAULT
	},
	/* Diag Busy Flag */
	(uint8_t)ECU_DIAG_FREE,
  /* Current Session */
  ECU_SYS_INIT,
};


ECU_DIAG_pfCallback_t ECU_DIAG_pfCallback_vdAppBoot = deMCD_NULL;
ECU_DIAG_pfCallback_t ECU_DIAG_pfCallback_vdAppDiag = deMCD_NULL;
ECU_DIAG_pfCallbackVoid_t ECU_DIAG_pfCallback_vdTimingRequirement = deMCD_NULL;

/* Declaration of local functions */
void local_ECU_DIAG_vdCreateNegativeResponse(uint8_t* pau8Response, uint8_t* pau8Data);
void local_ECU_DIAG_vdCreatePositiveResponse(uint8_t* pau8Data);
void local_ECU_DIAG_vdCreatePositiveResponsePlusData(uint8_t* pau8Data);
void local_ECU_DIAG_vdApplicationCallback(uint8_t* pau8Data, ECU_DIAG_CommunicationMode_t Mode);
void local_ECU_DIAG_vdReceiveDataClbk(uint8_t u8RxData[]);
void local_ECU_DIAG_vdTimerOverFlow(void);
void local_ECU_DIAG_vdSetTimerOverFlowFlag(void);
void local_ECU_DIAG_vdResetTimerOverFlowFlag(void);

/*Decalaration of internal global variables*/
uint8_t ECU_DIAG_u8DataBytesNumber = 8;
ECU_DIAG_CommunicationMode_t ECU_DIAG_EcuCommunicationMode;
ECU_DIAG_APP_STATUS_t ECU_DIAG_APP_STATUS = ECU_DIAG_APP_IDLE;
uint8_t ECU_DIAG_u8TimerOverFlow = deMCD_FALSE;
uint8_t ECU_DIAG_u8CANIsActive = 0;
uint8_t ECU_DIAG_u8SendOnCANNetwork;

void ECU_DIAG_vdInit(void)
{
  ECU_DIAG_EcuCommunicationMode = ECU_DIAG_NONE;
  /* Enable CAN messages for the Diagnostics */  
  UC_CAN_eEnableFrame(ECU_DIAG_CAN1_CHANNEL, ECU_DIAG_CAN1_REQUEST, UC_CAN_MSG_DIR_RX, UC_CAN_MSG_ENABLED);
  UC_CAN_eEnableFrame(ECU_DIAG_CAN2_CHANNEL, ECU_DIAG_CAN2_REQUEST, UC_CAN_MSG_DIR_RX, UC_CAN_MSG_ENABLED);
  UC_CAN_eEnableFrame(ECU_DIAG_CAN3_CHANNEL, ECU_DIAG_CAN3_REQUEST, UC_CAN_MSG_DIR_RX, UC_CAN_MSG_ENABLED);
//  UC_CAN_eEnableFrame(ECU_DIAG_CAN_CHANNEL, ECU_DIAG_CAN_RESPONSE, UC_CAN_MSG_DIR_TX, UC_CAN_MSG_ENABLED);
  UC_CAN_eRegisterCallbackForMsgEvent(ECU_DIAG_CAN1_CHANNEL, UC_CAN_MSG_DIR_RX, ECU_DIAG_CAN1_REQUEST, ECU_DIAG_vdCAN1_Callback);    
  UC_CAN_eRegisterCallbackForMsgEvent(ECU_DIAG_CAN2_CHANNEL, UC_CAN_MSG_DIR_RX, ECU_DIAG_CAN2_REQUEST, ECU_DIAG_vdCAN2_Callback);    
  UC_CAN_eRegisterCallbackForMsgEvent(ECU_DIAG_CAN3_CHANNEL, UC_CAN_MSG_DIR_RX, ECU_DIAG_CAN3_REQUEST, ECU_DIAG_vdCAN3_Callback);    
  //UC_UART_eRegisterDataRxClbk(ECU_DIAG_LY_UART_HANDLER, ECU_DIAG_vdUART_Callback, ECU_DIAG_u8DataBytesNumber);    
}

void ECU_DIAG_vdMgr(void)
{
  
}

void ECU_DIAG_vdUART_Callback(void)
{
	STATUS_t eStatus;
	uint8_t au8UartRxFrame[8];
	ECU_SYS_eEcuMode_t eEcuMode;
  
  eEcuMode = ECU_SYS_eGetEcuMode();
  
  if(eEcuMode != ECU_SYS_INIT)
  {
    ECU_DIAG_u8SendOnCANNetwork = 0;
    UC_TIMER_vdRegisterTimeOutSignal(local_ECU_DIAG_vdSetTimerOverFlowFlag, ECU_DIAG_P2SERVER_MAX_VALUE_US, ECU_DIAG_P2SERVER_SIGNAL_ID);  // to start timer counter
    if(ECU_DIAG_EcuCommunicationMode != ECU_DIAG_UART_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN2_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN3_MODE)
    {
      ECU_DIAG_EcuCommunicationMode = ECU_DIAG_UART_MODE;
      eStatus = UC_UART_eReadUartFrameSync(ECU_DIAG_LY_UART_HANDLER, au8UartRxFrame);          
      if(eStatus == STATUS_OK)
      {
        /*local function call*/
        local_ECU_DIAG_vdApplicationCallback(au8UartRxFrame, ECU_DIAG_EcuCommunicationMode);
      }
    }
  }
}

void ECU_DIAG_vdCAN1_Callback(void)
{
	STATUS_t eStatus;
	uint8_t au8CanRxFrame[8];
	ECU_SYS_eEcuMode_t eEcuMode;
  
  eEcuMode = ECU_SYS_eGetEcuMode();
  
  if(eEcuMode != ECU_SYS_INIT)
  {
    ECU_DIAG_u8SendOnCANNetwork = 1;
    UC_TIMER_vdRegisterTimeOutSignal(local_ECU_DIAG_vdSetTimerOverFlowFlag, ECU_DIAG_P2SERVER_MAX_VALUE_US, ECU_DIAG_P2SERVER_SIGNAL_ID);  // to start timer counter
    if(ECU_DIAG_EcuCommunicationMode != ECU_DIAG_UART_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN2_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN3_MODE)
    {
      ECU_DIAG_EcuCommunicationMode = ECU_DIAG_CAN1_MODE;
      //eStatus = UC_CAN_eReadCanFrameAsync(ECU_DIAG_CAN_CHANNEL, ECU_DIAG_CAN_REQUEST, au8CanRxFrame);
      eStatus = UC_CAN_eReadCanFrameSync(ECU_DIAG_CAN1_CHANNEL, ECU_DIAG_CAN1_REQUEST, au8CanRxFrame);
      if(eStatus == STATUS_OK)
      {
        /*local function call*/
        local_ECU_DIAG_vdApplicationCallback(au8CanRxFrame, ECU_DIAG_EcuCommunicationMode);
      }
    }
  }
}

void ECU_DIAG_vdCAN2_Callback(void)
{
	STATUS_t eStatus;
	uint8_t au8CanRxFrame[8];
	ECU_SYS_eEcuMode_t eEcuMode;
  
  eEcuMode = ECU_SYS_eGetEcuMode();
  
  if(eEcuMode != ECU_SYS_INIT)
  {
    ECU_DIAG_u8SendOnCANNetwork = 2;
    UC_TIMER_vdRegisterTimeOutSignal(local_ECU_DIAG_vdSetTimerOverFlowFlag, ECU_DIAG_P2SERVER_MAX_VALUE_US, ECU_DIAG_P2SERVER_SIGNAL_ID);  // to start timer counter
    if(ECU_DIAG_EcuCommunicationMode != ECU_DIAG_UART_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN1_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN3_MODE)
    {
      ECU_DIAG_EcuCommunicationMode = ECU_DIAG_CAN2_MODE;
      //eStatus = UC_CAN_eReadCanFrameAsync(ECU_DIAG_CAN_CHANNEL, ECU_DIAG_CAN_REQUEST, au8CanRxFrame);
      eStatus = UC_CAN_eReadCanFrameSync(ECU_DIAG_CAN2_CHANNEL, ECU_DIAG_CAN2_REQUEST, au8CanRxFrame);
      if(eStatus == STATUS_OK)
      {
        /*local function call*/
        local_ECU_DIAG_vdApplicationCallback(au8CanRxFrame, ECU_DIAG_EcuCommunicationMode);
      }
    }
  }
}

void ECU_DIAG_vdCAN3_Callback(void)
{
	STATUS_t eStatus;
	uint8_t au8CanRxFrame[8];
	ECU_SYS_eEcuMode_t eEcuMode;
  
  eEcuMode = ECU_SYS_eGetEcuMode();
  
  if(eEcuMode != ECU_SYS_INIT)
  {
    ECU_DIAG_u8SendOnCANNetwork = 3;
    UC_TIMER_vdRegisterTimeOutSignal(local_ECU_DIAG_vdSetTimerOverFlowFlag, ECU_DIAG_P2SERVER_MAX_VALUE_US, ECU_DIAG_P2SERVER_SIGNAL_ID);  // to start timer counter    
    if(ECU_DIAG_EcuCommunicationMode != ECU_DIAG_UART_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN1_MODE || ECU_DIAG_EcuCommunicationMode != ECU_DIAG_CAN2_MODE)
    {
      ECU_DIAG_EcuCommunicationMode = ECU_DIAG_CAN3_MODE;
      //eStatus = UC_CAN_eReadCanFrameAsync(ECU_DIAG_CAN_CHANNEL, ECU_DIAG_CAN_REQUEST, au8CanRxFrame);
      eStatus = UC_CAN_eReadCanFrameSync(ECU_DIAG_CAN3_CHANNEL, ECU_DIAG_CAN3_REQUEST, au8CanRxFrame);
      if(eStatus == STATUS_OK)
      {
        /*local function call*/
        local_ECU_DIAG_vdApplicationCallback(au8CanRxFrame, ECU_DIAG_EcuCommunicationMode);
      }
    }
  }
}

STATUS_t ECU_DIAG_u8GetDiagFrame(ECU_DIAG_FrameType_t* eFrameType, uint8_t* u8DataCount, uint8_t* pu8ServiceID, uint8_t* pu8SubFunction, uint8_t* u8SuppresPosResponse, uint8_t* pau8Data, uint8_t u8DataSize, uint8_t* pau8DataReceivedInFullArray, uint8_t* pu8NumberOfBytesReceived)
{
	STATUS_t eStatus = STATUS_NOK;
	uint8_t u8IndexData;
  uint8_t u8Count = 0;
  *pu8NumberOfBytesReceived = 0;
  *eFrameType = (ECU_DIAG_FrameType_t)(ECU_DIAG_strPacket.u8PCI >> 4U);
  *u8DataCount = (ECU_DIAG_strPacket.u8PCI & 0x0F);
  pau8DataReceivedInFullArray[0] = ECU_DIAG_strPacket.u8PCI;
  if(ECU_DIAG_strPacket.u8PCI != 0x55 || ECU_DIAG_strPacket.u8PCI != 0xAA)
  {
    u8Count++;
  }
  *pu8ServiceID = ECU_DIAG_strPacket.u8ServiceID;
  pau8DataReceivedInFullArray[1] = ECU_DIAG_strPacket.u8ServiceID;
  if(ECU_DIAG_strPacket.u8ServiceID != 0x55 || ECU_DIAG_strPacket.u8ServiceID != 0xAA)
  {
    u8Count++;
  }
  if(*eFrameType == ECU_DIAG_SingleFrame && ECU_DIAG_strPacket.u8ServiceID != 0x34 && ECU_DIAG_strPacket.u8ServiceID != 0x35 && ECU_DIAG_strPacket.u8ServiceID != 0x36 && ECU_DIAG_strPacket.u8ServiceID != 0x37) // if not download/upload services
  {
    *pu8SubFunction = (ECU_DIAG_strPacket.u8SubFunction & 0x7F); // SuppressPosResp bit is supported only in single frames requests
  }
  else
  {
    *pu8SubFunction = (ECU_DIAG_strPacket.u8SubFunction);
  }
  pau8DataReceivedInFullArray[2] = ECU_DIAG_strPacket.u8SubFunction;
    if(ECU_DIAG_strPacket.u8SubFunction != 0x55 || ECU_DIAG_strPacket.u8SubFunction != 0xAA)
  {
    u8Count++;
  }
  *u8SuppresPosResponse = (ECU_DIAG_strPacket.u8SubFunction >> 7U); 
  for(u8IndexData = 0; u8IndexData < u8DataSize; u8IndexData++)
  {
    pau8DataReceivedInFullArray[3 + u8IndexData] = ECU_DIAG_strPacket.au8RequestData[u8IndexData];
    pau8Data[u8IndexData] = ECU_DIAG_strPacket.au8RequestData[u8IndexData];
    if(ECU_DIAG_strPacket.au8RequestData[u8IndexData] != 0x55 && ECU_DIAG_strPacket.au8RequestData[u8IndexData] != 0xAA)
    {
      u8Count++;
    }
  }
  eStatus = STATUS_OK;
  *pu8NumberOfBytesReceived = u8Count;
	return eStatus;
}


void ECU_DIAG_vdSetAppStatus(ECU_DIAG_APP_STATUS_t APP_STATUS)
{
  ECU_DIAG_APP_STATUS = APP_STATUS;
}

void ECU_DIAG_vdRegisterAppDiagCallback(ECU_DIAG_pfCallback_t pfCallback)
{
  if(ECU_DIAG_pfCallback_vdAppDiag == deMCD_NULL)
  {
    ECU_DIAG_pfCallback_vdAppDiag = pfCallback;
  }
}

void ECU_DIAG_vdDeInit(void)
{

}

void ECU_DIAG_vdEndService(uint8_t eStatus, uint8_t* pau8Data)
{
  uint8_t u8Counter;
  switch(ECU_DIAG_u8SendOnCANNetwork)
  {
  case 0:
    for(u8Counter = 0; u8Counter < 8; u8Counter++)
    {
      UC_UART_eSendBytesSync(ECU_DIAG_LY_UART_HANDLER, &pau8Data[u8Counter],1); 
    }
    break;
  case 1:
    UC_CAN_eWriteCanFrameSync(ECU_DIAG_CAN1_CHANNEL, ECU_DIAG_CAN1_RESPONSE, pau8Data);    
    break;
  case 2:
    UC_CAN_eWriteCanFrameSync(ECU_DIAG_CAN2_CHANNEL, ECU_DIAG_CAN2_RESPONSE, pau8Data);          
    break;
  case 3:
    UC_CAN_eWriteCanFrameSync(ECU_DIAG_CAN3_CHANNEL, ECU_DIAG_CAN3_RESPONSE, pau8Data);      
    break;
  default:
    break;
  }
}

void ECU_DIAG_vdRegisterTimingRequirementViolationCallBack(ECU_DIAG_pfCallbackVoid_t p2f)
{
  ECU_DIAG_pfCallback_vdTimingRequirement = p2f;
}

void local_ECU_DIAG_vdSetTimerOverFlowFlag(void)
{
  ECU_DIAG_pfCallback_vdTimingRequirement();
  ECU_DIAG_u8TimerOverFlow = deMCD_TRUE;    
}

void local_ECU_DIAG_vdResetTimerOverFlowFlag(void)
{
  UC_TIMER_vdDeregisterTimeOutSignal(ECU_DIAG_P2SERVER_SIGNAL_ID);
  ECU_DIAG_u8TimerOverFlow = deMCD_FALSE;
}

uint8_t ECU_DIAG_u8CheckTimerOverflowFlag(void)
{
  return ECU_DIAG_u8TimerOverFlow;
}


void local_ECU_DIAG_vdApplicationCallback(uint8_t* pau8Data, ECU_DIAG_CommunicationMode_t Mode)
{
  uint8_t u8IndexData;
  
  ECU_DIAG_strPacket.u8PCI = pau8Data[0];                
  ECU_DIAG_strPacket.u8ServiceID = pau8Data[1];
  ECU_DIAG_strPacket.u8SubFunction = pau8Data[2];
  for(u8IndexData = 0; u8IndexData < ECU_DIAG_FRAME_DATA_NUM; u8IndexData++)
  {
    ECU_DIAG_strPacket.au8RequestData[u8IndexData] = pau8Data[u8IndexData+3];
  }             
  /*Call app_diag callback*/
  if(ECU_DIAG_pfCallback_vdAppDiag != deMCD_NULL)
  {
    ECU_DIAG_pfCallback_vdAppDiag(ECU_DIAG_strPacket.ECU_Session);
  }
  local_ECU_DIAG_vdResetTimerOverFlowFlag(); // to reset timer counter
}
#endif /*ECU_DIAG_MODULE_ENABLE*/
