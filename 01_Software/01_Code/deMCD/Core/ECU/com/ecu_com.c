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

File Name: ecu_com.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "ecu_com_cfg.h"
#include "ecu_com.h"
#include "ecu_com_cfg_gen.h"

#ifdef ECU_COM_MODULE_ENABLE

#include "lib_types.h"
#include "lib_data.h"
#include "uc.h"

#include "uc_header.h" /*JUST FOR TESTING*/


/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/



/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/
uint8_t ECU_COM_u8GlobalEnable = deMCD_FALSE;

/*TEST: TO BE REMOVED*/
volatile uint8_t ECU_COM_vu8Test = 0;

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

extern ECU_COM_strHandler_t ECU_COM_astrHandler[ECU_COM_HANDLER_NUM];


/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/
void local_ECU_COM_vdPreUnpack(uint8_t u8IndexHandler);
void local_ECU_COM_vdUnpack(uint8_t u8IndexHandler);
void local_ECU_COM_vdDataConversion(uint8_t u8IndexHandler);
void local_ECU_COM_vdPack(uint8_t u8IndexHandler);
void local_ECU_COM_vdPostPack(uint8_t u8IndexHandler);

/*TEST: TO BE REMOVED*/
void local_ECU_COM_vdC1R1(void);
void local_ECU_COM_vdC1R2(void);

void local_ECU_COM_vdC1R1(void)
{
  ECU_COM_vu8Test = 1;
}

void local_ECU_COM_vdC1R2(void)
{
  ECU_COM_vu8Test = 2;
}

/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void ECU_COM_vdInit(void)
{
  STATUS_t eStatus = STATUS_NOK;
	uint8_t u8IndexMsgs;
  uint8_t u8IndexHandler;
	
	for(u8IndexHandler = (uint8_t)0; u8IndexHandler < ECU_COM_HANDLER_NUM; u8IndexHandler++)
  {
    for(u8IndexMsgs = (uint8_t)0; u8IndexMsgs < ECU_COM_astrHandler[u8IndexHandler].u8NumFramesRx; u8IndexMsgs++)
    {
      eStatus = UC_CAN_eGetFrameIndex(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u32IdCanMsg, &ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8LowerLayerId);
      if(eStatus == STATUS_OK)
      {
        UC_CAN_eEnableFrame(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8LowerLayerId, UC_CAN_MSG_DIR_RX, UC_CAN_MSG_ENABLED);
      }
    }
    
    for(u8IndexMsgs = (uint8_t)0; u8IndexMsgs < ECU_COM_astrHandler[u8IndexHandler].u8NumFramesTx; u8IndexMsgs++)
    {
      eStatus = UC_CAN_eGetFrameIndex(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u32IdCanMsg, &ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u8LowerLayerId);
      if(eStatus == STATUS_OK)
      {
        UC_CAN_eEnableFrame(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u8LowerLayerId, UC_CAN_MSG_DIR_TX, UC_CAN_MSG_ENABLED);
      }
    }
  }
	
	ECU_COM_u8GlobalEnable = TRUE;
  
  /*TEST: TO BE REMOVED*/
//  UC_CAN_eRegisterCallbackForMsgEvent(UC_CAN_MODULE_INDEX_0, UC_CAN_MSG_DIR_RX, UC_CAN_RX1_MSG_INDEX_1, local_ECU_COM_vdC1R1);
//  UC_CAN_eRegisterCallbackForMsgEvent(UC_CAN_MODULE_INDEX_0, UC_CAN_MSG_DIR_RX, UC_CAN_RX1_MSG_INDEX_2, local_ECU_COM_vdC1R2);
}

void ECU_COM_vdMgr(void)
{
  uint8_t u8IndexHandler;
  
	if(ECU_COM_u8GlobalEnable == TRUE)
	{
    for(u8IndexHandler = (uint8_t)0; u8IndexHandler < ECU_COM_HANDLER_NUM; u8IndexHandler++)
    {
      /* Set the messages that should be unpacked */
      local_ECU_COM_vdPreUnpack(u8IndexHandler);

      /*Unpack all the messages */
      local_ECU_COM_vdUnpack(u8IndexHandler);

      /*Data Handling */
      local_ECU_COM_vdDataConversion(u8IndexHandler);

      /*Pack all the messages */
      local_ECU_COM_vdPack(u8IndexHandler);
      
      /* Send the packed messages  */
      local_ECU_COM_vdPostPack(u8IndexHandler);
    }
	}
}


