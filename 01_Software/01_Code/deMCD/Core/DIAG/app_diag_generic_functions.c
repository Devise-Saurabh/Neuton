///*
//***************************************************************************
//***************************************************************************
//(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

//All data and information contained in or disclosed by this document is
//confidential and proprietary information of Devise Electronics Pvt Ltd and all
//rights therein are expressly reserved.  By accepting this material the
//recipient agrees that this material and the information contained therein
//is held in confidence and in trust and will not be used, copied, reproduced
//in whole or in part, nor its contents revealed in any manner to others
//without the express written permission of Devise Electronics Pvt Ltd

//Devise Electronics Pvt Ltd,
//Bavdhan,
//411021, Pune,
//India
//
//File Name: app_diag_generic_functions.h
//Author: Devise Electronics Embedded Team
//E-mail: shekhar.malani@deviseelectronics.com
//***************************************************************************
//***************************************************************************
//*/
//
////#include "app_diag.c"
//
//
//#include "app_diag_cfg.h"
//#include "app_diag.h"
//
//
//
//#include "app.h"
//#include "rte.h"
//#include "lib_data.h"
//#include "lib_delay.h"
//
/////*external global variables*/
////extern uint8_t APP_DIAG_u8ReadDataByAddress_FirstFlowControl;
////extern uint8_t  APP_DIAG_u8ReadDataByAddress_GlobalCounter;
////extern uint8_t APP_DIAG_u8WriteDataByAddress_BytesIndex;
////extern uint8_t APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished;
////extern uint8_t APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived;
//
///*Global variables*/
//ECU_DIAG_FrameType_t APP_DIAG_eFrameType;
//uint8_t APP_DIAG_u8DataCount;
//uint8_t APP_DIAG_u8ServiceId;
//uint8_t APP_DIAG_u8SubFunction;
//uint8_t APP_DIAG_u8SuppressPosResponse;
//uint8_t APP_DIAG_au8RequestData[ECU_DIAG_FRAME_DATA_BYTES];
//uint8_t APP_DIAG_au8ResposneData[ECU_DIAG_FRAME_DATA_BYTES];
//uint8_t APP_DIAG_eStatus;
//uint8_t APP_DIAG_au8IndexOfZeroDataReceived[8];
//uint8_t APP_DIAG_au8DataNotUsed[8] = {0};
//ECU_SYS_eEcuMode_t APP_DIAG_eCurrentSession;
//uint32_t APP_DIAG_u32ApplicationEndAddress;
//APP_DIAG_strFlowControl_t FlowControlFrame;
//uint8_t APP_DIAG_u8FlowControlExpected;
//uint8_t APP_DIAG_u8FlowControlServiceID;
//APP_DIAG_strConsecutiveFrame_t ConsecutiveFlowFrame;
//uint8_t APP_DIAG_u8FirstFrameServiceID;
//uint8_t APP_DIAG_u8ConsecutiveFrameServiceID;
//uint8_t APP_DIAG_u8ConsecutiveFrameSequenceNumber;
//
// /*Global variables of SID 0x23 ReadMemoryByAddress*/
//uint8_t APP_DIAG_au8ReadDataByAddress[APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER];
//uint8_t APP_DIAG_u8ReadDataByAddress_BytesNum;
//uint32_t APP_DIAG_u32ReadDataByAddress_SeparationTimeInNanoSeconds;
//uint8_t APP_DIAG_u8ReadDataByAddress_FirstFlowControl;
//uint8_t APP_DIAG_u8ReadDataByAddress_RemainingBytes;
//uint8_t APP_DIAG_u8ReadDataByAddress_GlobalCounter;
//uint8_t APP_DIAG_u8ReadDataByAddress_Wait;
//uint8_t APP_DIAG_u8ReadDataByAddress_OverFlow;
// /*Global variables of SID 0x3D WriteMemoryByAddress*/
//uint8_t APP_DIAG_u8WriteDataByAddress_ServiceTotalBytesNum;
//uint8_t APP_DIAG_u8WriteDataByAddress_SizeBytesNum;
//uint8_t APP_DIAG_u8WriteDataByAddress_AddressBytesNum;
//uint8_t APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished;
//uint32_t APP_DIAG_u32WriteDataByAddress_Address;
//uint8_t APP_DIAG_u8WriteDataByAddress_DataBytes[APP_DIAG_WRITE_DATA_BY_ADDRESS_MAX_BYTES_NUMBER];
//uint8_t APP_DIAG_u8WriteDataByAddress_BytesIndex;
//uint8_t APP_DIAG_u8WriteDataByAddress_DataBytesCount;
//uint8_t APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived;
//
//uint8_t local_APP_DIAG_u8NumberOfZeroElementsReceived(void);
//void local_APP_DIAG_vdResetAllGlobalVariables(void);
//void local_APP_DIAG_vdResetArray(uint8_t* pau8Array, uint8_t u8ArraySize);
//void local_APP_DIAG_vdClearReceivingVariables(void);
//void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode);
//void local_APP_DIAG_EndServicePlusData(STATUS_t eStatus, uint8_t *pau8Data);
//uint8_t local_APP_DIAG_u8AppValidCheck(void);
//void local_APP_DIAG_vdAppValidClear(void);
//void local_APP_DIAG_vdAppValidSet(void);
//uint8_t APP_DIAG_u8DefaultEcuModeCheck(ECU_SYS_eEcuMode_t* Mode);
//void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode);
//uint8_t local_APP_DIAG_u8SingleFrameLengthErrorCheck(void);
//void local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(uint8_t* pu8Data);
//void local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(uint8_t u8ResponseSID, uint8_t* pu8Data, uint8_t u8DataSize);
//void local_APP_DIAG_vdNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode);
//void local_APP_DIAG_vdBootHeartBeat(void);
//void local_APP_DIAG_vdSingleFramePositiveResponse(uint8_t u8ResponseSID, uint8_t u8SubFunction, uint8_t* pu8Data, uint8_t u8DataSize);
//void local_APP_DIAG_vdSingleFrameNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode);
//
//
//uint8_t local_APP_DIAG_u8NumberOfZeroElementsReceived(void)
//{
//  uint8_t u8Count;
//  uint8_t u8Ocurrences = 0;
//  for(u8Count = 0; u8Count < 8; u8Count++)
//  {
//    if(APP_DIAG_au8IndexOfZeroDataReceived[u8Count] == 1)
//    {
//      u8Ocurrences++;
//    }
//  }
//  return u8Ocurrences;
//}
//
//uint8_t local_APP_DIAG_u8SingleFrameLengthErrorCheck(void)
//{
//  uint8_t u8Count;
//  uint8_t u8DataCount = 0;
//  // check if length of message receieved is wrong to send NRC --- for SF only//
//  /*Check if sub-function byte is null*/
//  if(APP_DIAG_u8SubFunction == APP_DIAG_REQUEST_FILLER || APP_DIAG_u8SubFunction == APP_DIAG_RESPONSE_FILLER)
//  {
//    u8DataCount = 1; // only service ID byte
//  }
//  else
//  {
//    u8DataCount = 2; // service ID and sub-function bytes
//    /*Get data bytes count*/
//    for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
//    {
//      if(APP_DIAG_au8RequestData[u8Count] != APP_DIAG_REQUEST_FILLER)
//      {
//        u8DataCount++;
//      }
//    }    
//  }
//  if(APP_DIAG_u8DataCount != u8DataCount)
//  {
//    return deMCD_FALSE;
//  }
//  else
//  {
//    return deMCD_TRUE;
//  }  
//}
//
//void local_APP_DIAG_vdResetAllGlobalVariables(void)
//{
//  APP_DIAG_eFrameType = (ECU_DIAG_FrameType_t)deMCD_DEFAULT;
//  APP_DIAG_u8DataCount = deMCD_DEFAULT;
//  APP_DIAG_u8ServiceId = deMCD_DEFAULT;
//  APP_DIAG_u8SubFunction = deMCD_DEFAULT;
//  APP_DIAG_u8SuppressPosResponse = deMCD_DEFAULT;
//  APP_DIAG_eStatus = APP_DIAG_STATUS_FREE;
//  APP_DIAG_u32ApplicationEndAddress = 0;
//  /*Global variables of SID 0x23 ReadMemoryByAddress*/
//  APP_DIAG_u8ReadDataByAddress_FirstFlowControl = deMCD_FALSE;
//  APP_DIAG_u8ReadDataByAddress_GlobalCounter = deMCD_FALSE;
//  APP_DIAG_u8FlowControlExpected = deMCD_FALSE;
//  APP_DIAG_u8FlowControlServiceID = deMCD_FALSE;
//  /*Global variables of SID 0x3D WriteMemoryByAddress*/
//  APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished = deMCD_FALSE;
//  APP_DIAG_u8WriteDataByAddress_BytesIndex = 0;
//  APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived = 0;  
//}
//
//void local_APP_DIAG_vdClearReceivingVariables(void) //  (&APP_DIAG_eFrameType, &APP_DIAG_u8DataCount, &APP_DIAG_u8ServiceId, &APP_DIAG_u8SubFunction, &APP_DIAG_u8SuppressPosResponse, APP_DIAG_au8RequestData, ECU_DIAG_FRAME_DATA_BYTES, APP_DIAG_au8IndexOfZeroDataReceived);  
//{
//  APP_DIAG_eFrameType = (ECU_DIAG_FrameType_t)deMCD_DEFAULT;
//  APP_DIAG_u8DataCount = deMCD_DEFAULT;
//  APP_DIAG_u8ServiceId = deMCD_DEFAULT;
//  APP_DIAG_u8SubFunction = deMCD_DEFAULT;
//  APP_DIAG_u8SuppressPosResponse = deMCD_DEFAULT;
//  uint8_t u8Count;
//  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
//  {
//     APP_DIAG_au8RequestData[u8Count] = 0; 
//     APP_DIAG_au8IndexOfZeroDataReceived[u8Count] = 0;
//  }
//  APP_DIAG_au8IndexOfZeroDataReceived[5] = 0;
//  APP_DIAG_au8IndexOfZeroDataReceived[6] = 0;
//  APP_DIAG_au8IndexOfZeroDataReceived[7] = 0;
//}
//
//void local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(uint8_t* pu8Data)
//{
//  STATUS_t eStatus = STATUS_OK;
//  local_APP_DIAG_vdClearReceivingVariables();
//  ECU_DIAG_vdEndService(eStatus, pu8Data);  
//}
//
//void local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(uint8_t u8ResponseSID, uint8_t* pu8Data, uint8_t u8DataSize)
//{
//  STATUS_t eStatus = STATUS_OK;
//  uint8_t u8Count;
//  uint8_t u8PR_Data[8] = {0};
//  u8PR_Data[0] = u8DataSize + 2;
//  u8PR_Data[1] = u8ResponseSID + 0x40;
//  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES + 1; u8Count++)
//  {
//    if(u8Count < u8DataSize)
//    {
//      u8PR_Data[u8Count + 2] = pu8Data[u8Count];      
//    }
//    else
//    {
//      u8PR_Data[u8Count + 2] = APP_DIAG_RESPONSE_FILLER;
//    }
//  }
//  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES + 1; u8Count++)
//  {
//    APP_DIAG_au8ResposneData[u8Count] = 0;
//  }
//  local_APP_DIAG_vdClearReceivingVariables();
//  ECU_DIAG_vdEndService(eStatus, u8PR_Data);
//}
//
//void local_APP_DIAG_vdSingleFramePositiveResponse(uint8_t u8ResponseSID, uint8_t u8SubFunction, uint8_t* pu8Data, uint8_t u8DataSize)
//{
//  STATUS_t eStatus = STATUS_OK;
//  uint8_t u8Count;
//  uint8_t u8PR_Data[8] = {0};
//  u8PR_Data[0] = u8DataSize + 2;
//  u8PR_Data[1] = u8ResponseSID + 0x40;
//  u8PR_Data[2] = u8SubFunction;
//  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
//  {
//    if(u8Count < u8DataSize)
//    {
//      u8PR_Data[u8Count + 3] = pu8Data[u8Count];      
//    }
//    else
//    {
//      u8PR_Data[u8Count + 3] = APP_DIAG_RESPONSE_FILLER;
//    }
//  }
//  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
//  {
//    APP_DIAG_au8ResposneData[u8Count] = 0;
//  }
//  local_APP_DIAG_vdClearReceivingVariables();
//  ECU_DIAG_vdEndService(eStatus, u8PR_Data);
//}
//
//void local_APP_DIAG_vdSingleFrameNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode)
//{
//  STATUS_t eStatus = STATUS_OK;
//  uint8_t u8NRC_Data[8] = {0};
//  u8NRC_Data[0] = 0x3;
//  u8NRC_Data[1] = 0x7F;
//  u8NRC_Data[2] = u8RequestedService;
//  u8NRC_Data[3] = eNRCCode;
//  u8NRC_Data[4] = APP_DIAG_RESPONSE_FILLER;
//  u8NRC_Data[5] = APP_DIAG_RESPONSE_FILLER;
//  u8NRC_Data[6] = APP_DIAG_RESPONSE_FILLER;
//  u8NRC_Data[7] = APP_DIAG_RESPONSE_FILLER;
//  local_APP_DIAG_vdClearReceivingVariables();
//	ECU_DIAG_vdEndService(eStatus, u8NRC_Data);
//}
//
//void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode)
//{
//  uint32_t u32RawData = 0;
//  float fltPhyData = 0.0;  
//  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG);  
//  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, &u32RawData);
//  u32RawData |= 0x01000000;
//  u32RawData |= (Mode << 8U);
//  fltPhyData = u32RawData / u32Resolution;  
//  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
//}
//
//uint8_t APP_DIAG_u8DefaultEcuModeCheck(ECU_SYS_eEcuMode_t* Mode) // Check then clear flag and mode and leave app valid flag
//{
//  uint8_t u8Flag = deMCD_FALSE;
//  uint32_t u32RawData;
//  float fltPhyData;
//  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG);
//  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, &u32RawData);
//  u8Flag = (u32RawData >> 24U);
//  *Mode = (ECU_SYS_eEcuMode_t)(u32RawData >> 8U);
//  u32RawData &= 1U; // Clear all except app valid flag
//  fltPhyData = u32RawData / u32Resolution;
//  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written  
//  return u8Flag;
//}
//
//void local_APP_DIAG_vdReadMemoryByAddressInitializeArray(void)
//{
//  uint8_t u8Count;
//  for(u8Count = 0; u8Count < APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER; u8Count++)
//  {
//    APP_DIAG_au8ReadDataByAddress[u8Count] = 0;
//  }
//}
//
//void local_APP_DIAG_vdAppValidSet(void)
//{
//  uint32_t u32RawData = 0;
//  float fltPhyData = 0.0;
//  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG);
//  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, &u32RawData);
//  u32RawData |= 1U;
//  fltPhyData = u32RawData / u32Resolution;
//  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
//}
//
//void local_APP_DIAG_vdAppValidClear(void)
//{
//  uint32_t u32RawData = 0;
//  float fltPhyData = 0.0;
//  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG);
//  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, &u32RawData);
//  u32RawData &= (0xFFFFFFF0);
//  fltPhyData = u32RawData / u32Resolution;  
//  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
//}
//
//uint8_t local_APP_DIAG_u8AppValidCheck(void)
//{
//  uint32_t u32RawData = 0;
//  uint8_t u8Flag = deMCD_DEFAULT;
//  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID_PLUS_BOOT_MODE_AND_FLAG, &u32RawData);
//  u8Flag = (uint8_t)u32RawData;
//  return u8Flag;
//}
//
//void local_APP_DIAG_vdDiagHeartBeat(void)
//{
//	static uint32_t su32HeartBeatCounter = 1;
//  
//  if((su32HeartBeatCounter*APP_DIAG_TASK_MS) == APP_DIAG_HEARTBEAT_HALF_PERIOD_MS)
//  {
//    ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_DIAG_HB, ECU_IO_OUT_COMMAND_TOGGLE);
//    su32HeartBeatCounter = 1;
//  }
//  else
//  {
//    su32HeartBeatCounter++;
//  }
//}
//
//void local_APP_DIAG_vdBootHeartBeat(void)
//{
//  static uint32_t su32HeartBeatCounter = 1;
//  static uint8_t su8Counter = 0;
//    
//  if(((su32HeartBeatCounter*APP_BOOT_TASK_MS) == APP_BOOT_HEARTBEAT_HALF_PERIOD_MS) && (su8Counter < (APP_BOOT_HEARTBEAT_FAST_COUNT*2)))
//  {
//    ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_DIAG_HB, ECU_IO_OUT_COMMAND_TOGGLE);
//    su32HeartBeatCounter = 1;
//    su8Counter++;
//  }
//  else if(su8Counter == (APP_BOOT_HEARTBEAT_FAST_COUNT*2))
//  {
//    ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_DIAG_HB, ECU_IO_OUT_COMMAND_ON);
//    su8Counter = (APP_BOOT_HEARTBEAT_FAST_COUNT*2) + 1;
//    su32HeartBeatCounter++;
//  }
//  else if ((su32HeartBeatCounter*APP_BOOT_TASK_MS) == APP_BOOT_HEARTBEAT_STATIC_PERIOD_MS)
//  {
//    su32HeartBeatCounter = 1;
//    su8Counter = 0;
//  }
//  else
//  {
//    su32HeartBeatCounter++;
//  }
//}
//
//void local_APP_DIAG_vdResetArray(uint8_t* pau8Array, uint8_t u8ArraySize)
//{
//  uint8_t u8Count;
//  for(u8Count = 0; u8Count < u8ArraySize; u8Count++)
//  {
//    pau8Array[u8Count] = 0;
//  }
//}
