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

File Name: ecu_anlg.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/


#ifndef ECU_ANLG_H
#define ECU_ANLG_H

#include "lib_types.h"
#include "uc.h"


typedef struct ECU_ANLG_strSignalTemplate
{
  /*Signal Id*/
  uint8_t u8IndexSignal;
  /*Under Tester Control*/
  uint8_t u8TesterControl;
  /*Tester Freeze Command*/
  uint8_t u8TesterFreezeCommand;
  /*Tester Controlled Physical Value*/
  float fltTesterControlledPhyValue;
  /*ADC Id*/
  uint8_t u8IndexAdc;
  /*Raw Value*/
  uint16_t u16RawValue;
  /*Physical Value*/
  float fltPhyValue;
  /*Resolution Num*/
  uint16_t u16ResNum;
  /*Resolution Den*/
  uint16_t u16ResDen;
  /*Offset Num*/
  uint16_t u16OffsetNum;
  /*Offset Den*/
  uint16_t u16OffsetDen;
  /*Unit*/
  uint8_t* pu8String;
} ECU_ANLG_strSignal_t;


void ECU_ANLG_vdInit(void);
void ECU_ANLG_vdMgr(void);
STATUS_t ECU_ANLG_eReadSignal(uint8_t u8IndexSignal, float* pfltValue);
STATUS_t ECU_ANLG_eReadResolutionOffset(uint8_t u8IndexSignal, uint16_t* pu16Value, uint16_t* pu16ResNum, uint16_t* pu16ResDen, uint16_t* pu16OffNum, uint16_t* pu16OffDen);
STATUS_t ECU_ANLG_eResetToDefault(uint8_t u8IndexSignal);
STATUS_t ECU_ANLG_eReturnControlToECU(uint8_t u8IndexSignal);
STATUS_t ECU_ANLG_eFreezePinCurrentState(uint8_t u8IndexSignal);
STATUS_t ECU_ANLG_eAdjustPinValue(uint8_t u8IndexSignal, uint16_t u16RawValue);


#endif /*ECU_ANLG_H*/
