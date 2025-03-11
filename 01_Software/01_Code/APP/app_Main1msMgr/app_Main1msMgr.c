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
 * File Name: app_Main1msMgr.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:31:38 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include "app_Main1msMgr_capi.h"
#include "app_Main1msMgr.h"
#include "app_Main1msMgr_private.h"
#include "rte.h"

/* user code (top of source file) */
#include "rte.h"

/* Real-time model */
RT_MODEL_app_Main1msMgr_T app_Main1msMgr_M_;
RT_MODEL_app_Main1msMgr_T *const app_Main1msMgr_M = &app_Main1msMgr_M_;

/* Model step function for TID1 */
void app_Main1msMgr_fcn(void)          /* Explicit Task: app_Main1msMgr_fcn */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/app_Main1msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/app_Main1msMgr'
   */
  /* Inport: '<S1>/APP_1MS_IN1' incorporates:
   *  Inport: '<Root>/APP_1MS_IN1'
   */
  RTE_Write_APP_1MS_OUT1(RTE_Read_APP_1MS_IN1());

  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/Test_1ms'
   *  Inport: '<Root>/Test_1ms_Manual'
   */
  if (RTE_Read_Test_1ms_Manual() > app_Main1msMgr_P.Switch_Threshold) {
    RTE_Write_Test_1ms_Monitor(RTE_Read_Test_1ms_Manual());
  } else {
    RTE_Write_Test_1ms_Monitor(RTE_Read_Test_1ms());
  }

  /* End of Switch: '<S1>/Switch' */

  /* Inport: '<S1>/DTC_BMS_FAULT' incorporates:
   *  Inport: '<Root>/DTC_BMS_FAULT'
   */
  RTE_Write_DTC_BMS_Monitor(RTE_Read_DTC_BMS_FAULT());

  /* Inport: '<S1>/FLT_SystemErrorSeverity' incorporates:
   *  Inport: '<Root>/FLT_SystemErrorSeverity'
   */
  RTE_Write_FLT_System_Monitor(RTE_Read_FLT_SystemErrorSeverity());

  /* Inport: '<S1>/DTC_Test1War' incorporates:
   *  Inport: '<Root>/DTC_Test1War'
   */
  RTE_Write_DTC_Test1War_Monitor(RTE_Read_DTC_Test1War());

  /* Inport: '<S1>/DTC_Test1FL1' incorporates:
   *  Inport: '<Root>/DTC_Test1FL1'
   */
  RTE_Write_DTC_Test1FL1_Monitor(RTE_Read_DTC_Test1FL1());

  /* Inport: '<S1>/DTC_Test1FL2' incorporates:
   *  Inport: '<Root>/DTC_Test1FL2'
   */
  RTE_Write_DTC_Test1FL2_Monitor(RTE_Read_DTC_Test1FL2());

  /* Inport: '<S1>/DTC_Test2War' incorporates:
   *  Inport: '<Root>/DTC_Test2War'
   */
  RTE_Write_DTC_Test2War_Monitor(RTE_Read_DTC_Test2War());

  /* Inport: '<S1>/DTC_Test2FL1' incorporates:
   *  Inport: '<Root>/DTC_Test2FL1'
   */
  RTE_Write_DTC_Test2FL1_Monitor(RTE_Read_DTC_Test2FL1());

  /* Inport: '<S1>/DTC_Test2FL2' incorporates:
   *  Inport: '<Root>/DTC_Test2FL2'
   */
  RTE_Write_DTC_Test2FL2_Monitor(RTE_Read_DTC_Test2FL2());

  /* Inport: '<S1>/DTC_Test3War' incorporates:
   *  Inport: '<Root>/DTC_Test3War'
   */
  RTE_Write_DTC_Test3War_Monitor(RTE_Read_DTC_Test3War());

  /* Inport: '<S1>/DTC_Test3FL1' incorporates:
   *  Inport: '<Root>/DTC_Test3FL1'
   */
  RTE_Write_DTC_Test3FL1_Monitor(RTE_Read_DTC_Test3FL1());

  /* Inport: '<S1>/DTC_Test3FL2' incorporates:
   *  Inport: '<Root>/DTC_Test3FL2'
   */
  RTE_Write_DTC_Test3FL2_Monitor(RTE_Read_DTC_Test3FL2());

  /* Inport: '<S1>/DTC_Test4War' incorporates:
   *  Inport: '<Root>/DTC_Test4War'
   */
  RTE_Write_DTC_Test4War_Monitor(RTE_Read_DTC_Test4War());

  /* Inport: '<S1>/DTC_Test4FL1' incorporates:
   *  Inport: '<Root>/DTC_Test4FL1'
   */
  RTE_Write_DTC_Test4FL1_Monitor(RTE_Read_DTC_Test4FL1());

  /* Inport: '<S1>/DTC_Test4FL2' incorporates:
   *  Inport: '<Root>/DTC_Test4FL2'
   */
  RTE_Write_DTC_Test4FL2_Monitor(RTE_Read_DTC_Test4FL2());

  /* Inport: '<S1>/DTC_Test5War' incorporates:
   *  Inport: '<Root>/DTC_Test5War'
   */
  RTE_Write_DTC_Test5War_Monitor(RTE_Read_DTC_Test5War());

  /* Inport: '<S1>/DTC_Test5FL1' incorporates:
   *  Inport: '<Root>/DTC_Test5FL1'
   */
  RTE_Write_DTC_Test5FL1_Monitor(RTE_Read_DTC_Test5FL1());

  /* Inport: '<S1>/DTC_Test5FL2' incorporates:
   *  Inport: '<Root>/DTC_Test5FL2'
   */
  RTE_Write_DTC_Test5FL2_Monitor(RTE_Read_DTC_Test5FL2());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/app_Main1msMgr_fcn' */
}

