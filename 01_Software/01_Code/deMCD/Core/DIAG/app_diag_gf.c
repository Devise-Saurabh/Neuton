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

File Name: app_diag_generic_functions.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

//#include "app_diag.c"


#include "app_diag_cfg.h"
#include "app_diag.h"
#include "app_diag_gf.h"

#ifdef APP_DIAG_ENABLE

#include "app.h"
#include "rte.h"
#include "lib_data.h"
#include "lib_delay.h"

///*external global variables*/
//extern uint8_t APP_DIAG_u8ReadDataByAddress_FirstFlowControl;
//extern uint8_t  APP_DIAG_u8ReadDataByAddress_GlobalCounter;
//extern uint8_t APP_DIAG_u8WriteDataByAddress_BytesIndex;
//extern uint8_t APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished;
//extern uint8_t APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived;
/*SID Read Data By Address Global Variables*/
extern uint8_t APP_DIAG_u8ReadDataByAddress_RemainingBytes;// = 0;
extern uint8_t APP_DIAG_u8ReadDataByAddress_BytesNum;// = 0;
extern uint8_t APP_DIAG_u8ReadDataByAddress_GlobalCounter;// = 0;
extern uint8_t APP_DIAG_u8ReadDataByAddress_FirstFlowControl;// = 0;
extern uint8_t APP_DIAG_au8ReadDataByAddress[APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER];
/*SID Read Data By Identifier Global Variables*/
extern uint16_t APP_DIAG_u16ReadDataByIdentifier_ResNum;
extern uint16_t APP_DIAG_u16ReadDataByIdentifier_ResDen;
extern uint16_t APP_DIAG_u16ReadDataByIdentifier_OffNum;
extern uint16_t APP_DIAG_u16ReadDataByIdentifier_OffDen;
#ifdef PROGRAMMING_SOFTWARE
/*SID Transfer Data Global Variables*/
extern APP_DIAG_eTransferDirection_t APP_DIAG_eTransferDirection;
extern uint32_t APP_DIAG_u32RequestDownload_PageStartingAddress;
extern uint32_t APP_DIAG_u32RequestDownload_PageSizeInBytes;
extern uint8_t APP_DIAG_u8RequestDownload_FullLengthCheckVariable;
extern uint8_t APP_DIAG_u8LengthAndFormatIdentifier;
extern uint32_t APP_DIAG_u32TransferData_TotalDataBytesReceived;// = 0;
extern uint8_t APP_DIAG_u8TransferData_ErasedSectorsID;
extern uint8_t APP_DIAG_u8TransferData_PageBytesIndex;// = 0;
extern APP_DIAG_strPageMemory_t APP_DIAG_strMemoryPage;
extern uint8_t APP_DIAG_u8TransferData_PageToBeSent[256];
#endif /*PROGRAMMING_SOFTWARE*/
/*SID Routine Control Global Variables*/
extern uint8_t APP_DIAG_u8RoutineControl_WriteStartAddress;
#ifdef APPLICATION_SOFTWARE
/*SID Read DTC Global Variables*/
extern uint8_t APP_DIAG_au8ReadDTC[APP_FLT_DTC_NUM];    
extern uint8_t APP_DIAG_u8ReadDTC_ConFramesNumber;
extern uint16_t APP_DIAG_u16ReadDTC_TotalBytes;
extern uint16_t APP_DIAG_u16ReadDTC_BytesSentSoFar;
extern uint16_t APP_DIAG_u16ReadDTC_ConFramesRealBytes;  
#endif /*APPLICATION_SOFTWARE*/