STATUS_t ECU_COM_vdReadSignal(uint8_t u8IdSignal, float* pfltValue)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IdHandlerDecoded;
  uint8_t u8IdSignalDecoded;
  
  if(u8IdSignal < ECU_COM_RX_SIGNALS_NUM)
  {
    u8IdHandlerDecoded = ECU_COM_astrSigDecodeRx[u8IdSignal].u8IdHandler;
    u8IdSignalDecoded = ECU_COM_astrSigDecodeRx[u8IdSignal].u8IdSignal;
    
    if(u8IdHandlerDecoded < ECU_COM_HANDLER_NUM)
    {
      if(u8IdSignalDecoded < ECU_COM_astrHandler[u8IdHandlerDecoded].u8NumSignalsRx)
      {
        *pfltValue = ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigRx[u8IdSignalDecoded].fltPhyValue;
        if(ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigRx[u8IdSignalDecoded].u8Status == SIGNAL_AVAILABLE)
        {
          ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigRx[u8IdSignalDecoded].u8Status = SIGNAL_NOT_AVAILABLE;
          eStatus = STATUS_OK;
        }
      }
    }
  }

  return eStatus;
}

STATUS_t ECU_COM_vdWriteSignal(uint8_t u8IdSignal, float fltValue)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IdHandlerDecoded;
  uint8_t u8IdSignalDecoded;
  
  if(u8IdSignal < ECU_COM_TX_SIGNALS_NUM)
  {
    u8IdHandlerDecoded = ECU_COM_astrSigDecodeTx[u8IdSignal].u8IdHandler;
    u8IdSignalDecoded = ECU_COM_astrSigDecodeTx[u8IdSignal].u8IdSignal;
    
    if(u8IdHandlerDecoded < ECU_COM_HANDLER_NUM)
    {
      if(u8IdSignalDecoded < ECU_COM_astrHandler[u8IdHandlerDecoded].u8NumSignalsTx)
      {
        if(fltValue != ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigTx[u8IdSignalDecoded].fltPhyValue)
        {
          ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigTx[u8IdSignalDecoded].fltPhyValue= fltValue;
          ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigTx[u8IdSignalDecoded].u8IsNewData = deMCD_TRUE;
          ECU_COM_astrHandler[u8IdHandlerDecoded].astrMsgTx[ECU_COM_astrHandler[u8IdHandlerDecoded].astrSigTx[u8IdSignalDecoded].u8IdFrame].u8IsNewData = deMCD_TRUE;
        }
        eStatus = STATUS_OK;
      }
    }
  }

  return eStatus;
}

STATUS_t ECU_COM_vdEnable(uint8_t u8Enable)
{
  STATUS_t eStatus = STATUS_NOK;
  
  return eStatus;
}


/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void local_ECU_COM_vdPreUnpack(uint8_t u8IndexHandler)
{
	uint8_t u8IndexMsgs;
	STATUS_t eStatus;
  
	for(u8IndexMsgs = (uint8_t)0; u8IndexMsgs < ECU_COM_astrHandler[u8IndexHandler].u8NumFramesRx; u8IndexMsgs++)
	{
		eStatus = UC_CAN_eReadCanFrameAsync(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8LowerLayerId, ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].au8Data);
    
    if(eStatus == STATUS_OK)
		{
			ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8Status = MESSAGE_AVAILABLE;
      ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8IsNewData = deMCD_TRUE;
		}
		else
		{
			ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexMsgs].u8Status = MESSAGE_NOT_AVAILABLE;
		}	
	}
}

