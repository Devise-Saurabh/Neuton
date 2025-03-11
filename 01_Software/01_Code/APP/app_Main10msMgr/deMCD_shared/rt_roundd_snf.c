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
 * File Name: rt_roundd_snf.c
 * Author: deVCU-TAPAS/Matlab/Simulink/Embedded Coder Generated
 * TAPAS Generation Date: Wed Jun 14 10:24:34 2023
 * ***************************************************************************
 * ***************************************************************************
 */

#include "rtwtypes.h"
#include <math.h>
#include "rt_roundd_snf.h"

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