/*Global variables*/
ECU_DIAG_FrameType_t APP_DIAG_eFrameType = (ECU_DIAG_FrameType_t)deMCD_DEFAULT;
uint8_t APP_DIAG_u8DataCount = deMCD_DEFAULT;
uint8_t APP_DIAG_u8ServiceId = deMCD_DEFAULT;
uint8_t APP_DIAG_u8SubFunction = deMCD_DEFAULT;
uint8_t APP_DIAG_u8SuppressPosResponse = deMCD_DEFAULT;
uint8_t APP_DIAG_au8RequestData[ECU_DIAG_FRAME_DATA_BYTES] = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
uint8_t APP_DIAG_au8ResposneData[ECU_DIAG_FRAME_DATA_BYTES] = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
uint8_t APP_DIAG_eStatus = APP_DIAG_STATUS_FREE;
uint8_t APP_DIAG_au8ReceivedFullArray[8] = {0,0,0,0,0,0,0,0};
uint8_t APP_DIAG_au8DataNotUsed[8] = {0,0,0,0,0,0,0,0};
uint8_t APP_DIAG_u8NumberOfBytesReceived = 0;
ECU_SYS_eEcuMode_t APP_DIAG_eCurrentSession;
uint32_t APP_DIAG_u32ApplicationEndAddress = 0;
APP_DIAG_strFlowControl_t FlowControlFrame = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
uint8_t APP_DIAG_u8FlowControlExpected = deMCD_FALSE;
uint8_t APP_DIAG_u8FlowControlServiceID = deMCD_FALSE;
APP_DIAG_strConsecutiveFrame_t ConsecutiveFlowFrame = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, 0x21};
uint8_t APP_DIAG_u8FirstFrameServiceID = deMCD_DEFAULT;
uint8_t APP_DIAG_u8ConsecutiveFrameServiceID = deMCD_DEFAULT;
uint8_t APP_DIAG_u8ConsecutiveFrameSequenceNumber = deMCD_DEFAULT;
uint8_t APP_DIAG_u8TesterPresentReceived = deMCD_FALSE; 
uint32_t APP_DIAG_u32TesterPresentTimer= 0; 
uint8_t APP_DIAG_u8ServiceInAction = deMCD_FALSE; // this variable is added to indicate that server is currently performing a service

#ifdef PROGRAMMING_SOFTWARE
void local_APP_DIAG_vdClearSendingPage(void)
{
  uint16_t u16Counter;
  for(u16Counter = 0; u16Counter < 256; u16Counter++)
  {
    APP_DIAG_u8TransferData_PageToBeSent[u16Counter] = 0;
  }
}

void local_APP_DIAG_vdClearReceivingStructure(void)
{
  uint8_t u8Counter;
  uint8_t u8LoopCounter;
  for(u8Counter = 0; u8Counter < APP_DIAG_strMemoryPage.u8BlocksNumber; u8Counter++)
  {
    for(u8LoopCounter = 0; u8LoopCounter < APP_DIAG_strMemoryPage.UC_FLASH_astrBlocksOfMemory[u8Counter].u8DataBytesCount; u8LoopCounter++)
    {
      APP_DIAG_strMemoryPage.UC_FLASH_astrBlocksOfMemory[u8Counter].au8Byte[u8LoopCounter] = 0;
    }
  }
}

STATUS_t local_APP_DIAG_u8FlashedPageCheckSumCalculate(uint32_t u32Address, uint8_t* u8CheckSum)
{
  STATUS_t eStatus = STATUS_NOK;
  APP_DIAG_strPageMemory_t PageMemoryTemp = {0, 16, 0, {0}};;
  PageMemoryTemp.u32PageStartingAddress = u32Address;
  eStatus = ECU_MEM_CODE_eReadPage(&PageMemoryTemp);
  if(eStatus == STATUS_OK)
  {
    *u8CheckSum = local_APP_DIAG_u8AuxFuncCheckSumCalculate(&PageMemoryTemp);
  }
  return eStatus;
}

uint8_t local_APP_DIAG_u8AuxFuncCheckSumCalculate(APP_DIAG_strPageMemory_t* pPageMemory) // Check sum of page as array of blocks
{
  uint8_t u8PageCheckSum = 0;
  uint8_t u8Counter;
  uint8_t u8LoopCounter;
  for(u8LoopCounter = 0; u8LoopCounter < pPageMemory->u8BlocksNumber; u8LoopCounter++)
  {
    for(u8Counter = 0; u8Counter < 16; u8Counter++)
    {
      u8PageCheckSum  = u8PageCheckSum  + pPageMemory->UC_FLASH_astrBlocksOfMemory[u8LoopCounter].au8Byte[u8Counter];      
    }
  }
  u8PageCheckSum = ~u8PageCheckSum;
  return u8PageCheckSum ;
}