/* Model initialize function */
void app_Main1msMgr_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)app_Main1msMgr_M, 0,
                sizeof(RT_MODEL_app_Main1msMgr_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  app_Main1msMgr_InitializeDataMapInfo();

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main1msMgr_fcn' incorporates:
   *  SubSystem: '<Root>/app_Main1msMgr'
   */
  /* SystemInitialize for Outport: '<S1>/APP_1MS_OUT1' */
  RTE_Write_APP_1MS_OUT1(app_Main1msMgr_P.APP_1MS_OUT1_Y0);

  /* SystemInitialize for Outport: '<S1>/Test_1ms_Monitor' */
  RTE_Write_Test_1ms_Monitor(app_Main1msMgr_P.Test_1ms_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_BMS_Monitor' */
  RTE_Write_DTC_BMS_Monitor(app_Main1msMgr_P.DTC_BMS_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/FLT_System_Monitor' */
  RTE_Write_FLT_System_Monitor(app_Main1msMgr_P.FLT_System_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test1War_Monitor' */
  RTE_Write_DTC_Test1War_Monitor(app_Main1msMgr_P.DTC_Test1War_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test1FL1_Monitor' */
  RTE_Write_DTC_Test1FL1_Monitor(app_Main1msMgr_P.DTC_Test1FL1_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test1FL2_Monitor' */
  RTE_Write_DTC_Test1FL2_Monitor(app_Main1msMgr_P.DTC_Test1FL2_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test2War_Monitor' */
  RTE_Write_DTC_Test2War_Monitor(app_Main1msMgr_P.DTC_Test2War_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test2FL1_Monitor' */
  RTE_Write_DTC_Test2FL1_Monitor(app_Main1msMgr_P.DTC_Test2FL1_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test2FL2_Monitor' */
  RTE_Write_DTC_Test2FL2_Monitor(app_Main1msMgr_P.DTC_Test2FL2_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test3War_Monitor' */
  RTE_Write_DTC_Test3War_Monitor(app_Main1msMgr_P.DTC_Test3War_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test3FL1_Monitor' */
  RTE_Write_DTC_Test3FL1_Monitor(app_Main1msMgr_P.DTC_Test3FL1_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test3FL2_Monitor' */
  RTE_Write_DTC_Test3FL2_Monitor(app_Main1msMgr_P.DTC_Test3FL2_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test4War_Monitor' */
  RTE_Write_DTC_Test4War_Monitor(app_Main1msMgr_P.DTC_Test4War_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test4FL1_Monitor' */
  RTE_Write_DTC_Test4FL1_Monitor(app_Main1msMgr_P.DTC_Test4FL1_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test4FL2_Monitor' */
  RTE_Write_DTC_Test4FL2_Monitor(app_Main1msMgr_P.DTC_Test4FL2_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test5War_Monitor' */
  RTE_Write_DTC_Test5War_Monitor(app_Main1msMgr_P.DTC_Test5War_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test5FL1_Monitor' */
  RTE_Write_DTC_Test5FL1_Monitor(app_Main1msMgr_P.DTC_Test5FL1_Monitor_Y0);

  /* SystemInitialize for Outport: '<S1>/DTC_Test5FL2_Monitor' */
  RTE_Write_DTC_Test5FL2_Monitor(app_Main1msMgr_P.DTC_Test5FL2_Monitor_Y0);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/app_Main1msMgr_fcn' */
}

/* Model terminate function */
void app_Main1msMgr_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
