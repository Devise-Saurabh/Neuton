/***************************************************************************
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

File Name: app_diag.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/
#include "app.h"
#include "app_diag_cfg.h"
#include "app_diag.h"
#include "app_diag_gf.h"


#ifdef APP_DIAG_ENABLE


#include "rte.h"
#include "lib_data.h"
#include "lib_delay.h"

// External global variables
extern ECU_DIAG_FrameType_t APP_DIAG_eFrameType;// = (ECU_DIAG_FrameType_t)deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8DataCount;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8ServiceId;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8SubFunction;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8SuppressPosResponse;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_au8RequestData[ECU_DIAG_FRAME_DATA_BYTES];// = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
extern uint8_t APP_DIAG_au8ResposneData[ECU_DIAG_FRAME_DATA_BYTES];// = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
extern uint8_t APP_DIAG_eStatus;// = APP_DIAG_STATUS_FREE;
extern uint8_t APP_DIAG_au8ReceivedFullArray[8];// = {0,0,0,0,0,0,0,0};
extern uint8_t APP_DIAG_au8DataNotUsed[8];// = {0,0,0,0,0,0,0,0};
extern uint8_t APP_DIAG_u8NumberOfBytesReceived;
extern ECU_SYS_eEcuMode_t APP_DIAG_eCurrentSession;
extern uint32_t APP_DIAG_u32ApplicationEndAddress;// = 0;
extern APP_DIAG_strFlowControl_t FlowControlFrame;// = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
extern uint8_t APP_DIAG_u8FlowControlExpected;// = deMCD_FALSE;
extern uint8_t APP_DIAG_u8FlowControlServiceID;// = deMCD_FALSE;
extern APP_DIAG_strConsecutiveFrame_t ConsecutiveFlowFrame;// = {deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT, deMCD_DEFAULT};
extern uint8_t APP_DIAG_u8FirstFrameServiceID;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8ConsecutiveFrameServiceID;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8ConsecutiveFrameSequenceNumber;// = deMCD_DEFAULT;
extern uint8_t APP_DIAG_u8TesterPresentReceived;// = deMCD_FALSE; 
extern uint32_t APP_DIAG_u32TesterPresentTimer;// = 0; 
extern uint8_t APP_DIAG_u8ServiceInAction;// = 0; // this variable is added to indicate that server is currently performing a service

// Global variables
/*Global variables of SID 0x23 ReadMemoryByAddress*/
uint8_t APP_DIAG_au8ReadDataByAddress[APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER] = {deMCD_DEFAULT};
uint8_t APP_DIAG_u8ReadDataByAddress_BytesNum;
uint32_t APP_DIAG_u32ReadDataByAddress_SeparationTimeInNanoSeconds;
uint8_t APP_DIAG_u8ReadDataByAddress_FirstFlowControl = deMCD_FALSE;
uint8_t APP_DIAG_u8ReadDataByAddress_RemainingBytes ;
uint8_t APP_DIAG_u8ReadDataByAddress_GlobalCounter = deMCD_FALSE;
uint8_t APP_DIAG_u8ReadDataByAddress_Wait;
uint8_t APP_DIAG_u8ReadDataByAddress_OverFlow;
/*Global variables of SID 0x3D WriteMemoryByAddress*/
uint8_t APP_DIAG_u8WriteDataByAddress_ServiceTotalBytesNum;
uint8_t APP_DIAG_u8WriteDataByAddress_SizeBytesNum;
uint8_t APP_DIAG_u8WriteDataByAddress_AddressBytesNum;
uint8_t APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished = deMCD_FALSE;
uint32_t APP_DIAG_u32WriteDataByAddress_Address;
uint8_t APP_DIAG_u8WriteDataByAddress_DataBytes[APP_DIAG_WRITE_DATA_BY_ADDRESS_MAX_BYTES_NUMBER] = {deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT};
uint8_t APP_DIAG_u8WriteDataByAddress_BytesIndex = 0;
uint8_t APP_DIAG_u8WriteDataByAddress_DataBytesCount;
uint8_t APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived = 0;
/*Global variables of SID 0x22 ReadDataByIdentifier*/
uint16_t APP_DIAG_u16ReadDataByIdentifier_ResNum;
uint16_t APP_DIAG_u16ReadDataByIdentifier_ResDen;
uint16_t APP_DIAG_u16ReadDataByIdentifier_OffNum;
uint16_t APP_DIAG_u16ReadDataByIdentifier_OffDen;
/*Global variables of SID 0x2F InputOutputControlByIdentifier*/
//uint8_t APP_DIAG_u8InputOutputControlByIdentifier_ParameterCheckFlag = deMCD_TRUE;
//uint8_t APP_DIAG_u8InputOutputControlByIdentifier_LengthCheckFlag = deMCD_TRUE;
#ifdef APPLICATION_SOFTWARE
/*Global variables of SID 0x31 ReadDTC*/
uint8_t APP_DIAG_au8ReadDTC[APP_FLT_DTC_NUM] = {0};
uint8_t APP_DIAG_u8ReadDTC_ConFramesNumber = 0;
uint16_t APP_DIAG_u16ReadDTC_TotalBytes = 0;
uint16_t APP_DIAG_u16ReadDTC_BytesSentSoFar = 0;
uint16_t APP_DIAG_u16ReadDTC_ConFramesRealBytes = 0;
#endif /*APPLICATION_SOFTWARE*/
/*Global variables of SID 0x31 RoutineControl*/
uint8_t APP_DIAG_u8RoutineControl_WriteStartAddress = 0;
uint8_t APP_DIAG_u8RoutineControl_DelayTime;
#ifdef PROGRAMMING_SOFTWARE
/*Global variables of SID 0x34 RequestUpload*/
uint32_t APP_DIAG_u32RequestUpload_PageStartingAddress;
uint32_t APP_DIAG_u32RequestUpload_PageSizeInBytes;
uint8_t APP_DIAG_u8RequestUpload_FrameBytesReceived = 0;
/*Global variables of SID 0x34 RequestDownload*/
uint32_t APP_DIAG_u32RequestDownload_PageStartingAddress;
uint32_t APP_DIAG_u32RequestDownload_PageSizeInBytes;
uint8_t APP_DIAG_u8RequestDownload_FullLengthCheckVariable;
uint8_t APP_DIAG_u8LengthAndFormatIdentifier;
uint32_t APP_DIAG_u32ApplicationStartingAddress;
uint32_t APP_DIAG_u32ApplicationSizeInBytes;
uint32_t APP_DIAG_u32ApplicationEndingAddress;
uint32_t APP_DIAG_u32ApplicationExecutionAddress;
uint32_t APP_DIAG_u32ApplicationS0_0; // first byte is number of bytes in this srec record
uint32_t APP_DIAG_u32ApplicationS0_1;
uint32_t APP_DIAG_u32ApplicationS0_2;
uint32_t APP_DIAG_u32ApplicationS0_3; 
/*Global variables of SID 0x36 TransferData*/
extern APP_DIAG_strPageMemory_t APP_DIAG_strMemoryPage;
uint32_t APP_DIAG_u32TransferData_TotalDataBytesReceived = 0;
APP_DIAG_eTransferDirection_t APP_DIAG_eTransferDirection;
uint8_t APP_DIAG_u8TransferData_BlockSequenceCounter = 1;
uint8_t APP_DIAG_u8TransferData_ErasedSectorsID;
uint16_t APP_DIAG_u16TransferData_BytesNumToBeRead = 0;
uint8_t APP_DIAG_u8TransferData_PageBytesIndex = 0;
uint8_t APP_DIAG_u8TransferData_WholePageReceived = deMCD_FALSE;
uint8_t APP_DIAG_u8TransferData_BlockCounter = 0;
uint8_t APP_DIAG_u8TransferData_PageToBeSent[256] = {0};
uint32_t APP_DIAG_u32TransferData_BytesReadSoFar = 0;
uint32_t APP_DIAG_u32TransferData_BytesSentSoFar = 0;
APP_DIAG_strBlockMemory_t APP_DIAG_strBlockTemp = {0,16,{0},0,0}; // initialize temporary block with 16 data bytes as default bytes per block
#endif /*PROGRAMMING_SOFTWARE*/
// Local functions
void local_APP_DIAG_vdMainStateMachine(ECU_SYS_eEcuMode_t eEcuMode);
void local_APP_DIAG_vdIO_Control_Identifier(void);
void local_APP_DIAG_vdRead_DataByIdentifier(void);
void local_APP_DIAG_vdMemory_WriteByAddress(void);
void local_APP_DIAG_vdMemory_ReadByAddress(void);
void local_APP_DIAG_vdServeDiagRequest(ECU_SYS_eEcuMode_t ECU_Session);
void local_APP_DIAG_vdDiag_Session_Control(ECU_SYS_eEcuMode_t eEcuMode);
void local_APP_DIAG_vdECU_Reset(void);
void local_APP_DIAG_vdTester_Present(void);
void local_APP_DIAG_vdClearWriteByAddressVariables(void);
void local_APP_DIAG_vdClearReadByAddressVariables(void);
void local_APP_DIAG_vdReadDataByIdentifierDataAdjustment(float fltData, uint8_t* pu8Frame);
void local_APP_DIAG_vdWrite_DataByIdentifier(void);
void local_APP_DIAG_vdRequest_Upload(void);
void local_APP_DIAG_vdRequest_Download(void);
void local_APP_DIAG_vdRoutine_Control(void);
void local_APP_DIAG_vdTransfer_Data(void);
void local_APP_DIAG_vdRequest_Transfer_Exit(void);
void local_APP_DIAG_vdClear_Diagnostic(void);
void local_APP_DIAG_vdRead_DTC(void);

// Global functions
void APP_DIAG_vdInit(void)
{
  ECU_DIAG_vdRegisterAppDiagCallback(local_APP_DIAG_vdServeDiagRequest);
#ifdef PROGRAMMING_SOFTWARE
  static uint32_t u32ApplicationStartingAddress;
  float fltStartAddress;
  APP_DIAG_eCurrentSession = ECU_SYS_eGetEcuMode();
  ECU_MEM_INT_eReadSignalValue(ECU_MEM_INT_APPLICATION_STARTING_ADDRESS,&fltStartAddress);
  u32ApplicationStartingAddress = (uint32_t)fltStartAddress;
  if(local_APP_DIAG_u8AppValidCheck() == deMCD_TRUE && local_APP_DIAG_u8ProgRequestCheck() == deMCD_FALSE)
  {
    ECU_SYS_vdGoToApplication(u32ApplicationStartingAddress);    
  }
  local_APP_DIAG_vdProgRequestClear(); // to ensure not to stay in bootloader upon next reset
  ECU_DIAG_vdRegisterTimingRequirementViolationCallBack(local_APP_DIAG_vdCallBackTimingRequirementViolated);
//  local_APP_DIAG_vdResetArray(APP_DIAG_u8WriteDataByAddress_DataBytes,APP_DIAG_WRITE_DATA_BY_ADDRESS_MAX_BYTES_NUMBER); // trials showed that this array gets corrupted upon initialization
#endif /*PROGRAMMING_SOFTWARE*/
}
void APP_DIAG_vdMgr(void)
{
  APP_DIAG_u32TesterPresentTimer++;
#ifdef APPLICATION_SOFTWARE
    local_APP_DIAG_vdDiagHeartBeat();
#endif /*APPLICATION_SOFTWARE*/
    
#ifdef PROGRAMMING_SOFTWARE
    local_APP_DIAG_vdBootHeartBeat();    
#endif /*PROGRAMMING_SOFTWARE*/
    
  ECU_SYS_eEcuMode_t eEcuMode;
  /* Check the system mode */
  eEcuMode = ECU_SYS_eGetEcuMode(); 
  
  if(((APP_DIAG_u32TesterPresentTimer*APP_DIAG_TASK_MS) >= APP_DIAG_RETURN_TO_DEFAULT_TIMEOUT_MS) && (APP_DIAG_u8ServiceInAction == deMCD_FALSE) && (local_APP_DIAG_u8AppValidCheck() == deMCD_TRUE)) // tester present check is every 2 seconds 
  {
    APP_DIAG_u32TesterPresentTimer = 0;
    // check tester present if in non-default session 
    if(eEcuMode == ECU_SYS_PROGRAMMING || eEcuMode == ECU_SYS_EXTENDED_DIAGNOSTIC)
    {
      if(APP_DIAG_u8TesterPresentReceived == deMCD_TRUE)
      {
        APP_DIAG_u8TesterPresentReceived = deMCD_FALSE;
      }
      else
      {
        // return to default session
        if(eEcuMode == ECU_SYS_PROGRAMMING)
        {
          local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
          local_APP_DIAG_vdProgRequestClear();
          local_APP_DIAG_vdAppValidSet();
          ECU_SYS_vdShutdownAndReset();            
        }
        else
        {
          local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
          ECU_SYS_vdReInitialize();          
        }
      }
    }            
  }
}