uint8_t local_APP_DIAG_u8PageCheckSumCalculate(APP_DIAG_strPageMemory_t *strMemoryPage) // check sum of page as a page
{
  uint8_t u8CheckSum = 0;
  uint16_t u16Counter;
  uint8_t u8LoopCounter;
  for(u16Counter = 0; u16Counter < 16; u16Counter++)
  {
    for(u8LoopCounter = 0; u8LoopCounter < 16; u8LoopCounter++)
    {
      u8CheckSum = u8CheckSum + strMemoryPage->UC_FLASH_astrBlocksOfMemory[u16Counter].au8Byte[u8LoopCounter];              
    }
  }
  u8CheckSum = ~u8CheckSum;
  return u8CheckSum;
}
#endif /*PROGRAMMING_SOFTWARE*/
uint8_t local_APP_DIAG_u8PageArrayCheckSumCalculate(uint8_t *pau8PageArray) // check sum of page as an array
{
  uint8_t u8CheckSum = 0;
  uint8_t u8LoopCounter;
    for(u8LoopCounter = 0; u8LoopCounter < 16; u8LoopCounter++)
    {
      u8CheckSum = u8CheckSum + pau8PageArray[u8LoopCounter];              
    }
  u8CheckSum = ~u8CheckSum;
  return u8CheckSum;
}

uint8_t local_APP_DIAG_u8NumberOfZeroElementsReceived(void)
{
  uint8_t u8Count;
  uint8_t u8Ocurrences = 0;
  for(u8Count = 0; u8Count < 8; u8Count++)
  {
    if(APP_DIAG_au8ReceivedFullArray[u8Count] == 1)
    {
      u8Ocurrences++;
    }
  }
  return u8Ocurrences;
}

uint8_t local_APP_DIAG_u8NonEmptyReceivedFrameElements(uint8_t u8Value) // this function checks the received frame if the number and order of non-zero elements received matches with passed variable
{
  uint8_t u8Count;
  uint8_t u8Flag = deMCD_TRUE;
  for(u8Count = 0; u8Count < 8; u8Count++)
  {
    if(u8Value <= u8Count)
    {
      if(APP_DIAG_au8ReceivedFullArray[u8Count] != APP_DIAG_REQUEST_FILLER)
      {
        u8Flag = deMCD_FALSE;
      }
    }
  }
  return u8Flag;
}

//void local_APP_DIAG_vdReadDTCArrayAdjustment(uint8_t* au8DTC_StatusBytes, uint8_t* au8CanFrames, uint8_t u8TotalDTCBNumber) // takes DTC status array and total data bytes
//{
//  
//  
//}

uint8_t local_APP_DIAG_u8SingleFrameMessageLengthOrInvalidFormatErrorCheck(void)
{
  uint8_t u8Count;
  uint8_t u8DataCount = 0;
  uint8_t u8Flag = deMCD_TRUE;
  // check if length of message receieved is wrong to send NRC --- for SF only//
  /*Check if sub-function byte is null*/
  if(APP_DIAG_u8SubFunction == APP_DIAG_REQUEST_FILLER || APP_DIAG_u8SubFunction == APP_DIAG_RESPONSE_FILLER)
  {
    u8DataCount = 1; // only service ID byte
  }
  else
  {
    u8DataCount = 2; // service ID and sub-function bytes
    /*Get data bytes count*/
    for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
    {
      if(APP_DIAG_au8RequestData[u8Count] != APP_DIAG_REQUEST_FILLER)
      {
        u8DataCount++;
      }
    }    
  }
  if(APP_DIAG_u8DataCount != u8DataCount)
  {
    u8Flag = deMCD_FALSE;
  }
  else
  { // format check, no. of must-be-available data bytes of each service check; rest of services are to be added consecutively
    switch(APP_DIAG_u8ServiceId)
    {
    case SID_DIAG_SESSION_CONTROL:
      u8Flag = local_APP_DIAG_u8NonEmptyReceivedFrameElements(3);
      break;
    case SID_ECU_RESET:
      u8Flag = local_APP_DIAG_u8NonEmptyReceivedFrameElements(3);
      break;
    case SID_TESTER_PRESENT:
      u8Flag = local_APP_DIAG_u8NonEmptyReceivedFrameElements(3); 
      break;
#ifdef SID_READ_MEMORY_BY_ADDRESS
    case SID_READ_MEMORY_BY_ADDRESS:
      u8Flag = local_APP_DIAG_u8NonEmptyReceivedFrameElements(8);
      break;
#endif /*SID_READ_MEMORY_BY_ADDRESS*/
#ifdef SID_READ_MEMORY_BY_ADDRESS
    case SID_WRITE_MEMORY_BY_ADDRESS:
      u8Flag = local_APP_DIAG_u8NonEmptyReceivedFrameElements(8);
      break;
#endif /*SID_READ_MEMORY_BY_ADDRESS*/
    default:
      break;     
    }
  }  
  return u8Flag;  
}

