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
 * Erandwane,
 * 411038, Pune,
 * India
 * E-mail: devcu@deviseelectronics.com
 *
 * File Name: multiword_types.h
 * Author: deVCU-TAPAS/Matlab/Simulink/Embedded Coder Generated
 * TAPAS Generation Date: Tue Mar 08 18:07:50 2022
 * ***************************************************************************
 * ***************************************************************************
 */

#ifndef MULTIWORD_TYPES_H
#define MULTIWORD_TYPES_H
#include "rtwtypes.h"

/*
 * MultiWord supporting definitions
 */
typedef long int long_T;

/*
 * MultiWord types
 */
typedef struct {
  uint32_T chunks[2];
} int64m_T;

typedef struct {
  int64m_T re;
  int64m_T im;
} cint64m_T;

typedef struct {
  uint32_T chunks[2];
} uint64m_T;

typedef struct {
  uint64m_T re;
  uint64m_T im;
} cuint64m_T;

#endif                                 /* MULTIWORD_TYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