void local_APP_DIAG_vdServeDiagRequest(ECU_SYS_eEcuMode_t ECU_Session)
{
	STATUS_t eStatus;
	ECU_SYS_eEcuMode_t eEcuMode;
  
  /* Check the system mode */
  eEcuMode = ECU_SYS_eGetEcuMode(); 
  if(APP_DIAG_eCurrentSession == ECU_SYS_INIT) // Check whether the current session is initialization
  {
    APP_DIAG_eCurrentSession = eEcuMode;
  } 
  eStatus = ECU_DIAG_u8GetDiagFrame(&APP_DIAG_eFrameType, &APP_DIAG_u8DataCount, &APP_DIAG_u8ServiceId, &APP_DIAG_u8SubFunction, &APP_DIAG_u8SuppressPosResponse, APP_DIAG_au8RequestData, ECU_DIAG_FRAME_DATA_BYTES, APP_DIAG_au8ReceivedFullArray, &APP_DIAG_u8NumberOfBytesReceived);  
  // 1st byte:APP_DIAG_eFrameType(7:4) and APP_DIAG_u8DataCount(3:0),2nd byte:APP_DIAG_u8ServiceId,3rd byte:APP_DIAG_u8SubFunction(6:0)and APP_DIAG_u8SuppressPosResponse(7),4th to 8th:APP_DIAG_au8RequestData
  if(eStatus == STATUS_OK)
  {	
    if(APP_DIAG_u8ServiceInAction == deMCD_TRUE && APP_DIAG_eFrameType != ECU_DIAG_ConsecutiveFrame && APP_DIAG_eFrameType != ECU_DIAG_FlowControl)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_BusyRepeatRequest,deMCD_TRUE);
    }
    else
    {
      APP_DIAG_u8ServiceInAction = 1; 
      local_APP_DIAG_vdMainStateMachine(eEcuMode);      
    }
  }
}

void local_APP_DIAG_vdMainStateMachine(ECU_SYS_eEcuMode_t eEcuMode)
{
  if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame)
  {
    APP_DIAG_u8FirstFrameServiceID = APP_DIAG_u8ServiceId;
    APP_DIAG_u8ServiceId = APP_DIAG_u8SubFunction;
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_FlowControl)
  {
    if(FlowControlFrame.u8ExpectedFC_Flag == deMCD_TRUE)
    {
      APP_DIAG_u8FlowControlServiceID = APP_DIAG_u8ServiceId; // this variable is added to handle the case of flow control, since APP_DIAG_u8ServiceId is altered to skip the state machine, APP_DIAG_u8FlowControlServiceID is the variable used afterwards through flow control algorithm
      APP_DIAG_u8ServiceId = FlowControlFrame.u8ServiceID;
    }
    else
    {
      // NRC corresponding to receiving flow control without previous frames - not expecting to receive such message     
      APP_DIAG_u8ServiceId = 0; // to skip state machine
    }
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame)
  {
    if(ConsecutiveFlowFrame.u8ExpectedCF_Flag == deMCD_TRUE)
    {
      uint8_t u8ReceivedSequenceNumber = (APP_DIAG_u8DataCount | 0x20);
      if(u8ReceivedSequenceNumber != ConsecutiveFlowFrame.u8SequenceNumber)//APP_DIAG_u8ConsecutiveFrameSequenceNumber)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(ConsecutiveFlowFrame.u8SeriveID, APP_DIAG_WrongBlockSequenceCounter, deMCD_TRUE);// NRC corresponding to wrong sequence number
      }
      else
      {
        APP_DIAG_u8ConsecutiveFrameServiceID = APP_DIAG_u8ServiceId; // this variable is added to handle the case of consecutive frame, since APP_DIAG_u8ServiceId is altered to skip the state machine, APP_DIAG_u8ConsecutiveFlowServiceID is the variable used afterwards through consecutive frame algorithm
        APP_DIAG_u8ServiceId = ConsecutiveFlowFrame.u8SeriveID;
        ConsecutiveFlowFrame.u8SequenceNumber++;
        if(ConsecutiveFlowFrame.u8SequenceNumber == 0x30) // wrap-around check, range is from 0 to 15 
        {
          ConsecutiveFlowFrame.u8SequenceNumber = 0x21;
        }
//        APP_DIAG_u8ConsecutiveFrameSequenceNumber++;
//        if(APP_DIAG_u8ConsecutiveFrameSequenceNumber == 0x10) // wrap-around check, range is from 0 to 15 
//        {
//          APP_DIAG_u8ConsecutiveFrameSequenceNumber = 0;
//        }
      }
    }
    else
    {
      // NRC corresponding to receiving consecutive frame without previous frames - not expecting to receive such message
      APP_DIAG_u8ServiceId = 0; // to skip state machine
    }
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_SingleFrame)
  {
#ifdef PROGRAMMING_SOFTWARE
    if(local_APP_DIAG_u8SingleFrameMessageLengthOrInvalidFormatErrorCheck() == deMCD_FALSE && APP_DIAG_u8ServiceId != SID_TRANSFER_DATA && APP_DIAG_u8ServiceId != SID_REQUEST_DOWNLOAD && APP_DIAG_u8ServiceId != SID_REQUEST_UPLOAD && APP_DIAG_u8ServiceId != SID_REQUEST_TRANSFER_EXIT) // skip because in transfer data service last byte is sometimes one of filler bytes which cause misinterpetation by software
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
      APP_DIAG_u8ServiceId = 0; // to skip state machine
    }    
#else
    if(local_APP_DIAG_u8SingleFrameMessageLengthOrInvalidFormatErrorCheck() == deMCD_FALSE)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
      APP_DIAG_u8ServiceId = 0; // to skip state machine
    }
#endif /*PROGRAMMING_SOFTWARE*/    
  }
  else
  {
    APP_DIAG_u8ServiceId = 0xFF; // to send negative response
  }
  switch(APP_DIAG_u8ServiceId) 
  {
    case SID_SECURITY_ACCESS:
#ifdef SID_ENABLE_SECURITY_ACCESS          
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_SECURITY_ACCESS*/  
      break;
      
    case SID_COMMUNICATION_CONTROL:
#ifdef SID_ENABLE_COMMUNICATION_CONTROL
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }      
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_COMMUNICATION_CONTROL*/        
      break;
      
    case SID_SECURED_DATA_TRANSMISSION:
#ifdef SID_ENABLE_SECURED_DATA_TRANSMISSION      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_SECURED_DATA_TRANSMISSION*/       
      break;
      
    case SID_CONTROL_DTC_SETTINGS:
#ifdef SID_ENABLE_CONTROL_DTC_SETTINGS      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_CONTROL_DTC_SETTING*/        
      break;
      
    case SID_LINK_CONTROL:
#ifdef SID_ENABLE_LINK_CONTROL      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_LINK_CONTROL*/       
      break;
      
    case SID_READ_DATA_IDENTIFIER_PERIODIC:
#ifdef SID_ENABLE_READ_DATA_IDENTIFIER_PERIODIC      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_READ_DATA_BY_PERIODIC_IDENTIFIER*/       
      break;
      
    case SID_INPUT_OUTPUT_CONTROL_BY_IDENTIFER:
#ifdef SID_ENABLE_INPUT_OUTPUT_CONTROL_BY_IDENTIFER      
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdIO_Control_Identifier();        
      }      
//        local_APP_DIAG_vdIO_Control_Identifier();        
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_INPUT_OUTPUT_CONTROL_BY_IDENTIFER*/          
      break;
      
    case SID_REQUEST_DOWNLOAD:
#ifdef SID_ENABLE_REQUEST_DOWNLOAD      
      if(eEcuMode != ECU_SYS_PROGRAMMING) // Services supported in programming session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
        // execute service
        local_APP_DIAG_vdRequest_Download();
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_REQUEST_DOWNLOAD*/       
      break;
      
    case SID_REQUEST_UPLOAD:
#ifdef SID_ENABLE_REQUEST_UPLOAD      
      if(eEcuMode != ECU_SYS_PROGRAMMING) // Services supported in programming session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
        // execute service
      local_APP_DIAG_vdRequest_Upload();
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_REQUEST_UPLOAD*/      
      break;
      
    case SID_TRANSFER_DATA:
#ifdef SID_ENABLE_TRANSFER_DATA      
      if(eEcuMode != ECU_SYS_PROGRAMMING) // Services supported in programming session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
        // execute service
        local_APP_DIAG_vdTransfer_Data();
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_TRANSFER_DATA*/      
      break;
      
    case SID_REQUEST_TRANSFER_EXIT:
#ifdef SID_ENABLE_REQUEST_TRANSFER_EXIT            
      if(eEcuMode != ECU_SYS_PROGRAMMING) // Services supported in programming session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
        // execute service
        local_APP_DIAG_vdRequest_Transfer_Exit();
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_REQUEST_TRANSFER_EXIT*/      
      break;
      
    case SID_REQUEST_FILE_TRANSFER:
#ifdef SID_ENABLE_REQUEST_FILE_TRANSFER      
      if(eEcuMode != ECU_SYS_PROGRAMMING) // Services supported in programming session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      { // Not implemented in this deMCD_BOOT release
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupported, deMCD_TRUE);        
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_REQUEST_FILE_TRANSFER*/       
      break;    
      
    case SID_DIAG_SESSION_CONTROL:
#ifdef SID_ENABLE_DIAG_SESSION_CONTROL      
      local_APP_DIAG_vdDiag_Session_Control(eEcuMode); // Conditions not correct NRC is not fully implemented
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_DIAG_SESSION_CONTROL*/      
      break;
      
    case SID_ECU_RESET:
#ifdef SID_ENABLE_ECU_RESET      
      local_APP_DIAG_vdECU_Reset(); // Conditions not correct and security access denied are not implemented
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_ECU_RESET*/        
      break;    
      
    case SID_TESTER_PRESENT:
#ifdef SID_ENABLE_TESTER_PRESENT      
      local_APP_DIAG_vdTester_Present(); 
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_TESTER_PRESENT*/       
      break;
      
    case SID_ACCESS_TIMING_PARAMETER:
#ifdef SID_ENABLE_ACCESS_TIMING_PARAMETER      
      // Not implemented in this deMCD_BOOT release
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupported, deMCD_TRUE);      
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_ACCESS_TIMING_PARAMETER*/        
      break;
      
    case SID_RESPONSE_ON_EVENT:
#ifdef SID_ENABLE_RESPONSE_ON_EVENT      
      // Not implemented in this deMCD_BOOT release
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupported, deMCD_TRUE);      
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_RESPONSE_ON_EVENT*/        
      break;
         
    case SID_READ_DATA_BY_IDENTIFIER:
#ifdef SID_ENABLE_READ_DATA_BY_IDENTIFIER
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC && eEcuMode != ECU_SYS_PROGRAMMING && eEcuMode != ECU_SYS_DEFAULT) // Services supported in default session
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
           //execute service
        local_APP_DIAG_vdRead_DataByIdentifier();     
      }       
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*PROGRAMMING_SOFTWARE*/
      break;
      
    case SID_READ_MEMORY_BY_ADDRESS:
#ifdef SID_ENABLE_READ_MEMORY_BY_ADDRESS      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdMemory_ReadByAddress();      
      }     
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_READ_MEMORY_BY_ADDRESS*/       
      break;
      
    case SID_READ_SCALING_DATA_BY_IDENTIFIER:
#ifdef SID_ENABLE_READ_SCALING_DATA_BY_IDENTIFIER      
      if(eEcuMode == ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        
      }

#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_READ_SCALING_DATA_BY_IDENTIFIER*/         
      break;
      
    case SID_DYNAMICALLY_DEFINE_DATA_IDENTIFIER:
#ifdef SID_ENABLE_DYNAMICALLY_DEFINE_DATA_IDENTIFIER      
      // Not implemented in this deMCD_BOOT release
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupported, deMCD_TRUE);      
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_DYNAMICALLY_DEFINE_DATA_IDENTIFIER*/        
      break;
      
    case SID_WRITE_DATA_BY_IDENTIFIER:
#ifdef SID_ENABLE_WRITE_DATA_BY_IDENTIFIER      
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC) // Services supported in diagnostic session only
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
      }
      else
      {
         //execute service
        local_APP_DIAG_vdWrite_DataByIdentifier();
      }
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_WRITE_DATA_BY_IDENTIFIER*/      
      break;
      
    case SID_WRITE_MEMORY_BY_ADDRESS:
#ifdef SID_ENABLE_WRITE_MEMORY_BY_ADDRESS      
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdMemory_WriteByAddress();      
      }             
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_WRITE_MEMORY_BY_ADDRESS*/      
      break;
      
    case SID_CLEAR_DIAGNOSTIC_INFORMATION:
#ifdef SID_ENABLE_CLEAR_DIAGNOSTIC_INFORMATION      
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdClear_Diagnostic();
      }         
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_CLEAR_DIAGNOSTIC_INFORMATION*/      
      break;
      
    case SID_READ_DTC_INFORMATION:
#ifdef SID_ENABLE_READ_DTC_INFORMATION      
      if(eEcuMode != ECU_SYS_EXTENDED_DIAGNOSTIC)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdRead_DTC();     
      }              
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_READ_DTC_INFORMATION*/          
      break;
      
    case SID_ROUTINE_CONTROL:
#ifdef SID_ENABLE_ROUTINE_CONTROL      
      if(eEcuMode != ECU_SYS_PROGRAMMING)
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);        
      }
      else
      {
        local_APP_DIAG_vdRoutine_Control();
      }              
#else
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupportedInActiveSession, deMCD_TRUE);
#endif /*SID_ROUTINE_CONTROL*/         
      break;

  case SKIP_STATE_MACHING:
    break;
    
    default :  
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_ServiceNotSupported, deMCD_TRUE);
      break;
  }    
}

void local_APP_DIAG_vdDiag_Session_Control(ECU_SYS_eEcuMode_t eEcuMode)
{
  /*Negative error codes checks*/
  if(APP_DIAG_u8SubFunction == 0 || APP_DIAG_u8SubFunction > 0x3) // sub-function is not supported
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_SubFunctionNotSupported, deMCD_TRUE);
  }      
  else
  {
    switch(eEcuMode )
    {
    case ECU_SYS_DEFAULT:
      if(APP_DIAG_u8SubFunction == ECU_SYS_DEFAULT) // default session
      { 
        /*send positive response, relock if client has unlocked before*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                       
        }
        /*re-initialize*/
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
        ECU_SYS_vdReInitialize();
      }
      else if(APP_DIAG_u8SubFunction == ECU_SYS_PROGRAMMING)
      { /*stop each event that has been configured via ResponseOnEvent and enable security*/
        /*output control should be disabled any controlDTC settings should be reset*/
        /*normal communication should be restored*/
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                              
        } 
        local_APP_DIAG_vdProgRequestSet();
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_PROGRAMMING);
        local_APP_DIAG_vdShutDownAndResetWithAppValidModification();
      }
      else // APP_DIAG_u8SubFunction == ECU_SYS_EXTENDED_DIAGNOSTIC
      { /*stop each event that has been configured via ResponseOnEvent*/
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                    
        }
        /*set to diag mode*/        
        ECU_SYS_vdSetEcuMode(ECU_SYS_EXTENDED_DIAGNOSTIC);
      }
      break;
    case ECU_SYS_EXTENDED_DIAGNOSTIC: //**** Should be added when diag is requested
      if(APP_DIAG_u8SubFunction == ECU_SYS_DEFAULT)
      { /*set app valid flag*/
        local_APP_DIAG_vdAppValidSet();
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                     
        }
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
        ECU_SYS_vdReInitialize();
      }
      else if(APP_DIAG_u8SubFunction == ECU_SYS_EXTENDED_DIAGNOSTIC)
      { /*stop each event that has been configured via ResponseOnEvent and enable security*/
        /*output control should be disabled any controlDTC settings should be reset*/
        /*normal communication should be restored*/
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                     
        }      
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_EXTENDED_DIAGNOSTIC);
        ECU_SYS_vdReInitialize();        
      }
      else // APP_DIAG_u8SubFunction == ECU_SYS_PROGRAMMING
      {
        /*stop each event that has been configured via ResponseOnEvent and enable security*/
       /*output control should be disabled any controlDTC settings should be reset*/
       /*normal communication should be restored*/ 
       /*send positive response*/ 
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                       
        }
       /*reset app valid flag*/
        local_APP_DIAG_vdProgRequestSet();     
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_PROGRAMMING);
        local_APP_DIAG_vdShutDownAndResetWithAppValidModification();      
      }
      
      break;
    case ECU_SYS_PROGRAMMING:
      if(APP_DIAG_u8SubFunction == ECU_SYS_PROGRAMMING)
        /*stop each event that has been configured via ResponseOnEvent and relock security*/
        /*all other active diagnostic functionality from previous session and not dependent on security*/
        /*shall be maintained*/
      {
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                    
        }
       /*reset app valid flag*/
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_PROGRAMMING);         
        local_APP_DIAG_vdProgRequestSet();             
        ECU_SYS_vdReInitialize();
      }
      else if(APP_DIAG_u8SubFunction == ECU_SYS_DEFAULT)
      {
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                    
        }
        /*set appvalid flag and clear programming request*/
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
        local_APP_DIAG_vdProgRequestClear();
        local_APP_DIAG_vdAppValidSet();
        ECU_SYS_vdShutdownAndReset();      
      }
      else //APP_DIAG_u8SubFunction == ECU_SYS_EXTENDED_DIAGNOSTIC
      {
        /*send positive response*/
        if(APP_DIAG_u8SuppressPosResponse == 0)
        {
          uint16_t u16temp = APP_DIAG_P2SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[0] = (uint8_t)(u16temp >> 8U);            // P2server is 50 ms - resolution is 1 ms
          APP_DIAG_au8ResposneData[1] = (uint8_t)(u16temp);                    // P2server is 50 ms - resolution is 1 ms
          u16temp = APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS;
          APP_DIAG_au8ResposneData[2] = (uint8_t)(u16temp >> 8U);    // P2*server is 5000 ms - resolution is 10 ms
          APP_DIAG_au8ResposneData[3] = (uint8_t)(u16temp);            // P2*server is 5000 ms - resolution is 10 ms
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8ResposneData,4, deMCD_TRUE);                                   
        }
       /*reset app valid flag*/
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_EXTENDED_DIAGNOSTIC);
        local_APP_DIAG_vdProgRequestClear();        
        local_APP_DIAG_vdAppValidSet();
        ECU_SYS_vdShutdownAndReset();    
      }
      break;
    default:
      break;
    }    
  }

}

void local_APP_DIAG_vdECU_Reset(void)
{
  local_APP_DIAG_vdDefaultEcuModeClear();
  if(APP_DIAG_u8SubFunction != 0x02)
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_SubFunctionNotSupported, deMCD_TRUE);    
  }
  else
  {
    local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8DataNotUsed,0, deMCD_TRUE);
//    LIB_DELAY_vdNanoSeconds(500000);
    ECU_SYS_vdShutdownAndReset();    
  }
}

void local_APP_DIAG_vdTester_Present(void)
{
  APP_DIAG_u8TesterPresentReceived = deMCD_TRUE;
  if(APP_DIAG_u8SubFunction != 0x00) // Check if sub-function is supported
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_SubFunctionNotSupported, deMCD_TRUE);    
  }
  else if(APP_DIAG_u8SuppressPosResponse == deMCD_FALSE) // Check if positive response is suppressed
  {
    local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId,APP_DIAG_u8SubFunction,APP_DIAG_au8DataNotUsed,0, deMCD_TRUE);    
  }
  else // if suppressed, then APP_DIAG_u8ServiceInAction should be cleared; service executed
  {
    APP_DIAG_u8ServiceInAction = 0;
  }
}

void local_APP_DIAG_vdIO_Control_Identifier(void)
{
  if(APP_DIAG_au8ReceivedFullArray[4] > 0x04) // check if InputOutputControlParameter is supported
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);
  }
  else
  {
    if(APP_DIAG_au8ReceivedFullArray[4] == 0x03 && APP_DIAG_u8NumberOfBytesReceived < 6) // check if total length is within range
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat,deMCD_TRUE);      
    }
    else
    {
      // security check condition should be added here as if-else statement
      STATUS_t eStatus;
      uint16_t u16ID = (APP_DIAG_au8ReceivedFullArray[2] << 8U);
      u16ID |= (APP_DIAG_au8ReceivedFullArray[3]);
      uint16_t u16FreqTemp;
      uint16_t u16RawTemp;
      uint8_t u8ReadValue;      
      uint16_t u16Temp;
      uint8_t u8Temp;
      if(u16ID <= APP_DIAG_INPUT_OUTPUT_CONTROL_DI_END_ID) // Digital Input Pin
      {
        switch(APP_DIAG_au8ReceivedFullArray[4])
        {
        case 0: //return control to ecu
          eStatus = ECU_IO_eReturnControlToECU(u16ID, APP_DIAG_InputPin, APP_DIAG_DigitalPin);
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }             
          break;
        case 1: //reset to default
          eStatus = ECU_IO_eResetPinToDefault(u16ID, APP_DIAG_InputPin, APP_DIAG_DigitalPin);
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }          
          break;
        case 2: //freeze current state
          eStatus = ECU_IO_eFreezePinCurrentState(u16ID, APP_DIAG_InputPin, APP_DIAG_DigitalPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          break;
        case 3: //short term adjustments
          eStatus = ECU_IO_eAdjustPinValue(u16ID, APP_DIAG_au8ReceivedFullArray[5], deMCD_DEFAULT, deMCD_DEFAULT, APP_DIAG_InputPin, APP_DIAG_DigitalPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }                   
          break;
        case 4: //read value
          eStatus = ECU_IO_eReadPinValue(u16ID, APP_DIAG_InputPin, APP_DIAG_DigitalPin, &u8ReadValue, &u16Temp, &u8Temp); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            APP_DIAG_au8ResposneData[3] = u8ReadValue;
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,4,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }          
        default:
          break;
        }
      }
      else if(u16ID >= APP_DIAG_INPUT_OUTPUT_CONTROL_DI_END_ID && u16ID <= APP_DIAG_INPUT_OUTPUT_CONTROL_DO_END_ID) // Digital Output Pin
      {
        u16ID = (u16ID - APP_DIAG_INPUT_OUTPUT_CONTROL_DO_START_ID);
        switch(APP_DIAG_au8ReceivedFullArray[4])
        {
        case 0: //return control to ecu
          eStatus = ECU_IO_eReturnControlToECU(u16ID, APP_DIAG_OutputPin, APP_DIAG_DigitalPin);
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }             
          break;
        case 1: //reset to default
          eStatus = ECU_IO_eResetPinToDefault((u16ID), APP_DIAG_OutputPin, APP_DIAG_DigitalPin);
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }          
          break;
        case 2: //freeze current state
          eStatus = ECU_IO_eFreezePinCurrentState((u16ID), APP_DIAG_OutputPin, APP_DIAG_DigitalPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          break;
        case 3: //short term adjustments
          eStatus = ECU_IO_eAdjustPinValue((u16ID), APP_DIAG_au8ReceivedFullArray[5], deMCD_DEFAULT, deMCD_DEFAULT, APP_DIAG_OutputPin, APP_DIAG_DigitalPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }                   
          break;
        default:
          break;
        }        
      }
      else if(u16ID >= APP_DIAG_INPUT_OUTPUT_CONTROL_DO_END_ID && u16ID <= APP_DIAG_INPUT_OUTPUT_CONTROL_AI_END_ID) // Analog Input Pin (PWM + ADC)
      {
        u16ID = u16ID - APP_DIAG_INPUT_OUTPUT_CONTROL_AI_START_ID;
        uint16_t u16Freq;
        uint8_t u8Duty;
        uint8_t u8Temp;
        uint8_t au8CanFrameSent[6] = {0};
        if((u16ID) < ECU_IO_PIN_NUM) // check if pin ID corresponds to PWM input or ADC input
        {
          switch(APP_DIAG_au8ReceivedFullArray[4])
          {
          case 0: //return control to ecu
            eStatus = ECU_IO_eReturnControlToECU((u16ID), APP_DIAG_InputPin, APP_DIAG_AnalogPin);            
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }             
            break;
          case 1: //reset to default
            eStatus = ECU_IO_eResetPinToDefault((u16ID), APP_DIAG_InputPin, APP_DIAG_AnalogPin);
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }          
            break;
          case 2: //freeze current state
            eStatus = ECU_IO_eFreezePinCurrentState((u16ID), APP_DIAG_InputPin, APP_DIAG_AnalogPin); // input pin
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            break;
          case 3: //short term adjustments
            u16FreqTemp = APP_DIAG_au8ReceivedFullArray[6];
            u16FreqTemp |= (APP_DIAG_au8ReceivedFullArray[5] << 8U);
            eStatus = ECU_IO_eAdjustPinValue((u16ID), deMCD_DEFAULT, u16FreqTemp, APP_DIAG_au8ReceivedFullArray[7], APP_DIAG_InputPin, APP_DIAG_AnalogPin); // input pin
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            break;
          case 4: //read value
            eStatus = ECU_IO_eReadPinValue(u16ID, APP_DIAG_InputPin, APP_DIAG_AnalogPin, &u8Temp, &u16Freq, &u8Duty);
            if(eStatus == STATUS_OK)
            {
              au8CanFrameSent[0] = APP_DIAG_au8ReceivedFullArray[2];
              au8CanFrameSent[1] = APP_DIAG_au8ReceivedFullArray[3];
              au8CanFrameSent[2] = APP_DIAG_au8ReceivedFullArray[4];
              au8CanFrameSent[3] = (u16Freq >> 8U);
              au8CanFrameSent[4] = u16Freq;
              au8CanFrameSent[5] = u8Duty;
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,au8CanFrameSent,6,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            break;
          default:
            break;
          }
        }
        else // ADC input
        {
          u16ID = u16ID - ECU_IO_PIN_NUM;
          switch(APP_DIAG_au8ReceivedFullArray[4])
          {
          case 0: //return control to ecu
            eStatus = ECU_ANLG_eReturnControlToECU(u16ID);            
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }             
            break;
          case 1: //reset to default
            eStatus = ECU_ANLG_eResetToDefault(u16ID);
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }          
            break;
          case 2: //freeze current state
            eStatus = ECU_ANLG_eFreezePinCurrentState(u16ID); // input pin
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            break;
          case 3: //short term adjustments
            u16RawTemp = APP_DIAG_au8ReceivedFullArray[6];
            u16RawTemp |= (APP_DIAG_au8ReceivedFullArray[5] << 8U);
            eStatus = ECU_ANLG_eAdjustPinValue((u16ID), u16RawTemp); // input pin
            if(eStatus == STATUS_OK)
            {
              APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
              APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
              APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
              local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            else // id out of range
            {
              local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
              local_APP_DIAG_vdResetAllGlobalVariables();              
            }
            break;
          default:
            break;
          }
        }
      }
      else if(u16ID >= APP_DIAG_INPUT_OUTPUT_CONTROL_AO_START_ID && u16ID <= APP_DIAG_INPUT_OUTPUT_CONTROL_AO_END_ID) // Analog Output Pin (PWM)
      {
        u16ID = u16ID - APP_DIAG_INPUT_OUTPUT_CONTROL_AO_START_ID;
        switch(APP_DIAG_au8ReceivedFullArray[4])
        {
        case 0: //return control to ecu
          eStatus = ECU_IO_eReturnControlToECU((u16ID), APP_DIAG_OutputPin, APP_DIAG_AnalogPin);            
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }             
          break;
        case 1: //reset to default
          eStatus = ECU_IO_eResetPinToDefault((u16ID), APP_DIAG_OutputPin, APP_DIAG_AnalogPin);
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }          
          break;
        case 2: //freeze current state
          eStatus = ECU_IO_eFreezePinCurrentState((u16ID), APP_DIAG_OutputPin, APP_DIAG_AnalogPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          break;
        case 3: //short term adjustments
          u16FreqTemp = APP_DIAG_au8ReceivedFullArray[6];
          u16FreqTemp |= (APP_DIAG_au8ReceivedFullArray[5] << 8U);
          eStatus = ECU_IO_eAdjustPinValue((u16ID), deMCD_DEFAULT, u16FreqTemp, APP_DIAG_au8ReceivedFullArray[7], APP_DIAG_OutputPin, APP_DIAG_AnalogPin); // input pin
          if(eStatus == STATUS_OK)
          {
            APP_DIAG_au8ResposneData[0] = APP_DIAG_au8ReceivedFullArray[2];
            APP_DIAG_au8ResposneData[1] = APP_DIAG_au8ReceivedFullArray[3];
            APP_DIAG_au8ResposneData[2] = APP_DIAG_au8ReceivedFullArray[4];
            local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,APP_DIAG_au8ResposneData,3,deMCD_TRUE);
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          else // id out of range
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
            local_APP_DIAG_vdResetAllGlobalVariables();              
          }
          break;
        default:
          break;
        }
      }
    }
  }
}