void local_ECU_COM_vdUnpack(uint8_t u8IndexHandler)
{
  uint8_t u8IndexSignals;
  uint8_t au8Data[4];
  uint8_t u8MsbModified;
  uint8_t u8MsbByteNum;
  uint32_t u32SubFrame;
  uint32_t u32RawData;
  uint8_t u8BitNum;
  uint8_t u8Byte;
  uint8_t u8IndexFrames;

  for(u8IndexSignals = (uint8_t)0; u8IndexSignals < ECU_COM_astrHandler[u8IndexHandler].u8NumSignalsRx; u8IndexSignals++)
  {
    if((u8IndexSignals==164) && (u8IndexHandler==2))
    {
      ECU_COM_vu8Test = 4;
    }
    
    if(ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].u8Status == MESSAGE_AVAILABLE)
    {
      if(ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].u8IsNewData == deMCD_TRUE)
      {
        if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size == 1)
        {
          u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb/8;
          if(u8MsbByteNum>8)
          {
            u8MsbByteNum = 8;
          }
          u8BitNum = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb%8;
          u8Byte = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum];
          ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue = (u8Byte >> u8BitNum) & (0x01);
        }
        else if((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size > 1) && (ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size < 8))
        {
          u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb/8;
          if(u8MsbByteNum>8)
          {
            u8MsbByteNum = 8;
          }
          u8BitNum = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb%8;
          u8Byte = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum];
          ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue = (u8Byte >> (u8BitNum - ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size + 1)) & ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32Mask;
        }
        else
        {
          if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].eBitOrder == deMCD_LITTLE_ENDIAN)
          {
            u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb/8;
          }
          else
          {
            /*deMCD_BIG_ENDIAN*/
            u8MsbByteNum = (ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb - 8 + ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size)/8;
          }


          if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].eBitOrder == deMCD_LITTLE_ENDIAN)
          {
            if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb >= 32)
            {
              u8MsbModified = 31;
              au8Data[0] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-3];
              au8Data[1] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-2];
              au8Data[2] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-1];
              au8Data[3] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-0];
            }
            else
            {
              u8MsbModified = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb;
              au8Data[0] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[0];
              au8Data[1] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[1];
              au8Data[2] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[2];
              au8Data[3] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[3];
            }
          }
          else
          {
            /*deMCD_BIG_ENDIAN*/
            if((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb + ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size - 8) >= 32)
            {
              u8MsbModified = 31 - ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size + 8;
              au8Data[0] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-3];
              au8Data[1] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-2];
              au8Data[2] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-1];
              au8Data[3] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum-0];
            }
            else
            {
              u8MsbModified = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb;
              au8Data[0] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[0];
              au8Data[1] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[1];
              au8Data[2] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[2];
              au8Data[3] = ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8IdFrame].au8Data[3];
            }
          }



          if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].eBitOrder == deMCD_LITTLE_ENDIAN)
          {
            u32SubFrame = (au8Data[0] << (8*0)) | 
                      (au8Data[1] << (8*1)) | 
                      (au8Data[2] << (8*2)) | 
                      (au8Data[3] << (8*3)) ;

            if((((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size % 8) == 0) && (((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb+1) % 8) == 0)) || (u8MsbModified<31))
            {
              u32RawData = u32SubFrame >> (1+u8MsbModified-ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size);
            }
            else
            {
              u32RawData = u32SubFrame >> (u8MsbModified-ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size-(7-((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb+1)%8)));
            }
          }
          else
          {
            /*deMCD_BIG_ENDIAN*/
            u32SubFrame = (au8Data[3] << (8*0)) | 
                      (au8Data[2] << (8*1)) | 
                      (au8Data[1] << (8*2)) | 
                      (au8Data[0] << (8*3)) ;

            if(((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size % 8) == 0) && (((ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Msb+1) % 8) == 0))
            {
              u32RawData = u32SubFrame >> (31-(u8MsbModified+ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size-8));
            }
            else
            {
              u32RawData = u32SubFrame >> (31-(7-u8MsbModified+ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size-8+8)+1);
            }
          }

          ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue = u32RawData & ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32Mask;
        }

        ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Status = SIGNAL_AVAILABLE;
      }
    }
    else
    {
    /* Do nothing */
    }
  }

  /*Resetting new data flags for rx frames*/
  for(u8IndexFrames = (uint8_t)0; u8IndexFrames < ECU_COM_astrHandler[u8IndexHandler].u8NumFramesRx; u8IndexFrames++)
  {
  ECU_COM_astrHandler[u8IndexHandler].astrMsgRx[u8IndexFrames].u8IsNewData = deMCD_FALSE;
  }
}

