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
 * File Name: app_Main10msMgr.h
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Tue Apr 23 17:38:32 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#ifndef RTW_HEADER_app_Main10msMgr_h_
#define RTW_HEADER_app_Main10msMgr_h_
#include <string.h>
#include "rtw_modelmap.h"
#ifndef app_Main10msMgr_COMMON_INCLUDES_
# define app_Main10msMgr_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* app_Main10msMgr_COMMON_INCLUDES_ */

#include "app_Main10msMgr_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T deMCD_IO_ReadDigitalInput_o1; /* '<S3>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2; /* '<S3>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_ANLG_Read;              /* '<S2>/deMCD_ANLG_Read' */
} B_app_Main10msMgr_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T TmpSignalConversionAtIO_ReadDigitalInputInport1;
} ConstB_app_Main10msMgr_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T APP_10MS_IN1;                 /* '<Root>/APP_10MS_IN1' */
} ExtU_app_Main10msMgr_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T App_10ms;                     /* '<Root>/App_10ms' */
  real_T P21;                          /* '<Root>/P21' */
} ExtY_app_Main10msMgr_T;

/* Parameters (default storage) */
struct P_app_Main10msMgr_T_ {
  real_T ANLG_ReadSignal_PARAM_ID;   /* Mask Parameter: ANLG_ReadSignal_PARAM_ID
                                      * Referenced by: '<S2>/Constant'
                                      */
  real_T IO_ReadDigitalInput_PARAM_ID;
                                 /* Mask Parameter: IO_ReadDigitalInput_PARAM_ID
                                  * Referenced by: '<S3>/Constant'
                                  */
  real_T APP_10MS_OUT1_Y0;             /* Computed Parameter: APP_10MS_OUT1_Y0
                                        * Referenced by: '<S1>/APP_10MS_OUT1'
                                        */
  real_T P21_Y0;                       /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S1>/P21'
                                        */
  real_T ADC_65_Y0;                    /* Computed Parameter: ADC_65_Y0
                                        * Referenced by: '<S1>/ADC_65'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_app_Main10msMgr_T {
  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* Block parameters (default storage) */
extern P_app_Main10msMgr_T app_Main10msMgr_P;

/* Block signals (default storage) */
extern B_app_Main10msMgr_T app_Main10msMgr_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_app_Main10msMgr_T app_Main10msMgr_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_app_Main10msMgr_T app_Main10msMgr_Y;
extern const ConstB_app_Main10msMgr_T app_Main10msMgr_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void app_Main10msMgr_initialize(void);
extern void app_Main10msMgr_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  app_Main10msMgr_GetCAPIStaticMap(void);

/* Exported entry point function */
extern void app_Main10msMgr_fcn(void);

/* Real-time Model object */
extern RT_MODEL_app_Main10msMgr_T *const app_Main10msMgr_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'app_Main10msMgr'
 * '<S1>'   : 'app_Main10msMgr/Saurabh'
 * '<S2>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal'
 * '<S3>'   : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput'
 * '<S4>'   : 'app_Main10msMgr/Saurabh/Model Info'
 */
#endif                                 /* RTW_HEADER_app_Main10msMgr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