void local_APP_DIAG_vdResetAllGlobalVariables(void)
{
  APP_DIAG_u8RoutineControl_WriteStartAddress = 0;
  FlowControlFrame.u8ExpectedFC_Flag = deMCD_FALSE;
  APP_DIAG_u8ReadDataByAddress_RemainingBytes = 0;
  APP_DIAG_u8ReadDataByAddress_BytesNum = 0;
  APP_DIAG_u8ReadDataByAddress_GlobalCounter = 0;
  APP_DIAG_u8ReadDataByAddress_FirstFlowControl = 0;         
  FlowControlFrame.u8ConsecutiveFrameIndex = deMCD_DEFAULT;
  FlowControlFrame.u8ExpectedFC_Flag = deMCD_DEFAULT;
  FlowControlFrame.u8MaxNumberOfConsecutiveFrames = deMCD_DEFAULT;
  FlowControlFrame.u8NumberOfFramesSent = deMCD_DEFAULT;
  FlowControlFrame.u8ServiceID = deMCD_DEFAULT;
  APP_DIAG_u8FlowControlExpected = deMCD_FALSE;
  APP_DIAG_u8FlowControlServiceID = deMCD_FALSE;
  ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_DEFAULT;
  ConsecutiveFlowFrame.u8ExpectedCF_Number = deMCD_DEFAULT;
  ConsecutiveFlowFrame.u8SequenceNumber = 0x21;
  ConsecutiveFlowFrame.u8SeriveID = deMCD_DEFAULT;
  APP_DIAG_u8FirstFrameServiceID = deMCD_DEFAULT;
  APP_DIAG_u8ConsecutiveFrameServiceID = deMCD_DEFAULT;
  APP_DIAG_u8ConsecutiveFrameSequenceNumber = deMCD_DEFAULT;  
  APP_DIAG_u32TesterPresentTimer = 0;
  APP_DIAG_u16ReadDataByIdentifier_ResNum = 0;
  APP_DIAG_u16ReadDataByIdentifier_ResDen = 0;
  APP_DIAG_u16ReadDataByIdentifier_OffNum = 0;
  APP_DIAG_u16ReadDataByIdentifier_OffDen = 0;
  APP_DIAG_u8DataCount = 0;
  APP_DIAG_u8ServiceId = 0;
  APP_DIAG_u8SubFunction = 0;
  APP_DIAG_u8SuppressPosResponse = 0;
}

