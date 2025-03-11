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

File Name: ecu_serial.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_serial_cfg.h"
#include "ecu_serial.h"

#ifdef ECU_SERIAL_MODULE_ENABLE



/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/


/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/
extern ECU_SERIAL_strInterface_t ECU_SERIAL_astrInterface[ECU_SERIAL_INTERFACES_NUM];


/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/
void local_ECU_SERIAL_vdUartRxCallback(uint8_t u8InterfaceId, uint8_t* pu8DataRx, uint8_t u8BytesNum);
void local_ECU_SERIAL_vdResetBuffer(uint8_t u8IdInterfaceId, uint8_t u8FrameId);
uint8_t local_ECU_SERIAL_u8CompareArray(uint8_t* pu8Array1, uint8_t u8Array1BytesNum, uint8_t* pu8Array2, uint8_t u8Array2BytesNum);

/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/
void ECU_SERIAL_vdInit(void)
{
  uint8_t u8InterfaceId;
  uint8_t u8FrameId;
  
  for(u8InterfaceId = (uint8_t)0; u8InterfaceId < ECU_SERIAL_INTERFACES_NUM; u8InterfaceId++)
  {
    for(u8FrameId = (uint8_t)0; u8FrameId < ECU_SERIAL_astrInterface[u8InterfaceId].u8NumRxFrames; u8FrameId++)
    {
      if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eFrameEnable == ECU_SERIAL_FRAME_ENABLED)
      {
        local_ECU_SERIAL_vdResetBuffer(u8InterfaceId, u8FrameId);
      }
    }
    
    UC_UART_eRegisterDataRxClbk(ECU_SERIAL_astrInterface[u8InterfaceId].u8LowerLayerUartId, ECU_SERIAL_astrInterface[u8InterfaceId].p2fUartDataReceivedClbk, ECU_SERIAL_astrInterface[u8InterfaceId].u8LowerLayerUartFrameSize);
  }

  return;
}

STATUS_t ECU_SERIAL_eRegisterDataFrameRxClbk(uint8_t u8InterfaceId, uint8_t u8FrameId, ECU_SERIAL_p2fFrameRxClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eFrameEnable == ECU_SERIAL_FRAME_ENABLED)
  {
    if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].p2fFrameRxClbk == deMCD_NULL)
    {
      ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].p2fFrameRxClbk = p2f;
    }
  }
  
  eStatus = STATUS_OK;
  return eStatus;
}

void ECU_SERIAL_vdMgr(void)
{
  
  return;
}

STATUS_t ECU_SERIAL_eSendFrame(uint8_t u8InterfaceId, uint8_t* pu8FrameTx, uint8_t u8BytesNum)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8BytesIndex;
  for(u8BytesIndex = (uint8_t)0; u8BytesIndex < u8BytesNum; u8BytesIndex++)
  {
    UC_UART_eSendBytesSync(ECU_SERIAL_astrInterface[u8InterfaceId].u8LowerLayerUartId , &pu8FrameTx[u8BytesIndex], (uint8_t)1);
  }
  
  eStatus = STATUS_OK;
  return eStatus;
}

/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void local_ECU_SERIAL_vdResetBuffer(uint8_t u8IdInterfaceId, uint8_t u8FrameId)
{
  uint16_t u16ByteIndex;
  for(u16ByteIndex = (uint16_t)0; u16ByteIndex < ECU_SERIAL_astrInterface[u8IdInterfaceId].astrRxFrame[u8FrameId].u16ActualSize; u16ByteIndex++)
  {
    ECU_SERIAL_astrInterface[u8IdInterfaceId].astrRxFrame[u8FrameId].au8BytesBuffer[u16ByteIndex] = (uint8_t)0; 
  }
}

uint8_t local_ECU_SERIAL_u8CompareArray(uint8_t* pu8Array1, uint8_t u8Array1BytesNum, uint8_t* pu8Array2, uint8_t u8Array2BytesNum)
{
  uint8_t u8IsEqual = deMCD_TRUE;
  uint8_t u8IndexByte;
  
  if(u8Array1BytesNum != u8Array2BytesNum)
  {
    u8IsEqual = deMCD_FALSE;
  }
  else
  {
    for(u8IndexByte = (uint8_t)0; u8IndexByte < u8Array1BytesNum; u8IndexByte++)
    {
      if(pu8Array1[u8IndexByte] != pu8Array2[u8IndexByte])
      {
        u8IsEqual = deMCD_FALSE;
        break;
      }
    }
  }
  
  return u8IsEqual;
}


