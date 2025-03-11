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
 * deMCD Generation Date: Thu Oct 24 18:32:18 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#ifndef RTW_HEADER_app_Main10msMgr_h_
#define RTW_HEADER_app_Main10msMgr_h_
#include <math.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef app_Main10msMgr_COMMON_INCLUDES_
# define app_Main10msMgr_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* app_Main10msMgr_COMMON_INCLUDES_ */

#include "app_Main10msMgr_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S79>/Data Type Conversion' */
  real_T deMCD_IO_ReadPwm_o1;          /* '<S53>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadPwm_o2;          /* '<S53>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadPwm_o1_i;        /* '<S52>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadPwm_o2_o;        /* '<S52>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadPwm_o1_f;        /* '<S51>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadPwm_o2_o2;       /* '<S51>/deMCD_IO_ReadPwm' */
  real_T deMCD_IO_ReadDigitalInput_o1; /* '<S50>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2; /* '<S50>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_j;/* '<S49>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_h;/* '<S49>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_f;/* '<S48>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_o;/* '<S48>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_k;/* '<S47>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_n;/* '<S47>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_h;/* '<S46>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_d;/* '<S46>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_jk;/* '<S45>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_n1;/* '<S45>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_p;/* '<S44>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_b;/* '<S44>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_fd;/* '<S43>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_p;/* '<S43>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_a;/* '<S42>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_j;/* '<S42>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_g;/* '<S41>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_og;/* '<S41>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_o;/* '<S40>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_pf;/* '<S40>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_d;/* '<S39>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_nc;/* '<S39>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_n;/* '<S38>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_l;/* '<S38>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_m;/* '<S37>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_je;/* '<S37>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_g1;/* '<S36>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_a;/* '<S36>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_b;/* '<S35>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_n0;/* '<S35>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_os;/* '<S34>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_g;/* '<S34>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_pm;/* '<S33>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_ox;/* '<S33>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o1_mz;/* '<S32>/deMCD_IO_ReadDigitalInput' */
  real_T deMCD_IO_ReadDigitalInput_o2_do;/* '<S32>/deMCD_IO_ReadDigitalInput' */
  real_T Counter;                      /* '<S1>/Chart' */
  real_T deMCD_ANLG_Read;              /* '<S24>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_i;            /* '<S23>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_m;            /* '<S22>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_g;            /* '<S21>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_l;            /* '<S20>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_lg;           /* '<S19>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_k;            /* '<S18>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_my;           /* '<S17>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_iz;           /* '<S16>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_gw;           /* '<S15>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_go;           /* '<S14>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_a;            /* '<S13>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_o;            /* '<S12>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_au;           /* '<S11>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_d;            /* '<S10>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_b;            /* '<S9>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_n;            /* '<S8>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_as;           /* '<S7>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_mm;           /* '<S6>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_d2;           /* '<S5>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_e;            /* '<S4>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_c;            /* '<S3>/deMCD_ANLG_Read' */
  real_T deMCD_ANLG_Read_j;            /* '<S2>/deMCD_ANLG_Read' */
  boolean_T Compare;                   /* '<S78>/Compare' */
} B_app_Main10msMgr_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S77>/Unit Delay' */
  real_T DelayInput1_DSTATE;           /* '<S82>/Delay Input1' */
  uint8_T is_active_c7_app_Main10msMgr;
                              /* '<S83>/Computing Distance covered  Per Tick' */
  uint8_T is_c7_app_Main10msMgr;
                              /* '<S83>/Computing Distance covered  Per Tick' */
  uint8_T is_Default;         /* '<S83>/Computing Distance covered  Per Tick' */
  uint8_T temporalCounter_i1; /* '<S83>/Computing Distance covered  Per Tick' */
  uint8_T is_active_c3_app_Main10msMgr;/* '<S77>/Chart' */
  uint8_T is_c3_app_Main10msMgr;       /* '<S77>/Chart' */
  uint8_T is_Write;                    /* '<S77>/Chart' */
  uint8_T temporalCounter_i1_n;        /* '<S77>/Chart' */
  uint8_T is_active_c2_app_Main10msMgr;/* '<S1>/Chart1' */
  uint8_T is_c2_app_Main10msMgr;       /* '<S1>/Chart1' */
  uint8_T temporalCounter_i1_b;        /* '<S1>/Chart1' */
  uint8_T is_active_c1_app_Main10msMgr;/* '<S1>/Chart' */
  uint8_T temporalCounter_i1_f;        /* '<S1>/Chart' */
} DW_app_Main10msMgr_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T TmpSignalConversionAtIO_ReadDigitalInputInport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput1Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput2Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput3Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput4Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput5Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput6Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput7Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput15Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput17Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput8Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput9Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput10Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput11Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput12Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput13Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput14Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput16Inport1;
  const real_T TmpSignalConversionAtIO_ReadDigitalInput18Inport1;
  const real_T TmpSignalConversionAtIO_ReadPwmInport1;
  const real_T TmpSignalConversionAtIO_ReadPwm1Inport1;
  const real_T TmpSignalConversionAtIO_ReadPwm2Inport1;
} ConstB_app_Main10msMgr_T;

