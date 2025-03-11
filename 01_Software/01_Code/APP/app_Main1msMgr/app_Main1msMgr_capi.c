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
 * File Name: app_Main1msMgr_capi.c
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:31:38 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "app_Main1msMgr_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "app_Main1msMgr.h"
#include "app_Main1msMgr_capi.h"
#include "app_Main1msMgr_private.h"
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
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 0, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/APP_1MS_OUT1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 1, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/Test_1ms_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 2, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_BMS_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 3, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/FLT_System_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 4, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test1War_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 5, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test1FL1_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 6, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test1FL2_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 7, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test2War_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 8, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test2FL1_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 9, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test2FL2_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 10, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test3War_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 11, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test3FL1_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 12, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test3FL2_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 13, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test4War_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 14, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test4FL1_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 15, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test4FL2_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 16, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test5War_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 17, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test5FL1_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 18, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/DTC_Test5FL2_Monitor"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 19, TARGET_STRING("app_Main1msMgr/app_Main1msMgr/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

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
  &app_Main1msMgr_P.APP_1MS_OUT1_Y0,   /* 0: Block Parameter */
  &app_Main1msMgr_P.Test_1ms_Monitor_Y0,/* 1: Block Parameter */
  &app_Main1msMgr_P.DTC_BMS_Monitor_Y0,/* 2: Block Parameter */
  &app_Main1msMgr_P.FLT_System_Monitor_Y0,/* 3: Block Parameter */
  &app_Main1msMgr_P.DTC_Test1War_Monitor_Y0,/* 4: Block Parameter */
  &app_Main1msMgr_P.DTC_Test1FL1_Monitor_Y0,/* 5: Block Parameter */
  &app_Main1msMgr_P.DTC_Test1FL2_Monitor_Y0,/* 6: Block Parameter */
  &app_Main1msMgr_P.DTC_Test2War_Monitor_Y0,/* 7: Block Parameter */
  &app_Main1msMgr_P.DTC_Test2FL1_Monitor_Y0,/* 8: Block Parameter */
  &app_Main1msMgr_P.DTC_Test2FL2_Monitor_Y0,/* 9: Block Parameter */
  &app_Main1msMgr_P.DTC_Test3War_Monitor_Y0,/* 10: Block Parameter */
  &app_Main1msMgr_P.DTC_Test3FL1_Monitor_Y0,/* 11: Block Parameter */
  &app_Main1msMgr_P.DTC_Test3FL2_Monitor_Y0,/* 12: Block Parameter */
  &app_Main1msMgr_P.DTC_Test4War_Monitor_Y0,/* 13: Block Parameter */
  &app_Main1msMgr_P.DTC_Test4FL1_Monitor_Y0,/* 14: Block Parameter */
  &app_Main1msMgr_P.DTC_Test4FL2_Monitor_Y0,/* 15: Block Parameter */
  &app_Main1msMgr_P.DTC_Test5War_Monitor_Y0,/* 16: Block Parameter */
  &app_Main1msMgr_P.DTC_Test5FL1_Monitor_Y0,/* 17: Block Parameter */
  &app_Main1msMgr_P.DTC_Test5FL2_Monitor_Y0,/* 18: Block Parameter */
  &app_Main1msMgr_P.Switch_Threshold,  /* 19: Block Parameter */
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
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 }
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

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  {
    (NULL), (NULL), 0, 0
  }
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
  { rtBlockSignals, 0,
    rtRootInputs, 0,
    rtRootOutputs, 0 },

  { rtBlockParameters, 20,
    rtModelParameters, 0 },

  { rtBlockStates, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2281248598U,
    2147385773U,
    119924298U,
    2224740277U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  app_Main1msMgr_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void app_Main1msMgr_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(app_Main1msMgr_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(app_Main1msMgr_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(app_Main1msMgr_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(app_Main1msMgr_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(app_Main1msMgr_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(app_Main1msMgr_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(app_Main1msMgr_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(app_Main1msMgr_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void app_Main1msMgr_host_InitializeDataMapInfo
    (app_Main1msMgr_host_DataMapInfo_T *dataMap, const char *path)
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