/********************************************************************************************/
/************************************* CALLBACKS ********************************************/
/********************************************************************************************/
void local_ECU_SERIAL_vdUartRxCallback(uint8_t u8InterfaceId, uint8_t* pu8DataRx, uint8_t u8BytesNum)
{
  uint8_t u8RxByte;
  uint8_t u8FrameId;
  uint16_t u16Length;
  
  u8RxByte = pu8DataRx[0];
  
  for(u8FrameId = (uint8_t)0; u8FrameId < ECU_SERIAL_astrInterface[u8InterfaceId].u8NumRxFrames; u8FrameId++)
  {
    if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eFrameEnable == ECU_SERIAL_FRAME_ENABLED)
    {
      if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameStart == deMCD_FALSE)
      {
        if((u8RxByte == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8StartSeq[ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq]) &&
           (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq < ECU_SERIAL_START_END_BYTES_MAX_SIZE) &&
           (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter < ECU_SERIAL_BUFFER_BYTES_SIZE)
          )
        {
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq++;
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8StartSeqSize)
          {
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameStart = deMCD_TRUE;
          }
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8BytesBuffer[ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter] = u8RxByte;
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter++;
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ActualSize = ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter;
        }
        else
        {
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq = 0;
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameStart = deMCD_FALSE;
          local_ECU_SERIAL_vdResetBuffer(u8InterfaceId, u8FrameId);
          ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter = 0;
        }
      }
      else
      {
        ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8BytesBuffer[ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter] = u8RxByte;
        
        if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eRxFrameType == ECU_SERIAL_FIXED_DYNAMIC_FRAME)
        {
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynLenBytesIndex[0])
          {
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[0] = u8RxByte;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FDLenBytesFoundCounter++;
          }
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynLenBytesIndex[1])
          {
            if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynLenBytesIndex[0] == 
               ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynLenBytesIndex[1])
            {
              ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[1] = 0;
            }
            else
            {
              ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[1] = u8RxByte;
            }
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FDLenBytesFoundCounter++;
          }
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FDLenBytesFoundCounter == 2)
          {
            u16Length = (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[0]) | 
                        (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[1] << 8);
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16FixedFrameSize = u16Length + ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16FixedDynLenOffset;       
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FDLenBytesFoundCounter = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[0] = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8FixedDynBytesLen[1] = 0;
          }

        }
        
        ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter++;
        ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ActualSize = ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter;
        
        if((ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eRxFrameType == ECU_SERIAL_FIXED_FRAME) ||
           (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eRxFrameType == ECU_SERIAL_FIXED_DYNAMIC_FRAME))
        {
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16FixedFrameSize)
          {
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameEnd = deMCD_TRUE;
          }
        }
        else if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eRxFrameType == ECU_SERIAL_DYNAMIC_FRAME)
        {
          if((u8RxByte == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8EndSeq[ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq]) &&
             (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq < ECU_SERIAL_START_END_BYTES_MAX_SIZE) &&
             (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter < ECU_SERIAL_BUFFER_BYTES_SIZE)
            )
          {
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq++;
            if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq == ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8EndSeqSize)
            {
              ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameEnd = deMCD_TRUE;
            }
          }
        }
        
        if((ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameEnd == deMCD_TRUE) &&
            (ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter < ECU_SERIAL_BUFFER_BYTES_SIZE))
        {
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].p2fFrameRxClbk != deMCD_NULL)
          {
            UC_UART_eDisableRx(ECU_SERIAL_astrInterface[u8InterfaceId].u8LowerLayerUartId);
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ActualSize = ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].p2fFrameRxClbk(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].au8BytesBuffer,ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter);
            
            local_ECU_SERIAL_vdResetBuffer(u8InterfaceId, u8FrameId);
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameStart = deMCD_FALSE;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameEnd = deMCD_FALSE;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq = 0;
            UC_UART_eEnableRx(ECU_SERIAL_astrInterface[u8InterfaceId].u8LowerLayerUartId);
          }
          else
          {
            local_ECU_SERIAL_vdResetBuffer(u8InterfaceId, u8FrameId);
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16ByteCounter = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameStart = deMCD_FALSE;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8FlagFrameEnd = deMCD_FALSE;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesStartSeq = 0;
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u8CountersBytesEndSeq = 0;
          }
          if(ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].eRxFrameType == ECU_SERIAL_FIXED_DYNAMIC_FRAME)
          {
            ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16FixedFrameSize = u16Length + ECU_SERIAL_astrInterface[u8InterfaceId].astrRxFrame[u8FrameId].u16FixedDynLenMin;       
          }
        }
      }
    }
  }

  return;
}

#ifdef ECU_SERIAL_INTERFACE_ID_UART1
void ECU_SERIAL_Internal_vdUart1RxCallback(uint8_t* pu8DataRx, uint8_t u8BytesNum)
{
  local_ECU_SERIAL_vdUartRxCallback(ECU_SERIAL_INTERFACE_ID_UART1, pu8DataRx, u8BytesNum);
}
#endif /*ECU_SERIAL_INTERFACE_ID_UART1*/

#ifdef ECU_SERIAL_INTERFACE_ID_UART2
void ECU_SERIAL_Internal_vdUart2RxCallback(uint8_t* pu8DataRx, uint8_t u8BytesNum)
{
  local_ECU_SERIAL_vdUartRxCallback(ECU_SERIAL_INTERFACE_ID_UART2, pu8DataRx, u8BytesNum);
}
#endif /*ECU_SERIAL_INTERFACE_ID_UART2*/

#endif /*ECU_SERIAL_MODULE_ENABLE*/