void local_APP_DIAG_vdWrite_DataByIdentifier(void)
{
//  uint8_t u8Flag = deMCD_FALSE;
  uint16_t u16DID = deMCD_DEFAULT;
//  uint16_t u16Counter;
  uint8_t au8CanFrame[2] = {deMCD_DEFAULT};
  u16DID = (APP_DIAG_au8ReceivedFullArray[2] << 8U);
  u16DID |= (APP_DIAG_au8ReceivedFullArray[3]); 
  au8CanFrame[0] = APP_DIAG_au8ReceivedFullArray[2];
  au8CanFrame[1] = APP_DIAG_au8ReceivedFullArray[3];
  if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_START || u16DID > APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_END)
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
    local_APP_DIAG_vdResetAllGlobalVariables();
  }
  else
  {
    u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_START;    
    uint16_t u16TempData = (APP_DIAG_au8ReceivedFullArray[4] << 8U);
    u16TempData |= (APP_DIAG_au8ReceivedFullArray[5]);    
    uint16_t u16Resolution = (APP_DIAG_au8ReceivedFullArray[6] << 8U);
    u16Resolution |= (APP_DIAG_au8ReceivedFullArray[7]);
    float fltData = ((float)u16TempData / (float)u16Resolution);
    if(RTE_eWriteData(u16DID, fltData) == STATUS_OK)
    {
      local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrame, 2, deMCD_TRUE);
      local_APP_DIAG_vdResetAllGlobalVariables();      
    }
    else
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
      local_APP_DIAG_vdResetAllGlobalVariables();      
    }
//    for(u16Counter = 0; u16Counter < RTE_DATA_NUM; u16Counter++)
//    {
//      if((RTE_astrData[u16Counter].u8IdData + APP_DIAG_READ_DATA_BY_IDENTIFIER_BYTE_VALUE_START) == u16DID)
//      {
//        u8Flag = deMCD_TRUE;
//        RTE_astrData[u16Counter].fltData = fltData;
//        local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrame, 2, deMCD_TRUE);
//        local_APP_DIAG_vdResetAllGlobalVariables();
//        break;
//      }
//    }
//    if(u8Flag == deMCD_FALSE)
//    {
//      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
//      local_APP_DIAG_vdResetAllGlobalVariables();
//    }    
  }  
}

void local_APP_DIAG_vdRead_DataByIdentifier(void)
{
  uint8_t au8CanFrame[6] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
  uint16_t u16DID = deMCD_DEFAULT;
  float fltReadValue;
  uint32_t u32ReadValue;
  if(APP_DIAG_eFrameType == ECU_DIAG_FlowControl)
  {
    if(APP_DIAG_au8ReceivedFullArray[2] != 0)
    {
      if(APP_DIAG_au8ReceivedFullArray[2] < 0x7F)
      {
        LIB_DELAY_vdNanoSeconds((APP_DIAG_au8ReceivedFullArray[2] * 1000000)); // delay is in milliseconds        
      }
      else
      {
        LIB_DELAY_vdNanoSeconds((APP_DIAG_au8ReceivedFullArray[2] * 1000)); // delay is in microseconds        
      }
    }
    uint8_t au8CanFrameConsecutiveSent[8] = {APP_DIAG_RESPONSE_FILLER};
    au8CanFrameConsecutiveSent[0] = 0x21;
    au8CanFrameConsecutiveSent[1] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_ResNum);
    au8CanFrameConsecutiveSent[2] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_ResDen >> 8U);
    au8CanFrameConsecutiveSent[3] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_ResDen);
    au8CanFrameConsecutiveSent[4] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_OffNum >> 8U);
    au8CanFrameConsecutiveSent[5] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_OffNum);    
    au8CanFrameConsecutiveSent[6] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_OffDen >> 8U);
    au8CanFrameConsecutiveSent[7] = (uint8_t)(APP_DIAG_u16ReadDataByIdentifier_OffDen);      
    local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameConsecutiveSent, deMCD_TRUE);
    local_APP_DIAG_vdResetAllGlobalVariables();   
  }
  else
  {
    u16DID = (APP_DIAG_au8ReceivedFullArray[2] << 8U);
    u16DID |= (APP_DIAG_au8ReceivedFullArray[3]); 
    // check if out of range
    if((u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_START) || (u16DID > APP_DIAG_READ_DATA_BY_IDENTIFIER_PWM_IO_SECTION_END) || (u16DID > APP_DIAG_READ_DATA_BY_IDENTIFIER_BOOT_MEMORY_SECTION_END && u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_DIGITAL_IO_SECTION_START))
    {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();
    }
    else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_END) // Read memory by ID
    {
      u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_START;
      au8CanFrame[0] = APP_DIAG_au8ReceivedFullArray[2];
      au8CanFrame[1] = APP_DIAG_au8ReceivedFullArray[3];
      if(RTE_eReadData(u16DID, &fltReadValue) == STATUS_OK)
      {
        local_APP_DIAG_vdReadDataByIdentifierDataAdjustment(fltReadValue, au8CanFrame);
        local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrame, 6, deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();      
      }  
    }
    else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_BOOT_MEMORY_SECTION_END) // Read memory - boot section
    {
      u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_BOOT_MEMORY_SECTION_START;
      au8CanFrame[0] = APP_DIAG_au8ReceivedFullArray[2];
      au8CanFrame[1] = APP_DIAG_au8ReceivedFullArray[3];
      if(ECU_MEM_INT_eReadRawSignalValue(u16DID,&u32ReadValue) == STATUS_OK) // read application size in bytes
      {
        au8CanFrame[2] = (u32ReadValue >> 24U);
        au8CanFrame[3] = (u32ReadValue >> 16U);
        au8CanFrame[4] = (u32ReadValue >> 8U);
        au8CanFrame[5] = (uint8_t)(u32ReadValue);
        local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrame, 6, deMCD_TRUE);
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();              
      }
    }
    else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_DIGITAL_IO_SECTION_END)// Digital Input IOs read
    {
      u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_DIGITAL_IO_SECTION_START;   
      STATUS_t eStatus;
      uint8_t u8ReadValue;
      uint8_t u8Temp;
      uint16_t u16Temp;
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
//      if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_DI_Number) // digital input
//      {
        eStatus = ECU_IO_eReadPinValue(u16DID, APP_DIAG_InputPin, APP_DIAG_DigitalPin, &u8ReadValue, &u16Temp, &u8Temp); // input pin
        if(eStatus == STATUS_OK)
        {
          au8CanFrameSent[0] = APP_DIAG_au8ReceivedFullArray[2];
          au8CanFrameSent[1] = APP_DIAG_au8ReceivedFullArray[3];
          au8CanFrameSent[2] = u8ReadValue;
          local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,au8CanFrameSent,3,deMCD_TRUE);
          local_APP_DIAG_vdResetAllGlobalVariables();   
        }
        else
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
          local_APP_DIAG_vdResetAllGlobalVariables();              
        }
//      }
//      else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_ANLG_Number) // adc input
//      {
//
//      }
//      else // pwm input
//      {
//  
//      }
    }
    else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_ADC_IO_SECTION_END) // adc input
    {
      STATUS_t eStatus;
      uint16_t u16Value;
      uint16_t u16ResNum;
      uint16_t u16ResDen;
      uint16_t u16OffNum;
      uint16_t u16OffDen;
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
      u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_ADC_IO_SECTION_START;
      eStatus = ECU_ANLG_eReadResolutionOffset(u16DID, &u16Value, &u16ResNum, &u16ResDen, &u16OffNum, &u16OffDen);
      if(eStatus == STATUS_OK)
      {
        APP_DIAG_u16ReadDataByIdentifier_ResNum = u16ResNum;
        APP_DIAG_u16ReadDataByIdentifier_ResDen = u16ResDen;
        APP_DIAG_u16ReadDataByIdentifier_OffNum = u16OffNum;
        APP_DIAG_u16ReadDataByIdentifier_OffDen = u16OffDen;
        au8CanFrameSent[0] = 0x10;
        au8CanFrameSent[1] = 0x13;
        au8CanFrameSent[2] = APP_DIAG_u8ServiceId;
        au8CanFrameSent[3] = APP_DIAG_au8ReceivedFullArray[2];
        au8CanFrameSent[4] = APP_DIAG_au8ReceivedFullArray[3];
        au8CanFrameSent[5] = (uint8_t)(u16Value >> 8U);
        au8CanFrameSent[6] = (uint8_t)(u16Value);
        au8CanFrameSent[7] = (uint8_t)(u16ResNum >> 8U);
        FlowControlFrame.u8ExpectedFC_Flag = deMCD_TRUE;
        FlowControlFrame.u8ServiceID = APP_DIAG_u8ServiceId;
        //send first frame
        local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent,deMCD_FALSE);
//          local_APP_DIAG_vdResetAllGlobalVariables();   
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();              
      }      
    }
    else if(u16DID < APP_DIAG_READ_DATA_BY_IDENTIFIER_PWM_IO_SECTION_END)
    {
      STATUS_t eStatus;
      uint8_t u8Duty;
      uint8_t u8Temp;
      uint16_t u16Freq;
      u16DID = u16DID - APP_DIAG_READ_DATA_BY_IDENTIFIER_PWM_IO_SECTION_START;
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
      eStatus = ECU_IO_eReadPinValue(u16DID, APP_DIAG_InputPin, APP_DIAG_AnalogPin, &u8Temp, &u16Freq, &u8Duty);
      if(eStatus == STATUS_OK)
      {
        au8CanFrameSent[0] = APP_DIAG_au8ReceivedFullArray[2];
        au8CanFrameSent[1] = APP_DIAG_au8ReceivedFullArray[3];
        au8CanFrameSent[2] = (u16Freq >> 8U);
        au8CanFrameSent[3] = u16Freq;
        au8CanFrameSent[4] = u8Duty;
        local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId,au8CanFrameSent,5,deMCD_TRUE);
        local_APP_DIAG_vdResetAllGlobalVariables();              
      }
      else // id out of range
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
        local_APP_DIAG_vdResetAllGlobalVariables();              
      }          
    }
  }

}

