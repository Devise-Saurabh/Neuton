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

File Name: app_diag.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef APP_DIAG_H
#define APP_DIAG_H

#include "lib_types.h"
#include "rte.h"

#define SID_DIAG_SESSION_CONTROL                                (0x10)
#define SID_ECU_RESET                                           (0x11)
#define SID_CLEAR_DIAGNOSTIC_INFORMATION                        (0x14)
#define SID_READ_DTC_INFORMATION                                (0x19)
#define SID_READ_DATA_BY_IDENTIFIER                             (0x22)
#define SID_READ_MEMORY_BY_ADDRESS                              (0x23)
#define SID_READ_SCALING_DATA_BY_IDENTIFIER                     (0x24)
#define SID_SECURITY_ACCESS                                     (0x27)
#define SID_COMMUNICATION_CONTROL                               (0x28)
#define SID_READ_DATA_IDENTIFIER_PERIODIC                       (0x2A)
#define SID_DYNAMICALLY_DEFINE_DATA_IDENTIFIER                  (0x2C)
#define SID_WRITE_DATA_BY_IDENTIFIER                            (0x2E)
#define SID_INPUT_OUTPUT_CONTROL_BY_IDENTIFER                   (0x2F)
#define SID_ROUTINE_CONTROL                                     (0x31)
#define SID_REQUEST_DOWNLOAD                                    (0x34)
#define SID_REQUEST_UPLOAD                                      (0x35)
#define SID_TRANSFER_DATA                                       (0x36)
#define SID_REQUEST_TRANSFER_EXIT                               (0x37)
#define SID_REQUEST_FILE_TRANSFER                               (0x38)
#define SID_WRITE_MEMORY_BY_ADDRESS                             (0x3D)
#define SID_TESTER_PRESENT                                      (0x3E)
#define SID_ACCESS_TIMING_PARAMETER                             (0x83)
#define SID_SECURED_DATA_TRANSMISSION                           (0x84)
#define SID_CONTROL_DTC_SETTINGS                                (0x85)
#define SID_RESPONSE_ON_EVENT                                   (0x86)
#define SID_LINK_CONTROL                                        (0x87)

/* List of diag global defines */
#define APP_DIAG_STATUS_FREE                                    (0)                                           
#define APP_DIAG_STATUS_BUSY                                    (1)
#define APP_DIAG_RESPONSE_FILLER                                (0xAA)
#define APP_DIAG_REQUEST_FILLER                                 (0x55)

#define APP_DIAG_DOWNLOAD_DELAY_TIME_MS                         (0x1)

/* Read data by address maximum bytes number to be read*/
#define APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_NUMBER              (128)
#define APP_DIAG_READ_DATA_BY_ADDRESS_BYTES_PER_ADDRESS         (16)

/* Write data by address macros */
#define APP_DIAG_WRITE_DATA_BY_ADDRESS_MAX_BYTES_NUMBER         (16)
#define APP_DIAG_WRITE_DATA_BY_ADDRESS_FC_SEPARATION_TIME_MS    (100)

