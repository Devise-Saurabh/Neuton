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
 * File Name: app_Main100msMgr.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:48 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include "app_Main100msMgr_capi.h"
#include "app_Main100msMgr.h"
#include "app_Main100msMgr_private.h"
#include "rte.h"

/* user code (top of source file) */
#include "rte.h"

/* Real-time model */
RT_MODEL_app_Main100msMgr_T app_Main100msMgr_M_;
RT_MODEL_app_Main100msMgr_T *const app_Main100msMgr_M = &app_Main100msMgr_M_;

/* Model step function for TID1 */
void app_Main100msMgr_fcn(void)        /* Explicit Task: app_Main100msMgr_fcn */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/app_Main100msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/app_Main100msMgr'
   */
  /* Inport: '<S1>/APP_100MS_IN1' incorporates:
   *  Inport: '<Root>/APP_100MS_IN1'
   */
  RTE_Write_APP_100MS_OUT1(RTE_Read_APP_100MS_IN1());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/app_Main100msMgr_fcn' */
}

/* Model initialize function */
void app_Main100msMgr_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)app_Main100msMgr_M, 0,
                sizeof(RT_MODEL_app_Main100msMgr_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  app_Main100msMgr_InitializeDataMapInfo();

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main100msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/app_Main100msMgr'
   */
  /* SystemInitialize for Outport: '<S1>/APP_100MS_OUT1' */
  RTE_Write_APP_100MS_OUT1(app_Main100msMgr_P.APP_100MS_OUT1_Y0);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main100msMgr_fcn' */
}

/* Model terminate function */
void app_Main100msMgr_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
