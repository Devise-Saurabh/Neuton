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

File Name: ecu_serial.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/


#ifndef ECU_SERIAL_H
#define ECU_SERIAL_H

#include "lib_types.h"
#include "uc.h"

#define ECU_SERIAL_CHAR_NEW_LINE                                      (10)
#define ECU_SERIAL_CHAR_CARRIAGE_RETURN                               (13)

typedef void (*ECU_SERIAL_p2fFrameRxClbk_t)(uint8_t* pu8FrameRx, uint16_t u16BytesNum);

typedef UC_UART_p2fDataReceivedClbk_t ECU_SERIAL_p2fUartDataReceivedClbk_t;

typedef enum ECU_SERIAL_eRxFrameTypeTemplate
{
  ECU_SERIAL_FIXED_FRAME = 0,
  ECU_SERIAL_DYNAMIC_FRAME = 1,
  ECU_SERIAL_FIXED_DYNAMIC_FRAME = 2,
} ECU_SERIAL_eRxFrameType_t;

typedef enum ECU_SERIAL_eFrameEnableTemplate
{
  ECU_SERIAL_FRAME_DISABLED = 0,
  ECU_SERIAL_FRAME_ENABLED = 1,
} ECU_SERIAL_eFrameEnable_t;

typedef struct ECU_SERIAL_strRxFrameTemplate
{
	/*Frame ID*/
	uint8_t u8Id;
        /*Enable*/
        ECU_SERIAL_eFrameEnable_t eFrameEnable; 
	/*Max Frame Size*/
	uint16_t u16MaxSize;
	/*Actual Frame Size*/
	uint16_t u16ActualSize;
	/*Frame Buffer*/
	uint8_t au8BytesBuffer[ECU_SERIAL_BUFFER_BYTES_SIZE];
        /*Frame Type*/
        ECU_SERIAL_eRxFrameType_t eRxFrameType;
        /*Fixed Frame Size: Set to Zero in case Dynamic*/
        uint16_t u16FixedFrameSize;
        /*Start Sequence Bytes Array, unused set to 0*/
        uint8_t au8StartSeq[ECU_SERIAL_START_END_BYTES_MAX_SIZE];
        /*Frame Start Sequence Size*/
        uint8_t u8StartSeqSize;
        /*Bytes Counter Start Seq*/
        uint8_t u8CountersBytesStartSeq;
        /*End Sequence Bytes Array, unused set to 0*/
        uint8_t au8EndSeq[ECU_SERIAL_START_END_BYTES_MAX_SIZE];
        /*Frame Start Sequence Size*/
        uint8_t u8EndSeqSize;
        /*Bytes Counter End Seq*/
        uint8_t u8CountersBytesEndSeq;
        /*Frame Rx Byte Counter*/
        uint16_t u16ByteCounter;
        /*Flag Frame Start Received*/
        uint8_t u8FlagFrameStart;
        /*Flag Frame End Received*/
        uint8_t u8FlagFrameEnd;
        /*u8FixedDynLenBytesIndex*/
        uint8_t au8FixedDynLenBytesIndex[2];
        /*u8FixedDynBytesLen*/
        uint8_t au8FixedDynBytesLen[2];
        /*FixedDynLenOffset*/
        uint16_t u16FixedDynLenOffset;
        /*FixedDynLenMin*/
        uint16_t u16FixedDynLenMin;
        /*FixedDyn u8FDLenBytesFoundCounter*/
        uint8_t u8FDLenBytesFoundCounter;
        /*Callback when frame received*/
        ECU_SERIAL_p2fFrameRxClbk_t p2fFrameRxClbk;
	/*Status*/
	STATUS_t eStatus;
} ECU_SERIAL_strRxFrame_t;


typedef struct ECU_SERIAL_strInterfaceTemplate
{
	/*Serial Interface ID*/
	uint8_t u8Id;
	/*Lower Layer Uart Id */
	uint8_t u8LowerLayerUartId;
	/*Lower Layer Uart Size*/
	uint8_t u8LowerLayerUartFrameSize;
	/*Status*/
	STATUS_t eStatus;
        /*Number of Rx Frames*/
        uint8_t u8NumRxFrames;
        /*Array of Rx Frames Objects*/
        ECU_SERIAL_strRxFrame_t* astrRxFrame;
        /*Callback for Lower Layer Uart Rx*/
        ECU_SERIAL_p2fUartDataReceivedClbk_t p2fUartDataReceivedClbk;
} ECU_SERIAL_strInterface_t;





void ECU_SERIAL_vdInit(void);
void ECU_SERIAL_vdMgr(void);
STATUS_t ECU_SERIAL_eSendFrame(uint8_t u8InterfaceId, uint8_t* pu8FrameTx, uint8_t u8BytesNum);
STATUS_t ECU_SERIAL_eRegisterDataFrameRxClbk(uint8_t u8InterfaceId, uint8_t u8FrameId, ECU_SERIAL_p2fFrameRxClbk_t p2f);
void ECU_SERIAL_Internal_vdUart1RxCallback(uint8_t* pu8DataRx, uint8_t u8BytesNum);
void ECU_SERIAL_Internal_vdUart2RxCallback(uint8_t* pu8DataRx, uint8_t u8BytesNum);

#endif /*ECU_SERIAL_H*/
