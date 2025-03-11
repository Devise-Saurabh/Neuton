/*
 * ***************************************************************************
 * ***************************************************************************
 * (C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.
 *
 * All data and information contained in or disclosed by this document is
 * confidential and proprietary information of Devise Electronics Pvt Ltd and all
 * rights therein are expressly reserved.  By accepting this material the
 * recipient agrees that this material and the information contained therein
 * is held in confidence and in trust and will not be used, copied, reproduced
 * in whole or in part, nor its contents revealed in any manner to others
 * without the express written permission of Devise Electronics Pvt Ltd
 *
 * Devise Electronics Pvt Ltd
 * Bavdhan,
 * 411021, Pune,
 * India
 * E-mail: vinay.pawar@deviseelectronics.com
 *
 * File Name: app_Main10msMgr_capi.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:18 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "app_Main10msMgr_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "app_Main10msMgr.h"
#include "app_Main10msMgr_capi.h"
#include "app_Main10msMgr_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Includes for objects with custom storage classes. */
#include "rte.h"

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 28, TARGET_STRING("app_Main10msMgr/Saurabh/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 2, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal1/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 3, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal10/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 4, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal11/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 5, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal12/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 6, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal13/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 7, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal14/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 8, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal15/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 9, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal16/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 10, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal17/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 11, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal18/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 12, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal19/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 13, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal2/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 14, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal20/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 15, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal21/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 16, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal22/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 17, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal3/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 18, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal4/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 19, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal5/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 20, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal6/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 21, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal7/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 22, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal8/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 23, TARGET_STRING(
    "app_Main10msMgr/Saurabh/ANLG_ReadSignal9/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 30, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 30, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 26, 31, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput1/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 31, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput1/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 28, 32, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput10/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 32, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput10/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 30, 33, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput11/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 33, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput11/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 32, 34, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput12/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 34, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput12/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 34, 35, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput13/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 35, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput13/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 36, 36, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput14/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 36, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput14/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 38, 37, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput15/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 37, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput15/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 40, 38, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput16/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 38, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput16/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 42, 39, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput17/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 39, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput17/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 44, 40, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput18/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 40, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput18/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 46, 41, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput2/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 41, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput2/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 48, 42, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput3/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 42, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput3/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 50, 43, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput4/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 43, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput4/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 52, 44, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput5/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 44, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput5/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 54, 45, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput6/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 45, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput6/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 56, 46, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput7/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 57, 46, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput7/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 58, 47, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput8/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 47, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput8/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 60, 48, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput9/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 48, TARGET_STRING(
    "app_Main10msMgr/Saurabh/IO_ReadDigitalInput9/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 62, 49, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 49, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 64, 50, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm1/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 50, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm1/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 66, 51, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm2/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 51, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm2/deMCD_IO_ReadPwm"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 68, 78, TARGET_STRING(
    "app_Main10msMgr/Saurabh/LSD/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 69, 73, TARGET_STRING(
    "app_Main10msMgr/Saurabh/LSD/IO_WriteDigitalOutput2/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 70, TARGET_STRING("app_Main10msMgr/Saurabh/APP_10MS_OUT1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 71, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID2_P60"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 72, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID8_P30"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 73, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID9_P29"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 74, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID0_P69"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 75, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID1_P59"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 76, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID3_P49"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 77, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID5_P50"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 78, TARGET_STRING("app_Main10msMgr/Saurabh/Power_Supply24v"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 79, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID6_P39"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 80, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID7_P40"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 81, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID12_P73"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 82, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID10_P75"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 83, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID11_P74"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 84, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID13_P72"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 85, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID14_P71"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 86, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID15_P80"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 87, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID16_P79"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 88, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID17_P78"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 89, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID18_P77"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 90, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID19_P76"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 91, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_5v_ID20_P70"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 92, TARGET_STRING("app_Main10msMgr/Saurabh/Temp1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 93, TARGET_STRING("app_Main10msMgr/Saurabh/Temp2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 94, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P61_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 95, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P51_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 96, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P22_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 97, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P34_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 98, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P27_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 99, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P42_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 100, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P21_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 101, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P31_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 102, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P23_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 103, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P41_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 104, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P37_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 105, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P25_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 106, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P26_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 107, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P35_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 108, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P33_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 109, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P36_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 110, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P24_AH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 111, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P28_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 112, TARGET_STRING("app_Main10msMgr/Saurabh/DIN_P38_AL"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 113, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P13_Freq"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 114, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P13_Duty"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 115, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P14_Freq"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 116, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P14_Duty"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 117, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P62_Freq"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 118, TARGET_STRING("app_Main10msMgr/Saurabh/PWM_IN_P62_Duty"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 119, TARGET_STRING("app_Main10msMgr/Saurabh/ReadData"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 120, TARGET_STRING("app_Main10msMgr/Saurabh/Data_Count2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 121, TARGET_STRING("app_Main10msMgr/Saurabh/D2"),
    TARGET_STRING("InitialOutput"), 2, 0, 0 },

  { 122, TARGET_STRING("app_Main10msMgr/Saurabh/D3"),
    TARGET_STRING("InitialOutput"), 2, 0, 0 },

  { 123, TARGET_STRING("app_Main10msMgr/Saurabh/A1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 124, TARGET_STRING("app_Main10msMgr/Saurabh/A2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 125, TARGET_STRING("app_Main10msMgr/Saurabh/A3"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 126, TARGET_STRING("app_Main10msMgr/Saurabh/Readdata2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 127, TARGET_STRING("app_Main10msMgr/Saurabh/RTE_EEPROM_Value_Read"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 128, TARGET_STRING("app_Main10msMgr/Saurabh/LSD_Data"),
    TARGET_STRING("InitialOutput"), 3, 0, 0 },

  { 129, TARGET_STRING("app_Main10msMgr/Saurabh/HSD_Data"),
    TARGET_STRING("InitialOutput"), 3, 0, 0 },

  { 130, TARGET_STRING("app_Main10msMgr/Saurabh/HBridge2_Direction_Pin_out"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 131, TARGET_STRING("app_Main10msMgr/Saurabh/HBridge2_Out"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 132, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 133, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal1"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 134, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal10"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 135, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal11"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 136, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal12"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 137, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal13"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 138, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal14"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 139, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal15"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 140, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal16"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 141, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal17"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 142, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal18"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 143, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal19"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 144, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal2"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 145, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal20"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 146, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal21"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 147, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal22"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 148, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal3"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 149, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal4"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 150, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal5"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 151, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal6"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 152, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal7"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 153, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal8"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 154, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal9"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 155, TARGET_STRING("app_Main10msMgr/Saurabh/COM_WriteSignal49"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 156, TARGET_STRING("app_Main10msMgr/Saurabh/COM_WriteSignal50"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 157, TARGET_STRING("app_Main10msMgr/Saurabh/COM_WriteSignal52"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 158, TARGET_STRING("app_Main10msMgr/Saurabh/COM_WriteSignal53"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 159, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 160, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput1"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 161, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput10"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 162, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput11"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 163, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput12"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 164, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput13"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 165, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput14"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 166, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput15"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 167, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput16"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 168, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput17"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 169, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput18"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 170, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput2"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 171, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput3"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 172, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput4"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 173, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput5"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 174, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput6"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 175, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput7"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 176, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput8"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 177, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput9"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 178, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 179, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm1"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 180, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadPwm2"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 181, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm1"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 182, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm2"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 183, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm3"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 184, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm4"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 185, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm5"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 186, TARGET_STRING("app_Main10msMgr/Saurabh/IO_SetPwm6"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 187, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput1"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 188, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput10"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 189, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput11"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 190, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput12"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 191, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput13"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 192, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput14"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 193, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput15"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 194, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput16"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 195, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput3"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 196, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput4"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 197, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput5"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 198, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput6"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 199, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput7"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 200, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput8"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 201, TARGET_STRING("app_Main10msMgr/Saurabh/IO_WriteDigitalOutput9"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 202, TARGET_STRING("app_Main10msMgr/Saurabh/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 203, TARGET_STRING("app_Main10msMgr/Saurabh/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 204, TARGET_STRING("app_Main10msMgr/Saurabh/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 205, TARGET_STRING("app_Main10msMgr/Saurabh/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 206, TARGET_STRING("app_Main10msMgr/Saurabh/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 207, TARGET_STRING("app_Main10msMgr/Saurabh/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 208, TARGET_STRING("app_Main10msMgr/Saurabh/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 209, TARGET_STRING("app_Main10msMgr/Saurabh/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 210, TARGET_STRING("app_Main10msMgr/Saurabh/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 211, TARGET_STRING("app_Main10msMgr/Saurabh/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 212, TARGET_STRING("app_Main10msMgr/Saurabh/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 213, TARGET_STRING("app_Main10msMgr/Saurabh/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 214, TARGET_STRING("app_Main10msMgr/Saurabh/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 215, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain16"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 216, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain17"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 217, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain18"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 218, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain19"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 219, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain20"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 220, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 221, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 222, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain23"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 223, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain24"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 224, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain25"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 225, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain26"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 226, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain27"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 227, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain28"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 228, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain29"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 229, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain30"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 230, TARGET_STRING("app_Main10msMgr/Saurabh/HSD/Gain31"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 231, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Compare To Constant"),
    TARGET_STRING("const"), 3, 0, 0 },

  { 232, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/IO_WriteDigitalOutput2"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 233, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 234, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 235, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain10"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 236, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 237, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 238, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain13"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 239, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain14"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 240, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain15"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 241, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 242, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 243, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 244, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 245, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 246, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain7"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 247, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain8"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 248, TARGET_STRING("app_Main10msMgr/Saurabh/LSD/Gain9"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 249, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Detect Change"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 250, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 251, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 252, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 253, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 254, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Constant6"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 255, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 256, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 257, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Subsystem/ConversionFactor"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Subsystem/2piR1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 259, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Subsystem/Multiply3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 260, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Subsystem/Wheel_Radius inch to Meter1(R=9.30 inch)"),
    TARGET_STRING("Gain"), 4, 0, 1 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Block states information */
static const rtwCAPI_States rtBlockStates[] = {
  /* addrMapIndex, contStateStartIndex, blockPath,
   * stateName, pathAlias, dWorkIndex, dataTypeIndex, dimIndex,
   * fixPtIdx, sTimeIndex, isContinuous, hierInfoIdx, flatElemIdx
   */
  { 261, -1, TARGET_STRING("app_Main10msMgr/Saurabh/Subsystem1/Unit Delay"),
    TARGET_STRING(""), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 262, -1, TARGET_STRING(
    "app_Main10msMgr/Saurabh/Subsystem1/Detect\nChange/Delay Input1"),
    TARGET_STRING(""), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Root Inputs information */
static const rtwCAPI_Signals rtRootInputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Root Outputs information */
static const rtwCAPI_Signals rtRootOutputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &app_Main10msMgr_B.Counter,          /* 0: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_j,/* 1: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_c,/* 2: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_e,/* 3: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_d2,/* 4: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_mm,/* 5: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_as,/* 6: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_n,/* 7: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_b,/* 8: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_d,/* 9: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_au,/* 10: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_o,/* 11: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_a,/* 12: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_go,/* 13: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_gw,/* 14: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_iz,/* 15: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_my,/* 16: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_k,/* 17: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_lg,/* 18: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_l,/* 19: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_g,/* 20: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_m,/* 21: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read_i,/* 22: Signal */
  &app_Main10msMgr_B.deMCD_ANLG_Read,  /* 23: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_mz,/* 24: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_do,/* 25: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_pm,/* 26: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_ox,/* 27: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_os,/* 28: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_g,/* 29: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_b,/* 30: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n0,/* 31: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g1,/* 32: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_a,/* 33: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_m,/* 34: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_je,/* 35: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_n,/* 36: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_l,/* 37: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_d,/* 38: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_nc,/* 39: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_o,/* 40: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_pf,/* 41: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g,/* 42: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_og,/* 43: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_a,/* 44: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_j,/* 45: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_fd,/* 46: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_p,/* 47: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_p,/* 48: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_b,/* 49: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_jk,/* 50: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n1,/* 51: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_h,/* 52: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_d,/* 53: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_k,/* 54: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n,/* 55: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_f,/* 56: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_o,/* 57: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_j,/* 58: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_h,/* 59: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1,/* 60: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2,/* 61: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_f,/* 62: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o2,/* 63: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_i,/* 64: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o,/* 65: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o1,/* 66: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadPwm_o2,/* 67: Signal */
  &app_Main10msMgr_B.Compare,          /* 68: Signal */
  &app_Main10msMgr_B.DataTypeConversion,/* 69: Signal */
  &app_Main10msMgr_P.APP_10MS_OUT1_Y0, /* 70: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID2_P60_Y0,/* 71: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID8_P30_Y0,/* 72: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID9_P29_Y0,/* 73: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID0_P69_Y0,/* 74: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID1_P59_Y0,/* 75: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID3_P49_Y0,/* 76: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID5_P50_Y0,/* 77: Block Parameter */
  &app_Main10msMgr_P.Power_Supply24v_Y0,/* 78: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID6_P39_Y0,/* 79: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID7_P40_Y0,/* 80: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID12_P73_Y0,/* 81: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID10_P75_Y0,/* 82: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID11_P74_Y0,/* 83: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID13_P72_Y0,/* 84: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID14_P71_Y0,/* 85: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID15_P80_Y0,/* 86: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID16_P79_Y0,/* 87: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID17_P78_Y0,/* 88: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID18_P77_Y0,/* 89: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID19_P76_Y0,/* 90: Block Parameter */
  &app_Main10msMgr_P.ADC_5v_ID20_P70_Y0,/* 91: Block Parameter */
  &app_Main10msMgr_P.Temp1_Y0,         /* 92: Block Parameter */
  &app_Main10msMgr_P.Temp2_Y0,         /* 93: Block Parameter */
  &app_Main10msMgr_P.DIN_P61_AH_Y0,    /* 94: Block Parameter */
  &app_Main10msMgr_P.DIN_P51_AH_Y0,    /* 95: Block Parameter */
  &app_Main10msMgr_P.DIN_P22_AH_Y0,    /* 96: Block Parameter */
  &app_Main10msMgr_P.DIN_P34_AL_Y0,    /* 97: Block Parameter */
  &app_Main10msMgr_P.DIN_P27_AH_Y0,    /* 98: Block Parameter */
  &app_Main10msMgr_P.DIN_P42_AH_Y0,    /* 99: Block Parameter */
  &app_Main10msMgr_P.DIN_P21_AH_Y0,    /* 100: Block Parameter */
  &app_Main10msMgr_P.DIN_P31_AH_Y0,    /* 101: Block Parameter */
  &app_Main10msMgr_P.DIN_P23_AH_Y0,    /* 102: Block Parameter */
  &app_Main10msMgr_P.DIN_P41_AH_Y0,    /* 103: Block Parameter */
  &app_Main10msMgr_P.DIN_P37_AH_Y0,    /* 104: Block Parameter */
  &app_Main10msMgr_P.DIN_P25_AL_Y0,    /* 105: Block Parameter */
  &app_Main10msMgr_P.DIN_P26_AL_Y0,    /* 106: Block Parameter */
  &app_Main10msMgr_P.DIN_P35_AL_Y0,    /* 107: Block Parameter */
  &app_Main10msMgr_P.DIN_P33_AH_Y0,    /* 108: Block Parameter */
  &app_Main10msMgr_P.DIN_P36_AL_Y0,    /* 109: Block Parameter */
  &app_Main10msMgr_P.DIN_P24_AH_Y0,    /* 110: Block Parameter */
  &app_Main10msMgr_P.DIN_P28_AL_Y0,    /* 111: Block Parameter */
  &app_Main10msMgr_P.DIN_P38_AL_Y0,    /* 112: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P13_Freq_Y0,/* 113: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P13_Duty_Y0,/* 114: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P14_Freq_Y0,/* 115: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P14_Duty_Y0,/* 116: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P62_Freq_Y0,/* 117: Block Parameter */
  &app_Main10msMgr_P.PWM_IN_P62_Duty_Y0,/* 118: Block Parameter */
  &app_Main10msMgr_P.ReadData_Y0,      /* 119: Block Parameter */
  &app_Main10msMgr_P.Data_Count2_Y0,   /* 120: Block Parameter */
  &app_Main10msMgr_P.D2_Y0,            /* 121: Block Parameter */
  &app_Main10msMgr_P.D3_Y0,            /* 122: Block Parameter */
  &app_Main10msMgr_P.A1_Y0,            /* 123: Block Parameter */
  &app_Main10msMgr_P.A2_Y0,            /* 124: Block Parameter */
  &app_Main10msMgr_P.A3_Y0,            /* 125: Block Parameter */
  &app_Main10msMgr_P.Readdata2_Y0,     /* 126: Block Parameter */
  &app_Main10msMgr_P.RTE_EEPROM_Value_Read_Y0,/* 127: Block Parameter */
  &app_Main10msMgr_P.LSD_Data_Y0,      /* 128: Block Parameter */
  &app_Main10msMgr_P.HSD_Data_Y0,      /* 129: Block Parameter */
  &app_Main10msMgr_P.HBridge2_Direction_Pin_out_Y0,/* 130: Block Parameter */
  &app_Main10msMgr_P.HBridge2_Out_Y0,  /* 131: Block Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal_PARAM_ID,/* 132: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal1_PARAM_ID,/* 133: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal10_PARAM_ID,/* 134: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal11_PARAM_ID,/* 135: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal12_PARAM_ID,/* 136: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal13_PARAM_ID,/* 137: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal14_PARAM_ID,/* 138: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal15_PARAM_ID,/* 139: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal16_PARAM_ID,/* 140: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal17_PARAM_ID,/* 141: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal18_PARAM_ID,/* 142: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal19_PARAM_ID,/* 143: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal2_PARAM_ID,/* 144: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal20_PARAM_ID,/* 145: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal21_PARAM_ID,/* 146: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal22_PARAM_ID,/* 147: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal3_PARAM_ID,/* 148: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal4_PARAM_ID,/* 149: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal5_PARAM_ID,/* 150: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal6_PARAM_ID,/* 151: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal7_PARAM_ID,/* 152: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal8_PARAM_ID,/* 153: Mask Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal9_PARAM_ID,/* 154: Mask Parameter */
  &app_Main10msMgr_P.COM_WriteSignal49_PARAM_ID,/* 155: Mask Parameter */
  &app_Main10msMgr_P.COM_WriteSignal50_PARAM_ID,/* 156: Mask Parameter */
  &app_Main10msMgr_P.COM_WriteSignal52_PARAM_ID,/* 157: Mask Parameter */
  &app_Main10msMgr_P.COM_WriteSignal53_PARAM_ID,/* 158: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput_PARAM_ID,/* 159: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput1_PARAM_ID,/* 160: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput10_PARAM_ID,/* 161: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput11_PARAM_ID,/* 162: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput12_PARAM_ID,/* 163: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput13_PARAM_ID,/* 164: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput14_PARAM_ID,/* 165: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput15_PARAM_ID,/* 166: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput16_PARAM_ID,/* 167: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput17_PARAM_ID,/* 168: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput18_PARAM_ID,/* 169: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput2_PARAM_ID,/* 170: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput3_PARAM_ID,/* 171: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput4_PARAM_ID,/* 172: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput5_PARAM_ID,/* 173: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput6_PARAM_ID,/* 174: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput7_PARAM_ID,/* 175: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput8_PARAM_ID,/* 176: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput9_PARAM_ID,/* 177: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadPwm_PARAM_ID,/* 178: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadPwm1_PARAM_ID,/* 179: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadPwm2_PARAM_ID,/* 180: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm1_PARAM_ID,/* 181: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm2_PARAM_ID,/* 182: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm3_PARAM_ID,/* 183: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm4_PARAM_ID,/* 184: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm5_PARAM_ID,/* 185: Mask Parameter */
  &app_Main10msMgr_P.IO_SetPwm6_PARAM_ID,/* 186: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput1_PARAM_ID,/* 187: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput10_PARAM_ID,/* 188: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput11_PARAM_ID,/* 189: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput12_PARAM_ID,/* 190: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput13_PARAM_ID,/* 191: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput14_PARAM_ID,/* 192: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput15_PARAM_ID,/* 193: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput16_PARAM_ID,/* 194: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput3_PARAM_ID,/* 195: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput4_PARAM_ID,/* 196: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput5_PARAM_ID,/* 197: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput6_PARAM_ID,/* 198: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput7_PARAM_ID,/* 199: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput8_PARAM_ID,/* 200: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput9_PARAM_ID,/* 201: Mask Parameter */
  &app_Main10msMgr_P.Constant_Value_e, /* 202: Block Parameter */
  &app_Main10msMgr_P.Constant1_Value,  /* 203: Block Parameter */
  &app_Main10msMgr_P.Constant10_Value, /* 204: Block Parameter */
  &app_Main10msMgr_P.Constant11_Value, /* 205: Block Parameter */
  &app_Main10msMgr_P.Constant12_Value, /* 206: Block Parameter */
  &app_Main10msMgr_P.Constant2_Value_m,/* 207: Block Parameter */
  &app_Main10msMgr_P.Constant3_Value_l,/* 208: Block Parameter */
  &app_Main10msMgr_P.Constant4_Value_i,/* 209: Block Parameter */
  &app_Main10msMgr_P.Constant5_Value_m,/* 210: Block Parameter */
  &app_Main10msMgr_P.Constant6_Value,  /* 211: Block Parameter */
  &app_Main10msMgr_P.Constant7_Value,  /* 212: Block Parameter */
  &app_Main10msMgr_P.Constant8_Value,  /* 213: Block Parameter */
  &app_Main10msMgr_P.Constant9_Value,  /* 214: Block Parameter */
  &app_Main10msMgr_P.Gain16_Gain,      /* 215: Block Parameter */
  &app_Main10msMgr_P.Gain17_Gain,      /* 216: Block Parameter */
  &app_Main10msMgr_P.Gain18_Gain,      /* 217: Block Parameter */
  &app_Main10msMgr_P.Gain19_Gain,      /* 218: Block Parameter */
  &app_Main10msMgr_P.Gain20_Gain,      /* 219: Block Parameter */
  &app_Main10msMgr_P.Gain21_Gain,      /* 220: Block Parameter */
  &app_Main10msMgr_P.Gain22_Gain,      /* 221: Block Parameter */
  &app_Main10msMgr_P.Gain23_Gain,      /* 222: Block Parameter */
  &app_Main10msMgr_P.Gain24_Gain,      /* 223: Block Parameter */
  &app_Main10msMgr_P.Gain25_Gain,      /* 224: Block Parameter */
  &app_Main10msMgr_P.Gain26_Gain,      /* 225: Block Parameter */
  &app_Main10msMgr_P.Gain27_Gain,      /* 226: Block Parameter */
  &app_Main10msMgr_P.Gain28_Gain,      /* 227: Block Parameter */
  &app_Main10msMgr_P.Gain29_Gain,      /* 228: Block Parameter */
  &app_Main10msMgr_P.Gain30_Gain,      /* 229: Block Parameter */
  &app_Main10msMgr_P.Gain31_Gain,      /* 230: Block Parameter */
  &app_Main10msMgr_P.CompareToConstant_const,/* 231: Mask Parameter */
  &app_Main10msMgr_P.IO_WriteDigitalOutput2_PARAM_ID,/* 232: Mask Parameter */
  &app_Main10msMgr_P.Gain_Gain,        /* 233: Block Parameter */
  &app_Main10msMgr_P.Gain1_Gain,       /* 234: Block Parameter */
  &app_Main10msMgr_P.Gain10_Gain,      /* 235: Block Parameter */
  &app_Main10msMgr_P.Gain11_Gain,      /* 236: Block Parameter */
  &app_Main10msMgr_P.Gain12_Gain,      /* 237: Block Parameter */
  &app_Main10msMgr_P.Gain13_Gain,      /* 238: Block Parameter */
  &app_Main10msMgr_P.Gain14_Gain,      /* 239: Block Parameter */
  &app_Main10msMgr_P.Gain15_Gain,      /* 240: Block Parameter */
  &app_Main10msMgr_P.Gain2_Gain,       /* 241: Block Parameter */
  &app_Main10msMgr_P.Gain3_Gain,       /* 242: Block Parameter */
  &app_Main10msMgr_P.Gain4_Gain,       /* 243: Block Parameter */
  &app_Main10msMgr_P.Gain5_Gain,       /* 244: Block Parameter */
  &app_Main10msMgr_P.Gain6_Gain,       /* 245: Block Parameter */
  &app_Main10msMgr_P.Gain7_Gain,       /* 246: Block Parameter */
  &app_Main10msMgr_P.Gain8_Gain,       /* 247: Block Parameter */
  &app_Main10msMgr_P.Gain9_Gain,       /* 248: Block Parameter */
  &app_Main10msMgr_P.DetectChange_vinit,/* 249: Mask Parameter */
  &app_Main10msMgr_P.Constant_Value,   /* 250: Block Parameter */
  &app_Main10msMgr_P.Constant3_Value,  /* 251: Block Parameter */
  &app_Main10msMgr_P.Constant4_Value,  /* 252: Block Parameter */
  &app_Main10msMgr_P.Constant5_Value,  /* 253: Block Parameter */
  &app_Main10msMgr_P.Constant6_Value_e,/* 254: Block Parameter */
  &app_Main10msMgr_P.UnitDelay_InitialCondition,/* 255: Block Parameter */
  &app_Main10msMgr_P.Constant2_Value,  /* 256: Block Parameter */
  &app_Main10msMgr_P.ConversionFactor_Value,/* 257: Block Parameter */
  &app_Main10msMgr_P.upiR1_Gain,       /* 258: Block Parameter */
  &app_Main10msMgr_P.Multiply3_Gain,   /* 259: Block Parameter */
  &app_Main10msMgr_P.Wheel_RadiusinchtoMeter1R930inch_Gain,/* 260: Block Parameter */
  &app_Main10msMgr_DW.UnitDelay_DSTATE,/* 261: Discrete State */
  &app_Main10msMgr_DW.DelayInput1_DSTATE,/* 262: Discrete State */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1                                    /* 1 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -17, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 70,
    rtRootInputs, 0,
    rtRootOutputs, 0 },

  { rtBlockParameters, 191,
    rtModelParameters, 0 },

  { rtBlockStates, 2 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3124799347U,
    2299780659U,
    3112575127U,
    2221714721U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  app_Main10msMgr_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void app_Main10msMgr_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(app_Main10msMgr_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(app_Main10msMgr_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(app_Main10msMgr_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(app_Main10msMgr_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(app_Main10msMgr_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(app_Main10msMgr_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(app_Main10msMgr_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(app_Main10msMgr_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void app_Main10msMgr_host_InitializeDataMapInfo
    (app_Main10msMgr_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