/* Parameters (default storage) */
struct P_app_Main10msMgr_T_ {
  real_T ANLG_ReadSignal_PARAM_ID;   /* Mask Parameter: ANLG_ReadSignal_PARAM_ID
                                      * Referenced by: '<S2>/Constant'
                                      */
  real_T ANLG_ReadSignal1_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal1_PARAM_ID
                                     * Referenced by: '<S3>/Constant'
                                     */
  real_T ANLG_ReadSignal10_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal10_PARAM_ID
                                    * Referenced by: '<S4>/Constant'
                                    */
  real_T ANLG_ReadSignal11_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal11_PARAM_ID
                                    * Referenced by: '<S5>/Constant'
                                    */
  real_T ANLG_ReadSignal12_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal12_PARAM_ID
                                    * Referenced by: '<S6>/Constant'
                                    */
  real_T ANLG_ReadSignal13_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal13_PARAM_ID
                                    * Referenced by: '<S7>/Constant'
                                    */
  real_T ANLG_ReadSignal14_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal14_PARAM_ID
                                    * Referenced by: '<S8>/Constant'
                                    */
  real_T ANLG_ReadSignal15_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal15_PARAM_ID
                                    * Referenced by: '<S9>/Constant'
                                    */
  real_T ANLG_ReadSignal16_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal16_PARAM_ID
                                    * Referenced by: '<S10>/Constant'
                                    */
  real_T ANLG_ReadSignal17_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal17_PARAM_ID
                                    * Referenced by: '<S11>/Constant'
                                    */
  real_T ANLG_ReadSignal18_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal18_PARAM_ID
                                    * Referenced by: '<S12>/Constant'
                                    */
  real_T ANLG_ReadSignal19_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal19_PARAM_ID
                                    * Referenced by: '<S13>/Constant'
                                    */
  real_T ANLG_ReadSignal2_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal2_PARAM_ID
                                     * Referenced by: '<S14>/Constant'
                                     */
  real_T ANLG_ReadSignal20_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal20_PARAM_ID
                                    * Referenced by: '<S15>/Constant'
                                    */
  real_T ANLG_ReadSignal21_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal21_PARAM_ID
                                    * Referenced by: '<S16>/Constant'
                                    */
  real_T ANLG_ReadSignal22_PARAM_ID;
                                   /* Mask Parameter: ANLG_ReadSignal22_PARAM_ID
                                    * Referenced by: '<S17>/Constant'
                                    */
  real_T ANLG_ReadSignal3_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal3_PARAM_ID
                                     * Referenced by: '<S18>/Constant'
                                     */
  real_T ANLG_ReadSignal4_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal4_PARAM_ID
                                     * Referenced by: '<S19>/Constant'
                                     */
  real_T ANLG_ReadSignal5_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal5_PARAM_ID
                                     * Referenced by: '<S20>/Constant'
                                     */
  real_T ANLG_ReadSignal6_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal6_PARAM_ID
                                     * Referenced by: '<S21>/Constant'
                                     */
  real_T ANLG_ReadSignal7_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal7_PARAM_ID
                                     * Referenced by: '<S22>/Constant'
                                     */
  real_T ANLG_ReadSignal8_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal8_PARAM_ID
                                     * Referenced by: '<S23>/Constant'
                                     */
  real_T ANLG_ReadSignal9_PARAM_ID; /* Mask Parameter: ANLG_ReadSignal9_PARAM_ID
                                     * Referenced by: '<S24>/Constant'
                                     */
  real_T COM_WriteSignal49_PARAM_ID;
                                   /* Mask Parameter: COM_WriteSignal49_PARAM_ID
                                    * Referenced by: '<S25>/Constant'
                                    */
  real_T COM_WriteSignal50_PARAM_ID;
                                   /* Mask Parameter: COM_WriteSignal50_PARAM_ID
                                    * Referenced by: '<S26>/Constant'
                                    */
  real_T COM_WriteSignal52_PARAM_ID;
                                   /* Mask Parameter: COM_WriteSignal52_PARAM_ID
                                    * Referenced by: '<S27>/Constant'
                                    */
  real_T COM_WriteSignal53_PARAM_ID;
                                   /* Mask Parameter: COM_WriteSignal53_PARAM_ID
                                    * Referenced by: '<S28>/Constant'
                                    */
  real_T IO_ReadDigitalInput_PARAM_ID;
                                 /* Mask Parameter: IO_ReadDigitalInput_PARAM_ID
                                  * Referenced by: '<S32>/Constant'
                                  */
  real_T IO_ReadDigitalInput1_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput1_PARAM_ID
                                 * Referenced by: '<S33>/Constant'
                                 */
  real_T IO_ReadDigitalInput10_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput10_PARAM_ID
                                * Referenced by: '<S34>/Constant'
                                */
  real_T IO_ReadDigitalInput11_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput11_PARAM_ID
                                * Referenced by: '<S35>/Constant'
                                */
  real_T IO_ReadDigitalInput12_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput12_PARAM_ID
                                * Referenced by: '<S36>/Constant'
                                */
  real_T IO_ReadDigitalInput13_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput13_PARAM_ID
                                * Referenced by: '<S37>/Constant'
                                */
  real_T IO_ReadDigitalInput14_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput14_PARAM_ID
                                * Referenced by: '<S38>/Constant'
                                */
  real_T IO_ReadDigitalInput15_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput15_PARAM_ID
                                * Referenced by: '<S39>/Constant'
                                */
  real_T IO_ReadDigitalInput16_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput16_PARAM_ID
                                * Referenced by: '<S40>/Constant'
                                */
  real_T IO_ReadDigitalInput17_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput17_PARAM_ID
                                * Referenced by: '<S41>/Constant'
                                */
  real_T IO_ReadDigitalInput18_PARAM_ID;
                               /* Mask Parameter: IO_ReadDigitalInput18_PARAM_ID
                                * Referenced by: '<S42>/Constant'
                                */
  real_T IO_ReadDigitalInput2_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput2_PARAM_ID
                                 * Referenced by: '<S43>/Constant'
                                 */
  real_T IO_ReadDigitalInput3_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput3_PARAM_ID
                                 * Referenced by: '<S44>/Constant'
                                 */
  real_T IO_ReadDigitalInput4_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput4_PARAM_ID
                                 * Referenced by: '<S45>/Constant'
                                 */
  real_T IO_ReadDigitalInput5_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput5_PARAM_ID
                                 * Referenced by: '<S46>/Constant'
                                 */
  real_T IO_ReadDigitalInput6_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput6_PARAM_ID
                                 * Referenced by: '<S47>/Constant'
                                 */
  real_T IO_ReadDigitalInput7_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput7_PARAM_ID
                                 * Referenced by: '<S48>/Constant'
                                 */
  real_T IO_ReadDigitalInput8_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput8_PARAM_ID
                                 * Referenced by: '<S49>/Constant'
                                 */
  real_T IO_ReadDigitalInput9_PARAM_ID;
                                /* Mask Parameter: IO_ReadDigitalInput9_PARAM_ID
                                 * Referenced by: '<S50>/Constant'
                                 */
  real_T IO_ReadPwm_PARAM_ID;          /* Mask Parameter: IO_ReadPwm_PARAM_ID
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T IO_ReadPwm1_PARAM_ID;         /* Mask Parameter: IO_ReadPwm1_PARAM_ID
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T IO_ReadPwm2_PARAM_ID;         /* Mask Parameter: IO_ReadPwm2_PARAM_ID
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T IO_SetPwm1_PARAM_ID;          /* Mask Parameter: IO_SetPwm1_PARAM_ID
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T IO_SetPwm2_PARAM_ID;          /* Mask Parameter: IO_SetPwm2_PARAM_ID
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T IO_SetPwm3_PARAM_ID;          /* Mask Parameter: IO_SetPwm3_PARAM_ID
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T IO_SetPwm4_PARAM_ID;          /* Mask Parameter: IO_SetPwm4_PARAM_ID
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T IO_SetPwm5_PARAM_ID;          /* Mask Parameter: IO_SetPwm5_PARAM_ID
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T IO_SetPwm6_PARAM_ID;          /* Mask Parameter: IO_SetPwm6_PARAM_ID
                                        * Referenced by: '<S59>/Constant'
                                        */
  real_T IO_WriteDigitalOutput1_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput1_PARAM_ID
                               * Referenced by: '<S60>/Constant'
                               */
  real_T IO_WriteDigitalOutput10_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput10_PARAM_ID
                              * Referenced by: '<S61>/Constant'
                              */
  real_T IO_WriteDigitalOutput11_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput11_PARAM_ID
                              * Referenced by: '<S62>/Constant'
                              */
  real_T IO_WriteDigitalOutput12_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput12_PARAM_ID
                              * Referenced by: '<S63>/Constant'
                              */
  real_T IO_WriteDigitalOutput13_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput13_PARAM_ID
                              * Referenced by: '<S64>/Constant'
                              */
  real_T IO_WriteDigitalOutput14_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput14_PARAM_ID
                              * Referenced by: '<S65>/Constant'
                              */
  real_T IO_WriteDigitalOutput15_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput15_PARAM_ID
                              * Referenced by: '<S66>/Constant'
                              */
  real_T IO_WriteDigitalOutput16_PARAM_ID;
                             /* Mask Parameter: IO_WriteDigitalOutput16_PARAM_ID
                              * Referenced by: '<S67>/Constant'
                              */
  real_T IO_WriteDigitalOutput3_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput3_PARAM_ID
                               * Referenced by: '<S68>/Constant'
                               */
  real_T IO_WriteDigitalOutput4_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput4_PARAM_ID
                               * Referenced by: '<S69>/Constant'
                               */
  real_T IO_WriteDigitalOutput5_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput5_PARAM_ID
                               * Referenced by: '<S70>/Constant'
                               */
  real_T IO_WriteDigitalOutput6_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput6_PARAM_ID
                               * Referenced by: '<S71>/Constant'
                               */
  real_T IO_WriteDigitalOutput7_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput7_PARAM_ID
                               * Referenced by: '<S72>/Constant'
                               */
  real_T IO_WriteDigitalOutput8_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput8_PARAM_ID
                               * Referenced by: '<S73>/Constant'
                               */
  real_T IO_WriteDigitalOutput9_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput9_PARAM_ID
                               * Referenced by: '<S74>/Constant'
                               */
  real_T IO_WriteDigitalOutput2_PARAM_ID;
                              /* Mask Parameter: IO_WriteDigitalOutput2_PARAM_ID
                               * Referenced by: '<S79>/Constant'
                               */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S82>/Delay Input1'
                                        */
  uint16_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S78>/Constant'
                                       */
  real_T APP_10MS_OUT1_Y0;             /* Computed Parameter: APP_10MS_OUT1_Y0
                                        * Referenced by: '<S1>/APP_10MS_OUT1'
                                        */
  real_T ADC_5v_ID2_P60_Y0;            /* Computed Parameter: ADC_5v_ID2_P60_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID2_P60'
                                        */
  real_T ADC_5v_ID8_P30_Y0;            /* Computed Parameter: ADC_5v_ID8_P30_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID8_P30'
                                        */
  real_T ADC_5v_ID9_P29_Y0;            /* Computed Parameter: ADC_5v_ID9_P29_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID9_P29'
                                        */
  real_T ADC_5v_ID0_P69_Y0;            /* Computed Parameter: ADC_5v_ID0_P69_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID0_P69'
                                        */
  real_T ADC_5v_ID1_P59_Y0;            /* Computed Parameter: ADC_5v_ID1_P59_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID1_P59'
                                        */
  real_T ADC_5v_ID3_P49_Y0;            /* Computed Parameter: ADC_5v_ID3_P49_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID3_P49'
                                        */
  real_T ADC_5v_ID5_P50_Y0;            /* Computed Parameter: ADC_5v_ID5_P50_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID5_P50'
                                        */
  real_T Power_Supply24v_Y0;           /* Computed Parameter: Power_Supply24v_Y0
                                        * Referenced by: '<S1>/Power_Supply24v'
                                        */
  real_T ADC_5v_ID6_P39_Y0;            /* Computed Parameter: ADC_5v_ID6_P39_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID6_P39'
                                        */
  real_T ADC_5v_ID7_P40_Y0;            /* Computed Parameter: ADC_5v_ID7_P40_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID7_P40'
                                        */
  real_T ADC_5v_ID12_P73_Y0;           /* Computed Parameter: ADC_5v_ID12_P73_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID12_P73'
                                        */
  real_T ADC_5v_ID10_P75_Y0;           /* Computed Parameter: ADC_5v_ID10_P75_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID10_P75'
                                        */
  real_T ADC_5v_ID11_P74_Y0;           /* Computed Parameter: ADC_5v_ID11_P74_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID11_P74'
                                        */
  real_T ADC_5v_ID13_P72_Y0;           /* Computed Parameter: ADC_5v_ID13_P72_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID13_P72'
                                        */
  real_T ADC_5v_ID14_P71_Y0;           /* Computed Parameter: ADC_5v_ID14_P71_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID14_P71'
                                        */
  real_T ADC_5v_ID15_P80_Y0;           /* Computed Parameter: ADC_5v_ID15_P80_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID15_P80'
                                        */
  real_T ADC_5v_ID16_P79_Y0;           /* Computed Parameter: ADC_5v_ID16_P79_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID16_P79'
                                        */
  real_T ADC_5v_ID17_P78_Y0;           /* Computed Parameter: ADC_5v_ID17_P78_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID17_P78'
                                        */
  real_T ADC_5v_ID18_P77_Y0;           /* Computed Parameter: ADC_5v_ID18_P77_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID18_P77'
                                        */
  real_T ADC_5v_ID19_P76_Y0;           /* Computed Parameter: ADC_5v_ID19_P76_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID19_P76'
                                        */
  real_T ADC_5v_ID20_P70_Y0;           /* Computed Parameter: ADC_5v_ID20_P70_Y0
                                        * Referenced by: '<S1>/ADC_5v_ID20_P70'
                                        */
  real_T Temp1_Y0;                     /* Computed Parameter: Temp1_Y0
                                        * Referenced by: '<S1>/Temp1'
                                        */
  real_T Temp2_Y0;                     /* Computed Parameter: Temp2_Y0
                                        * Referenced by: '<S1>/Temp2'
                                        */
  real_T DIN_P61_AH_Y0;                /* Computed Parameter: DIN_P61_AH_Y0
                                        * Referenced by: '<S1>/DIN_P61_AH'
                                        */
  real_T DIN_P51_AH_Y0;                /* Computed Parameter: DIN_P51_AH_Y0
                                        * Referenced by: '<S1>/DIN_P51_AH'
                                        */
  real_T DIN_P22_AH_Y0;                /* Computed Parameter: DIN_P22_AH_Y0
                                        * Referenced by: '<S1>/DIN_P22_AH'
                                        */
  real_T DIN_P34_AL_Y0;                /* Computed Parameter: DIN_P34_AL_Y0
                                        * Referenced by: '<S1>/DIN_P34_AL'
                                        */
  real_T DIN_P27_AH_Y0;                /* Computed Parameter: DIN_P27_AH_Y0
                                        * Referenced by: '<S1>/DIN_P27_AH'
                                        */
  real_T DIN_P42_AH_Y0;                /* Computed Parameter: DIN_P42_AH_Y0
                                        * Referenced by: '<S1>/DIN_P42_AH'
                                        */
  real_T DIN_P21_AH_Y0;                /* Computed Parameter: DIN_P21_AH_Y0
                                        * Referenced by: '<S1>/DIN_P21_AH'
                                        */
  real_T DIN_P31_AH_Y0;                /* Computed Parameter: DIN_P31_AH_Y0
                                        * Referenced by: '<S1>/DIN_P31_AH'
                                        */
  real_T DIN_P23_AH_Y0;                /* Computed Parameter: DIN_P23_AH_Y0
                                        * Referenced by: '<S1>/DIN_P23_AH'
                                        */
  real_T DIN_P41_AH_Y0;                /* Computed Parameter: DIN_P41_AH_Y0
                                        * Referenced by: '<S1>/DIN_P41_AH'
                                        */
  real_T DIN_P37_AH_Y0;                /* Computed Parameter: DIN_P37_AH_Y0
                                        * Referenced by: '<S1>/DIN_P37_AH'
                                        */
  real_T DIN_P25_AL_Y0;                /* Computed Parameter: DIN_P25_AL_Y0
                                        * Referenced by: '<S1>/DIN_P25_AL'
                                        */
  real_T DIN_P26_AL_Y0;                /* Computed Parameter: DIN_P26_AL_Y0
                                        * Referenced by: '<S1>/DIN_P26_AL'
                                        */
  real_T DIN_P35_AL_Y0;                /* Computed Parameter: DIN_P35_AL_Y0
                                        * Referenced by: '<S1>/DIN_P35_AL'
                                        */
  real_T DIN_P33_AH_Y0;                /* Computed Parameter: DIN_P33_AH_Y0
                                        * Referenced by: '<S1>/DIN_P33_AH'
                                        */
  real_T DIN_P36_AL_Y0;                /* Computed Parameter: DIN_P36_AL_Y0
                                        * Referenced by: '<S1>/DIN_P36_AL'
                                        */
  real_T DIN_P24_AH_Y0;                /* Computed Parameter: DIN_P24_AH_Y0
                                        * Referenced by: '<S1>/DIN_P24_AH'
                                        */
  real_T DIN_P28_AL_Y0;                /* Computed Parameter: DIN_P28_AL_Y0
                                        * Referenced by: '<S1>/DIN_P28_AL'
                                        */
  real_T DIN_P38_AL_Y0;                /* Computed Parameter: DIN_P38_AL_Y0
                                        * Referenced by: '<S1>/DIN_P38_AL'
                                        */
  real_T PWM_IN_P13_Freq_Y0;           /* Computed Parameter: PWM_IN_P13_Freq_Y0
                                        * Referenced by: '<S1>/PWM_IN_P13_Freq'
                                        */
  real_T PWM_IN_P13_Duty_Y0;           /* Computed Parameter: PWM_IN_P13_Duty_Y0
                                        * Referenced by: '<S1>/PWM_IN_P13_Duty'
                                        */
  real_T PWM_IN_P14_Freq_Y0;           /* Computed Parameter: PWM_IN_P14_Freq_Y0
                                        * Referenced by: '<S1>/PWM_IN_P14_Freq'
                                        */
  real_T PWM_IN_P14_Duty_Y0;           /* Computed Parameter: PWM_IN_P14_Duty_Y0
                                        * Referenced by: '<S1>/PWM_IN_P14_Duty'
                                        */
  real_T PWM_IN_P62_Freq_Y0;           /* Computed Parameter: PWM_IN_P62_Freq_Y0
                                        * Referenced by: '<S1>/PWM_IN_P62_Freq'
                                        */
  real_T PWM_IN_P62_Duty_Y0;           /* Computed Parameter: PWM_IN_P62_Duty_Y0
                                        * Referenced by: '<S1>/PWM_IN_P62_Duty'
                                        */
  real_T ReadData_Y0;                  /* Computed Parameter: ReadData_Y0
                                        * Referenced by: '<S1>/ReadData'
                                        */
  real_T Data_Count2_Y0;               /* Computed Parameter: Data_Count2_Y0
                                        * Referenced by: '<S1>/Data_Count2'
                                        */
  real_T A1_Y0;                        /* Computed Parameter: A1_Y0
                                        * Referenced by: '<S1>/A1'
                                        */
  real_T A2_Y0;                        /* Computed Parameter: A2_Y0
                                        * Referenced by: '<S1>/A2'
                                        */
  real_T A3_Y0;                        /* Computed Parameter: A3_Y0
                                        * Referenced by: '<S1>/A3'
                                        */
  real_T Readdata2_Y0;                 /* Computed Parameter: Readdata2_Y0
                                        * Referenced by: '<S1>/Readdata2'
                                        */
  real_T RTE_EEPROM_Value_Read_Y0;
                                 /* Computed Parameter: RTE_EEPROM_Value_Read_Y0
                                  * Referenced by: '<S1>/RTE_EEPROM_Value_Read'
                                  */
  real_T HBridge2_Direction_Pin_out_Y0;
                            /* Computed Parameter: HBridge2_Direction_Pin_out_Y0
                             * Referenced by: '<S1>/HBridge2_Direction_Pin_out'
                             */
  real_T HBridge2_Out_Y0;              /* Computed Parameter: HBridge2_Out_Y0
                                        * Referenced by: '<S1>/HBridge2_Out'
                                        */
  real_T Multiply3_Gain;               /* Expression: 1/1
                                        * Referenced by: '<S83>/Multiply3'
                                        */
  real_T upiR1_Gain;                   /* Expression: 2*3.14
                                        * Referenced by: '<S83>/2piR1'
                                        */
  real_T Constant2_Value;              /* Expression: 60
                                        * Referenced by: '<S83>/Constant2'
                                        */
  real_T ConversionFactor_Value;       /* Expression: 100
                                        * Referenced by: '<S83>/ConversionFactor'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S77>/Unit Delay'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S77>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 000010
                                        * Referenced by: '<S77>/Constant3'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<S77>/Constant5'
                                        */
  real_T Constant4_Value;              /* Expression: 10000
                                        * Referenced by: '<S77>/Constant4'
                                        */
  real_T Gain15_Gain;                  /* Expression: 32768
                                        * Referenced by: '<S75>/Gain15'
                                        */
  real_T Gain14_Gain;                  /* Expression: 16384
                                        * Referenced by: '<S75>/Gain14'
                                        */
  real_T Gain13_Gain;                  /* Expression: 8192
                                        * Referenced by: '<S75>/Gain13'
                                        */
  real_T Gain12_Gain;                  /* Expression: 4096
                                        * Referenced by: '<S75>/Gain12'
                                        */
  real_T Gain11_Gain;                  /* Expression: 2048
                                        * Referenced by: '<S75>/Gain11'
                                        */
  real_T Gain10_Gain;                  /* Expression: 1024
                                        * Referenced by: '<S75>/Gain10'
                                        */
  real_T Gain9_Gain;                   /* Expression: 512
                                        * Referenced by: '<S75>/Gain9'
                                        */
  real_T Gain8_Gain;                   /* Expression: 256
                                        * Referenced by: '<S75>/Gain8'
                                        */
  real_T Gain7_Gain;                   /* Expression: 128
                                        * Referenced by: '<S75>/Gain7'
                                        */
  real_T Gain6_Gain;                   /* Expression: 64
                                        * Referenced by: '<S75>/Gain6'
                                        */
  real_T Gain5_Gain;                   /* Expression: 32
                                        * Referenced by: '<S75>/Gain5'
                                        */
  real_T Gain4_Gain;                   /* Expression: 16
                                        * Referenced by: '<S75>/Gain4'
                                        */
  real_T Gain3_Gain;                   /* Expression: 8
                                        * Referenced by: '<S75>/Gain3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 4
                                        * Referenced by: '<S75>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S75>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S75>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant2_Value_m;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant4_Value_i;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant5_Value_m;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T Gain23_Gain;                  /* Expression: 32768
                                        * Referenced by: '<S31>/Gain23'
                                        */
  real_T Gain22_Gain;                  /* Expression: 16384
                                        * Referenced by: '<S31>/Gain22'
                                        */
  real_T Gain21_Gain;                  /* Expression: 8192
                                        * Referenced by: '<S31>/Gain21'
                                        */
  real_T Gain20_Gain;                  /* Expression: 4096
                                        * Referenced by: '<S31>/Gain20'
                                        */
  real_T Gain19_Gain;                  /* Expression: 2048
                                        * Referenced by: '<S31>/Gain19'
                                        */
  real_T Gain18_Gain;                  /* Expression: 1024
                                        * Referenced by: '<S31>/Gain18'
                                        */
  real_T Gain31_Gain;                  /* Expression: 512
                                        * Referenced by: '<S31>/Gain31'
                                        */
  real_T Gain30_Gain;                  /* Expression: 256
                                        * Referenced by: '<S31>/Gain30'
                                        */
  real_T Gain29_Gain;                  /* Expression: 128
                                        * Referenced by: '<S31>/Gain29'
                                        */
  real_T Gain28_Gain;                  /* Expression: 64
                                        * Referenced by: '<S31>/Gain28'
                                        */
  real_T Gain27_Gain;                  /* Expression: 32
                                        * Referenced by: '<S31>/Gain27'
                                        */
  real_T Gain26_Gain;                  /* Expression: 16
                                        * Referenced by: '<S31>/Gain26'
                                        */
  real_T Gain25_Gain;                  /* Expression: 8
                                        * Referenced by: '<S31>/Gain25'
                                        */
  real_T Gain24_Gain;                  /* Expression: 4
                                        * Referenced by: '<S31>/Gain24'
                                        */
  real_T Gain17_Gain;                  /* Expression: 2
                                        * Referenced by: '<S31>/Gain17'
                                        */
  real_T Gain16_Gain;                  /* Expression: 1
                                        * Referenced by: '<S31>/Gain16'
                                        */
  real_T Constant12_Value;             /* Expression: 50
                                        * Referenced by: '<S1>/Constant12'
                                        */
  int16_T Wheel_RadiusinchtoMeter1R930inch_Gain;
                    /* Computed Parameter: Wheel_RadiusinchtoMeter1R930inch_Gain
                     * Referenced by: '<S83>/Wheel_Radius inch to Meter1(R=9.30 inch)'
                     */
  uint16_T LSD_Data_Y0;                /* Computed Parameter: LSD_Data_Y0
                                        * Referenced by: '<S1>/LSD_Data'
                                        */
  uint16_T HSD_Data_Y0;                /* Computed Parameter: HSD_Data_Y0
                                        * Referenced by: '<S1>/HSD_Data'
                                        */
  uint8_T D2_Y0;                       /* Computed Parameter: D2_Y0
                                        * Referenced by: '<S1>/D2'
                                        */
  uint8_T D3_Y0;                       /* Computed Parameter: D3_Y0
                                        * Referenced by: '<S1>/D3'
                                        */
  uint8_T Constant6_Value_e;           /* Expression: 0XFF
                                        * Referenced by: '<S77>/Constant6'
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

/* Block states (default storage) */
extern DW_app_Main10msMgr_T app_Main10msMgr_DW;
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
 * '<S3>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal1'
 * '<S4>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal10'
 * '<S5>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal11'
 * '<S6>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal12'
 * '<S7>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal13'
 * '<S8>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal14'
 * '<S9>'   : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal15'
 * '<S10>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal16'
 * '<S11>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal17'
 * '<S12>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal18'
 * '<S13>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal19'
 * '<S14>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal2'
 * '<S15>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal20'
 * '<S16>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal21'
 * '<S17>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal22'
 * '<S18>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal3'
 * '<S19>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal4'
 * '<S20>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal5'
 * '<S21>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal6'
 * '<S22>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal7'
 * '<S23>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal8'
 * '<S24>'  : 'app_Main10msMgr/Saurabh/ANLG_ReadSignal9'
 * '<S25>'  : 'app_Main10msMgr/Saurabh/COM_WriteSignal49'
 * '<S26>'  : 'app_Main10msMgr/Saurabh/COM_WriteSignal50'
 * '<S27>'  : 'app_Main10msMgr/Saurabh/COM_WriteSignal52'
 * '<S28>'  : 'app_Main10msMgr/Saurabh/COM_WriteSignal53'
 * '<S29>'  : 'app_Main10msMgr/Saurabh/Chart'
 * '<S30>'  : 'app_Main10msMgr/Saurabh/Chart1'
 * '<S31>'  : 'app_Main10msMgr/Saurabh/HSD'
 * '<S32>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput'
 * '<S33>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput1'
 * '<S34>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput10'
 * '<S35>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput11'
 * '<S36>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput12'
 * '<S37>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput13'
 * '<S38>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput14'
 * '<S39>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput15'
 * '<S40>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput16'
 * '<S41>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput17'
 * '<S42>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput18'
 * '<S43>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput2'
 * '<S44>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput3'
 * '<S45>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput4'
 * '<S46>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput5'
 * '<S47>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput6'
 * '<S48>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput7'
 * '<S49>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput8'
 * '<S50>'  : 'app_Main10msMgr/Saurabh/IO_ReadDigitalInput9'
 * '<S51>'  : 'app_Main10msMgr/Saurabh/IO_ReadPwm'
 * '<S52>'  : 'app_Main10msMgr/Saurabh/IO_ReadPwm1'
 * '<S53>'  : 'app_Main10msMgr/Saurabh/IO_ReadPwm2'
 * '<S54>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm1'
 * '<S55>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm2'
 * '<S56>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm3'
 * '<S57>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm4'
 * '<S58>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm5'
 * '<S59>'  : 'app_Main10msMgr/Saurabh/IO_SetPwm6'
 * '<S60>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput1'
 * '<S61>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput10'
 * '<S62>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput11'
 * '<S63>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput12'
 * '<S64>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput13'
 * '<S65>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput14'
 * '<S66>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput15'
 * '<S67>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput16'
 * '<S68>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput3'
 * '<S69>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput4'
 * '<S70>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput5'
 * '<S71>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput6'
 * '<S72>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput7'
 * '<S73>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput8'
 * '<S74>'  : 'app_Main10msMgr/Saurabh/IO_WriteDigitalOutput9'
 * '<S75>'  : 'app_Main10msMgr/Saurabh/LSD'
 * '<S76>'  : 'app_Main10msMgr/Saurabh/Model Info'
 * '<S77>'  : 'app_Main10msMgr/Saurabh/Subsystem1'
 * '<S78>'  : 'app_Main10msMgr/Saurabh/LSD/Compare To Constant'
 * '<S79>'  : 'app_Main10msMgr/Saurabh/LSD/IO_WriteDigitalOutput2'
 * '<S80>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Bit Shift'
 * '<S81>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Chart'
 * '<S82>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Detect Change'
 * '<S83>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Subsystem'
 * '<S84>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Bit Shift/bit_shift'
 * '<S85>'  : 'app_Main10msMgr/Saurabh/Subsystem1/Subsystem/Computing Distance covered  Per Tick'
 */
#endif                                 /* RTW_HEADER_app_Main10msMgr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