void local_APP_DIAG_vdMemory_WriteByAddress(void)
{
  if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame && APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished != deMCD_TRUE) // check if ff and all data are not received yet
  {
    uint8_t au8CanFrame[3] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
    APP_DIAG_u32WriteDataByAddress_Address = (APP_DIAG_au8ReceivedFullArray[4] << 24U);
    APP_DIAG_u32WriteDataByAddress_Address |= (APP_DIAG_au8ReceivedFullArray[5] << 16U);
    APP_DIAG_u32WriteDataByAddress_Address |= (APP_DIAG_au8ReceivedFullArray[6] << 8U);
    APP_DIAG_u32WriteDataByAddress_Address |= (APP_DIAG_au8ReceivedFullArray[7]);
    au8CanFrame[0] = 0x30;    
    au8CanFrame[1] = 0; // Block size; number of received frames before flow control is sent from ECU
    au8CanFrame[2] = APP_DIAG_WRITE_DATA_BY_ADDRESS_FC_SEPARATION_TIME_MS; // Separation time; time between each CF send by tester
    ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
    ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;
    local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrame, deMCD_FALSE);    
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished != deMCD_TRUE) // check if cf and all data are not received yet
  {
    STATUS_t eStatus;
    uint8_t au8CanFrameSent[6] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
    uint32_t u32Value = (APP_DIAG_au8ReceivedFullArray[2] << 24U);
    u32Value |= (APP_DIAG_au8ReceivedFullArray[3] << 16U);
    u32Value |= (APP_DIAG_au8ReceivedFullArray[4] << 8U);
    u32Value |= (APP_DIAG_au8ReceivedFullArray[5]);
    eStatus = ECU_MEM_INT_eWriteSignalValueByAddress(APP_DIAG_u32WriteDataByAddress_Address, u32Value);
    if(eStatus == STATUS_OK)
    {
      au8CanFrameSent[0] = 0x14;
      au8CanFrameSent[1] = (uint8_t)(APP_DIAG_u32WriteDataByAddress_Address >> 24U);
      au8CanFrameSent[2] = (uint8_t)(APP_DIAG_u32WriteDataByAddress_Address >> 16U);
      au8CanFrameSent[3] = (uint8_t)(APP_DIAG_u32WriteDataByAddress_Address >> 8U);
      au8CanFrameSent[4] = (uint8_t)(APP_DIAG_u32WriteDataByAddress_Address);
      au8CanFrameSent[5] = 0x04; // number of bytes to be written     
      local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrameSent, 6, deMCD_TRUE);
      local_APP_DIAG_vdResetAllGlobalVariables();
    }
    else
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);      
    }
  }
}

void local_APP_DIAG_vdMemory_ReadByAddress(void)
{
  //Minimum length check
  if(APP_DIAG_u8DataCount < 6)
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
  }
  else if(APP_DIAG_au8ReceivedFullArray[2] != 0x14)
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);    
  }
  else
  {
    uint32_t u32MemoryAddress;
    uint32_t u32Value;
    STATUS_t eStatus;
    u32MemoryAddress =  APP_DIAG_au8ReceivedFullArray[3] << 24U;
    u32MemoryAddress |=  APP_DIAG_au8ReceivedFullArray[4] << 16U;
    u32MemoryAddress |=  APP_DIAG_au8ReceivedFullArray[5] << 8U;
    u32MemoryAddress |=  APP_DIAG_au8ReceivedFullArray[6];
    eStatus = ECU_MEM_INT_eReadSignalValueByAddress(u32MemoryAddress, &u32Value);
    if(eStatus == STATUS_OK)
    {
      uint8_t au8CanFrameSent[4] = {0};
      au8CanFrameSent[0] = (u32Value >> 24U);
      au8CanFrameSent[1] = (u32Value >> 16U);
      au8CanFrameSent[2] = (u32Value >> 8U);
      au8CanFrameSent[3] = (u32Value);
      local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrameSent, 4, deMCD_TRUE);
      local_APP_DIAG_vdResetAllGlobalVariables();
    }
    else
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);            
    }
  }
}

void local_APP_DIAG_vdReadDataByIdentifierDataAdjustment(float fltData, uint8_t* pu8Frame)
{
  uint16_t u16TempValue;
  if(fltData < 1)
  {
    u16TempValue = (uint16_t)(fltData * 1000);
    pu8Frame[2] = (u16TempValue >> 8U);
    pu8Frame[3] = (u16TempValue);
    pu8Frame[4] = (1000 >> 8U);
    pu8Frame[5] = (uint8_t)(1000);
  }
  else if(fltData >= 1 && fltData < 655)
  {
    u16TempValue = (uint16_t)(fltData * 100);
    pu8Frame[2] = (u16TempValue >> 8U);
    pu8Frame[3] = (u16TempValue);
    pu8Frame[4] = (100 >> 8U);
    pu8Frame[5] = (100);    
  }
  else if(fltData >= 655 && fltData < 6553)
  {
    u16TempValue = (uint16_t)(fltData * 10);    
    pu8Frame[2] = (u16TempValue >> 8U);
    pu8Frame[3] = (u16TempValue);
    pu8Frame[4] = (10 >> 8U);
    pu8Frame[5] = (10);        
  }
  else
  {
    u16TempValue = (uint16_t)fltData;        
    pu8Frame[2] = (u16TempValue >> 8U);
    pu8Frame[3] = (u16TempValue);
    pu8Frame[4] = 0;
    pu8Frame[5] = 1;            
  }
}

void local_APP_DIAG_vdClearWriteByAddressVariables(void)
{
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < APP_DIAG_WRITE_DATA_BY_ADDRESS_MAX_BYTES_NUMBER; u8Counter++)
  {
    APP_DIAG_u8WriteDataByAddress_DataBytes[u8Counter] = deMCD_DEFAULT;    
  }
  APP_DIAG_u8WriteDataByAddress_ServiceTotalBytesNum = deMCD_DEFAULT;
  APP_DIAG_u8WriteDataByAddress_SizeBytesNum = deMCD_DEFAULT;
  APP_DIAG_u8WriteDataByAddress_AddressBytesNum = deMCD_DEFAULT;
  APP_DIAG_u8WriteDataByAddress_ConsecutiveFrameFinished = deMCD_FALSE;
  APP_DIAG_u8WriteDataByAddress_BytesIndex = deMCD_DEFAULT;
  APP_DIAG_u8WriteDataByAddress_DataBytesCount = deMCD_DEFAULT;
  APP_DIAG_u8WriteDataByAddress_ZeroElementsReceived = deMCD_DEFAULT;
  APP_DIAG_u32WriteDataByAddress_Address = deMCD_DEFAULT;  
}

void local_APP_DIAG_vdClearReadByAddressVariables(void)
{
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER; u8Counter++)
  {
    APP_DIAG_au8ReadDataByAddress[u8Counter] = deMCD_DEFAULT;    
  }
  APP_DIAG_u8ReadDataByAddress_BytesNum = deMCD_DEFAULT;
  APP_DIAG_u32ReadDataByAddress_SeparationTimeInNanoSeconds = deMCD_DEFAULT;
  APP_DIAG_u8ReadDataByAddress_FirstFlowControl = deMCD_FALSE;
  APP_DIAG_u8ReadDataByAddress_RemainingBytes = deMCD_DEFAULT;
  APP_DIAG_u8ReadDataByAddress_GlobalCounter = deMCD_DEFAULT;
  APP_DIAG_u8ReadDataByAddress_Wait = deMCD_DEFAULT;
  APP_DIAG_u8ReadDataByAddress_OverFlow = deMCD_DEFAULT;  
}  

#ifdef APPLICATION_SOFTWARE
void local_APP_DIAG_vdClear_Diagnostic(void)
{
  uint32_t u32GroupDTC = 0;
  u32GroupDTC |= (APP_DIAG_au8ReceivedFullArray[2] << 16U);
  u32GroupDTC |= (APP_DIAG_au8ReceivedFullArray[3] << 8U);
  u32GroupDTC |= (APP_DIAG_au8ReceivedFullArray[4]);
  if(APP_DIAG_u8NumberOfBytesReceived < 5) // minimum length check .. pci + sid + 3 address bytes
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);    
  }
  else if(u32GroupDTC != 0xFFFFFF)
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_RequestOutOfRange, deMCD_TRUE);        
  }
  else
  {
    app_FaultMgr_ClearDTC();
    local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, deMCD_NULL, 0, deMCD_TRUE);
  }
}
#endif /*APPLICATION_SOFTWARE*/

#ifdef APPLICATION_SOFTWARE

void local_APP_DIAG_vdRead_DTC(void)
{
  if(APP_DIAG_eFrameType == ECU_DIAG_SingleFrame)
  {
    if(APP_DIAG_au8ReceivedFullArray[2] != 0x0A)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_SubFunctionNotSupported, deMCD_TRUE);    
    }
//    else if(APP_DIAG_au8ReceivedFullArray[3] != 0x04)
//    {
//      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_RequestOutOfRange, deMCD_TRUE);        
//    }
    else
    {
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
      app_FaultMgr_ReadConfirmedDTCs(APP_DIAG_au8ReadDTC); // read all DTCs
      APP_DIAG_u16ReadDTC_TotalBytes = APP_FLT_DTC_NUM * 4; // each DTC has 3 address bytes included
      APP_DIAG_u8ReadDTC_ConFramesNumber = ((APP_DIAG_u16ReadDTC_TotalBytes - 3) / 7); // get number of consecutive frames
      APP_DIAG_u16ReadDTC_ConFramesRealBytes = ((APP_DIAG_u16ReadDTC_TotalBytes - 3) / 7) * 8; // number of bytes in cfs excluding last frame
      if((APP_DIAG_u16ReadDTC_TotalBytes % 7) != 0)
      {
        APP_DIAG_u16ReadDTC_ConFramesRealBytes = APP_DIAG_u16ReadDTC_ConFramesRealBytes + (((APP_DIAG_u16ReadDTC_TotalBytes - 3) % 7) + 1);
        APP_DIAG_u8ReadDTC_ConFramesNumber++; // round up frames number
      }
      APP_DIAG_u16ReadDTC_TotalBytes = APP_DIAG_u16ReadDTC_ConFramesRealBytes + 6;
      au8CanFrameSent[0] = ((APP_DIAG_u16ReadDTC_TotalBytes>> 8U) & 0x0F); // ff data length
      au8CanFrameSent[0] |= 0x10; // PCI of ff
      au8CanFrameSent[1] = APP_DIAG_u16ReadDTC_TotalBytes; // ff data length
      au8CanFrameSent[2] = 0x59; // response SID
      au8CanFrameSent[3] = 0x0A; 
      au8CanFrameSent[4] = 0xFF;
      au8CanFrameSent[5] = (APP_DIAG_READ_DTC_START_GROUP >> 16U); // id of first DTC
      au8CanFrameSent[6] = (APP_DIAG_READ_DTC_START_GROUP >> 8U); // id of first DTC
      au8CanFrameSent[7] = (uint8_t)(APP_DIAG_READ_DTC_START_GROUP); // id of first DTC
      FlowControlFrame.u8ExpectedFC_Flag = deMCD_TRUE;
      FlowControlFrame.u8ServiceID = APP_DIAG_u8ServiceId;
      local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);
    }    
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_FlowControl)
  {
    APP_DIAG_u8RoutineControl_DelayTime = APP_DIAG_au8ReceivedFullArray[2];
    uint8_t u8LoopCounter;
    uint8_t u8Counter;
    uint8_t u8DTCsIndex = 0;
    uint8_t u8DTC_Indicator = 3;
    uint8_t u8CFCounter = 0x21;
    uint16_t u16DTC_ID = (APP_DIAG_READ_DTC_START_GROUP);
    for(u8LoopCounter = 0; u8LoopCounter < APP_DIAG_u8ReadDTC_ConFramesNumber; u8LoopCounter++)
    {
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};      
      au8CanFrameSent[0] = u8CFCounter;
      APP_DIAG_u16ReadDTC_BytesSentSoFar++;
      u8CFCounter++;
      if(u8CFCounter == 0x30)
      {
        u8CFCounter = 0x21;
      }
      for(u8Counter = 1; u8Counter < 8; u8Counter++)
      {
        if(APP_DIAG_u16ReadDTC_BytesSentSoFar < APP_DIAG_u16ReadDTC_ConFramesRealBytes)
        {
          switch(u8DTC_Indicator)
          {
          case 0:
            au8CanFrameSent[u8Counter] = (u16DTC_ID >> 16U);
            u8DTC_Indicator++;
            APP_DIAG_u16ReadDTC_BytesSentSoFar++;
            break;
          case 1:
            au8CanFrameSent[u8Counter] = (u16DTC_ID >> 8U);
            u8DTC_Indicator++;          
            APP_DIAG_u16ReadDTC_BytesSentSoFar++;
            break;
          case 2:
            au8CanFrameSent[u8Counter] = (u16DTC_ID);
            u8DTC_Indicator++;          
            APP_DIAG_u16ReadDTC_BytesSentSoFar++;
            break;
          case 3:
            au8CanFrameSent[u8Counter] = APP_DIAG_au8ReadDTC[u8DTCsIndex];
            u8DTCsIndex++;
            u16DTC_ID++;
            u8DTC_Indicator = 0;
            APP_DIAG_u16ReadDTC_BytesSentSoFar++;
            break;
          default:
            break;
          }          
        }
        else
        {
          break;
        }
      }
      if((u8LoopCounter + 1) == APP_DIAG_u8ReadDTC_ConFramesNumber)
      {
        local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_TRUE);
        local_APP_DIAG_vdClearDtcReadServic();
      }
      else
      {
        local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);
      }
      LIB_DELAY_vdNanoSeconds(APP_DIAG_u8RoutineControl_DelayTime * 1000000);
    }
  }
}
#endif /*APPLICATION_SOFTWARE*/

