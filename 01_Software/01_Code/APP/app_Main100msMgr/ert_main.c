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
 * File Name: ert_main.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:48 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "app_Main100msMgr.h"          /* Model's header file */
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "stddef.h"

/* Includes for objects with custom storage classes. */
#include "rte.h"

/*
 * Example use case for call to exported function:
 * app_Main100msMgr_fcn
 */
extern void sample_usage_app_Main100msMgr_fcn(void);
void sample_usage_app_Main100msMgr_fcn(void)
{
  /*
   * Set task inputs here:
   */

  /*
   * Call to exported function
   */
  app_Main100msMgr_fcn();

  /*
   * Read function outputs here
   */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 * This example illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  app_Main100msMgr_initialize();

  /* First time initialization of system output variables.
   * Constant and invariant outputs will not be updated
   * after this step.
   */
  while (rtmGetErrorStatus(app_Main100msMgr_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  app_Main100msMgr_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