void local_APP_DIAG_vdClearReceivingVariables(void) //  (&APP_DIAG_eFrameType, &APP_DIAG_u8DataCount, &APP_DIAG_u8ServiceId, &APP_DIAG_u8SubFunction, &APP_DIAG_u8SuppressPosResponse, APP_DIAG_au8RequestData, ECU_DIAG_FRAME_DATA_BYTES, APP_DIAG_au8ReceivedFullArray);  
{
  APP_DIAG_eFrameType = (ECU_DIAG_FrameType_t)deMCD_DEFAULT;
  APP_DIAG_u8DataCount = deMCD_DEFAULT;
  APP_DIAG_u8ServiceId = deMCD_DEFAULT;
  APP_DIAG_u8SubFunction = deMCD_DEFAULT;
  APP_DIAG_u8SuppressPosResponse = deMCD_DEFAULT;
  uint8_t u8Count;
  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
  {
     APP_DIAG_au8RequestData[u8Count] = 0; 
     APP_DIAG_au8ReceivedFullArray[u8Count] = 0;
  }
  APP_DIAG_au8ReceivedFullArray[5] = 0;
  APP_DIAG_au8ReceivedFullArray[6] = 0;
  APP_DIAG_au8ReceivedFullArray[7] = 0;
}

#ifdef APPLICATION_SOFTWARE
void local_APP_DIAG_vdClearDtcReadServic(void)
{
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < APP_FLT_DTC_NUM; u8Counter++)
  {
    APP_DIAG_au8ReadDTC[u8Counter] = 0;    
  }
  APP_DIAG_u8ReadDTC_ConFramesNumber = 0;
  APP_DIAG_u16ReadDTC_TotalBytes = 0;
  APP_DIAG_u16ReadDTC_BytesSentSoFar = 0;
  APP_DIAG_u16ReadDTC_ConFramesRealBytes = 0;  
}

#endif /*APPLICATION_SOFTWARE*/

void local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(uint8_t* pu8Data, uint8_t u8EndService)
{
  STATUS_t eStatus = STATUS_OK;
  local_APP_DIAG_vdClearReceivingVariables();
  if(u8EndService == deMCD_TRUE)
  {
    APP_DIAG_u8ServiceInAction = 0;
  }
  ECU_DIAG_vdEndService(eStatus, pu8Data);  
}

void local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(uint8_t u8ResponseSID, uint8_t* pu8Data, uint8_t u8DataSize, uint8_t u8EndService)
{
  STATUS_t eStatus = STATUS_OK;
  uint8_t u8Count;
  uint8_t u8PR_Data[8] = {0};
  u8PR_Data[0] = u8DataSize + 1;
  u8PR_Data[1] = u8ResponseSID + 0x40;
  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES + 1; u8Count++)
  {
    if(u8Count < u8DataSize)
    {
      u8PR_Data[u8Count + 2] = pu8Data[u8Count];      
    }
    else
    {
      u8PR_Data[u8Count + 2] = APP_DIAG_RESPONSE_FILLER;
    }
  }
  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES + 1; u8Count++)
  {
    APP_DIAG_au8ResposneData[u8Count] = 0;
  }
  local_APP_DIAG_vdClearReceivingVariables();
  if(u8EndService == deMCD_TRUE)
  {
    APP_DIAG_u8ServiceInAction = 0;
  }
  ECU_DIAG_vdEndService(eStatus, u8PR_Data);
}

void local_APP_DIAG_vdSingleFramePositiveResponse(uint8_t u8ResponseSID, uint8_t u8SubFunction, uint8_t* pu8Data, uint8_t u8DataSize, uint8_t u8EndService)
{
  STATUS_t eStatus = STATUS_OK;
  uint8_t u8Count;
  uint8_t u8PR_Data[8] = {0};
  u8PR_Data[0] = u8DataSize + 2;
  u8PR_Data[1] = u8ResponseSID + 0x40;
  u8PR_Data[2] = u8SubFunction;
  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
  {
    if(u8Count < u8DataSize)
    {
      u8PR_Data[u8Count + 3] = pu8Data[u8Count];      
    }
    else
    {
      u8PR_Data[u8Count + 3] = APP_DIAG_RESPONSE_FILLER;
    }
  }
  for(u8Count = 0; u8Count < ECU_DIAG_FRAME_DATA_BYTES; u8Count++)
  {
    APP_DIAG_au8ResposneData[u8Count] = 0;
  }
  local_APP_DIAG_vdClearReceivingVariables();
  if(u8EndService == deMCD_TRUE)
  {
    APP_DIAG_u8ServiceInAction = 0;
  }
  ECU_DIAG_vdEndService(eStatus, u8PR_Data);
}