/* Read data by identifier macros*/
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_START       (0x100)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_MEMORY_SECTION_END         (0xA1FF)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_BOOT_MEMORY_SECTION_START  (0xA200)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_BOOT_MEMORY_SECTION_END    (0xA5FF)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_DIGITAL_IO_SECTION_START   (0xA800)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_DIGITAL_IO_SECTION_END     (0xA8ff)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_ADC_IO_SECTION_START       (0xA900)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_ADC_IO_SECTION_END         (0xA9FF)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_PWM_IO_SECTION_START       (0xAA00)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_PWM_IO_SECTION_END         (0xAAFF)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_DI_Number                  ECU_IO_DIN_NUM 
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_ANLG_Number                (ECU_ANLG_SIG_NUM + ECU_IO_DIN_NUM)
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_PWMIN_Number               (ECU_IO_PIN_NUM + ECU_ANLG_SIG_NUM + ECU_IO_DIN_NUM) 
#define APP_DIAG_READ_DATA_BY_IDENTIFIER_ANLG_RESOLUTION            (100)
/*InputOutput control by identifier macros*/
#define APP_DIAG_INPUT_OUTPUT_CONTROL_DI_END_ID                 (0x0FFF) // 0 to 1000
#define APP_DIAG_INPUT_OUTPUT_CONTROL_DO_START_ID               (0x1000) // 1000 to 2000
#define APP_DIAG_INPUT_OUTPUT_CONTROL_DO_END_ID                 (0x1FFF) // 1000 to 2000
#define APP_DIAG_INPUT_OUTPUT_CONTROL_AI_START_ID               (0x2000) // 2000 to 3000 .. first 4 (PWM inputs) rest adc
#define APP_DIAG_INPUT_OUTPUT_CONTROL_AI_END_ID                 (0x2FFF) // 2000 to 3000 .. first 4 (PWM inputs) rest adc
#define APP_DIAG_INPUT_OUTPUT_CONTROL_AO_START_ID               (0x3000) // 3000 to 4000 
#define APP_DIAG_INPUT_OUTPUT_CONTROL_AO_END_ID                 (0x3FFF) // 3000 to 4000 
/*ReadDTC macros*/
#define APP_DIAG_READ_DTC_START_GROUP                           (0x100)
/*RequestDownload macros*/
#define APP_DIAG_REQUEST_DOWNLOAD_APP_START_ADDRESS             (0x8000)
#define APP_DIAG_REQUEST_DOWNLOAD_MAX_PAGE_SIZE_BYTES           (256)
#define APP_DIAG_REQUEST_DOWNLOAD_MAX_BLOCK_LENGTH_NUM          (2048) // This is the number of data bytes received during flashing before ecu issues positve response
#define APP_DIAG_REQUEST_DOWNLOAD_CODE_MEMORY_END               (0x2E0000)  // this corresponds to beginning of last sector address; application could be flashed in last sector of bank 1 which is 128 kbytes

/*TransferData macros*/
#define APP_DIAG_TRANSFER_DATA_PAGE_SIZE_IN_BYTES               (256)
typedef ECU_MEM_strBlockMemory_t APP_DIAG_strBlockMemory_t;

/*RoutineControl macros*/
#define APP_DIAG_ROUTINE_CONTROL_ERASE_APPLICATION              (0xFF00) // erases sectors of memory based on received ID in request
#define APP_DIAG_ROUTINE_CONTROL_START_APPLICATION              (0xFF01) // prepares ecu to enter application and perform system reset

typedef enum APP_DIAG_NRC_template
{
  APP_DIAG_GeneralReject = 0x10,
  APP_DIAG_ServiceNotSupported = 0x11,
  APP_DIAG_SubFunctionNotSupported = 0x12,
  APP_DIAG_IncorrectMessageLengthOrInvalidFormat = 0x13,
  APP_DIAG_ResponseTooLong = 0x14,
  APP_DIAG_BusyRepeatRequest = 0x21,
  APP_DIAG_ConditionsNotCorrect = 0x22,
  APP_DIAG_RequestSequenceError = 0x24,
  APP_DIAG_NoResponseFromSubnetComponent = 0x25,
  APP_DIAG_FailurePreventsExecutionOfRequestedAction = 0x26,
  APP_DIAG_RequestOutOfRange = 0x31,
  APP_DIAG_SecurityAccessDenied = 0x33,
  APP_DIAG_InvalidKey = 0x35,
  APP_DIAG_ExceedNumberOfAttempts = 0x36,
  APP_DIAG_RequiredTimeDelayNotExpired = 0x37,
  APP_DIAG_UploadDownloadNotAccepted = 0x70,
  APP_DIAG_TransferDataSuspended = 0x71,
  APP_DIAG_GeneralProgrammingFailure = 0x72,
  APP_DIAG_WrongBlockSequenceCounter = 0x73,
  APP_DIAG_RequestCorrectlyReceivedResponsePending = 0x78,
  APP_DIAG_SubFunctionNotSupportedInActiveSession = 0x7E,
  APP_DIAG_ServiceNotSupportedInActiveSession = 0x7F,
  APP_DIAG_RpmTooHigh = 0x81,
  APP_DIAG_RpmTooLow = 0x82,
  APP_DIAG_EngineIsRunning = 0x83,
  APP_DIAG_EngineIsNotRunning = 0x84,
  APP_DIAG_EngineRunTimeTooLow = 0x85,
  APP_DIAG_TemperatureTooHigh = 0x86,
  APP_DIAG_TemperatureTooLow = 0x87,
  APP_DIAG_VehicleSpeedTooHigh = 0x88,
  APP_DIAG_VehicleSpeedTooLow = 0x89,
  APP_DIAG_Throttle_PedalTooHigh = 0x8A,
  APP_DIAG_Throttle_PedalTooLow = 0x8B,
  APP_DIAG_TransmissionRangeNotInNeutral = 0x8C,
  APP_DIAG_TransmissionRangeNotInGear = 0x8D,
  APP_DIAG_BrakePedalNotPressed = 0x8F,
  APP_DIAG_ShifterLeverNotInPark = 0x90,
  APP_DIAG_TorqueConverterClutchLocked = 0x91,
  APP_DIAG_VoltageTooHigh = 0x92,
  APP_DIAG_VoltageTooLow = 0x93,
} APP_DIAG_NRC_t;

