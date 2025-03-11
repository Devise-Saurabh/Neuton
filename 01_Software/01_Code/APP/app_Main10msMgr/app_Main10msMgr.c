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
 * File Name: app_Main10msMgr.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:18 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include "app_Main10msMgr_capi.h"
#include "app_Main10msMgr.h"
#include "app_Main10msMgr_private.h"
#include "rte.h"

/* Named constants for Chart: '<S1>/Chart1' */
#define app_Main10msMgr_IN_OFF         ((uint8_T)1U)
#define app_Main10msMgr_IN_ON          ((uint8_T)2U)

/* Named constants for Chart: '<S77>/Chart' */
#define app_Main10msMgr_IN_Erase       ((uint8_T)1U)
#define app_Main10msMgr_IN_Erase1      ((uint8_T)2U)
#define app_Main10msMgr_IN_Erase2      ((uint8_T)3U)
#define app_Main10msMgr_IN_Erase3      ((uint8_T)4U)
#define app_Main10msMgr_IN_Init        ((uint8_T)1U)
#define app_Main10msMgr_IN_ReadFormat  ((uint8_T)2U)
#define app_Main10msMgr_IN_Write       ((uint8_T)3U)
#define app_Main10msMgr_IN_Write1      ((uint8_T)6U)
#define app_Main10msMgr_IN_Write2      ((uint8_T)7U)
#define app_Main10msMgr_IN_Write3      ((uint8_T)8U)
#define app_Main10msMgr_IN_Write_d     ((uint8_T)5U)

/* Named constants for Chart: '<S83>/Computing Distance covered  Per Tick' */
#define app_Main10msMgr_IN_Default     ((uint8_T)1U)
#define app_Main10msMgr_IN_Erase_l     ((uint8_T)2U)
#define app_Main10msMgr_IN_step1       ((uint8_T)2U)

/* user code (top of source file) */
#include "rte.h"

/* Block signals (default storage) */
B_app_Main10msMgr_T app_Main10msMgr_B;

/* Block states (default storage) */
DW_app_Main10msMgr_T app_Main10msMgr_DW;

