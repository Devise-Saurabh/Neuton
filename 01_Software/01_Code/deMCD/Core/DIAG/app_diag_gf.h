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

File Name: app_diag_gf.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/



#ifndef APP_DIAG_GF_H
#define APP_DIAG_GF_H

#include "app.h"

void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode);
void local_APP_DIAG_EndServicePlusData(STATUS_t eStatus, uint8_t *pau8Data);
uint8_t local_APP_DIAG_u8AppValidCheck(void);
void local_APP_DIAG_vdAppValidClear(void);
void local_APP_DIAG_vdAppValidSet(void);
uint8_t APP_DIAG_u8DefaultEcuModeCheck(ECU_SYS_eEcuMode_t* Mode);
void local_APP_DIAG_vdDefaultEcuModeSet(ECU_SYS_eEcuMode_t Mode);
void local_APP_DIAG_vdDefaultEcuModeClear(void);
uint8_t local_APP_DIAG_u8SingleFrameMessageLengthOrInvalidFormatErrorCheck(void);
void local_APP_DIAG_vdFramePositiveResponseWithFullArrayBytes(uint8_t* pu8Data, uint8_t u8EndService);
void local_APP_DIAG_vdSingleFramePositiveResponseWithoutSubfunction(uint8_t u8ResponseSID, uint8_t* pu8Data, uint8_t u8DataSize, uint8_t u8EndService);
void local_APP_DIAG_vdReadMemoryByAddressInitializeArray(void);
void local_APP_DIAG_vdWriteMemoryByAddressFirstFrameHandler(void);
void local_APP_DIAG_vdWriteMemoryByAddressConsecutiveFrameHandler(void);
uint8_t local_APP_DIAG_u8NumberOfZeroElementsReceived(void);
void local_APP_DIAG_vdResetAllGlobalVariables(void);
void local_APP_DIAG_vdClearDtcReadServic(void);
void local_APP_DIAG_vdResetArray(uint8_t* pau8Array, uint8_t u8ArraySize);
void local_APP_DIAG_vdClearReceivingVariables(void);
void local_APP_DIAG_vdProgRequestSet(void);
void local_APP_DIAG_vdProgRequestClear(void);
uint8_t local_APP_DIAG_u8ProgRequestCheck(void);
void local_APP_DIAG_vdCallBackTimingRequirementViolated(void);
void local_APP_DIAG_vdNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode, uint8_t u8EndService);
void local_APP_DIAG_vdBootHeartBeat(void);
void local_APP_DIAG_vdDiagHeartBeat(void);
void local_APP_DIAG_vdSingleFramePositiveResponse(uint8_t u8ResponseSID, uint8_t u8SubFunction, uint8_t* pu8Data, uint8_t u8DataSize, uint8_t u8EndService);
void local_APP_DIAG_vdSingleFrameNegativeResponse(uint8_t u8RequestedService, APP_DIAG_NRC_t eNRCCode, uint8_t u8EndService);
void local_APP_DIAG_vdShutDownAndResetWithAppValidModification(void);

#ifdef PROGRAMMING_SOFTWARE
  uint8_t local_APP_DIAG_u8PageCheckSumCalculate(APP_DIAG_strPageMemory_t* strMemoryPage);
  STATUS_t local_APP_DIAG_u8FlashedPageCheckSumCalculate(uint32_t u32Address, uint8_t* u8CheckSum);
  uint8_t local_APP_DIAG_u8AuxFuncCheckSumCalculate(APP_DIAG_strPageMemory_t* pPageMemory);
#endif /*PROGRAMMING_SOFTWARE*/
void local_APP_DIAG_vdClearReceivingStructure(void);
void local_APP_DIAG_vdClearSendingPage(void);
uint8_t local_APP_DIAG_u8PageArrayCheckSumCalculate(uint8_t *pau8PageArray);

#endif /*APP_DIAG_GF_H*/

