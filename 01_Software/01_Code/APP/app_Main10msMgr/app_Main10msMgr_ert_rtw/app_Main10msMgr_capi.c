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
 * deMCD Generation Date: Tue Apr 23 17:38:32 2024
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

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 1, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal/deMCD_ANLG_Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 2, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 2, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput/deMCD_IO_ReadDigitalInput"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 3, TARGET_STRING("app_Main10msMgr/Saurabh/APP_10MS_OUT1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 4, TARGET_STRING("app_Main10msMgr/Saurabh/P21"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 5, TARGET_STRING("app_Main10msMgr/Saurabh/ADC_65"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 6, TARGET_STRING("app_Main10msMgr/Saurabh/ANLG_ReadSignal"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

  { 7, TARGET_STRING("app_Main10msMgr/Saurabh/IO_ReadDigitalInput"),
    TARGET_STRING("PARAM_ID"), 0, 0, 0 },

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
  { 8, 0, TARGET_STRING("app_Main10msMgr/APP_10MS_IN1"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Root Outputs information */
static const rtwCAPI_Signals rtRootOutputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 9, 0, TARGET_STRING("app_Main10msMgr/App_10ms"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("app_Main10msMgr/P21"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

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
  &app_Main10msMgr_B.deMCD_ANLG_Read,  /* 0: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o1,/* 1: Signal */
  &app_Main10msMgr_B.deMCD_IO_ReadDigitalInput_o2,/* 2: Signal */
  &app_Main10msMgr_P.APP_10MS_OUT1_Y0, /* 3: Block Parameter */
  &app_Main10msMgr_P.P21_Y0,           /* 4: Block Parameter */
  &app_Main10msMgr_P.ADC_65_Y0,        /* 5: Block Parameter */
  &app_Main10msMgr_P.ANLG_ReadSignal_PARAM_ID,/* 6: Mask Parameter */
  &app_Main10msMgr_P.IO_ReadDigitalInput_PARAM_ID,/* 7: Mask Parameter */
  &app_Main10msMgr_U.APP_10MS_IN1,     /* 8: Root Input */
  &app_Main10msMgr_Y.App_10ms,         /* 9: Root Output */
  &app_Main10msMgr_Y.P21,              /* 10: Root Output */
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

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
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
  { rtBlockSignals, 3,
    rtRootInputs, 1,
    rtRootOutputs, 2 },

  { rtBlockParameters, 5,
    rtModelParameters, 0 },

  { rtBlockStates, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3389114098U,
    2327151070U,
    2299306655U,
    2862792443U },
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