void local_ECU_COM_vdDataConversion(uint8_t u8IndexHandler)
{
	uint8_t u8IndexSignals;
        uint32_t u32AbsValue;
        uint32_t u32SignBit;
	
	for(u8IndexSignals = (uint8_t)0; u8IndexSignals < ECU_COM_astrHandler[u8IndexHandler].u8NumSignalsRx; u8IndexSignals++)
	{
          if(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8FlagSigned != deMCD_FALSE)
          {
            u32SignBit = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue >> (ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u8Size - 1);
            if(u32SignBit != (uint32_t)0)
            {
              /*negative value*/
              u32AbsValue = (ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32Mask - ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue) + 1;
              ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltPhyValue = 
                                               LIB_DATA_fltRaw2Phy(u32AbsValue,
                                                                   ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltResolution,
                                                                   ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltOffset);
              ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltPhyValue = ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltPhyValue * (-1);
            }
            else
            {
		ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltPhyValue = 
                                              LIB_DATA_fltRaw2Phy(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue,
                                                                  ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltResolution,
                                                                  ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltOffset);
            }
          }
          else
          {
		ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltPhyValue = 
                                              LIB_DATA_fltRaw2Phy(ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].u32RawValue,
                                                                  ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltResolution,
                                                                  ECU_COM_astrHandler[u8IndexHandler].astrSigRx[u8IndexSignals].fltOffset);
          }
	}
	
	for(u8IndexSignals = (uint8_t)0; u8IndexSignals < ECU_COM_astrHandler[u8IndexHandler].u8NumSignalsTx; u8IndexSignals++)
	{
          if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8FlagSigned != deMCD_FALSE)
          {
            if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltPhyValue >= 0)
            {
              ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue = 
                                                                      LIB_DATA_u32Phy2Raw(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltPhyValue,
                                                                                          ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltResolution,
                                                                                          ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltOffset);
            }
            else
            {
              ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue = 
                                                                      LIB_DATA_u32Phy2Raw(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltPhyValue*(-1),
                                                                                          ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltResolution,
                                                                                          ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltOffset);
              ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask - 
                                                                                          ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue + 1;
            }
          }
          else
          {
            ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue = 
                                                                    LIB_DATA_u32Phy2Raw(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltPhyValue,
                                                                                        ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltResolution,
                                                                                        ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].fltOffset);
          }
	}
}