#ifdef PROGRAMMING_SOFTWARE
void local_APP_DIAG_vdRequest_Upload(void)
{
  if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame)
  {
    if(APP_DIAG_u8NumberOfBytesReceived < 5) // minimum length check
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
    }
    else if(APP_DIAG_au8ReceivedFullArray[4] != 0x44) // data format identifier check
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_RequestOutOfRange, deMCD_TRUE);
    }
    else
    {
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
      APP_DIAG_u32RequestUpload_PageStartingAddress = (APP_DIAG_au8ReceivedFullArray[5] << 24U);
      APP_DIAG_u32RequestUpload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[6] << 16U);
      APP_DIAG_u32RequestUpload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[7] << 8U);
      APP_DIAG_u8RequestUpload_FrameBytesReceived = APP_DIAG_u8NumberOfBytesReceived;
      ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
      ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;      
      au8CanFrameSent[0] = 0x30;
      au8CanFrameSent[1] = 0x00;
      au8CanFrameSent[2] = 0x10;
      local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);          
    }
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame)
  {
    APP_DIAG_u32RequestUpload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[1]);
    APP_DIAG_u32RequestUpload_PageSizeInBytes = (APP_DIAG_au8ReceivedFullArray[2] << 24U);
    APP_DIAG_u32RequestUpload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[3] << 16U);
    APP_DIAG_u32RequestUpload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[4] << 8U);
    APP_DIAG_u32RequestUpload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[5]);    
    if(APP_DIAG_u32RequestUpload_PageStartingAddress > APP_DIAG_REQUEST_DOWNLOAD_CODE_MEMORY_END || APP_DIAG_u32RequestUpload_PageSizeInBytes == 0) //size and address check
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_RequestOutOfRange, deMCD_TRUE);      
    }
    else
    {
       APP_DIAG_u8RequestUpload_FrameBytesReceived =  APP_DIAG_u8RequestUpload_FrameBytesReceived + APP_DIAG_u8NumberOfBytesReceived;
       if(APP_DIAG_u8RequestUpload_FrameBytesReceived < 0xB) // full length check
       {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId, APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);         
       }
       else
       {
         uint8_t au8CanFrameSent[3] = {0x44, 0x01, 0x28}; // data format identifier, number of bytes included in each transfer data response message = 296 bytes including PCI and SID
         APP_DIAG_eTransferDirection = APP_DIAG_EcuToClient;
         local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(APP_DIAG_u8ServiceId, au8CanFrameSent, 3, deMCD_TRUE);
         local_APP_DIAG_vdResetAllGlobalVariables();
       }
    }
  }
}

void local_APP_DIAG_vdRequest_Download(void)
{  
  if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame)
  {
    APP_DIAG_u8LengthAndFormatIdentifier = APP_DIAG_au8ReceivedFullArray[4];
    uint8_t u8SizeBytesNumber = (APP_DIAG_au8ReceivedFullArray[4] >> 4);
    uint8_t u8AddressBytesNumber = (APP_DIAG_au8ReceivedFullArray[4] & 0x0F);
    //Minimum length check -- minimum memory address is 4 bytes and minimum memory size is 4 bytes
    if(APP_DIAG_u8NumberOfBytesReceived < 8 && APP_DIAG_au8ReceivedFullArray[7] != 0x55 && APP_DIAG_au8ReceivedFullArray[7] != 0xAA) // this to handle the case if third byte of address is equal to 0x55 .. should be modified
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
    }     
    else if(u8SizeBytesNumber == 0 || u8AddressBytesNumber == 0)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);      
    }
    else
    {
      APP_DIAG_u8RequestDownload_FullLengthCheckVariable = APP_DIAG_u8DataCount;
      APP_DIAG_u32RequestDownload_PageStartingAddress = (APP_DIAG_au8ReceivedFullArray[5] << 24);
      APP_DIAG_u32RequestDownload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[6] << 16);
      APP_DIAG_u32RequestDownload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[7] << 8);
      APP_DIAG_u8RequestDownload_FullLengthCheckVariable = 6; // number of bytes received in first frame
      ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
      //ConsecutiveFlowFrame.u8ExpectedCF_Number = 1;
      ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId; 
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER};
      au8CanFrameSent[0] = 0x30;
      au8CanFrameSent[1] = 0;
      au8CanFrameSent[2] = 0x10; // separation time between cfs
      local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);
    }
  }
  else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame)
  {
    //Minimum length check
    if(APP_DIAG_u8NumberOfBytesReceived < 6)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);
    }      
    else
    {
      APP_DIAG_u8RequestDownload_FullLengthCheckVariable = APP_DIAG_u8RequestDownload_FullLengthCheckVariable + APP_DIAG_u8NumberOfBytesReceived - 1; // number of bytes received in cons frame excluding sequence counter
      if(APP_DIAG_u8RequestDownload_FullLengthCheckVariable != 11) // full length check 
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);        
      }
      else
      {
        APP_DIAG_u32RequestDownload_PageStartingAddress |= (APP_DIAG_au8ReceivedFullArray[1]);
        APP_DIAG_u32RequestDownload_PageSizeInBytes = (APP_DIAG_au8ReceivedFullArray[2] << 24);
        APP_DIAG_u32RequestDownload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[3] << 16);
        APP_DIAG_u32RequestDownload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[4] << 8);
        APP_DIAG_u32RequestDownload_PageSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[5]);             
//        APP_DIAG_u16TransferData_TotalBytesPerPageToBeReceived = APP_DIAG_u32RequestDownload_PageSizeInBytes; // assigning page size to be received so that is it checked during data transfer
        if(APP_DIAG_u32RequestDownload_PageStartingAddress > APP_DIAG_REQUEST_DOWNLOAD_CODE_MEMORY_END || APP_DIAG_u32RequestDownload_PageSizeInBytes > APP_DIAG_REQUEST_DOWNLOAD_MAX_PAGE_SIZE_BYTES) // Check if memory address and app size are valid
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange, deMCD_TRUE);          
        }
        else if(APP_DIAG_u32RequestDownload_PageStartingAddress < APP_DIAG_REQUEST_DOWNLOAD_APP_START_ADDRESS) // Security check for requested memory interval; BL sector is secured
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_SecurityAccessDenied, deMCD_TRUE);
        }
        else
        {
          uint8_t au8MaxBlockLength[2] = {0,0};
          au8MaxBlockLength[0] = (APP_DIAG_REQUEST_DOWNLOAD_MAX_BLOCK_LENGTH_NUM >> 8);
          au8MaxBlockLength[1] = (uint8_t)(APP_DIAG_REQUEST_DOWNLOAD_MAX_BLOCK_LENGTH_NUM);
          APP_DIAG_eTransferDirection = APP_DIAG_ClientToEcu;
          local_APP_DIAG_vdResetAllGlobalVariables();
          local_APP_DIAG_vdSingleFramePositiveResponse(ConsecutiveFlowFrame.u8SeriveID, APP_DIAG_u8LengthAndFormatIdentifier, au8MaxBlockLength, 2, deMCD_TRUE);          
        }
      }
    }    
  }
}

