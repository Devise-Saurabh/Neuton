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
 * File Name: app_Main50msMgr.h
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:39 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#ifndef RTW_HEADER_app_Main50msMgr_h_
#define RTW_HEADER_app_Main50msMgr_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef app_Main50msMgr_COMMON_INCLUDES_
# define app_Main50msMgr_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* app_Main50msMgr_COMMON_INCLUDES_ */

#include "app_Main50msMgr_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Parameters (default storage) */
struct P_app_Main50msMgr_T_ {
  real_T APP_50MS_OUT1_Y0;             /* Computed Parameter: APP_50MS_OUT1_Y0
                                        * Referenced by: '<S1>/APP_50MS_OUT1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_app_Main50msMgr_T {
  const char_T * volatile errorStatus;

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
extern P_app_Main50msMgr_T app_Main50msMgr_P;

/* Model entry point functions */
extern void app_Main50msMgr_initialize(void);
extern void app_Main50msMgr_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  app_Main50msMgr_GetCAPIStaticMap(void);

/* Exported entry point function */
extern void app_Main50msMgr_fcn(void);

/* Real-time Model object */
extern RT_MODEL_app_Main50msMgr_T *const app_Main50msMgr_M;

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
 * '<Root>' : 'app_Main50msMgr'
 * '<S1>'   : 'app_Main50msMgr/app_Main50msMgr'
 */
#endif                                 /* RTW_HEADER_app_Main50msMgr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