#ifdef ECU_MEM_CODE_MODULE_ENABLE
  typedef ECU_MEM_CODE_strPageMemory_t APP_DIAG_strPageMemory_t;
#endif /*ECU_MEM_CODE_MODULE_ENABLE*/
  
// page structure which has block sequence counter sent at beginning of each transfer data service
// array of bytes to be written in page, checksum of page and address of page start 
typedef struct APP_DIAG_strReceivedPageTemplate
{
  uint32_t u32PageAddress;
  uint8_t u8MemorySector;
  uint8_t u8TransferDataBlockSequenceCounter;
  uint8_t au8PageBytesArray[APP_DIAG_TRANSFER_DATA_PAGE_SIZE_IN_BYTES];
  uint8_t u8PageCheckSum;
} APP_DIAG_strReceivedPage_t;

typedef struct APP_DIAG_strFlowControlTemplate // when ECU sends first frame and wait for flow control from tester to continue sending consecutive frames
{
  uint8_t u8ServiceID;
  uint8_t u8ExpectedFC_Flag;
  uint8_t u8MaxNumberOfConsecutiveFrames;
  uint8_t u8ConsecutiveFrameIndex;
  uint8_t u8NumberOfFramesSent;
} APP_DIAG_strFlowControl_t;

typedef struct APP_DIAG_strConsecutiveFlowTemplate // when tester sends first frame and wait for flow control from ECU to continue sending consecutive frames
{
  uint8_t u8SeriveID;
  uint8_t u8ExpectedCF_Flag;
  uint8_t u8ExpectedCF_Number;
  uint8_t u8SequenceNumber;
} APP_DIAG_strConsecutiveFrame_t;

typedef enum APP_DIAG_eTransferDirectionTemplate
{
  APP_DIAG_NoRequestReceived = 0,
  APP_DIAG_EcuToClient = 1,
  APP_DIAG_ClientToEcu = 2,
} APP_DIAG_eTransferDirection_t;

typedef enum APP_DIAG_ePinTypeTemplate
{
  APP_DIAG_AnalogPin = 0,  
  APP_DIAG_DigitalPin = 1,
} APP_DIAG_ePinType_t;

typedef enum APP_DIAG_ePinDirectionTemplate
{
  APP_DIAG_OutputPin = 0,
  APP_DIAG_InputPin = 1,
} APP_DIAG_ePinDirection_t;

void APP_DIAG_vdInit(void);
void APP_DIAG_vdMgr(void);
//uint8_t APP_DIAG_u8DefaultEcuModeCheck(ECU_SYS_eEcuMode_t* Mode);

#endif /*APP_DIAG_H*/