void local_APP_DIAG_vdTransfer_Data(void)
{
  uint8_t u8Counter;
  if(APP_DIAG_eTransferDirection == APP_DIAG_ClientToEcu) // download
  {
    if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame && APP_DIAG_u8TransferData_WholePageReceived == deMCD_FALSE)
    {
//      if(APP_DIAG_u8NumberOfBytesReceived < 5) // minimum length check if request download
//      {
//        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);    
//      }    
//      // receiving of page with previous block sequence counter is allowed
      if(APP_DIAG_u8TransferData_BlockSequenceCounter < APP_DIAG_au8ReceivedFullArray[3]) // sequence check; transfer block sequence counter is respected
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);    
      }
      else if(APP_DIAG_u32TransferData_TotalDataBytesReceived >= APP_DIAG_u32RequestDownload_PageSizeInBytes) // data bytes received is within range sent in request download service
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_TransferDataSuspended, deMCD_TRUE);            
      }
      else // receiving of page first frame
      {        
        if(APP_DIAG_au8ReceivedFullArray[3] > (APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter + 1)) // check if block sequence counter sequence is not correct; reptition of previously received page is accepted
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);            
        }
        else
        {
          APP_DIAG_u8TransferData_PageBytesIndex = 0;
          uint8_t u8TempValue = 0;
          uint8_t u8FinishFlag = 0;
          APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter = APP_DIAG_au8ReceivedFullArray[3];      
          APP_DIAG_u8TransferData_BlockSequenceCounter++; // increment block sequence counter
          for(u8Counter = 0; u8Counter < 4; u8Counter++) // fill bytes sent in first frame
          {
            if(APP_DIAG_u32TransferData_TotalDataBytesReceived < APP_DIAG_u32RequestDownload_PageSizeInBytes) // check if number of bytes filled reached the bytes received
            {
              APP_DIAG_strMemoryPage.UC_FLASH_astrBlocksOfMemory[APP_DIAG_u8TransferData_BlockCounter].au8Byte[u8Counter + APP_DIAG_u8TransferData_PageBytesIndex - u8TempValue] = APP_DIAG_au8ReceivedFullArray[4 + u8Counter]; // fill byte of the page with bytes from received array       
              APP_DIAG_u32TransferData_TotalDataBytesReceived++;
              if((APP_DIAG_u8TransferData_PageBytesIndex + u8Counter) == 15) // end of block, increment to next block
              {
                u8TempValue = u8Counter + 1;
                APP_DIAG_u8TransferData_PageBytesIndex = 0; // clears byte index variable
                APP_DIAG_u8TransferData_BlockCounter++; // increment block index
              }
            }
            else // all bytes are received
            {
              u8FinishFlag = 1;
              APP_DIAG_u8TransferData_WholePageReceived = deMCD_TRUE;
              //APP_DIAG_u32TransferData_TotalDataBytesReceived = 0;
              local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter, deMCD_NULL, 0,  deMCD_TRUE);
              break;
            }
          }
          if(u8FinishFlag == 0)
          {
            ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
            //ConsecutiveFlowFrame.u8ExpectedCF_Number = 1;
            ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId; 
            uint8_t au8FlowControlFrame[8] = {0x30, 0x00, APP_DIAG_DOWNLOAD_DELAY_TIME_MS, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER};
            APP_DIAG_u8ServiceInAction = deMCD_TRUE; // service in action, cf frames are expected
            local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8FlowControlFrame, 8);            
          }
          APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex - u8TempValue + u8Counter; // increment byte index to keep track of filled bytes so far, u8Counter last increment is removed   
          u8TempValue = 0;
          if(APP_DIAG_u8TransferData_PageBytesIndex >= 15)
          {
            APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex - 16;
          }
          if(APP_DIAG_u32TransferData_TotalDataBytesReceived == APP_DIAG_u32RequestDownload_PageSizeInBytes)
          {
            APP_DIAG_u8TransferData_WholePageReceived = deMCD_TRUE;
            //APP_DIAG_u32TransferData_TotalDataBytesReceived = 0;
            local_APP_DIAG_vdResetAllGlobalVariables();
            local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter, deMCD_NULL, 0,  deMCD_TRUE);
          }          
        }        
      }
    }
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8TransferData_WholePageReceived == deMCD_FALSE) // consecutive frame bytes filling
    {
      uint8_t u8TempValue = 0;
      for(u8Counter = 0; u8Counter < 7; u8Counter++) // fill bytes sent in consecutive frame
      {
        if(APP_DIAG_u32TransferData_TotalDataBytesReceived < APP_DIAG_u32RequestDownload_PageSizeInBytes)
        {
          APP_DIAG_strMemoryPage.UC_FLASH_astrBlocksOfMemory[APP_DIAG_u8TransferData_BlockCounter].au8Byte[u8Counter + APP_DIAG_u8TransferData_PageBytesIndex - u8TempValue] = APP_DIAG_au8ReceivedFullArray[1 + u8Counter]; // skip cf pci byte        
          APP_DIAG_u32TransferData_TotalDataBytesReceived++;
          if((APP_DIAG_u8TransferData_PageBytesIndex + u8Counter) == 15)
          {
            u8TempValue = u8Counter + 1;
            APP_DIAG_u8TransferData_PageBytesIndex = 0;
            APP_DIAG_u8TransferData_BlockCounter++;
          }
        }
        else
        {
          APP_DIAG_u8TransferData_WholePageReceived = deMCD_TRUE;
//          APP_DIAG_u32TransferData_TotalDataBytesReceived = 0;
          local_APP_DIAG_vdResetAllGlobalVariables();
          local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter, deMCD_NULL, 0,  deMCD_TRUE);
          break;
        }
      }
      APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex + u8Counter - u8TempValue;
      u8TempValue = 0;
      if(APP_DIAG_u8TransferData_PageBytesIndex > 15)
      {
        APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex - 15;
      }
      if(APP_DIAG_u32TransferData_TotalDataBytesReceived == APP_DIAG_u32RequestDownload_PageSizeInBytes)
      {
        APP_DIAG_u8TransferData_WholePageReceived = deMCD_TRUE;
//        APP_DIAG_u32TransferData_TotalDataBytesReceived = 0;
        local_APP_DIAG_vdResetAllGlobalVariables();
        local_APP_DIAG_vdSingleFramePositiveResponse(0x36, APP_DIAG_strMemoryPage.u8TransferDataBlockSequenceCounter, deMCD_NULL, 0,  deMCD_TRUE); // transferdata positive resp
      }
    }
    else // whole page was already received but still transfer data service is being received .. negative response
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);                  
    }
  }
  else if(APP_DIAG_eTransferDirection == APP_DIAG_EcuToClient) // upload
  {
    if(APP_DIAG_eFrameType == ECU_DIAG_SingleFrame) // received at the beginning of transfer data block
    {
      if(APP_DIAG_u8NumberOfBytesReceived != 3 && APP_DIAG_u8TransferData_BlockSequenceCounter != 0x55) // minimum length check if request upload
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);        
      }    
      else if(APP_DIAG_u8TransferData_BlockSequenceCounter < APP_DIAG_au8ReceivedFullArray[2]) // sequence check; transfer block sequence counter is respected
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);    
      }
      else // read page, send first frame
      {
        STATUS_t eStatus;
        APP_DIAG_u8TransferData_PageBytesIndex = 0;
        uint16_t u16Counter = 0;
        uint16_t u16BytesNumberTemp;
        uint8_t u8LoopCounter;
        uint8_t u8CounterValue;
        uint8_t u8TempValue;
        uint8_t u8NumberOfConsecutiveFramesTemp;
        uint32_t u32PageEndAddressTemp = APP_DIAG_u32RequestUpload_PageStartingAddress + 256; // incremented each time to read blocks in the page
        uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER}; 
        while(APP_DIAG_u32RequestUpload_PageStartingAddress < u32PageEndAddressTemp) // loop to read all blocks in the page
        {
          APP_DIAG_strBlockTemp.u32Address = APP_DIAG_u32RequestUpload_PageStartingAddress; // assign address to temp block variable
          APP_DIAG_strBlockTemp.u8DataBytesCount = 16;
          eStatus = ECU_MEM_CODE_eReadBlock(&APP_DIAG_strBlockTemp); // read block in temporary block variable
          if(eStatus != STATUS_OK)
          {
            break;
          }
          else
          {
            APP_DIAG_u32RequestUpload_PageStartingAddress = APP_DIAG_u32RequestUpload_PageStartingAddress + 16; // increment address
            APP_DIAG_u32TransferData_BytesReadSoFar = APP_DIAG_u32TransferData_BytesReadSoFar + 16;
            for(u8LoopCounter = 0; u8LoopCounter < 16; u8LoopCounter++) // copy data from temp block variable to global page variable
            {
              APP_DIAG_u8TransferData_PageToBeSent[u16Counter + u8LoopCounter] = APP_DIAG_strBlockTemp.au8Byte[u8LoopCounter];            
              APP_DIAG_strBlockTemp.au8Byte[u8LoopCounter] = 0;
            }                      
            APP_DIAG_strBlockTemp.u32Address = 0;
          }
          u16Counter = u16Counter + 16;        
        }
        u16BytesNumberTemp = (u16Counter - 16) * 16; // number of bytes to be sent without consecutive frame pci, transferdata response or block sequence counter
        if((u16BytesNumberTemp % 7) != 0) // calculate how many bytes are to followed
        {
          u8TempValue = u16BytesNumberTemp / 7; // number of consecutive frames to be sent
          u8NumberOfConsecutiveFramesTemp = u8TempValue + 1; // add last frame
          u16BytesNumberTemp = u8NumberOfConsecutiveFramesTemp * 8; // number of bytes calculation
        }
        else
        {
          u8NumberOfConsecutiveFramesTemp = u16BytesNumberTemp / 7; // number of consecutive frames to be sent
          u16BytesNumberTemp = u8NumberOfConsecutiveFramesTemp * 8; // number of bytes calculation
        }
        u16BytesNumberTemp = u16BytesNumberTemp + 2; // transferdata sid and block sequence counter bytes
        u16BytesNumberTemp = u16BytesNumberTemp  & 0x0FFF; // add first frame pci nibble
        au8CanFrameSent[0] = (0x10 || (u16BytesNumberTemp >> 8U));// add first frame pci nibble
        au8CanFrameSent[1] =  (uint8_t)u16BytesNumberTemp;  
        au8CanFrameSent[2] =  APP_DIAG_u8ServiceId;
        au8CanFrameSent[3] =  APP_DIAG_u8TransferData_BlockSequenceCounter;
        for(u8CounterValue = 0; u8CounterValue < 4; u8CounterValue++)
        {
          au8CanFrameSent[4 + u8CounterValue] = APP_DIAG_u8TransferData_PageToBeSent[APP_DIAG_u8TransferData_PageBytesIndex + u8CounterValue];
          APP_DIAG_u32TransferData_BytesSentSoFar++;
        }
        APP_DIAG_u8TransferData_BlockSequenceCounter++;
        APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex + 4;
        FlowControlFrame.u8ExpectedFC_Flag = deMCD_TRUE;
        FlowControlFrame.u8ServiceID = APP_DIAG_u8ServiceId;
        APP_DIAG_u32TransferData_BytesReadSoFar = 0;
        local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);          
       }
    }
    else if(APP_DIAG_eFrameType == ECU_DIAG_FlowControl) // received after transmission of first frame
    {
      uint8_t u8FrameCounter = 0;
      uint8_t u8LastFrame = deMCD_FALSE;
      uint8_t u8SequenceNumber = 0x21;
      uint8_t u8DelayTimeMs = APP_DIAG_au8ReceivedFullArray[2];
      uint16_t u16CounterStep;
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER, APP_DIAG_RESPONSE_FILLER};
      while(APP_DIAG_u32TransferData_BytesSentSoFar < APP_DIAG_u32RequestUpload_PageSizeInBytes)
      {
        if((APP_DIAG_u32TransferData_BytesSentSoFar + 7) == APP_DIAG_u32RequestUpload_PageSizeInBytes)
        {
          u8LastFrame = deMCD_TRUE;
        }
        au8CanFrameSent[0] = u8SequenceNumber;
        for(u16CounterStep = 0; u16CounterStep  < 7; u16CounterStep++)
        {
          au8CanFrameSent[1 + u16CounterStep] = APP_DIAG_u8TransferData_PageToBeSent[APP_DIAG_u8TransferData_PageBytesIndex + u16CounterStep];
        }
        local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, u8LastFrame);          
        APP_DIAG_u8TransferData_PageBytesIndex = APP_DIAG_u8TransferData_PageBytesIndex + 7;
        u8SequenceNumber++;
        if(u8SequenceNumber == 0x30)
        {
          u8SequenceNumber = 0x21;
        }
        APP_DIAG_u32TransferData_BytesSentSoFar = APP_DIAG_u32TransferData_BytesSentSoFar + 7;
        LIB_DELAY_vdNanoSeconds((u8DelayTimeMs * 1000000)); // delay in milliseconds between cfs                  
        if(u8LastFrame == deMCD_TRUE)
        {
          break;
        }
        u8FrameCounter++;
      }
      APP_DIAG_u8TransferData_PageBytesIndex = 0;
      APP_DIAG_u32TransferData_BytesSentSoFar = 0;
    }
  }
  else // sequence error check; no request service is recieved prior to this service
  {
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);                
  }
}

void local_APP_DIAG_vdRequest_Transfer_Exit(void)
{
  uint8_t u8ReceivedCheckSum;
  uint8_t u8CalculatedCheckSum;
  uint8_t u8FlashedCheckSum;
  STATUS_t eStatus;
  if(APP_DIAG_eTransferDirection == APP_DIAG_ClientToEcu) //download
  {
    if(APP_DIAG_u8TransferData_WholePageReceived != deMCD_TRUE) // not whole page was received
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);                    
    }
    else if(APP_DIAG_u8NumberOfBytesReceived != 3) // message length check
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat, deMCD_TRUE);                          
    }   
    else // flash data, get checksum of the sent page, calculated and flashed then compare
    {
      uint8_t u8BlocksNumberTemp = (APP_DIAG_u32TransferData_TotalDataBytesReceived / 16);
      uint8_t u8Counter;
      if((APP_DIAG_u32TransferData_TotalDataBytesReceived % 16) != 0) // round up blocks number
      {
        u8BlocksNumberTemp = u8BlocksNumberTemp + 1;
      }
      APP_DIAG_strMemoryPage.u8BlocksNumber = u8BlocksNumberTemp; // fill blocks number variable
      APP_DIAG_strMemoryPage.u32PageStartingAddress = APP_DIAG_u32RequestDownload_PageStartingAddress; // assigning first page address to application starting address
      for(u8Counter = 0; u8Counter < u8BlocksNumberTemp; u8Counter++) // filling bytes number per block
      {
        APP_DIAG_strMemoryPage.UC_FLASH_astrBlocksOfMemory[u8Counter].u8DataBytesCount = 16; // number of bytes per block
      }
      APP_DIAG_u32TransferData_TotalDataBytesReceived = 0; // clearing variable
      eStatus = ECU_MEM_CODE_eWritePage(&APP_DIAG_strMemoryPage); // flash data
      if(eStatus == STATUS_OK)
      {
        u8CalculatedCheckSum = local_APP_DIAG_u8PageCheckSumCalculate(&APP_DIAG_strMemoryPage);                  
        u8ReceivedCheckSum = APP_DIAG_au8ReceivedFullArray[2];
        if(u8ReceivedCheckSum == u8CalculatedCheckSum)
        {
          eStatus = local_APP_DIAG_u8FlashedPageCheckSumCalculate(APP_DIAG_strMemoryPage.u32PageStartingAddress, &u8FlashedCheckSum); // check sum calculate of flashed data          
          if(u8ReceivedCheckSum == u8FlashedCheckSum)
          {
            local_APP_DIAG_vdClearReceivingStructure();
            APP_DIAG_u8TransferData_BlockCounter = 0;
            local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, u8CalculatedCheckSum, deMCD_NULL, 0,  deMCD_TRUE);      
            APP_DIAG_u8TransferData_WholePageReceived = deMCD_FALSE; // to receive next page
          }
          else // checksum mismatch
          {
            local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure, deMCD_TRUE);
          }
        }
        else // error in reading memory
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure, deMCD_TRUE);                    
        }        
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure, deMCD_TRUE);
      }
    }
  }
  else if(APP_DIAG_eTransferDirection == APP_DIAG_EcuToClient) //upload
  {
    u8CalculatedCheckSum = local_APP_DIAG_u8PageArrayCheckSumCalculate(APP_DIAG_u8TransferData_PageToBeSent);
    if(u8CalculatedCheckSum == APP_DIAG_au8ReceivedFullArray[2])
    {
      local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, u8CalculatedCheckSum, deMCD_NULL, deMCD_DEFAULT, deMCD_TRUE);
      APP_DIAG_u8TransferData_BlockSequenceCounter = 1; // reinitialize block sequence counter for next transfer data service 
      local_APP_DIAG_vdClearSendingPage();
    }
    else
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure, deMCD_TRUE);                
    }
  }
  else 
  { // neither request download nor upload are active
    local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestSequenceError, deMCD_TRUE);                        
  }
}
#endif /*PROGRAMMING_SOFTWARE*/

