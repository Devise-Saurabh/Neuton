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

File Name: ecu_com.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef ECU_COM_H
#define ECU_COM_H

#include "lib_types.h"


#define MESSAGE_NOT_AVAILABLE                       (0)
#define MESSAGE_AVAILABLE                           (1)

#define SIGNAL_NOT_AVAILABLE                        (0)
#define SIGNAL_AVAILABLE                            (1)

typedef enum ECU_COM_eChTypeTemplate
{
   ECU_COM_CH_TYPE_CAN = 0,
	 ECU_COM_CH_TYPE_LIN = 1,
	 ECU_COM_CH_TYPE_ETH = 2,
} ECU_COM_eChType_t;

typedef enum ECU_COM_eSigTypeTemplate
{
   ECU_COM_CH_TYPE_TX = 0,
	 ECU_COM_CH_TYPE_RX = 1,
} ECU_COM_eSigType_t;

typedef struct ECU_COM_strMsgTemplate
{
	/*Msg ID*/
	uint8_t u8IdFrame;
	/*Can Msg Id*/
	uint32_t u32IdCanMsg;
	/*DLC*/
	uint8_t u8Dlc;
	/*Lower Layer Frame Id */
	uint8_t u8LowerLayerId;
	/*Data*/
	uint8_t au8Data[8];
	/*Status*/
	uint8_t u8Status;
  /*New Data Flag*/
  uint8_t u8IsNewData;
} ECU_COM_strMsg_t;

typedef struct ECU_COM_strSignalTemplate
{
	/*Signal ID*/
	uint8_t u8IdSignal;
	/*Frame Id*/
	uint8_t u8IdFrame;
	/*Can Msg Id*/
	uint32_t u32IdCanMsg;
	/*Size*/
	uint8_t u8Size;
	/*Mask*/
	uint32_t u32Mask;
	/*MSB number*/
	uint8_t u8Msb;
        /*Big/Little Endian*/
        deMCDBitOrder_t eBitOrder;
	/*Resolution*/
	float fltResolution;
	/*Offset*/
	float fltOffset;
	/*Raw Value*/
	uint32_t u32RawValue;
	/*Physical Value*/
	float fltPhyValue;
	/*Status*/
	uint8_t u8Status;
        /*New Data Flag*/
        uint8_t u8IsNewData;
        /*Signed Signal Flag*/
        uint8_t u8FlagSigned;
} ECU_COM_strSignal_t;

typedef struct ECU_COM_strHandlerTemplate
{
  /*Handler ID*/
  uint8_t u8IdHandler;
  /*Channel Type*/
  ECU_COM_eChType_t eChType;
  /*Number of Tx Frames*/
  uint8_t u8NumFramesTx;
  /*Array of Tx Frames Objects*/
  ECU_COM_strMsg_t* astrMsgTx;
  /*Number of Tx Signals*/
  uint8_t u8NumSignalsTx;
  /*Array of Tx Signals Objects*/
  ECU_COM_strSignal_t* astrSigTx;
  /*Number of Rx Frames*/
  uint8_t u8NumFramesRx;
  /*Array of Rx Frames Objects*/
  ECU_COM_strMsg_t* astrMsgRx;
  /*Number of Rx Signals*/
  uint8_t u8NumSignalsRx;
  /*Array of Rx Signals Objects*/
  ECU_COM_strSignal_t* astrSigRx;
  /*Low Layer Com Channel Id*/
  uint8_t u8IdLowerLayerCh;
} ECU_COM_strHandler_t;

typedef struct ECU_COM_strSigDecodeTemplate
{
  /* Handler Id */
  uint8_t u8IdHandler;
  /* Signal Type */
  ECU_COM_eSigType_t eSigType;
  /* Signal Id*/
  uint8_t u8IdSignal;
} ECU_COM_strSigDecode_t;


void ECU_COM_vdInit(void);
void ECU_COM_vdMgr(void);
STATUS_t ECU_COM_vdReadSignal(uint8_t u8IdSignal, float* pfltValue);
STATUS_t ECU_COM_vdWriteSignal(uint8_t u8IdSignal, float fltValue);
STATUS_t ECU_COM_vdEnable(uint8_t u8Enable);

#endif /*ECU_COM_H*/

