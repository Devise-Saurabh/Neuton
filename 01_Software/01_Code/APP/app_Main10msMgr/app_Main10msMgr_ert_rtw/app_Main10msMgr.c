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
 * deMCD Generation Date: Tue Apr 23 17:38:32 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include "app_Main10msMgr_capi.h"
#include "app_Main10msMgr.h"
#include "app_Main10msMgr_private.h"

/* Block signals (default storage) */
B_app_Main10msMgr_T app_Main10msMgr_B;

/* External inputs (root inport signals with default storage) */
ExtU_app_Main10msMgr_T app_Main10msMgr_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_app_Main10msMgr_T app_Main10msMgr_Y;

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
  app_Main10msMgr_B.deMCD_ANLG_Read = fltValue;

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal' */
}

/* Output and update for atomic system: '<S1>/IO_ReadDigitalInput' */
void app_Main10msMgr_IO_ReadDigitalInput(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* S-Function (deMCD_IO_ReadDigitalInput): '<S3>/deMCD_IO_ReadDigitalInput' */
  /* S-Function Block: <S3>/deMCD_IO_ReadDigitalInput */
  /* Insert Comment Here */

  /*deMCD: User Defined Code Starts Here */
  uint8_t u8DigitalValue;
  STATUS_t eStatus;
  eStatus = RTE_Service_IO_eInputRead((uint8_T)
    (app_Main10msMgr_P.IO_ReadDigitalInput_PARAM_ID-1), &u8DigitalValue);
  app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1 = u8DigitalValue;
  if (eStatus == STATUS_OK) {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2 = 1;
  } else {
    app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2 = 0;
  }

  /*deMCD: User Defined Code Ends Here */

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* Outport: '<Root>/P21' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  app_Main10msMgr_Y.P21 = app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1;
}

/* Model step function for TID1 */
void app_Main10msMgr_fcn(void)         /* Explicit Task: app_Main10msMgr_fcn */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/Saurabh'
   */
  /* Outport: '<Root>/App_10ms' incorporates:
   *  Inport: '<Root>/APP_10MS_IN1'
   *  Inport: '<S1>/APP_10MS_IN1'
   */
  app_Main10msMgr_Y.App_10ms = app_Main10msMgr_U.APP_10MS_IN1;

  /* Outputs for Atomic SubSystem: '<S1>/IO_ReadDigitalInput' */
  app_Main10msMgr_IO_ReadDigitalInput();

  /* End of Outputs for SubSystem: '<S1>/IO_ReadDigitalInput' */

  /* Outputs for Atomic SubSystem: '<S1>/ANLG_ReadSignal' */
  app_Main10msMgr_ANLG_ReadSignal();

  /* End of Outputs for SubSystem: '<S1>/ANLG_ReadSignal' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' */
}

/* Model initialize function */
void app_Main10msMgr_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)app_Main10msMgr_M, 0,
                sizeof(RT_MODEL_app_Main10msMgr_T));

  /* block I/O */
  (void) memset(((void *) &app_Main10msMgr_B), 0,
                sizeof(B_app_Main10msMgr_T));

  /* external inputs */
  app_Main10msMgr_U.APP_10MS_IN1 = 0.0;

  /* external outputs */
  (void) memset((void *)&app_Main10msMgr_Y, 0,
                sizeof(ExtY_app_Main10msMgr_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  app_Main10msMgr_InitializeDataMapInfo();

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/Saurabh'
   */
  /* SystemInitialize for Outport: '<Root>/App_10ms' incorporates:
   *  Outport: '<S1>/APP_10MS_OUT1'
   */
  app_Main10msMgr_Y.App_10ms = app_Main10msMgr_P.APP_10MS_OUT1_Y0;

  /* SystemInitialize for Outport: '<S1>/P21' incorporates:
   *  Outport: '<Root>/P21'
   */
  app_Main10msMgr_Y.P21 = app_Main10msMgr_P.P21_Y0;

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main10msMgr_fcn' */
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