void local_APP_DIAG_vdSingleFrameNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode, uint8_t u8EndService)
{
  STATUS_t eStatus = STATUS_OK;
  uint8_t u8NRC_Data[8] = {0};
  u8NRC_Data[0] = 0x3;
  u8NRC_Data[1] = 0x7F;
  u8NRC_Data[2] = u8RequestedService;
  u8NRC_Data[3] = eNRCCode;
  u8NRC_Data[4] = APP_DIAG_RESPONSE_FILLER;
  u8NRC_Data[5] = APP_DIAG_RESPONSE_FILLER;
  u8NRC_Data[6] = APP_DIAG_RESPONSE_FILLER;
  u8NRC_Data[7] = APP_DIAG_RESPONSE_FILLER;
  local_APP_DIAG_vdClearReceivingVariables();
  if(u8EndService == deMCD_TRUE)
  {
    APP_DIAG_u8ServiceInAction = 0;
  }
	ECU_DIAG_vdEndService(eStatus, u8NRC_Data);
}

void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode)
{
  uint32_t u32RawData = 0;
  float fltPhyData = 0.0;  
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);  
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0x0000FFFF);
  u32RawData |= 0x01000000;
  u32RawData |= (Mode << 16U);
  fltPhyData = u32RawData / u32Resolution;  
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

uint8_t APP_DIAG_u8DefaultEcuModeCheck(ECU_SYS_eEcuMode_t* Mode) // Check then clear flag and mode and leave app valid flag
{
  uint8_t u8Flag = deMCD_FALSE;
  uint32_t u32RawData;
//  float fltPhyData;
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u8Flag = (u32RawData >> 24U);
  *Mode = (ECU_SYS_eEcuMode_t)(u32RawData >> 16U);
//  u32RawData &= 1U; // Clear all except app valid flag
//  fltPhyData = u32RawData / u32Resolution;
//  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written  
  return u8Flag;
}

void local_APP_DIAG_vdDefaultEcuModeClear(void)
{
  uint32_t u32RawData;
  float fltPhyData = 0.0;  
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0x0000FFFF);
  fltPhyData = u32RawData / u32Resolution;  
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

void local_APP_DIAG_vdReadMemoryByAddressInitializeArray(void)
{
  uint8_t u8Count;
  for(u8Count = 0; u8Count < APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER; u8Count++)
  {
    APP_DIAG_au8ReadDataByAddress[u8Count] = 0;
  }
}

void local_APP_DIAG_vdAppValidSet(void)
{
  uint32_t u32RawData = 0;
  float fltPhyData = 0.0;
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0xFFFFFF00);
  u32RawData |= 1U;
  fltPhyData = u32RawData / u32Resolution;
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

void local_APP_DIAG_vdAppValidClear(void)
{
  uint32_t u32RawData = 0;
  float fltPhyData = 0.0;
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0xFFFFFF00);
  fltPhyData = u32RawData / u32Resolution;  
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

uint8_t local_APP_DIAG_u8AppValidCheck(void)
{
  uint32_t u32RawData = 0;
  uint8_t u8Flag = deMCD_DEFAULT;
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u8Flag = (uint8_t)u32RawData;
  return u8Flag;
}

void local_APP_DIAG_vdProgRequestSet(void)
{
  uint32_t u32RawData = 0;
  float fltPhyData = 0.0;
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0xFFFF00FF);
  u32RawData |= (1U << 8U);
  fltPhyData = u32RawData / u32Resolution;
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

void local_APP_DIAG_vdProgRequestClear(void)
{
  uint32_t u32RawData = 0;
  float fltPhyData = 0.0;
  uint32_t u32Resolution = ECU_MEM_INT_u16ReadSignalResolution(ECU_MEM_INT_APP_VALID);
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u32RawData &= (0xFFFF00FF);
  fltPhyData = u32RawData / u32Resolution;  
  ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APP_VALID, fltPhyData, u32RawData); //resolution is 1 and offset is 0, raw signal only is written
}