/* Real-time model */
RT_MODEL_app_Main10msMgr_T app_Main10msMgr_M_;
RT_MODEL_app_Main10msMgr_T *const app_Main10msMgr_M = &app_Main10msMgr_M_;

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal' */
void app_Main10msMgr_ANLG_ReadSignal(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal' */

  /* S-Function (deMCD_ANLG_Read): '<S2>/deMCD_ANLG_Read' */
  /* S-Function Block: <S2>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_j = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID2_P60(app_Main10msMgr_B.deMCD_ANLG_Read_j);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal1' */
void app_Main10msMgr_ANLG_ReadSignal1(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal1' */

  /* S-Function (deMCD_ANLG_Read): '<S3>/deMCD_ANLG_Read' */
  /* S-Function Block: <S3>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal1_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_c = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal1' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID8_P30(app_Main10msMgr_B.deMCD_ANLG_Read_c);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal10' */
void app_Main10msMgr_ANLG_ReadSignal10(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal10' */

  /* S-Function (deMCD_ANLG_Read): '<S4>/deMCD_ANLG_Read' */
  /* S-Function Block: <S4>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal10_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_e = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal10' */

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID12_P73(app_Main10msMgr_B.deMCD_ANLG_Read_e);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal11' */
void app_Main10msMgr_ANLG_ReadSignal11(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal11' */

  /* S-Function (deMCD_ANLG_Read): '<S5>/deMCD_ANLG_Read' */
  /* S-Function Block: <S5>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal11_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_d2 = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal11' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID10_P75(app_Main10msMgr_B.deMCD_ANLG_Read_d2);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal12' */
void app_Main10msMgr_ANLG_ReadSignal12(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal12' */

  /* S-Function (deMCD_ANLG_Read): '<S6>/deMCD_ANLG_Read' */
  /* S-Function Block: <S6>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal12_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_mm = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal12' */

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID11_P74(app_Main10msMgr_B.deMCD_ANLG_Read_mm);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal13' */
void app_Main10msMgr_ANLG_ReadSignal13(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal13' */

  /* S-Function (deMCD_ANLG_Read): '<S7>/deMCD_ANLG_Read' */
  /* S-Function Block: <S7>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal13_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_as = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal13' */

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID13_P72(app_Main10msMgr_B.deMCD_ANLG_Read_as);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal14' */
void app_Main10msMgr_ANLG_ReadSignal14(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal14' */

  /* S-Function (deMCD_ANLG_Read): '<S8>/deMCD_ANLG_Read' */
  /* S-Function Block: <S8>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal14_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_n = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal14' */

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID14_P71(app_Main10msMgr_B.deMCD_ANLG_Read_n);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal15' */
void app_Main10msMgr_ANLG_ReadSignal15(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal15' */

  /* S-Function (deMCD_ANLG_Read): '<S9>/deMCD_ANLG_Read' */
  /* S-Function Block: <S9>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal15_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_b = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal15' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID15_P80(app_Main10msMgr_B.deMCD_ANLG_Read_b);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal16' */
void app_Main10msMgr_ANLG_ReadSignal16(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal16' */

  /* S-Function (deMCD_ANLG_Read): '<S10>/deMCD_ANLG_Read' */
  /* S-Function Block: <S10>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal16_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_d = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal16' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID16_P79(app_Main10msMgr_B.deMCD_ANLG_Read_d);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal17' */
void app_Main10msMgr_ANLG_ReadSignal17(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal17' */

  /* S-Function (deMCD_ANLG_Read): '<S11>/deMCD_ANLG_Read' */
  /* S-Function Block: <S11>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal17_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_au = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal17' */

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID17_P78(app_Main10msMgr_B.deMCD_ANLG_Read_au);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal18' */
void app_Main10msMgr_ANLG_ReadSignal18(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal18' */

  /* S-Function (deMCD_ANLG_Read): '<S12>/deMCD_ANLG_Read' */
  /* S-Function Block: <S12>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal18_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_o = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal18' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID18_P77(app_Main10msMgr_B.deMCD_ANLG_Read_o);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal19' */
void app_Main10msMgr_ANLG_ReadSignal19(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal19' */

  /* S-Function (deMCD_ANLG_Read): '<S13>/deMCD_ANLG_Read' */
  /* S-Function Block: <S13>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal19_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_a = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal19' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID19_P76(app_Main10msMgr_B.deMCD_ANLG_Read_a);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal2' */
void app_Main10msMgr_ANLG_ReadSignal2(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal2' */

  /* S-Function (deMCD_ANLG_Read): '<S14>/deMCD_ANLG_Read' */
  /* S-Function Block: <S14>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal2_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_go = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal2' */

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID9_P29(app_Main10msMgr_B.deMCD_ANLG_Read_go);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal20' */
void app_Main10msMgr_ANLG_ReadSignal20(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal20' */

  /* S-Function (deMCD_ANLG_Read): '<S15>/deMCD_ANLG_Read' */
  /* S-Function Block: <S15>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal20_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_gw = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal20' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID20_P70(app_Main10msMgr_B.deMCD_ANLG_Read_gw);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal21' */
void app_Main10msMgr_ANLG_ReadSignal21(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal21' */

  /* S-Function (deMCD_ANLG_Read): '<S16>/deMCD_ANLG_Read' */
  /* S-Function Block: <S16>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal21_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_iz = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal21' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  RTE_Write_Temp1(app_Main10msMgr_B.deMCD_ANLG_Read_iz);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal22' */
void app_Main10msMgr_ANLG_ReadSignal22(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal22' */

  /* S-Function (deMCD_ANLG_Read): '<S17>/deMCD_ANLG_Read' */
  /* S-Function Block: <S17>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal22_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_my = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal22' */

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  RTE_Write_Temp2(app_Main10msMgr_B.deMCD_ANLG_Read_my);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal3' */
void app_Main10msMgr_ANLG_ReadSignal3(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal3' */

  /* S-Function (deMCD_ANLG_Read): '<S18>/deMCD_ANLG_Read' */
  /* S-Function Block: <S18>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal3_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_k = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal3' */

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID0_P69(app_Main10msMgr_B.deMCD_ANLG_Read_k);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal4' */
void app_Main10msMgr_ANLG_ReadSignal4(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal4' */

  /* S-Function (deMCD_ANLG_Read): '<S19>/deMCD_ANLG_Read' */
  /* S-Function Block: <S19>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal4_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_lg = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal4' */

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID1_P59(app_Main10msMgr_B.deMCD_ANLG_Read_lg);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal5' */
void app_Main10msMgr_ANLG_ReadSignal5(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal5' */

  /* S-Function (deMCD_ANLG_Read): '<S20>/deMCD_ANLG_Read' */
  /* S-Function Block: <S20>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal5_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_l = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal5' */

  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID3_P49(app_Main10msMgr_B.deMCD_ANLG_Read_l);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal6' */
void app_Main10msMgr_ANLG_ReadSignal6(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal6' */

  /* S-Function (deMCD_ANLG_Read): '<S21>/deMCD_ANLG_Read' */
  /* S-Function Block: <S21>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal6_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_g = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal6' */

  /* DataTypeConversion: '<S21>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID5_P50(app_Main10msMgr_B.deMCD_ANLG_Read_g);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal7' */
void app_Main10msMgr_ANLG_ReadSignal7(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal7' */

  /* S-Function (deMCD_ANLG_Read): '<S22>/deMCD_ANLG_Read' */
  /* S-Function Block: <S22>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal7_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_m = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal7' */

  /* DataTypeConversion: '<S22>/Data Type Conversion' */
  RTE_Write_ADC_Internal_ID4(app_Main10msMgr_B.deMCD_ANLG_Read_m);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal8' */
void app_Main10msMgr_ANLG_ReadSignal8(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal8' */

  /* S-Function (deMCD_ANLG_Read): '<S23>/deMCD_ANLG_Read' */
  /* S-Function Block: <S23>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal8_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read_i = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal8' */

  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID6_P39(app_Main10msMgr_B.deMCD_ANLG_Read_i);
}

/* Output and update for atomic system: '<S1>/ANLG_ReadSignal9' */
void app_Main10msMgr_ANLG_ReadSignal9(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal9' */

  /* S-Function (deMCD_ANLG_Read): '<S24>/deMCD_ANLG_Read' */
  /* S-Function Block: <S24>/deMCD_ANLG_Read */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  float fltValue;
  RTE_Service_ANLG_eReadSignal((uint8_t)
    (app_Main10msMgr_P.ANLG_ReadSignal9_PARAM_ID-1), &fltValue);
  app_Main10msMgr_B.deMCD_ANLG_Read = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal9' */

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  RTE_Write_ADC_5v_ID7_P40(app_Main10msMgr_B.deMCD_ANLG_Read);
}

/* Output and update for atomic system: '<S1>/COM_WriteSignal49' */
void app_Main10msMgr_COM_WriteSignal(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal49' */

  /* S-Function (deMCD_COM_WriteSignal): '<S25>/deMCD_COM_WriteSignal' */
  /* S-Function Block: <S25>/deMCD_COM_WriteSignal */
  /* Insert Comment Here */
  RTE_Service_COM_vdWriteSignal((uint8_t)
    (app_Main10msMgr_P.COM_WriteSignal49_PARAM_ID-1), app_Main10msMgr_B.Counter);

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal49' */
}

/* Output and update for atomic system: '<S1>/COM_WriteSignal50' */
void app_Main10msMgr_COM_WriteSignal50(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal50' */

  /* S-Function (deMCD_COM_WriteSignal): '<S26>/deMCD_COM_WriteSignal' */
  /* S-Function Block: <S26>/deMCD_COM_WriteSignal */
  /* Insert Comment Here */
  RTE_Service_COM_vdWriteSignal((uint8_t)
    (app_Main10msMgr_P.COM_WriteSignal50_PARAM_ID-1), app_Main10msMgr_B.Counter);

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal50' */
}

/* Output and update for atomic system: '<S1>/COM_WriteSignal52' */
void app_Main10msMgr_COM_WriteSignal52(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal52' */

  /* S-Function (deMCD_COM_WriteSignal): '<S27>/deMCD_COM_WriteSignal' */
  /* S-Function Block: <S27>/deMCD_COM_WriteSignal */
  /* Insert Comment Here */
  RTE_Service_COM_vdWriteSignal((uint8_t)
    (app_Main10msMgr_P.COM_WriteSignal52_PARAM_ID-1), app_Main10msMgr_B.Counter);

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal52' */
}

/* Output and update for atomic system: '<S1>/COM_WriteSignal53' */
void app_Main10msMgr_COM_WriteSignal53(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal53' */

  /* S-Function (deMCD_COM_WriteSignal): '<S28>/deMCD_COM_WriteSignal' */
  /* S-Function Block: <S28>/deMCD_COM_WriteSignal */
  /* Insert Comment Here */
  RTE_Service_COM_vdWriteSignal((uint8_t)
    (app_Main10msMgr_P.COM_WriteSignal53_PARAM_ID-1), RTE_Read_Updated_Data());

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal53' */
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput' */
void app_Main10msMgr_IO_ReadDigitalInput(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S32>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S32>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_mz = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_do = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_do = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* DataTypeConversion: '<S32>/Data Type Conversion' */
  RTE_Write_DIN_P61_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_mz);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput1' */
void app_Main10msMgr_IO_ReadDigitalInput1(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput1' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S33>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S33>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput1_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_pm = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_ox = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_ox = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput1' */

  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  RTE_Write_DIN_P51_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_pm);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput10' */
void app_Main10msMgr_IO_ReadDigitalInput10(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput10' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S34>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S34>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput10_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_os = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_g = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_g = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput10' */

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  RTE_Write_DIN_P26_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_os);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput11' */
void app_Main10msMgr_IO_ReadDigitalInput11(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput11' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S35>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S35>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput11_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_b = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n0 = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n0 = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput11' */

  /* DataTypeConversion: '<S35>/Data Type Conversion' */
  RTE_Write_DIN_P35_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_b);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput12' */
void app_Main10msMgr_IO_ReadDigitalInput12(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput12' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S36>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S36>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput12_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g1 = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_a = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_a = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput12' */

  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  RTE_Write_DIN_P33_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g1);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput13' */
void app_Main10msMgr_IO_ReadDigitalInput13(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput13' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S37>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S37>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput13_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_m = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_je = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_je = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput13' */

  /* DataTypeConversion: '<S37>/Data Type Conversion' */
  RTE_Write_DIN_P36_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_m);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput14' */
void app_Main10msMgr_IO_ReadDigitalInput14(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput14' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S38>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S38>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput14_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_n = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_l = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_l = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput14' */

  /* DataTypeConversion: '<S38>/Data Type Conversion' */
  RTE_Write_DIN_P24_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_n);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput15' */
void app_Main10msMgr_IO_ReadDigitalInput15(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput15' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S39>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S39>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput15_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_d = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_nc = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_nc = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput15' */

  /* DataTypeConversion: '<S39>/Data Type Conversion' */
  RTE_Write_DIN_P23_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_d);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput16' */
void app_Main10msMgr_IO_ReadDigitalInput16(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput16' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S40>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S40>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput16_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_o = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_pf = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_pf = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput16' */

  /* DataTypeConversion: '<S40>/Data Type Conversion' */
  RTE_Write_DIN_P28_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_o);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput17' */
void app_Main10msMgr_IO_ReadDigitalInput17(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput17' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S41>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S41>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput17_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_og = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_og = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput17' */

  /* DataTypeConversion: '<S41>/Data Type Conversion' */
  RTE_Write_DIN_P41_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_g);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput18' */
void app_Main10msMgr_IO_ReadDigitalInput18(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput18' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S42>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S42>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput18_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_a = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_j = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_j = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput18' */

  /* DataTypeConversion: '<S42>/Data Type Conversion' */
  RTE_Write_DIN_P38_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_a);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput2' */
void app_Main10msMgr_IO_ReadDigitalInput2(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput2' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S43>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S43>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput2_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_fd = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_p = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_p = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput2' */

  /* DataTypeConversion: '<S43>/Data Type Conversion' */
  RTE_Write_DIN_P22_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_fd);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput3' */
void app_Main10msMgr_IO_ReadDigitalInput3(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput3' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S44>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S44>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput3_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_p = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_b = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_b = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput3' */

  /* DataTypeConversion: '<S44>/Data Type Conversion' */
  RTE_Write_DIN_P34_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_p);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput4' */
void app_Main10msMgr_IO_ReadDigitalInput4(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput4' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S45>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S45>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput4_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_jk = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n1 = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n1 = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput4' */

  /* DataTypeConversion: '<S45>/Data Type Conversion' */
  RTE_Write_DIN_P27_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_jk);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput5' */
void app_Main10msMgr_IO_ReadDigitalInput5(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput5' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S46>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S46>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput5_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_h = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_d = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_d = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput5' */

  /* DataTypeConversion: '<S46>/Data Type Conversion' */
  RTE_Write_DIN_P42_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_h);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput6' */
void app_Main10msMgr_IO_ReadDigitalInput6(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput6' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S47>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S47>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput6_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_k = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_n = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput6' */

  /* DataTypeConversion: '<S47>/Data Type Conversion' */
  RTE_Write_DIN_P21_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_k);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput7' */
void app_Main10msMgr_IO_ReadDigitalInput7(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput7' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S48>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S48>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput7_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_f = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_o = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_o = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput7' */

  /* DataTypeConversion: '<S48>/Data Type Conversion' */
  RTE_Write_DIN_P31_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_f);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput8' */
void app_Main10msMgr_IO_ReadDigitalInput8(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput8' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S49>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S49>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput8_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_j = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_h = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2_h = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput8' */

  /* DataTypeConversion: '<S49>/Data Type Conversion' */
  RTE_Write_DIN_P37_AH(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1_j);
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput9' */
void app_Main10msMgr_IO_ReadDigitalInput9(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput9' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S50>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S50>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput9_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1 = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2 = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2 = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput9' */

  /* DataTypeConversion: '<S50>/Data Type Conversion' */
  RTE_Write_DIN_P25_AL(app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1);
}

/* Output and update for atomic system: '<S1>/IO_ReadPwm' */
void app_Main10msMgr_IO_ReadPwm(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm' */

  /* S-Function (deMCD_IO_ReadPwm): '<S51>/deMCD_IO_ReadPwm' */
  /* S-Function Block: <S51>/deMCD_IO_ReadPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint32_t u32FreqHz;
  uint8_t u8DutyCycle;
  RTE_Service_IO_eReadPwm((uint8_t)(app_Main10msMgr_P.IO_ReadPwm_PARAM_ID-1),
    &u32FreqHz, &u8DutyCycle);
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_f = u32FreqHz;
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o2 = u8DutyCycle;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm' */

  /* DataTypeConversion: '<S51>/Data Type Conversion1' */
  RTE_Write_PWM_IN_P13_Freq(app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_f);

  /* DataTypeConversion: '<S51>/Data Type Conversion2' */
  RTE_Write_PWM_IN_P13_Duty(app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o2);
}

/* Output and update for atomic system: '<S1>/IO_ReadPwm1' */
void app_Main10msMgr_IO_ReadPwm1(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm1' */

  /* S-Function (deMCD_IO_ReadPwm): '<S52>/deMCD_IO_ReadPwm' */
  /* S-Function Block: <S52>/deMCD_IO_ReadPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint32_t u32FreqHz;
  uint8_t u8DutyCycle;
  RTE_Service_IO_eReadPwm((uint8_t)(app_Main10msMgr_P.IO_ReadPwm1_PARAM_ID-1),
    &u32FreqHz, &u8DutyCycle);
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_i = u32FreqHz;
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o = u8DutyCycle;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm1' */

  /* DataTypeConversion: '<S52>/Data Type Conversion1' */
  RTE_Write_PWM_IN_P14_Freq(app_Main10msMgr_B.deMCD_IO_ReadPwm_o1_i);

  /* DataTypeConversion: '<S52>/Data Type Conversion2' */
  RTE_Write_PWM_IN_P14_Duty(app_Main10msMgr_B.deMCD_IO_ReadPwm_o2_o);
}

/* Output and update for atomic system: '<S1>/IO_ReadPwm2' */
void app_Main10msMgr_IO_ReadPwm2(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm2' */

  /* S-Function (deMCD_IO_ReadPwm): '<S53>/deMCD_IO_ReadPwm' */
  /* S-Function Block: <S53>/deMCD_IO_ReadPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint32_t u32FreqHz;
  uint8_t u8DutyCycle;
  RTE_Service_IO_eReadPwm((uint8_t)(app_Main10msMgr_P.IO_ReadPwm2_PARAM_ID-1),
    &u32FreqHz, &u8DutyCycle);
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o1 = u32FreqHz;
  app_Main10msMgr_B.deMCD_IO_ReadPwm_o2 = u8DutyCycle;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm2' */

  /* DataTypeConversion: '<S53>/Data Type Conversion1' */
  RTE_Write_PWM_IN_P62_Freq(app_Main10msMgr_B.deMCD_IO_ReadPwm_o1);

  /* DataTypeConversion: '<S53>/Data Type Conversion2' */
  RTE_Write_PWM_IN_P62_Duty(app_Main10msMgr_B.deMCD_IO_ReadPwm_o2);
}

/* Output and update for atomic system: '<S1>/IO_SetPwm1' */
void app_Main10msMgr_IO_SetPwm(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm1' */

  /* S-Function (deMCD_IO_SetPwm): '<S54>/deMCD_IO_SetPwm' incorporates:
   *  Inport: '<Root>/PWM_Out_P12_Duty'
   *  Inport: '<Root>/PWM_Out_P12_Freq'
   */
  /* S-Function Block: <S54>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm1_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_P12_Freq(), (uint8_t)RTE_Read_PWM_Out_P12_Duty());

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm1' */
}

/* Output and update for atomic system: '<S1>/IO_SetPwm2' */
void app_Main10msMgr_IO_SetPwm2(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm2' */

  /* S-Function (deMCD_IO_SetPwm): '<S55>/deMCD_IO_SetPwm' incorporates:
   *  Inport: '<Root>/PWM_Out_P11_Duty'
   *  Inport: '<Root>/PWM_Out_P11_Freq'
   */
  /* S-Function Block: <S55>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm2_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_P11_Freq(), (uint8_t)RTE_Read_PWM_Out_P11_Duty());

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm2' */
}

/* Output and update for atomic system: '<S1>/IO_SetPwm3' */
void app_Main10msMgr_IO_SetPwm3(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm3' */

  /* S-Function (deMCD_IO_SetPwm): '<S56>/deMCD_IO_SetPwm' incorporates:
   *  Inport: '<Root>/PWM_Out_H_Duty'
   *  Inport: '<Root>/PWM_Out_H_Freq'
   */
  /* S-Function Block: <S56>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm3_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_H_Freq(), (uint8_t)RTE_Read_PWM_Out_H_Duty());

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm3' */
}

/* Output and update for atomic system: '<S1>/IO_SetPwm4' */
void app_Main10msMgr_IO_SetPwm4(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm4' */

  /* S-Function (deMCD_IO_SetPwm): '<S57>/deMCD_IO_SetPwm' incorporates:
   *  Inport: '<Root>/PWM_Out_P17_Duty'
   *  Inport: '<Root>/PWM_Out_P17_Freq'
   */
  /* S-Function Block: <S57>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm4_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_P17_Freq(), (uint8_t)RTE_Read_PWM_Out_P17_Duty());

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm4' */
}

/* Output and update for atomic system: '<S1>/IO_SetPwm5' */
void app_Main10msMgr_IO_SetPwm5(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm5' */

  /* S-Function (deMCD_IO_SetPwm): '<S58>/deMCD_IO_SetPwm' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Inport: '<Root>/PWM_Out_P16_Freq'
   */
  /* S-Function Block: <S58>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm5_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_P16_Freq(), (uint8_t)
    app_Main10msMgr_P.Constant12_Value);

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm5' */
}

/* Output and update for atomic system: '<S1>/IO_SetPwm6' */
void app_Main10msMgr_IO_SetPwm6(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm6' */

  /* S-Function (deMCD_IO_SetPwm): '<S59>/deMCD_IO_SetPwm' incorporates:
   *  Inport: '<Root>/PWM_Out_P7_Duty'
   *  Inport: '<Root>/PWM_Out_P7_Freq'
   */
  /* S-Function Block: <S59>/deMCD_IO_SetPwm */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  RTE_Service_IO_eSetPwm((uint8_t)(app_Main10msMgr_P.IO_SetPwm6_PARAM_ID-1),
    (uint32_t)RTE_Read_PWM_Out_P7_Freq(), (uint8_t)RTE_Read_PWM_Out_P7_Duty());

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm6' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput1' */
void app_Main10msMgr_IO_WriteDigitalOutput(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput1' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S60>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD3_OUT3_P4'
   */
  /* S-Function Block: <S60>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD3_OUT3_P4() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput1_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput1_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput1' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput10' */
void app_Main10msMgr_IO_WriteDigitalOutput10(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput10' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S61>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD4_OUT1_P5'
   */
  /* S-Function Block: <S61>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD4_OUT1_P5() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput10_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput10_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput10' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput11' */
void app_Main10msMgr_IO_WriteDigitalOutput11(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput11' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S62>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD3_OUT2_P3'
   */
  /* S-Function Block: <S62>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD3_OUT2_P3() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput11_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput11_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput11' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput12' */
void app_Main10msMgr_IO_WriteDigitalOutput12(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput12' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S63>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD3_OUT4_P9'
   */
  /* S-Function Block: <S63>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD3_OUT4_P9() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput12_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput12_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput12' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput13' */
void app_Main10msMgr_IO_WriteDigitalOutput13(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput13' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S64>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD4_OUT2_P10'
   */
  /* S-Function Block: <S64>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD4_OUT2_P10() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput13_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput13_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput13' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput14' */
void app_Main10msMgr_IO_WriteDigitalOutput14(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput14' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S65>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD4_OUT3_P15'
   */
  /* S-Function Block: <S65>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD4_OUT3_P15() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput14_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput14_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput14' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput15' */
void app_Main10msMgr_IO_WriteDigitalOutput15(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput15' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S66>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD2_OUT3_P1'
   */
  /* S-Function Block: <S66>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD2_OUT3_P1() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput15_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput15_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput15' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput16' */
void app_Main10msMgr_IO_WriteDigitalOutput16(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput16' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S67>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD2_OUT2_P6'
   */
  /* S-Function Block: <S67>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD2_OUT2_P6() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput16_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput16_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput16' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput3' */
void app_Main10msMgr_IO_WriteDigitalOutput3(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput3' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S68>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/Resrve'
   */
  /* S-Function Block: <S68>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_Resrve() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput3_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput3_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput3' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput4' */
void app_Main10msMgr_IO_WriteDigitalOutput4(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput4' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S69>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/Reserve2'
   */
  /* S-Function Block: <S69>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_Reserve2() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput4_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput4_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput4' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput5' */
void app_Main10msMgr_IO_WriteDigitalOutput5(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput5' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S70>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD4_OUT4_P20'
   */
  /* S-Function Block: <S70>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD4_OUT4_P20() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput5_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput5_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput5' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput6' */
void app_Main10msMgr_IO_WriteDigitalOutput6(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput6' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S71>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/HSDResetPin'
   */
  /* S-Function Block: <S71>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_HSDResetPin() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput6_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput6_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput6' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput7' */
void app_Main10msMgr_IO_WriteDigitalOutput7(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput7' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S72>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/H_Bridge1_Direction'
   */
  /* S-Function Block: <S72>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_H_Bridge1_Direction() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput7_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput7_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput7' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput8' */
void app_Main10msMgr_IO_WriteDigitalOutput8(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput8' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S73>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD2_OUT4_P2'
   */
  /* S-Function Block: <S73>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD2_OUT4_P2() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput8_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput8_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput8' */
}

/* Output and update for atomic system: '<S1>/IO_WriteDigitalOutput9' */
void app_Main10msMgr_IO_WriteDigitalOutput9(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput9' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S74>/deMCD_IO_WriteDigitalOutput' incorporates:
   *  Inport: '<Root>/ECU_HSD3_OUT1_P8'
   */
  /* S-Function Block: <S74>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)RTE_Read_ECU_HSD3_OUT1_P8() != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput9_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput9_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput9' */
}

/* Output and update for atomic system: '<S75>/IO_WriteDigitalOutput2' */
void app_Main10msMgr_IO_WriteDigitalOutput2(void)
{
  /* DataTypeConversion: '<S79>/Data Type Conversion' */
  app_Main10msMgr_B.DataTypeConversion = app_Main10msMgr_B.Compare;

  /* Outputs for Atomic SubSystem: '<S75>/IO_WriteDigitalOutput2' */

  /* S-Function (deMCD_IO_WriteDigitalOutput): '<S79>/deMCD_IO_WriteDigitalOutput' */
  /* S-Function Block: <S79>/deMCD_IO_WriteDigitalOutput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  if ((uint8_T)app_Main10msMgr_B.DataTypeConversion != (uint8_T)0) {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput2_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_ON);
  } else {
    RTE_Service_IO_eOutputControl((uint8_T)
      (app_Main10msMgr_P.IO_WriteDigitalOutput2_PARAM_ID-1) ,
      ECU_IO_OUT_COMMAND_OFF);
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S75>/IO_WriteDigitalOutput2' */
}

/* Model step function for TID1 */
void app_Main10msMgr_fcn(void)         /* Explicit Task: app_Main10msMgr_fcn */
{
  real_T rtb_Divide2;
  boolean_T rtb_FixPtRelationalOperator;
  real_T tmp;

  /* RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/Saurabh'
   */
  /* Inport: '<S1>/APP_10MS_IN1' incorporates:
   *  Inport: '<Root>/APP_10MS_IN1'
   */
  RTE_Write_App_10ms(RTE_Read_APP_10MS_IN1());

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal' */
  app_Main10msMgr_ANLG_ReadSignal();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal1' */
  app_Main10msMgr_ANLG_ReadSignal1();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal1' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal2' */
  app_Main10msMgr_ANLG_ReadSignal2();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal2' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal3' */
  app_Main10msMgr_ANLG_ReadSignal3();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal3' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal4' */
  app_Main10msMgr_ANLG_ReadSignal4();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal4' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal5' */
  app_Main10msMgr_ANLG_ReadSignal5();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal5' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal6' */
  app_Main10msMgr_ANLG_ReadSignal6();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal6' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal7' */
  app_Main10msMgr_ANLG_ReadSignal7();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal7' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal8' */
  app_Main10msMgr_ANLG_ReadSignal8();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal8' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal9' */
  app_Main10msMgr_ANLG_ReadSignal9();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal9' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal10' */
  app_Main10msMgr_ANLG_ReadSignal10();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal10' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal11' */
  app_Main10msMgr_ANLG_ReadSignal11();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal11' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal12' */
  app_Main10msMgr_ANLG_ReadSignal12();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal12' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal13' */
  app_Main10msMgr_ANLG_ReadSignal13();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal13' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal14' */
  app_Main10msMgr_ANLG_ReadSignal14();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal14' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal15' */
  app_Main10msMgr_ANLG_ReadSignal15();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal15' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal16' */
  app_Main10msMgr_ANLG_ReadSignal16();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal16' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal17' */
  app_Main10msMgr_ANLG_ReadSignal17();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal17' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal18' */
  app_Main10msMgr_ANLG_ReadSignal18();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal18' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal19' */
  app_Main10msMgr_ANLG_ReadSignal19();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal19' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal20' */
  app_Main10msMgr_ANLG_ReadSignal20();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal20' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal21' */
  app_Main10msMgr_ANLG_ReadSignal21();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal21' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal22' */
  app_Main10msMgr_ANLG_ReadSignal22();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal22' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput' */
  app_Main10msMgr_IO_ReadDigitalInput();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput1' */
  app_Main10msMgr_IO_ReadDigitalInput1();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput1' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput2' */
  app_Main10msMgr_IO_ReadDigitalInput2();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput2' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput3' */
  app_Main10msMgr_IO_ReadDigitalInput3();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput3' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput4' */
  app_Main10msMgr_IO_ReadDigitalInput4();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput4' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput5' */
  app_Main10msMgr_IO_ReadDigitalInput5();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput5' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput6' */
  app_Main10msMgr_IO_ReadDigitalInput6();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput6' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput7' */
  app_Main10msMgr_IO_ReadDigitalInput7();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput7' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput15' */
  app_Main10msMgr_IO_ReadDigitalInput15();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput15' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput17' */
  app_Main10msMgr_IO_ReadDigitalInput17();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput17' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput8' */
  app_Main10msMgr_IO_ReadDigitalInput8();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput8' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput9' */
  app_Main10msMgr_IO_ReadDigitalInput9();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput9' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput10' */
  app_Main10msMgr_IO_ReadDigitalInput10();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput10' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput11' */
  app_Main10msMgr_IO_ReadDigitalInput11();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput11' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput12' */
  app_Main10msMgr_IO_ReadDigitalInput12();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput12' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput13' */
  app_Main10msMgr_IO_ReadDigitalInput13();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput13' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput14' */
  app_Main10msMgr_IO_ReadDigitalInput14();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput14' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput16' */
  app_Main10msMgr_IO_ReadDigitalInput16();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput16' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput18' */
  app_Main10msMgr_IO_ReadDigitalInput18();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput18' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm' */
  app_Main10msMgr_IO_ReadPwm();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm1' */
  app_Main10msMgr_IO_ReadPwm1();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm1' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadPwm2' */
  app_Main10msMgr_IO_ReadPwm2();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadPwm2' */

  /* Gain: '<S83>/2piR1' incorporates:
   *  Gain: '<S83>/Multiply3'
   *  Inport: '<Root>/Speed'
   */
  rtb_Divide2 = floor(app_Main10msMgr_P.Multiply3_Gain * RTE_Read_Speed() *
                      app_Main10msMgr_P.upiR1_Gain);
  if (rtIsNaN(rtb_Divide2) || rtIsInf(rtb_Divide2)) {
    rtb_Divide2 = 0.0;
  } else {
    rtb_Divide2 = fmod(rtb_Divide2, 65536.0);
  }

  /* Product: '<S83>/Divide2' incorporates:
   *  Constant: '<S83>/Constant2'
   *  Constant: '<S83>/ConversionFactor'
   *  Gain: '<S83>/2piR1'
   *  Gain: '<S83>/Wheel_Radius inch to Meter1(R=9.30 inch)'
   *  Product: '<S83>/Divide1'
   */
  rtb_Divide2 = (real_T)(((rtb_Divide2 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-rtb_Divide2 : (int32_T)(int16_T)(uint16_T)rtb_Divide2) *
    app_Main10msMgr_P.Wheel_RadiusinchtoMeter1R930inch_Gain) >> 17) /
    app_Main10msMgr_P.Constant2_Value / app_Main10msMgr_P.ConversionFactor_Value;

  /* Chart: '<S83>/Computing Distance covered  Per Tick' incorporates:
   *  Inport: '<Root>/Eraseee'
   *  UnitDelay: '<S77>/Unit Delay'
   */
  if (app_Main10msMgr_DW.temporalCounter_i1 < 63U) {
    app_Main10msMgr_DW.temporalCounter_i1++;
  }

  /* Gateway: Saurabh/Subsystem1/Subsystem/Computing Distance covered
     Per Tick */
  /* During: Saurabh/Subsystem1/Subsystem/Computing Distance covered
     Per Tick */
  if (app_Main10msMgr_DW.is_active_c7_app_Main10msMgr == 0U) {
    /* Entry: Saurabh/Subsystem1/Subsystem/Computing Distance covered
       Per Tick */
    app_Main10msMgr_DW.is_active_c7_app_Main10msMgr = 1U;

    /* Entry Internal: Saurabh/Subsystem1/Subsystem/Computing Distance covered
       Per Tick */
    /* Transition: '<S85>:13' */
    app_Main10msMgr_DW.is_c7_app_Main10msMgr = app_Main10msMgr_IN_Default;

    /* Entry Internal 'Default': '<S85>:12' */
    /* Transition: '<S85>:7' */
    app_Main10msMgr_DW.is_Default = app_Main10msMgr_IN_Default;
    app_Main10msMgr_DW.temporalCounter_i1 = 0U;

    /* Entry 'Default': '<S85>:9' */
    RTE_Write_Updated_Data(app_Main10msMgr_DW.UnitDelay_DSTATE);
  } else if (app_Main10msMgr_DW.is_c7_app_Main10msMgr ==
             app_Main10msMgr_IN_Default) {
    /* During 'Default': '<S85>:12' */
    if (RTE_Read_Eraseee() != 0.0) {
      /* Transition: '<S85>:15' */
      /* Exit Internal 'Default': '<S85>:12' */
      app_Main10msMgr_DW.is_Default = 0;
      app_Main10msMgr_DW.is_c7_app_Main10msMgr = app_Main10msMgr_IN_Erase_l;

      /* Entry 'Erase': '<S85>:14' */
      RTE_Write_Updated_Data(20.0);
    } else if (app_Main10msMgr_DW.is_Default == app_Main10msMgr_IN_Default) {
      /* During 'Default': '<S85>:9' */
      if (app_Main10msMgr_DW.temporalCounter_i1 >= 50U) {
        /* Transition: '<S85>:8' */
        app_Main10msMgr_DW.is_Default = app_Main10msMgr_IN_step1;

        /* Entry 'step1': '<S85>:1' */
        RTE_Write_Updated_Data(RTE_Read_Updated_Data() + rtb_Divide2);
      } else {
        RTE_Write_Updated_Data(app_Main10msMgr_DW.UnitDelay_DSTATE);
      }
    } else {
      /* During 'step1': '<S85>:1' */
      /* Transition: '<S85>:3' */
      app_Main10msMgr_DW.is_Default = app_Main10msMgr_IN_step1;

      /* Entry 'step1': '<S85>:1' */
      RTE_Write_Updated_Data(RTE_Read_Updated_Data() + rtb_Divide2);
    }
  } else {
    /* During 'Erase': '<S85>:14' */
    if (!(RTE_Read_Eraseee() != 0.0)) {
      /* Transition: '<S85>:16' */
      app_Main10msMgr_DW.is_c7_app_Main10msMgr = app_Main10msMgr_IN_Default;

      /* Entry Internal 'Default': '<S85>:12' */
      /* Transition: '<S85>:7' */
      app_Main10msMgr_DW.is_Default = app_Main10msMgr_IN_Default;
      app_Main10msMgr_DW.temporalCounter_i1 = 0U;

      /* Entry 'Default': '<S85>:9' */
      RTE_Write_Updated_Data(app_Main10msMgr_DW.UnitDelay_DSTATE);
    } else {
      RTE_Write_Updated_Data(20.0);
    }
  }

  /* End of Chart: '<S83>/Computing Distance covered  Per Tick' */

  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal53' */
  app_Main10msMgr_COM_WriteSignal53();

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal53' */

  /* Inport: '<S1>/OdoReading3' incorporates:
   *  Inport: '<Root>/OdoReading3'
   */
  RTE_Write_ReadData(RTE_Read_OdoReading3());

  /* SignalConversion generated from: '<S1>/D1' incorporates:
   *  Constant: '<S77>/Constant'
   */
  RTE_Write_D1(app_Main10msMgr_P.Constant_Value);

  /* SignalConversion generated from: '<S1>/DataCount' */
  RTE_Write_DataCount(0.0);

  /* SignalConversion generated from: '<S1>/Data_Count2' */
  RTE_Write_Data_Count2(RTE_Read_ReadData());

  /* SignalConversion generated from: '<S1>/Readdata2' */
  RTE_Write_Readdata2(RTE_Read_ReadData());

  /* Inport: '<S1>/RTE_EEPROM_Value_Write' incorporates:
   *  Inport: '<Root>/RTE_EEPROM_Value_Write'
   */
  RTE_Write_RTE_EEPROM_Value_Read(RTE_Read_RTE_EEPROM_Value_Write());

  /* RelationalOperator: '<S82>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S82>/Delay Input1'
   */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S84>:1' */
  /* '<S84>:1:8' */
  rtb_FixPtRelationalOperator = (RTE_Read_Updated_Data() !=
    app_Main10msMgr_DW.DelayInput1_DSTATE);

  /* Chart: '<S77>/Chart' incorporates:
   *  Inport: '<Root>/Speed'
   */
  if (app_Main10msMgr_DW.temporalCounter_i1_n < 63U) {
    app_Main10msMgr_DW.temporalCounter_i1_n++;
  }

  /* Gateway: Saurabh/Subsystem1/Chart */
  /* During: Saurabh/Subsystem1/Chart */
  if (app_Main10msMgr_DW.is_active_c3_app_Main10msMgr == 0U) {
    /* Entry: Saurabh/Subsystem1/Chart */
    app_Main10msMgr_DW.is_active_c3_app_Main10msMgr = 1U;

    /* Entry Internal: Saurabh/Subsystem1/Chart */
    /* Transition: '<S81>:37' */
    app_Main10msMgr_DW.is_c3_app_Main10msMgr = app_Main10msMgr_IN_Init;
    app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

    /* Entry 'Init': '<S81>:38' */
    RTE_Write_RTE_Erase_Enable(0.0);
    RTE_Write_Erase(0.0);
    RTE_Write_RTE_Write_Enable(0.0);
    RTE_Write_Write(0.0);
  } else {
    switch (app_Main10msMgr_DW.is_c3_app_Main10msMgr) {
     case app_Main10msMgr_IN_Init:
      /* During 'Init': '<S81>:38' */
      if ((app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) && ((RTE_Read_Speed()
            > 0.0) && rtb_FixPtRelationalOperator)) {
        /* Transition: '<S81>:39' */
        /* Transition: '<S81>:77' */
        app_Main10msMgr_DW.is_c3_app_Main10msMgr = app_Main10msMgr_IN_ReadFormat;
        app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

        /* Entry 'ReadFormat': '<S81>:67' */
      } else {
        RTE_Write_RTE_Erase_Enable(0.0);
        RTE_Write_Erase(0.0);
        RTE_Write_RTE_Write_Enable(0.0);
        RTE_Write_Write(0.0);
      }
      break;

     case app_Main10msMgr_IN_ReadFormat:
      /* During 'ReadFormat': '<S81>:67' */
      if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
        /* Transition: '<S81>:71' */
        app_Main10msMgr_DW.is_c3_app_Main10msMgr = app_Main10msMgr_IN_Write;

        /* Entry Internal 'Write': '<S81>:69' */
        /* Transition: '<S81>:70' */
        app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Erase;
        app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

        /* Entry 'Erase': '<S81>:18' */
        RTE_Write_RTE_Erase_Enable(1.0);
      }
      break;

     default:
      /* During 'Write': '<S81>:69' */
      switch (app_Main10msMgr_DW.is_Write) {
       case app_Main10msMgr_IN_Erase:
        /* During 'Erase': '<S81>:18' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:25' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Erase1;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Erase1': '<S81>:24' */
          RTE_Write_RTE_Erase_Enable(0.0);
        }
        break;

       case app_Main10msMgr_IN_Erase1:
        /* During 'Erase1': '<S81>:24' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:33' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Erase2;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Erase2': '<S81>:54' */
          RTE_Write_Erase(1.0);
        }
        break;

       case app_Main10msMgr_IN_Erase2:
        /* During 'Erase2': '<S81>:54' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:55' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Erase3;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Erase3': '<S81>:32' */
          RTE_Write_Erase(0.0);
        }
        break;

       case app_Main10msMgr_IN_Erase3:
        /* During 'Erase3': '<S81>:32' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:35' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Write_d;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Write': '<S81>:56' */
          RTE_Write_RTE_Write_Enable(1.0);
        }
        break;

       case app_Main10msMgr_IN_Write_d:
        /* During 'Write': '<S81>:56' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:58' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Write1;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Write1': '<S81>:57' */
          RTE_Write_RTE_Write_Enable(0.0);
        }
        break;

       case app_Main10msMgr_IN_Write1:
        /* During 'Write1': '<S81>:57' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:62' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Write2;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Write2': '<S81>:61' */
          RTE_Write_Write(1.0);
        }
        break;

       case app_Main10msMgr_IN_Write2:
        /* During 'Write2': '<S81>:61' */
        if (app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) {
          /* Transition: '<S81>:42' */
          app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Write3;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Write3': '<S81>:41' */
          RTE_Write_Write(0.0);
        }
        break;

       default:
        /* During 'Write3': '<S81>:41' */
        if (!(RTE_Read_Speed() != 0.0)) {
          /* Transition: '<S81>:75' */
          app_Main10msMgr_DW.is_Write = 0;
          app_Main10msMgr_DW.is_c3_app_Main10msMgr = app_Main10msMgr_IN_Init;
          app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

          /* Entry 'Init': '<S81>:38' */
          RTE_Write_RTE_Erase_Enable(0.0);
          RTE_Write_Erase(0.0);
          RTE_Write_RTE_Write_Enable(0.0);
          RTE_Write_Write(0.0);
        } else {
          if ((app_Main10msMgr_DW.temporalCounter_i1_n >= 50U) &&
              rtb_FixPtRelationalOperator) {
            /* Transition: '<S81>:46' */
            /* Transition: '<S81>:48' */
            /* Transition: '<S81>:49' */
            app_Main10msMgr_DW.is_Write = app_Main10msMgr_IN_Erase;
            app_Main10msMgr_DW.temporalCounter_i1_n = 0U;

            /* Entry 'Erase': '<S81>:18' */
            RTE_Write_RTE_Erase_Enable(1.0);
          }
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<S77>/Chart' */

  /* DataTypeConversion: '<S77>/Data Type Conversion2' incorporates:
   *  DataTypeConversion: '<S77>/Data Type Conversion1'
   */
  rtb_Divide2 = floor(RTE_Read_Updated_Data());
  if (rtIsNaN(rtb_Divide2) || rtIsInf(rtb_Divide2)) {
    tmp = 0.0;
    rtb_Divide2 = 0.0;
  } else {
    tmp = fmod(rtb_Divide2, 65536.0);
    rtb_Divide2 = fmod(rtb_Divide2, 256.0);
  }

  /* Outputs for Atomic SubSystem: '<S77>/Bit Shift' */
  /* DataTypeConversion: '<S77>/Data Type Conversion4' incorporates:
   *  DataTypeConversion: '<S77>/Data Type Conversion2'
   *  MATLAB Function: '<S80>/bit_shift'
   */
  RTE_Write_D2((uint8_T)((uint32_T)(tmp < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-tmp : (int32_T)(uint16_T)tmp) >> 8));

  /* End of Outputs for SubSystem: '<S77>/Bit Shift' */

  /* DataTypeConversion: '<S77>/Data Type Conversion5' incorporates:
   *  Constant: '<S77>/Constant6'
   *  DataTypeConversion: '<S77>/Data Type Conversion1'
   *  S-Function (sfix_bitop): '<S77>/Bitwise OR'
   */
  RTE_Write_D3((uint8_T)((rtb_Divide2 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-rtb_Divide2 : (int32_T)(uint8_T)rtb_Divide2) &
    app_Main10msMgr_P.Constant6_Value_e));

  /* Rounding: '<S77>/Floor3' incorporates:
   *  Constant: '<S77>/Constant3'
   *  Constant: '<S77>/Constant5'
   *  Product: '<S77>/Divide3'
   */
  rtb_Divide2 = floor(app_Main10msMgr_P.Constant3_Value /
                      app_Main10msMgr_P.Constant5_Value);

  /* Rounding: '<S77>/Floor2' incorporates:
   *  Constant: '<S77>/Constant3'
   *  Constant: '<S77>/Constant4'
   *  Product: '<S77>/Divide2'
   */
  RTE_Write_A1(floor(app_Main10msMgr_P.Constant3_Value /
                     app_Main10msMgr_P.Constant4_Value));

  /* Sum: '<S77>/Add2' incorporates:
   *  Constant: '<S77>/Constant5'
   *  Product: '<S77>/Product2'
   */
  RTE_Write_A2(rtb_Divide2 - RTE_Read_A1() * app_Main10msMgr_P.Constant5_Value);

  /* Sum: '<S77>/Add3' incorporates:
   *  Constant: '<S77>/Constant3'
   *  Constant: '<S77>/Constant5'
   *  Product: '<S77>/Product3'
   */
  RTE_Write_A3(app_Main10msMgr_P.Constant3_Value - rtb_Divide2 *
               app_Main10msMgr_P.Constant5_Value);

  /* Chart: '<S1>/Chart1' */
  if (app_Main10msMgr_DW.temporalCounter_i1_b < 1U) {
    app_Main10msMgr_DW.temporalCounter_i1_b++;
  }

  /* Gateway: Saurabh/Chart1 */
  /* During: Saurabh/Chart1 */
  if (app_Main10msMgr_DW.is_active_c2_app_Main10msMgr == 0U) {
    /* Entry: Saurabh/Chart1 */
    app_Main10msMgr_DW.is_active_c2_app_Main10msMgr = 1U;

    /* Entry Internal: Saurabh/Chart1 */
    /* Transition: '<S30>:2' */
    app_Main10msMgr_DW.is_c2_app_Main10msMgr = app_Main10msMgr_IN_OFF;
    app_Main10msMgr_DW.temporalCounter_i1_b = 0U;

    /* Entry 'OFF': '<S30>:1' */
    rtb_Divide2 = 0.0;
  } else if (app_Main10msMgr_DW.is_c2_app_Main10msMgr == app_Main10msMgr_IN_OFF)
  {
    /* During 'OFF': '<S30>:1' */
    if (app_Main10msMgr_DW.temporalCounter_i1_b >= 1U) {
      /* Transition: '<S30>:4' */
      app_Main10msMgr_DW.is_c2_app_Main10msMgr = app_Main10msMgr_IN_ON;
      app_Main10msMgr_DW.temporalCounter_i1_b = 0U;

      /* Entry 'ON': '<S30>:3' */
      rtb_Divide2 = 1.0;
    } else {
      rtb_Divide2 = 0.0;
    }
  } else {
    /* During 'ON': '<S30>:3' */
    if (app_Main10msMgr_DW.temporalCounter_i1_b >= 1U) {
      /* Transition: '<S30>:5' */
      app_Main10msMgr_DW.is_c2_app_Main10msMgr = app_Main10msMgr_IN_OFF;
      app_Main10msMgr_DW.temporalCounter_i1_b = 0U;

      /* Entry 'OFF': '<S30>:1' */
      rtb_Divide2 = 0.0;
    } else {
      rtb_Divide2 = 1.0;
    }
  }

  /* End of Chart: '<S1>/Chart1' */

  /* DataTypeConversion: '<S75>/Data Type Conversion1' incorporates:
   *  Gain: '<S75>/Gain'
   *  Gain: '<S75>/Gain1'
   *  Gain: '<S75>/Gain10'
   *  Gain: '<S75>/Gain11'
   *  Gain: '<S75>/Gain12'
   *  Gain: '<S75>/Gain13'
   *  Gain: '<S75>/Gain14'
   *  Gain: '<S75>/Gain15'
   *  Gain: '<S75>/Gain2'
   *  Gain: '<S75>/Gain3'
   *  Gain: '<S75>/Gain4'
   *  Gain: '<S75>/Gain5'
   *  Gain: '<S75>/Gain6'
   *  Gain: '<S75>/Gain7'
   *  Gain: '<S75>/Gain8'
   *  Gain: '<S75>/Gain9'
   *  Inport: '<Root>/LSD1_OUT_10_P119'
   *  Inport: '<Root>/LSD1_OUT_11_P121'
   *  Inport: '<Root>/LSD1_OUT_12_P112'
   *  Inport: '<Root>/LSD1_OUT_13_P114'
   *  Inport: '<Root>/LSD1_OUT_14_P105'
   *  Inport: '<Root>/LSD1_OUT_15_P107'
   *  Inport: '<Root>/LSD1_OUT_16_P100'
   *  Inport: '<Root>/LSD1_OUT_2_P89'
   *  Inport: '<Root>/LSD1_OUT_3_P88'
   *  Inport: '<Root>/LSD1_OUT_4_P87'
   *  Inport: '<Root>/LSD1_OUT_5_P96'
   *  Inport: '<Root>/LSD1_OUT_6_P94'
   *  Inport: '<Root>/LSD1_OUT_7_P103'
   *  Inport: '<Root>/LSD1_OUT_8_P101'
   *  Inport: '<Root>/LSD1_OUT_9_P128'
   *  Sum: '<S75>/Add1'
   */
  rtb_Divide2 = floor(((((((((((((((app_Main10msMgr_P.Gain15_Gain *
    RTE_Read_LSD1_OUT_16_P100() + app_Main10msMgr_P.Gain14_Gain *
    RTE_Read_LSD1_OUT_15_P107()) + app_Main10msMgr_P.Gain13_Gain *
    RTE_Read_LSD1_OUT_14_P105()) + app_Main10msMgr_P.Gain12_Gain *
    RTE_Read_LSD1_OUT_13_P114()) + app_Main10msMgr_P.Gain11_Gain *
    RTE_Read_LSD1_OUT_12_P112()) + app_Main10msMgr_P.Gain10_Gain *
    RTE_Read_LSD1_OUT_11_P121()) + app_Main10msMgr_P.Gain9_Gain *
    RTE_Read_LSD1_OUT_10_P119()) + app_Main10msMgr_P.Gain8_Gain *
    RTE_Read_LSD1_OUT_9_P128()) + app_Main10msMgr_P.Gain7_Gain *
    RTE_Read_LSD1_OUT_8_P101()) + app_Main10msMgr_P.Gain6_Gain *
    RTE_Read_LSD1_OUT_7_P103()) + app_Main10msMgr_P.Gain5_Gain *
    RTE_Read_LSD1_OUT_6_P94()) + app_Main10msMgr_P.Gain4_Gain *
    RTE_Read_LSD1_OUT_5_P96()) + app_Main10msMgr_P.Gain3_Gain *
    RTE_Read_LSD1_OUT_4_P87()) + app_Main10msMgr_P.Gain2_Gain *
                        RTE_Read_LSD1_OUT_3_P88()) +
                       app_Main10msMgr_P.Gain1_Gain * RTE_Read_LSD1_OUT_2_P89())
                      + app_Main10msMgr_P.Gain_Gain * rtb_Divide2);
  if (rtIsNaN(rtb_Divide2) || rtIsInf(rtb_Divide2)) {
    rtb_Divide2 = 0.0;
  } else {
    rtb_Divide2 = fmod(rtb_Divide2, 65536.0);
  }

  RTE_Write_LSD_DATA((uint16_T)(rtb_Divide2 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-rtb_Divide2 : (int32_T)(uint16_T)rtb_Divide2));

  /* End of DataTypeConversion: '<S75>/Data Type Conversion1' */

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  app_Main10msMgr_B.Compare = (RTE_Read_LSD_DATA() >
    app_Main10msMgr_P.CompareToConstant_const);

  /* Outputs for Atomic SubSystem: '<S75>/IO_WriteDigitalOutput2' */
  app_Main10msMgr_IO_WriteDigitalOutput2();

  /* End of Outputs for SubSystem: '<S75>/IO_WriteDigitalOutput2' */

  /* DataTypeConversion: '<S31>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   *  Gain: '<S31>/Gain16'
   *  Gain: '<S31>/Gain17'
   *  Gain: '<S31>/Gain18'
   *  Gain: '<S31>/Gain19'
   *  Gain: '<S31>/Gain20'
   *  Gain: '<S31>/Gain21'
   *  Gain: '<S31>/Gain22'
   *  Gain: '<S31>/Gain23'
   *  Gain: '<S31>/Gain24'
   *  Gain: '<S31>/Gain25'
   *  Gain: '<S31>/Gain26'
   *  Gain: '<S31>/Gain27'
   *  Gain: '<S31>/Gain28'
   *  Gain: '<S31>/Gain29'
   *  Gain: '<S31>/Gain30'
   *  Gain: '<S31>/Gain31'
   *  Inport: '<Root>/HSD1_P122'
   *  Inport: '<Root>/HSD2_P115'
   *  Inport: '<Root>/HSD3_P123'
   *  Inport: '<Root>/HSD4_P108'
   *  Sum: '<S31>/Add2'
   */
  rtb_Divide2 = floor(((((((((((((((app_Main10msMgr_P.Gain23_Gain *
    app_Main10msMgr_P.Constant_Value_e + app_Main10msMgr_P.Gain22_Gain *
    app_Main10msMgr_P.Constant1_Value) + app_Main10msMgr_P.Gain21_Gain *
    app_Main10msMgr_P.Constant3_Value_l) + app_Main10msMgr_P.Gain20_Gain *
    app_Main10msMgr_P.Constant4_Value_i) + app_Main10msMgr_P.Gain19_Gain *
    app_Main10msMgr_P.Constant5_Value_m) + app_Main10msMgr_P.Gain18_Gain *
    app_Main10msMgr_P.Constant6_Value) + app_Main10msMgr_P.Gain31_Gain *
    app_Main10msMgr_P.Constant2_Value_m) + app_Main10msMgr_P.Gain30_Gain *
    app_Main10msMgr_P.Constant7_Value) + app_Main10msMgr_P.Gain29_Gain *
    app_Main10msMgr_P.Constant8_Value) + app_Main10msMgr_P.Gain28_Gain *
    app_Main10msMgr_P.Constant9_Value) + app_Main10msMgr_P.Gain27_Gain *
    app_Main10msMgr_P.Constant10_Value) + app_Main10msMgr_P.Gain26_Gain *
    app_Main10msMgr_P.Constant11_Value) + app_Main10msMgr_P.Gain25_Gain *
    RTE_Read_HSD4_P108()) + app_Main10msMgr_P.Gain24_Gain * RTE_Read_HSD3_P123())
                       + app_Main10msMgr_P.Gain17_Gain * RTE_Read_HSD2_P115()) +
                      app_Main10msMgr_P.Gain16_Gain * RTE_Read_HSD1_P122());
  if (rtIsNaN(rtb_Divide2) || rtIsInf(rtb_Divide2)) {
    rtb_Divide2 = 0.0;
  } else {
    rtb_Divide2 = fmod(rtb_Divide2, 65536.0);
  }

  RTE_Write_HSD_DATA((uint16_T)(rtb_Divide2 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-rtb_Divide2 : (int32_T)(uint16_T)rtb_Divide2));

  /* End of DataTypeConversion: '<S31>/Data Type Conversion2' */

  /* Inport: '<S1>/HBridge2_Direction_Pin' incorporates:
   *  Inport: '<Root>/HBridge2_Direction_Pin'
   */
  RTE_Write_HBridge2_Direction_Pin_out(RTE_Read_HBridge2_Direction_Pin());

  /* Inport: '<S1>/HBridge2' incorporates:
   *  Inport: '<Root>/HBridge2'
   */
  RTE_Write_HBridge2_Out(RTE_Read_HBridge2());

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput16' */
  app_Main10msMgr_IO_WriteDigitalOutput16();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput16' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput1' */
  app_Main10msMgr_IO_WriteDigitalOutput();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput1' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput5' */
  app_Main10msMgr_IO_WriteDigitalOutput5();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput5' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput6' */
  app_Main10msMgr_IO_WriteDigitalOutput6();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput6' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput7' */
  app_Main10msMgr_IO_WriteDigitalOutput7();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput7' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput8' */
  app_Main10msMgr_IO_WriteDigitalOutput8();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput8' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput9' */
  app_Main10msMgr_IO_WriteDigitalOutput9();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput9' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput10' */
  app_Main10msMgr_IO_WriteDigitalOutput10();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput10' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput11' */
  app_Main10msMgr_IO_WriteDigitalOutput11();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput11' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput12' */
  app_Main10msMgr_IO_WriteDigitalOutput12();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput12' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput13' */
  app_Main10msMgr_IO_WriteDigitalOutput13();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput13' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput14' */
  app_Main10msMgr_IO_WriteDigitalOutput14();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput14' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput15' */
  app_Main10msMgr_IO_WriteDigitalOutput15();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput15' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput4' */
  app_Main10msMgr_IO_WriteDigitalOutput4();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput4' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_WriteDigitalOutput3' */
  app_Main10msMgr_IO_WriteDigitalOutput3();

  /* End of Outputs for SubSystem: '<S1>/IO_WriteDigitalOutput3' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm5' */
  app_Main10msMgr_IO_SetPwm5();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm5' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm6' */
  app_Main10msMgr_IO_SetPwm6();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm6' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm1' */
  app_Main10msMgr_IO_SetPwm();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm1' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm2' */
  app_Main10msMgr_IO_SetPwm2();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm2' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm3' */
  app_Main10msMgr_IO_SetPwm3();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm3' */

  /* Outputs for Atomic SubSystem: '<S1>/IO_SetPwm4' */
  app_Main10msMgr_IO_SetPwm4();

  /* End of Outputs for SubSystem: '<S1>/IO_SetPwm4' */

  /* Chart: '<S1>/Chart' */
  if (app_Main10msMgr_DW.temporalCounter_i1_f < 127U) {
    app_Main10msMgr_DW.temporalCounter_i1_f++;
  }

  /* Gateway: Saurabh/Chart */
  /* During: Saurabh/Chart */
  if (app_Main10msMgr_DW.is_active_c1_app_Main10msMgr == 0U) {
    /* Entry: Saurabh/Chart */
    app_Main10msMgr_DW.is_active_c1_app_Main10msMgr = 1U;

    /* Entry Internal: Saurabh/Chart */
    /* Transition: '<S29>:2' */
    app_Main10msMgr_DW.temporalCounter_i1_f = 0U;

    /* Entry 'X': '<S29>:1' */
    app_Main10msMgr_B.Counter++;
  } else {
    /* During 'X': '<S29>:1' */
    if ((app_Main10msMgr_DW.temporalCounter_i1_f >= 100U) &&
        (app_Main10msMgr_B.Counter >= 100.0)) {
      /* Transition: '<S29>:4' */
      /* Transition: '<S29>:5' */
      app_Main10msMgr_B.Counter = 0.0;
      app_Main10msMgr_DW.temporalCounter_i1_f = 0U;

      /* Entry 'X': '<S29>:1' */
      app_Main10msMgr_B.Counter++;
    } else {
      app_Main10msMgr_B.Counter++;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal49' */
  app_Main10msMgr_COM_WriteSignal();

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal49' */

  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal50' */
  app_Main10msMgr_COM_WriteSignal50();

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal50' */

  /* Outputs for Atomic SubSystem: '<S1>/COM_WriteSignal52' */
  app_Main10msMgr_COM_WriteSignal52();

  /* End of Outputs for SubSystem: '<S1>/COM_WriteSignal52' */

  /* Update for UnitDelay: '<S77>/Unit Delay' */
  app_Main10msMgr_DW.UnitDelay_DSTATE = RTE_Read_ReadData();

  /* Update for UnitDelay: '<S82>/Delay Input1' */
  app_Main10msMgr_DW.DelayInput1_DSTATE = RTE_Read_Updated_Data();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' */
}

/* Model initialize function */
void app_Main10msMgr_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)app_Main10msMgr_M, 0,
                sizeof(RT_MODEL_app_Main10msMgr_T));

  /* block I/O */
  (void) memset(((void *) &app_Main10msMgr_B), 0,
                sizeof(B_app_Main10msMgr_T));

  /* states (dwork) */
  (void) memset((void *)&app_Main10msMgr_DW, 0,
                sizeof(DW_app_Main10msMgr_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  app_Main10msMgr_InitializeDataMapInfo();

  {
    real_T Constant;

    /* Start for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' incorporates:
     *  SubSystem: '<Root>/Saurabh'
     */
    /* Start for Constant: '<S77>/Constant' */
    Constant = app_Main10msMgr_P.Constant_Value;

    /* End of Start for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' incorporates:
     *  SubSystem: '<Root>/Saurabh'
     */
    /* InitializeConditions for UnitDelay: '<S77>/Unit Delay' */
    app_Main10msMgr_DW.UnitDelay_DSTATE =
      app_Main10msMgr_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S82>/Delay Input1' */
    app_Main10msMgr_DW.DelayInput1_DSTATE = app_Main10msMgr_P.DetectChange_vinit;

    /* SystemInitialize for SignalConversion generated from: '<S1>/D1' */
    RTE_Write_D1(Constant);

    /* SystemInitialize for SignalConversion generated from: '<S1>/DataCount' */
    RTE_Write_DataCount(0.0);

    /* SystemInitialize for Chart: '<S77>/Chart' */
    app_Main10msMgr_DW.is_Write = 0;
    app_Main10msMgr_DW.temporalCounter_i1_n = 0U;
    app_Main10msMgr_DW.is_active_c3_app_Main10msMgr = 0U;
    app_Main10msMgr_DW.is_c3_app_Main10msMgr = 0;
    RTE_Write_Erase(0.0);
    RTE_Write_RTE_Write_Enable(0.0);
    RTE_Write_Write(0.0);

    /* SystemInitialize for Chart: '<S83>/Computing Distance covered  Per Tick' */
    app_Main10msMgr_DW.is_Default = 0;
    app_Main10msMgr_DW.temporalCounter_i1 = 0U;
    app_Main10msMgr_DW.is_active_c7_app_Main10msMgr = 0U;
    app_Main10msMgr_DW.is_c7_app_Main10msMgr = 0;
    RTE_Write_Updated_Data(0.0);

    /* SystemInitialize for Chart: '<S1>/Chart1' */
    app_Main10msMgr_DW.temporalCounter_i1_b = 0U;
    app_Main10msMgr_DW.is_active_c2_app_Main10msMgr = 0U;
    app_Main10msMgr_DW.is_c2_app_Main10msMgr = 0;

    /* SystemInitialize for Chart: '<S1>/Chart' */
    app_Main10msMgr_DW.temporalCounter_i1_f = 0U;
    app_Main10msMgr_DW.is_active_c1_app_Main10msMgr = 0U;
    app_Main10msMgr_B.Counter = 0.0;

    /* SystemInitialize for Outport: '<S1>/APP_10MS_OUT1' */
    RTE_Write_App_10ms(app_Main10msMgr_P.APP_10MS_OUT1_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID2_P60' */
    RTE_Write_ADC_5v_ID2_P60(app_Main10msMgr_P.ADC_5v_ID2_P60_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID8_P30' */
    RTE_Write_ADC_5v_ID8_P30(app_Main10msMgr_P.ADC_5v_ID8_P30_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID9_P29' */
    RTE_Write_ADC_5v_ID9_P29(app_Main10msMgr_P.ADC_5v_ID9_P29_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID0_P69' */
    RTE_Write_ADC_5v_ID0_P69(app_Main10msMgr_P.ADC_5v_ID0_P69_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID1_P59' */
    RTE_Write_ADC_5v_ID1_P59(app_Main10msMgr_P.ADC_5v_ID1_P59_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID3_P49' */
    RTE_Write_ADC_5v_ID3_P49(app_Main10msMgr_P.ADC_5v_ID3_P49_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID5_P50' */
    RTE_Write_ADC_5v_ID5_P50(app_Main10msMgr_P.ADC_5v_ID5_P50_Y0);

    /* SystemInitialize for Outport: '<S1>/Power_Supply24v' */
    RTE_Write_ADC_Internal_ID4(app_Main10msMgr_P.Power_Supply24v_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID6_P39' */
    RTE_Write_ADC_5v_ID6_P39(app_Main10msMgr_P.ADC_5v_ID6_P39_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID7_P40' */
    RTE_Write_ADC_5v_ID7_P40(app_Main10msMgr_P.ADC_5v_ID7_P40_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID12_P73' */
    RTE_Write_ADC_5v_ID12_P73(app_Main10msMgr_P.ADC_5v_ID12_P73_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID10_P75' */
    RTE_Write_ADC_5v_ID10_P75(app_Main10msMgr_P.ADC_5v_ID10_P75_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID11_P74' */
    RTE_Write_ADC_5v_ID11_P74(app_Main10msMgr_P.ADC_5v_ID11_P74_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID13_P72' */
    RTE_Write_ADC_5v_ID13_P72(app_Main10msMgr_P.ADC_5v_ID13_P72_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID14_P71' */
    RTE_Write_ADC_5v_ID14_P71(app_Main10msMgr_P.ADC_5v_ID14_P71_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID15_P80' */
    RTE_Write_ADC_5v_ID15_P80(app_Main10msMgr_P.ADC_5v_ID15_P80_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID16_P79' */
    RTE_Write_ADC_5v_ID16_P79(app_Main10msMgr_P.ADC_5v_ID16_P79_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID17_P78' */
    RTE_Write_ADC_5v_ID17_P78(app_Main10msMgr_P.ADC_5v_ID17_P78_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID18_P77' */
    RTE_Write_ADC_5v_ID18_P77(app_Main10msMgr_P.ADC_5v_ID18_P77_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID19_P76' */
    RTE_Write_ADC_5v_ID19_P76(app_Main10msMgr_P.ADC_5v_ID19_P76_Y0);

    /* SystemInitialize for Outport: '<S1>/ADC_5v_ID20_P70' */
    RTE_Write_ADC_5v_ID20_P70(app_Main10msMgr_P.ADC_5v_ID20_P70_Y0);

    /* SystemInitialize for Outport: '<S1>/Temp1' */
    RTE_Write_Temp1(app_Main10msMgr_P.Temp1_Y0);

    /* SystemInitialize for Outport: '<S1>/Temp2' */
    RTE_Write_Temp2(app_Main10msMgr_P.Temp2_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P61_AH' */
    RTE_Write_DIN_P61_AH(app_Main10msMgr_P.DIN_P61_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P51_AH' */
    RTE_Write_DIN_P51_AH(app_Main10msMgr_P.DIN_P51_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P22_AH' */
    RTE_Write_DIN_P22_AH(app_Main10msMgr_P.DIN_P22_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P34_AL' */
    RTE_Write_DIN_P34_AL(app_Main10msMgr_P.DIN_P34_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P27_AH' */
    RTE_Write_DIN_P27_AH(app_Main10msMgr_P.DIN_P27_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P42_AH' */
    RTE_Write_DIN_P42_AH(app_Main10msMgr_P.DIN_P42_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P21_AH' */
    RTE_Write_DIN_P21_AH(app_Main10msMgr_P.DIN_P21_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P31_AH' */
    RTE_Write_DIN_P31_AH(app_Main10msMgr_P.DIN_P31_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P23_AH' */
    RTE_Write_DIN_P23_AH(app_Main10msMgr_P.DIN_P23_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P41_AH' */
    RTE_Write_DIN_P41_AH(app_Main10msMgr_P.DIN_P41_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P37_AH' */
    RTE_Write_DIN_P37_AH(app_Main10msMgr_P.DIN_P37_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P25_AL' */
    RTE_Write_DIN_P25_AL(app_Main10msMgr_P.DIN_P25_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P26_AL' */
    RTE_Write_DIN_P26_AL(app_Main10msMgr_P.DIN_P26_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P35_AL' */
    RTE_Write_DIN_P35_AL(app_Main10msMgr_P.DIN_P35_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P33_AH' */
    RTE_Write_DIN_P33_AH(app_Main10msMgr_P.DIN_P33_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P36_AL' */
    RTE_Write_DIN_P36_AL(app_Main10msMgr_P.DIN_P36_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P24_AH' */
    RTE_Write_DIN_P24_AH(app_Main10msMgr_P.DIN_P24_AH_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P28_AL' */
    RTE_Write_DIN_P28_AL(app_Main10msMgr_P.DIN_P28_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/DIN_P38_AL' */
    RTE_Write_DIN_P38_AL(app_Main10msMgr_P.DIN_P38_AL_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P13_Freq' */
    RTE_Write_PWM_IN_P13_Freq(app_Main10msMgr_P.PWM_IN_P13_Freq_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P13_Duty' */
    RTE_Write_PWM_IN_P13_Duty(app_Main10msMgr_P.PWM_IN_P13_Duty_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P14_Freq' */
    RTE_Write_PWM_IN_P14_Freq(app_Main10msMgr_P.PWM_IN_P14_Freq_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P14_Duty' */
    RTE_Write_PWM_IN_P14_Duty(app_Main10msMgr_P.PWM_IN_P14_Duty_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P62_Freq' */
    RTE_Write_PWM_IN_P62_Freq(app_Main10msMgr_P.PWM_IN_P62_Freq_Y0);

    /* SystemInitialize for Outport: '<S1>/PWM_IN_P62_Duty' */
    RTE_Write_PWM_IN_P62_Duty(app_Main10msMgr_P.PWM_IN_P62_Duty_Y0);

    /* SystemInitialize for Outport: '<S1>/ReadData' */
    RTE_Write_ReadData(app_Main10msMgr_P.ReadData_Y0);

    /* SystemInitialize for Outport: '<S1>/Data_Count2' */
    RTE_Write_Data_Count2(app_Main10msMgr_P.Data_Count2_Y0);

    /* SystemInitialize for Outport: '<S1>/D2' */
    RTE_Write_D2(app_Main10msMgr_P.D2_Y0);

    /* SystemInitialize for Outport: '<S1>/D3' */
    RTE_Write_D3(app_Main10msMgr_P.D3_Y0);

    /* SystemInitialize for Outport: '<S1>/A1' */
    RTE_Write_A1(app_Main10msMgr_P.A1_Y0);

    /* SystemInitialize for Outport: '<S1>/A2' */
    RTE_Write_A2(app_Main10msMgr_P.A2_Y0);

    /* SystemInitialize for Outport: '<S1>/A3' */
    RTE_Write_A3(app_Main10msMgr_P.A3_Y0);

    /* SystemInitialize for Outport: '<S1>/Readdata2' */
    RTE_Write_Readdata2(app_Main10msMgr_P.Readdata2_Y0);

    /* SystemInitialize for Outport: '<S1>/RTE_EEPROM_Value_Read' */
    RTE_Write_RTE_EEPROM_Value_Read(app_Main10msMgr_P.RTE_EEPROM_Value_Read_Y0);

    /* SystemInitialize for Outport: '<S1>/LSD_Data' */
    RTE_Write_LSD_DATA(app_Main10msMgr_P.LSD_Data_Y0);

    /* SystemInitialize for Outport: '<S1>/HSD_Data' */
    RTE_Write_HSD_DATA(app_Main10msMgr_P.HSD_Data_Y0);

    /* SystemInitialize for Outport: '<S1>/HBridge2_Direction_Pin_out' */
    RTE_Write_HBridge2_Direction_Pin_out
      (app_Main10msMgr_P.HBridge2_Direction_Pin_out_Y0);

    /* SystemInitialize for Outport: '<S1>/HBridge2_Out' */
    RTE_Write_HBridge2_Out(app_Main10msMgr_P.HBridge2_Out_Y0);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' */
  }
}

/* Model terminate function */
void app_Main10msMgr_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
