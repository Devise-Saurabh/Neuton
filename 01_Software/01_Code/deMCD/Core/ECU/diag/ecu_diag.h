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

File Name: ecu_diag.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef ECU_DIAG_H
#define ECU_DIAG_H

#include "lib_types.h"
#include "ecu_system.h"



#define ECU_DIAG_FREE                          (0)
#define ECU_DIAG_BUSY                          (1)

#define ECU_DIAG_RESPONSE_CODE_MASK            (0x07)

#define ECU_DIAG_FRAME_DATA_BYTES              (5)

#define ECU_DIAG_P2SERVER_MAX_VALUE_US         (50000)

#define ECU_DIAG_P2SERVER_SIGNAL_ID            (0)

#define ECU_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_US        (5000000)

#define ECU_DIAG_P2_ASTRIX_SERVER_SIGNAL_ID           (1)

typedef void(* ECU_DIAG_pfCallback_t)(ECU_SYS_eEcuMode_t ECU_Session);
typedef void(* ECU_DIAG_pfCallbackVoid_t)(void);

#define ECU_DIAG_eSendByte                    UC_UART_eSendByteSync
#define ECU_DIAG_LY_UART_HANDLER              UC_UART_HANDLER_ID1

/*Diag Request Block*/
typedef struct ECU_DIAG_strPacketTemplate
{
  /* Program Control Information Byte*/
  uint8_t u8PCI;
	/* Service ID */
	uint8_t u8ServiceID;  
  /* Sub-function value*/
  uint8_t u8SubFunction;
	/* Request Data Bytes */
	uint8_t au8RequestData[ECU_DIAG_FRAME_DATA_BYTES];
	/* ResponseData Bytes */
	uint8_t au8ResponseData[ECU_DIAG_FRAME_DATA_BYTES];
	/* Diag Busy Flag */
	uint8_t u8IsBusy;
  /* Current Session */
  ECU_SYS_eEcuMode_t ECU_Session;
} ECU_DIAG_strPacket_t;

//typedef enum ECU_DIAG_FrameTyp_DataLength_template
//{
//  
//} ECU_DIAG_FrameTyp_DataLength_t

typedef enum ECU_DIAG_CommunicationMode_template
{
  ECU_DIAG_CAN1_MODE = 0,
  ECU_DIAG_CAN2_MODE = 1,
  ECU_DIAG_CAN3_MODE = 2,
  ECU_DIAG_UART_MODE = 3,
  ECU_DIAG_NONE = 4,
} ECU_DIAG_CommunicationMode_t;

typedef enum ECU_DIAG_APP_STATUS_template
{
  ECU_DIAG_APP_IDLE = 0,
  ECU_DIAG_APP_BUSY = 1,
} ECU_DIAG_APP_STATUS_t;

typedef enum ECU_DIAG_FrameType_template
{
  ECU_DIAG_SingleFrame = 0,
  ECU_DIAG_FirstFrame = 1,
  ECU_DIAG_ConsecutiveFrame = 2,
  ECU_DIAG_FlowControl = 3,
} ECU_DIAG_FrameType_t;

void ECU_DIAG_vdInit(void);
void ECU_DIAG_vdDeInit(void);
void ECU_DIAG_vdMgr(void);
void ECU_DIAG_vdCAN1_Callback(void);
void ECU_DIAG_vdCAN2_Callback(void);
void ECU_DIAG_vdCAN3_Callback(void);
void ECU_DIAG_vdUART_Callback(void);
STATUS_t ECU_DIAG_u8GetDiagRequest(uint8_t* pu8ServiceId, uint8_t* pu8DeviceId, uint8_t* pu8Request, uint8_t* pau8Data);
void ECU_DIAG_vdServiceDone(uint8_t u8Status, uint8_t* pau8Data);
void ECU_DIAG_vdServiceDonePlusData(uint8_t eStatus, uint8_t* pau8Data);
STATUS_t ECU_DIAG_u8GetDiagFrame(ECU_DIAG_FrameType_t* eFrameType, uint8_t* u8DataCount, uint8_t* pu8ServiceID, uint8_t* pu8SubFunction, uint8_t* u8SuppresPosResponse, uint8_t* pau8Data, uint8_t u8DataSize, uint8_t* pau8DataReceivedInFullArray, uint8_t* pu8NumberOfBytesReceived);
void ECU_DIAG_vdRegisterAppBootCallback(ECU_DIAG_pfCallback_t pfCallback);
void ECU_DIAG_vdRegisterAppDiagCallback(ECU_DIAG_pfCallback_t pfCallback);
STATUS_t ECU_DIAG_eSendUartFrame(uint8_t au8Data[]);
void ECU_DIAG_vdSetAppStatus(ECU_DIAG_APP_STATUS_t APP_STATUS);
void ECU_DIAG_vdEndService(uint8_t eStatus, uint8_t* pau8Data);
uint8_t ECU_DIAG_u8TimerFlagValue(void);
uint8_t ECU_DIAG_u8CheckTimerOverflowFlag(void);
void ECU_DIAG_vdRegisterTimingRequirementViolationCallBack(ECU_DIAG_pfCallbackVoid_t p2f);

#endif /*ECU_DIAG_H*/