uint8_t local_APP_DIAG_u8ProgRequestCheck(void)
{
  uint32_t u32RawData = 0;
  uint8_t u8Flag = deMCD_DEFAULT;
  ECU_MEM_INT_eReadRawSignalValue(ECU_MEM_INT_APP_VALID, &u32RawData);
  u8Flag = (uint8_t)(u32RawData >> 8U);
  return u8Flag;
}

void local_APP_DIAG_vdCallBackTimingRequirementViolated(void)
{
  UC_DIO_eCommandOutputPin(UC_DIO_PIN_24,UC_DIO_OUT_COMMAND_ON);
}

void local_APP_DIAG_vdDiagHeartBeat(void)
{
  /*ECU_IO_eOutputControl(APP_DIAG_APPLICATION_HEARTBEAT, ECU_IO_OUT_COMMAND_OFF); //switch off application led    
	static uint32_t su32HeartBeatCounter = 1;
  
  if((su32HeartBeatCounter*APP_DIAG_TASK_MS) == APP_DIAG_HEARTBEAT_HALF_PERIOD_MS)
  {
    ECU_IO_eInternalOutputControl(APP_DIAG_DIAGNOSTICS_HEARTBEAT, ECU_IO_OUT_COMMAND_TOGGLE);
    su32HeartBeatCounter = 1;
  }
  else
  {
    su32HeartBeatCounter++;
  }*/
}

void local_APP_DIAG_vdBootHeartBeat(void)
{
#ifdef PROGRAMMING_SOFTWARE
  static uint32_t su32HeartBeatCounter = 1;
  static uint8_t su8Counter = 0;
  static uint32_t su32HeartBeatFlashUpload = 0;
    
  if(APP_DIAG_eTransferDirection == APP_DIAG_NoRequestReceived)
  {
    if(((su32HeartBeatCounter*APP_DIAG_TASK_MS) == APP_DIAG_HEARTBEAT_HALF_PERIOD_MS) && (su8Counter < (APP_DIAG_HEARTBEAT_FAST_COUNT*2)))
    {
      ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_BOOT_HB, ECU_IO_OUT_COMMAND_TOGGLE);
      su32HeartBeatCounter = 1;
      su8Counter++;
    }
    else if(su8Counter == (APP_DIAG_HEARTBEAT_FAST_COUNT*2))
    {
      ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_BOOT_HB, ECU_IO_OUT_COMMAND_ON);
      su8Counter = (APP_DIAG_HEARTBEAT_FAST_COUNT*2) + 1;
      su32HeartBeatCounter++;
    }
    else if ((su32HeartBeatCounter*APP_DIAG_TASK_MS) == APP_DIAG_HEARTBEAT_STATIC_PERIOD_MS)
    {
      su32HeartBeatCounter = 1;
      su8Counter = 0;
    }
    else
    {
      su32HeartBeatCounter++;
    }
  }
  else
  {
    /* Downloading or Uploading*/
    if((su32HeartBeatFlashUpload*APP_DIAG_TASK_MS) > (APP_DIAG_HEARTBEAT_HALF_PERIOD_MS/3))
    {
      ECU_IO_eInternalOutputControl(ECU_IO_DOUT_INT_BOOT_HB, ECU_IO_OUT_COMMAND_TOGGLE);
      su32HeartBeatFlashUpload = 0;
    }
    else
    {
      su32HeartBeatFlashUpload++;
    }
      
  }
#endif /*PROGRAMMING_SOFTWARE*/
}

void local_APP_DIAG_vdResetArray(uint8_t* pau8Array, uint8_t u8ArraySize)
{
  uint8_t u8Count;
  for(u8Count = 0; u8Count < u8ArraySize; u8Count++)
  {
    pau8Array[u8Count] = 0;
  }
}

void local_APP_DIAG_vdShutDownAndResetWithAppValidModification(void)
{
  ECU_MEM_INT_vdReadBootMemory();
  ECU_SYS_vdShutdownAndReset();
}

#endif /*APP_DIAG_ENABLE*/