void local_ECU_COM_vdPack(uint8_t u8IndexHandler)
{
	uint8_t u8IndexSignals, u8IndexByte;
	uint8_t au8Data[4];
	uint8_t u8MsbModified;
	uint8_t u8MsbByteNum;
	uint32_t u32SubFrame, u32SubFrameNew;
	uint32_t u32RawDataMask, u32RawDataMaskC;
  uint8_t u8BitNum;
  uint8_t u8Byte;
  
	for(u8IndexSignals = (uint8_t)0; u8IndexSignals < ECU_COM_astrHandler[u8IndexHandler].u8NumSignalsTx; u8IndexSignals++)
	{
    if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IsNewData == deMCD_TRUE)
    {
      ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IsNewData = deMCD_FALSE;
      if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size == 1)
      {
        u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb/8;
        if(u8MsbByteNum>8)
        {
          u8MsbByteNum = 8;
        }
        u8BitNum = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8;
        if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue != (uint32_t)0)
        {
          ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum] |= (((uint8_t)1)<<u8BitNum);
        }
        else
        {
          ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum] &= ~(((uint8_t)1)<<u8BitNum);
        }
      }
      else if((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size > 1) && (ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size < 8))
      {
        u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb/8;
        if(u8MsbByteNum>8)
        {
          u8MsbByteNum = 8;
        }
        u8BitNum = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8;
        u8Byte = ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum];
        u8Byte &= (~(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask << (u8BitNum - ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size + 1)));
        u8Byte |= ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue << (u8BitNum - ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size + 1);
        ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8MsbByteNum] = u8Byte;
      }
      else
      {
        if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].eBitOrder == deMCD_LITTLE_ENDIAN)
        {
          u8MsbByteNum = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb/8;
        }
        else
        {
          /*deMCD_BIG_ENDIAN*/
          u8MsbByteNum = (ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb - 8 + ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size)/8;
        }
        /* Initialize Subframe Bytes */
        for(u8IndexByte = 0; u8IndexByte<=u8MsbByteNum; u8IndexByte++)
        {
          au8Data[u8IndexByte] = 0;
        }

        if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb >= 32)
        {
          u8MsbModified = 31; /*ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb - 32;*/
          for(u8IndexByte = (u8MsbByteNum-3); u8IndexByte<=u8MsbByteNum; u8IndexByte++)
          {
            au8Data[u8IndexByte-(u8MsbByteNum-3)] = ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8IndexByte];
          }
        }
        else
        {
          u8MsbModified = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb;
          for(u8IndexByte = 0; u8IndexByte<=3; u8IndexByte++)
          {
            au8Data[u8IndexByte] = ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8IndexByte];
          }
        }
        
        u32SubFrame = (au8Data[0] << (8*0)) | 
                      (au8Data[1] << (8*1)) | 
                      (au8Data[2] << (8*2)) | 
                      (au8Data[3] << (8*3)) ;
        
        if(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].eBitOrder == deMCD_LITTLE_ENDIAN)
        {
          if((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size > (uint8_t)1) && (ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb < 32))
          {
            u32SubFrameNew = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue << (1+u8MsbModified-ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size);
            u32RawDataMask = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask;
            u32RawDataMask =  u32RawDataMask << (1+u8MsbModified-ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size);
            u32RawDataMaskC = ~u32RawDataMask;
          }
          else
          {
            u32SubFrameNew = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue << (1+u8MsbModified-(8-(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8)+(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size-1)));
            u32RawDataMask = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask;
            u32RawDataMask =  u32RawDataMask << (1+u8MsbModified-(8-(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8)+(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size-1)));
            u32RawDataMaskC = ~u32RawDataMask;
          }
        }
        else
        {
          /*deMCD_BIG_ENDIAN*/
          au8Data[0] = (uint8_t)((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue & (255UL<<(8*3))) >> (8*3));
          au8Data[1] = (uint8_t)((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue & (255UL<<(8*2))) >> (8*2));
          au8Data[2] = (uint8_t)((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue & (255UL<<(8*1))) >> (8*1));
          au8Data[3] = (uint8_t)((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32RawValue & (255UL<<(8*0))) >> (8*0));
          u32SubFrameNew = (au8Data[0] << (8*0)) | 
                           (au8Data[1] << (8*1)) | 
                           (au8Data[2] << (8*2)) | 
                           (au8Data[3] << (8*3)) ;
          /*Get rid of the leading zeros*/
          u32SubFrameNew = u32SubFrameNew >> (32-ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size);
          if((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size > (uint8_t)1) && ((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb + ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size - 8)  < 32))
          {
            u32SubFrameNew = u32SubFrameNew << u8MsbModified-(8-1);
            u32RawDataMask = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask;
            u32RawDataMask =  u32RawDataMask << u8MsbModified-(8-1);
            u32RawDataMaskC = ~u32RawDataMask;
          }
          else
          {
            u32SubFrameNew = u32SubFrameNew << (u8MsbModified - ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size + 1);
            //u32SubFrameNew = u32SubFrameNew << (1+u8MsbModified-(8-(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8)+(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size-1)));
            u32RawDataMask = ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u32Mask;
            u32RawDataMask =  u32RawDataMask << (u8MsbModified - ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size + 1);
            //u32RawDataMask =  u32RawDataMask << (1+u8MsbModified-(8-(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb%8)+(ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size-1)));
            u32RawDataMaskC = ~u32RawDataMask;
          }
          
        }


        
        /* Reset the target data*/
        u32SubFrame &= u32RawDataMaskC;
        
        /* Set the new data */
        u32SubFrame |= u32SubFrameNew;
        
        au8Data[0] = (uint8_t)((u32SubFrame & (255UL<<(8*0))) >> (8*0));
        au8Data[1] = (uint8_t)((u32SubFrame & (255UL<<(8*1))) >> (8*1));
        au8Data[2] = (uint8_t)((u32SubFrame & (255UL<<(8*2))) >> (8*2));
        au8Data[3] = (uint8_t)((u32SubFrame & (255UL<<(8*3))) >> (8*3));
        
        if((ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Msb + ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8Size - 8) >= 32)
        {
          for(u8IndexByte = (u8MsbByteNum-3); u8IndexByte<=u8MsbByteNum; u8IndexByte++)
          {
            ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8IndexByte] = au8Data[u8IndexByte-(u8MsbByteNum-3)];
          }
        }
        else
        {
          for(u8IndexByte = 0; u8IndexByte<=3; u8IndexByte++) //for(u8IndexByte = 0; u8IndexByte<=u8MsbByteNum; u8IndexByte++)
          {
            ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[ECU_COM_astrHandler[u8IndexHandler].astrSigTx[u8IndexSignals].u8IdFrame].au8Data[u8IndexByte] = au8Data[u8IndexByte];
          }
        }
      }
    }		
	}
}

void local_ECU_COM_vdPostPack(uint8_t u8IndexHandler)
{
	uint8_t u8IndexMsgs;
	
	for(u8IndexMsgs = (uint8_t)0; u8IndexMsgs < ECU_COM_astrHandler[u8IndexHandler].u8NumFramesTx; u8IndexMsgs++)
	{
    if(ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u8IsNewData == deMCD_TRUE)
    {
      ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u8IsNewData = deMCD_FALSE;
      UC_CAN_eWriteCanFrameAsync(ECU_COM_astrHandler[u8IndexHandler].u8IdLowerLayerCh, ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].u8LowerLayerId, ECU_COM_astrHandler[u8IndexHandler].astrMsgTx[u8IndexMsgs].au8Data);
    }
	}
}



#endif /*ECU_COM_MODULE_ENABLE*/

