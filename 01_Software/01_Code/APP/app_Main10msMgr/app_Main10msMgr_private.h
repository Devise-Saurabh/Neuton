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
 * File Name: app_Main10msMgr_private.h
 * Author: deVCU-deMCD/Matlab/Simulink/Embedded Coder Generated
 * deMCD Generation Date: Thu Oct 24 18:32:18 2024
 * ***************************************************************************
 * ***************************************************************************
 */

#ifndef RTW_HEADER_app_Main10msMgr_private_h_
#define RTW_HEADER_app_Main10msMgr_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "app_Main10msMgr.h"

/* Includes for objects with custom storage classes. */
#include "rte.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern void app_Main10msMgr_ANLG_ReadSignal(void);
extern void app_Main10msMgr_ANLG_ReadSignal1(void);
extern void app_Main10msMgr_ANLG_ReadSignal10(void);
extern void app_Main10msMgr_ANLG_ReadSignal11(void);
extern void app_Main10msMgr_ANLG_ReadSignal12(void);
extern void app_Main10msMgr_ANLG_ReadSignal13(void);
extern void app_Main10msMgr_ANLG_ReadSignal14(void);
extern void app_Main10msMgr_ANLG_ReadSignal15(void);
extern void app_Main10msMgr_ANLG_ReadSignal16(void);
extern void app_Main10msMgr_ANLG_ReadSignal17(void);
extern void app_Main10msMgr_ANLG_ReadSignal18(void);
extern void app_Main10msMgr_ANLG_ReadSignal19(void);
extern void app_Main10msMgr_ANLG_ReadSignal2(void);
extern void app_Main10msMgr_ANLG_ReadSignal20(void);
extern void app_Main10msMgr_ANLG_ReadSignal21(void);
extern void app_Main10msMgr_ANLG_ReadSignal22(void);
extern void app_Main10msMgr_ANLG_ReadSignal3(void);
extern void app_Main10msMgr_ANLG_ReadSignal4(void);
extern void app_Main10msMgr_ANLG_ReadSignal5(void);
extern void app_Main10msMgr_ANLG_ReadSignal6(void);
extern void app_Main10msMgr_ANLG_ReadSignal7(void);
extern void app_Main10msMgr_ANLG_ReadSignal8(void);
extern void app_Main10msMgr_ANLG_ReadSignal9(void);
extern void app_Main10msMgr_COM_WriteSignal(void);
extern void app_Main10msMgr_COM_WriteSignal50(void);
extern void app_Main10msMgr_COM_WriteSignal52(void);
extern void app_Main10msMgr_COM_WriteSignal53(void);
extern void app_Main10msMgr_IO_ReadDigitalInput(void);
extern void app_Main10msMgr_IO_ReadDigitalInput1(void);
extern void app_Main10msMgr_IO_ReadDigitalInput10(void);
extern void app_Main10msMgr_IO_ReadDigitalInput11(void);
extern void app_Main10msMgr_IO_ReadDigitalInput12(void);
extern void app_Main10msMgr_IO_ReadDigitalInput13(void);
extern void app_Main10msMgr_IO_ReadDigitalInput14(void);
extern void app_Main10msMgr_IO_ReadDigitalInput15(void);
extern void app_Main10msMgr_IO_ReadDigitalInput16(void);
extern void app_Main10msMgr_IO_ReadDigitalInput17(void);
extern void app_Main10msMgr_IO_ReadDigitalInput18(void);
extern void app_Main10msMgr_IO_ReadDigitalInput2(void);
extern void app_Main10msMgr_IO_ReadDigitalInput3(void);
extern void app_Main10msMgr_IO_ReadDigitalInput4(void);
extern void app_Main10msMgr_IO_ReadDigitalInput5(void);
extern void app_Main10msMgr_IO_ReadDigitalInput6(void);
extern void app_Main10msMgr_IO_ReadDigitalInput7(void);
extern void app_Main10msMgr_IO_ReadDigitalInput8(void);
extern void app_Main10msMgr_IO_ReadDigitalInput9(void);
extern void app_Main10msMgr_IO_ReadPwm(void);
extern void app_Main10msMgr_IO_ReadPwm1(void);
extern void app_Main10msMgr_IO_ReadPwm2(void);
extern void app_Main10msMgr_IO_SetPwm(void);
extern void app_Main10msMgr_IO_SetPwm2(void);
extern void app_Main10msMgr_IO_SetPwm3(void);
extern void app_Main10msMgr_IO_SetPwm4(void);
extern void app_Main10msMgr_IO_SetPwm5(void);
extern void app_Main10msMgr_IO_SetPwm6(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput10(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput11(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput12(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput13(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput14(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput15(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput16(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput3(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput4(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput5(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput6(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput7(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput8(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput9(void);
extern void app_Main10msMgr_IO_WriteDigitalOutput2(void);

#endif                               /* RTW_HEADER_app_Main10msMgr_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