#ifdef PROGRAMMING_SOFTWARE
void local_APP_DIAG_vdRoutine_Control(void) // method B is implemented
{
  STATUS_t eStatus;
  uint16_t u16RoutineID = APP_DIAG_au8ReceivedFullArray[4];
  u16RoutineID |= (APP_DIAG_au8ReceivedFullArray[3] << 8U);
  if(APP_DIAG_u8NumberOfBytesReceived < 3) // min length check
  {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_IncorrectMessageLengthOrInvalidFormat,deMCD_TRUE);        
  }  
  else if((u16RoutineID != APP_DIAG_ROUTINE_CONTROL_ERASE_APPLICATION) && (u16RoutineID != APP_DIAG_ROUTINE_CONTROL_START_APPLICATION) && (APP_DIAG_eFrameType != ECU_DIAG_ConsecutiveFrame)) // Only erase routine is supported
  {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_RequestOutOfRange,deMCD_TRUE);            
  }
  // security access condition should be added here
  else if((u16RoutineID == APP_DIAG_ROUTINE_CONTROL_ERASE_APPLICATION) && (ConsecutiveFlowFrame.u8ExpectedCF_Flag == deMCD_FALSE)) // erase memory sector routine
  {
    uint32_t u32MemoryAddress = 0;
    u32MemoryAddress |= APP_DIAG_au8ReceivedFullArray[7];
    u32MemoryAddress |= (APP_DIAG_au8ReceivedFullArray[6] << 8U);
    u32MemoryAddress |= (APP_DIAG_au8ReceivedFullArray[5] << 16U);
    eStatus = ECU_MEM_CODE_eEraseSector(u32MemoryAddress, &APP_DIAG_u8TransferData_ErasedSectorsID);
    if(eStatus != STATUS_OK)
    {
      local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);            
    }
    else
    {      
      uint8_t au8CanFrameSent[3] = {APP_DIAG_RESPONSE_FILLER};
      au8CanFrameSent[0] = APP_DIAG_au8ReceivedFullArray[3];
      au8CanFrameSent[1] = APP_DIAG_au8ReceivedFullArray[4];
      au8CanFrameSent[2] = APP_DIAG_u8TransferData_ErasedSectorsID; // erase memory sector ID
      local_APP_DIAG_vdAppValidClear(); // Application can not run anymore
      local_APP_DIAG_vdSingleFramePositiveResponse(APP_DIAG_u8ServiceId, APP_DIAG_u8SubFunction, au8CanFrameSent, 3, deMCD_TRUE);
    }
  }
  else if((u16RoutineID == APP_DIAG_ROUTINE_CONTROL_START_APPLICATION) || (ConsecutiveFlowFrame.u8ExpectedCF_Flag == deMCD_TRUE)) // save flashed software parameters and prepare for next reset routine
  {
    if(APP_DIAG_eFrameType == ECU_DIAG_FirstFrame)
    {
      APP_DIAG_u32ApplicationStartingAddress = (APP_DIAG_au8ReceivedFullArray[5] << 24U);
      APP_DIAG_u32ApplicationStartingAddress |= (APP_DIAG_au8ReceivedFullArray[6] << 16U);
      APP_DIAG_u32ApplicationStartingAddress |= (APP_DIAG_au8ReceivedFullArray[7] << 8U);      
      ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
      ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;
      uint8_t au8CanFrameSent[8] = {APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER,APP_DIAG_RESPONSE_FILLER};
      au8CanFrameSent[0] = 0x30;
      au8CanFrameSent[1] = 0x00;
      au8CanFrameSent[2] = 0x10;
      local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(au8CanFrameSent, deMCD_FALSE);                
    }    
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8RoutineControl_WriteStartAddress == 0)
    {
      APP_DIAG_u8RoutineControl_WriteStartAddress = 1;
      APP_DIAG_u32ApplicationStartingAddress |= (uint8_t)(APP_DIAG_au8ReceivedFullArray[1]);
      APP_DIAG_u32ApplicationSizeInBytes = (APP_DIAG_au8ReceivedFullArray[2] << 24U);
      APP_DIAG_u32ApplicationSizeInBytes |= (APP_DIAG_au8ReceivedFullArray[3] << 16U);
      APP_DIAG_u32ApplicationSizeInBytes |=  (APP_DIAG_au8ReceivedFullArray[4] << 8U);
      APP_DIAG_u32ApplicationSizeInBytes |=  (uint8_t)(APP_DIAG_au8ReceivedFullArray[5]);
      APP_DIAG_u32ApplicationEndingAddress = (APP_DIAG_au8ReceivedFullArray[6] << 24U);
      APP_DIAG_u32ApplicationEndingAddress |= (APP_DIAG_au8ReceivedFullArray[7] << 16U);      
      eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APPLICATION_STARTING_ADDRESS, (float)(APP_DIAG_u32ApplicationStartingAddress), APP_DIAG_u32ApplicationStartingAddress);
      if(eStatus == STATUS_OK)
      {
        eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APPLICATION_SIZE_IN_BYTES, (float)(APP_DIAG_u32ApplicationSizeInBytes), APP_DIAG_u32ApplicationSizeInBytes);
        if(eStatus == STATUS_OK)
        {
          ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
          ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;         
        }
        else
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);
        }
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);
      }
    }
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8RoutineControl_WriteStartAddress == 1)
    {
      APP_DIAG_u8RoutineControl_WriteStartAddress = 2;
      APP_DIAG_u32ApplicationEndingAddress |= (APP_DIAG_au8ReceivedFullArray[1] << 8U);              
      APP_DIAG_u32ApplicationEndingAddress |= (APP_DIAG_au8ReceivedFullArray[2]);    
      APP_DIAG_u32ApplicationS0_0 = (APP_DIAG_au8ReceivedFullArray[3] << 24U); // first byte is number of bytes in this srec record
      APP_DIAG_u32ApplicationS0_0 |= (APP_DIAG_au8ReceivedFullArray[4] << 16U); 
      APP_DIAG_u32ApplicationS0_0 |= (APP_DIAG_au8ReceivedFullArray[5] << 8U); 
      APP_DIAG_u32ApplicationS0_0 |= (APP_DIAG_au8ReceivedFullArray[6]); 
      APP_DIAG_u32ApplicationS0_1 = (APP_DIAG_au8ReceivedFullArray[7] << 24U);                      
      eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APPLICATION_ENDING_ADDRESS, (float)(APP_DIAG_u32ApplicationEndingAddress), APP_DIAG_u32ApplicationEndingAddress);
      if(eStatus == STATUS_OK)
      {
        eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_HEADER_SREC_0, (float)(APP_DIAG_u32ApplicationS0_0), APP_DIAG_u32ApplicationS0_0);   
        if(eStatus == STATUS_OK)
        {
          ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
          ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;          
        }
        else
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);                  
        }
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);        
      }
    }
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8RoutineControl_WriteStartAddress == 2)
    {
      APP_DIAG_u8RoutineControl_WriteStartAddress = 3;
      APP_DIAG_u32ApplicationS0_1 |= (APP_DIAG_au8ReceivedFullArray[1] << 16U);
      APP_DIAG_u32ApplicationS0_1 |= (APP_DIAG_au8ReceivedFullArray[2] << 8U);
      APP_DIAG_u32ApplicationS0_1 |= (APP_DIAG_au8ReceivedFullArray[3]);
      APP_DIAG_u32ApplicationS0_2 = (APP_DIAG_au8ReceivedFullArray[4] << 24U);
      APP_DIAG_u32ApplicationS0_2 |= (APP_DIAG_au8ReceivedFullArray[5] << 16U);
      APP_DIAG_u32ApplicationS0_2 |= (APP_DIAG_au8ReceivedFullArray[6] << 8U);
      APP_DIAG_u32ApplicationS0_2 |= (APP_DIAG_au8ReceivedFullArray[7]);
      eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_HEADER_SREC_1, (float)(APP_DIAG_u32ApplicationS0_1), APP_DIAG_u32ApplicationS0_1);
      if(eStatus == STATUS_OK)
      {
        eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_HEADER_SREC_2, (float)(APP_DIAG_u32ApplicationS0_2), APP_DIAG_u32ApplicationS0_2);   
        if(eStatus == STATUS_OK)
        {
          ConsecutiveFlowFrame.u8ExpectedCF_Flag = deMCD_TRUE;
          ConsecutiveFlowFrame.u8SeriveID = APP_DIAG_u8ServiceId;       
        }
        else
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);                  
        }
      }      
     }
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8RoutineControl_WriteStartAddress == 3)
    {
      APP_DIAG_u8RoutineControl_WriteStartAddress = 4;
      APP_DIAG_u32ApplicationS0_3 = (APP_DIAG_au8ReceivedFullArray[1] << 24U);
      APP_DIAG_u32ApplicationS0_3 |= (APP_DIAG_au8ReceivedFullArray[2] << 16U);
      APP_DIAG_u32ApplicationS0_3 |= (APP_DIAG_au8ReceivedFullArray[3] << 8U);
      APP_DIAG_u32ApplicationS0_3 |= (APP_DIAG_au8ReceivedFullArray[4]);
      APP_DIAG_u32ApplicationExecutionAddress = 0; // bank 1 ends at 0x002FFFFF
      APP_DIAG_u32ApplicationExecutionAddress |= (APP_DIAG_au8ReceivedFullArray[5] << 16U);
      APP_DIAG_u32ApplicationExecutionAddress |= (APP_DIAG_au8ReceivedFullArray[6] << 8U);
      APP_DIAG_u32ApplicationExecutionAddress |= (APP_DIAG_au8ReceivedFullArray[7]);
      eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_HEADER_SREC_3, (float)(APP_DIAG_u32ApplicationS0_3), APP_DIAG_u32ApplicationS0_3);
      if(eStatus == STATUS_OK)
      {
        eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_APPLICATION_EXECUTION_ADDRESS, (float)(APP_DIAG_u32ApplicationExecutionAddress), APP_DIAG_u32ApplicationExecutionAddress);        
        if(eStatus != STATUS_OK)
        {
          local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);                          
        }
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);                          
      }
    }
    else if(APP_DIAG_eFrameType == ECU_DIAG_ConsecutiveFrame && APP_DIAG_u8RoutineControl_WriteStartAddress == 4)
    {
      uint32_t u32LastData = (APP_DIAG_au8ReceivedFullArray[1] << 24U);
      u32LastData = (APP_DIAG_au8ReceivedFullArray[2] << 16U);
      eStatus = ECU_MEM_INT_eWriteSignalValue(ECU_MEM_INT_HEADER_SREC_4, (float)(u32LastData), u32LastData);
      if(eStatus == STATUS_OK)
      {
        uint8_t au8CanFrameSent[2] = {APP_DIAG_RESPONSE_FILLER};
        au8CanFrameSent[0] = (APP_DIAG_ROUTINE_CONTROL_START_APPLICATION >> 8U);
        au8CanFrameSent[1] = (uint8_t)(APP_DIAG_ROUTINE_CONTROL_START_APPLICATION);
        local_APP_DIAG_vdSingleFramePositiveResponse(0x71, 0x01, au8CanFrameSent, 2, deMCD_TRUE);      
        // finish routine by clearing and setting necessary flags and then reset ecu to enter application
        local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_DEFAULT);
        local_APP_DIAG_vdProgRequestClear();
        local_APP_DIAG_vdAppValidSet();
        local_APP_DIAG_vdResetAllGlobalVariables();       
        APP_DIAG_u8ServiceInAction = deMCD_FALSE;
      }
      else
      {
        local_APP_DIAG_vdSingleFrameNegativeResponse(APP_DIAG_u8ServiceId,APP_DIAG_GeneralProgrammingFailure,deMCD_TRUE);                          
      }
    }    
  }
}
#endif /*PROGRAMMING_SOFTWARE*/

#endif /*APP_DIAG_ENABLE*/
