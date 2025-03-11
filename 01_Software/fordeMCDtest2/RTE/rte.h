/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

Devise Electronics Pvt Ltd
Bavdhan,
411021, Pune,
India

File Name: rte.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/
#ifndef RTE_H
#define RTE_H

#include "lib_types.h"
#include <stdlib.h>

/* deMCD services includes */
#include "ecu.h"
#include "os.h"

#define RTE_MUTEX_FREE                                          (0)
#define RTE_MUTEX_BUSY                                          (1)

#define RTE_LOG_NO                                              (0)
#define RTE_LOG_YES                                             (1)


#define RTE_DATA_NUM                                                       (79)

#define RTE_DATA_ID_DTC_NONAME_5                                           (0)
#define RTE_DATA_ID_FLT_CLR_DTC_NONAME_5                                   (1)
#define RTE_DATA_ID_DTC_NONAME_6                                           (2)
#define RTE_DATA_ID_FLT_CLR_DTC_NONAME_6                                   (3)
#define RTE_DATA_ID_DTC_BMS_FAULT                                          (4)
#define RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT                                  (5)
#define RTE_DATA_ID_DTC_NONAME_8                                           (6)
#define RTE_DATA_ID_FLT_CLR_DTC_NONAME_8                                   (7)
#define RTE_DATA_ID_DTC_NONAME_9                                           (8)
#define RTE_DATA_ID_FLT_CLR_DTC_NONAME_9                                   (9)
#define RTE_DATA_ID_DTC_NONAME_10                                          (10)
#define RTE_DATA_ID_FLT_CLR_DTC_NONAME_10                                  (11)
#define RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY                                (12)
#define RTE_DATA_ID_APP_100MS_OUT1                                         (13)
#define RTE_DATA_ID_APP_100MS_IN1                                          (14)
#define RTE_DATA_ID_P66_DC_MONITOR                                         (15)
#define RTE_DATA_ID_P66_FREQ_MONITOR                                       (16)
#define RTE_DATA_ID_P56_DC_MONITOR                                         (17)
#define RTE_DATA_ID_P56_FREQ_MONITOR                                       (18)
#define RTE_DATA_ID_P32_MONITOR                                            (19)
#define RTE_DATA_ID_P13_MONITOR                                            (20)
#define RTE_DATA_ID_P28_MONITOR                                            (21)
#define RTE_DATA_ID_P27_MONITOR                                            (22)
#define RTE_DATA_ID_P29_MONITOR                                            (23)
#define RTE_DATA_ID_P08_MONITOR                                            (24)
#define RTE_DATA_ID_P54_MONITOR                                            (25)
#define RTE_DATA_ID_P12_MONITOR                                            (26)
#define RTE_DATA_ID_P36_MONITOR                                            (27)
#define RTE_DATA_ID_P25_MONITOR                                            (28)
#define RTE_DATA_ID_P53_MONITOR                                            (29)
#define RTE_DATA_ID_P11_MONITOR                                            (30)
#define RTE_DATA_ID_P61_MONITOR                                            (31)
#define RTE_DATA_ID_P52_MONITOR                                            (32)
#define RTE_DATA_ID_P07_MONITOR                                            (33)
#define RTE_DATA_ID_P38_MONITOR                                            (34)
#define RTE_DATA_ID_P55_MONITOR                                            (35)
#define RTE_DATA_ID_P30_MONITOR                                            (36)
#define RTE_DATA_ID_P35_MONITOR                                            (37)
#define RTE_DATA_ID_APP_10MS_OUT1                                          (38)
#define RTE_DATA_ID_APP_10MS_IN1                                           (39)
#define RTE_DATA_ID_DTC_TEST5FL2_MONITOR                                   (40)
#define RTE_DATA_ID_DTC_TEST5FL1_MONITOR                                   (41)
#define RTE_DATA_ID_DTC_TEST5WAR_MONITOR                                   (42)
#define RTE_DATA_ID_DTC_TEST4FL2_MONITOR                                   (43)
#define RTE_DATA_ID_DTC_TEST4FL1_MONITOR                                   (44)
#define RTE_DATA_ID_DTC_TEST4WAR_MONITOR                                   (45)
#define RTE_DATA_ID_DTC_TEST3FL2_MONITOR                                   (46)
#define RTE_DATA_ID_DTC_TEST3FL1_MONITOR                                   (47)
#define RTE_DATA_ID_DTC_TEST3WAR_MONITOR                                   (48)
#define RTE_DATA_ID_DTC_TEST2FL2_MONITOR                                   (49)
#define RTE_DATA_ID_DTC_TEST2FL1_MONITOR                                   (50)
#define RTE_DATA_ID_DTC_TEST2WAR_MONITOR                                   (51)
#define RTE_DATA_ID_DTC_TEST1FL2_MONITOR                                   (52)
#define RTE_DATA_ID_DTC_TEST1FL1_MONITOR                                   (53)
#define RTE_DATA_ID_DTC_TEST1WAR_MONITOR                                   (54)
#define RTE_DATA_ID_DTC_TEST5FL2                                           (55)
#define RTE_DATA_ID_DTC_TEST5FL1                                           (56)
#define RTE_DATA_ID_DTC_TEST5WAR                                           (57)
#define RTE_DATA_ID_DTC_TEST4FL2                                           (58)
#define RTE_DATA_ID_DTC_TEST4FL1                                           (59)
#define RTE_DATA_ID_DTC_TEST4WAR                                           (60)
#define RTE_DATA_ID_DTC_TEST3FL2                                           (61)
#define RTE_DATA_ID_DTC_TEST3FL1                                           (62)
#define RTE_DATA_ID_DTC_TEST3WAR                                           (63)
#define RTE_DATA_ID_DTC_TEST2FL2                                           (64)
#define RTE_DATA_ID_DTC_TEST2FL1                                           (65)
#define RTE_DATA_ID_DTC_TEST2WAR                                           (66)
#define RTE_DATA_ID_DTC_TEST1FL2                                           (67)
#define RTE_DATA_ID_DTC_TEST1FL1                                           (68)
#define RTE_DATA_ID_DTC_TEST1WAR                                           (69)
#define RTE_DATA_ID_FLT_SYSTEM_MONITOR                                     (70)
#define RTE_DATA_ID_DTC_BMS_MONITOR                                        (71)
#define RTE_DATA_ID_TEST_1MS_MANUAL                                        (72)
#define RTE_DATA_ID_TEST_1MS_MONITOR                                       (73)
#define RTE_DATA_ID_TEST_1MS                                               (74)
#define RTE_DATA_ID_APP_1MS_OUT1                                           (75)
#define RTE_DATA_ID_APP_1MS_IN1                                            (76)
#define RTE_DATA_ID_APP_50MS_OUT1                                          (77)
#define RTE_DATA_ID_APP_50MS_IN1                                           (78)


typedef struct RTE_strDataTemplate
{
	/* Data ID */
	uint16_t u8IdData;
	/* Data */
	float fltData;
	/* Access Mutex */
	uint32_t u32AccessMutex;
	/* Log Flag */
	uint8_t u8FlagLog;
} RTE_strData_t;


/* RTE Sender Receiver Bus Declaration */
extern RTE_strData_t RTE_astrData[RTE_DATA_NUM];


/* RTE Sender Receiver Interfaces Declarations */
float RTE_Read_DTC_NONAME_5(void);
void RTE_Write_DTC_NONAME_5(float fltValue);
float RTE_Read_FLT_CLR_DTC_NONAME_5(void);
void RTE_Write_FLT_CLR_DTC_NONAME_5(float fltValue);
float RTE_Read_DTC_NONAME_6(void);
void RTE_Write_DTC_NONAME_6(float fltValue);
float RTE_Read_FLT_CLR_DTC_NONAME_6(void);
void RTE_Write_FLT_CLR_DTC_NONAME_6(float fltValue);
float RTE_Read_DTC_BMS_FAULT(void);
void RTE_Write_DTC_BMS_FAULT(float fltValue);
float RTE_Read_FLT_CLR_DTC_BMS_FAULT(void);
void RTE_Write_FLT_CLR_DTC_BMS_FAULT(float fltValue);
float RTE_Read_DTC_NONAME_8(void);
void RTE_Write_DTC_NONAME_8(float fltValue);
float RTE_Read_FLT_CLR_DTC_NONAME_8(void);
void RTE_Write_FLT_CLR_DTC_NONAME_8(float fltValue);
float RTE_Read_DTC_NONAME_9(void);
void RTE_Write_DTC_NONAME_9(float fltValue);
float RTE_Read_FLT_CLR_DTC_NONAME_9(void);
void RTE_Write_FLT_CLR_DTC_NONAME_9(float fltValue);
float RTE_Read_DTC_NONAME_10(void);
void RTE_Write_DTC_NONAME_10(float fltValue);
float RTE_Read_FLT_CLR_DTC_NONAME_10(void);
void RTE_Write_FLT_CLR_DTC_NONAME_10(float fltValue);
float RTE_Read_FLT_SystemErrorSeverity(void);
void RTE_Write_FLT_SystemErrorSeverity(float fltValue);
float RTE_Read_APP_100MS_OUT1(void);
void RTE_Write_APP_100MS_OUT1(float fltValue);
float RTE_Read_APP_100MS_IN1(void);
void RTE_Write_APP_100MS_IN1(float fltValue);
float RTE_Read_P66_DC_Monitor(void);
void RTE_Write_P66_DC_Monitor(float fltValue);
float RTE_Read_P66_Freq_Monitor(void);
void RTE_Write_P66_Freq_Monitor(float fltValue);
float RTE_Read_P56_DC_Monitor(void);
void RTE_Write_P56_DC_Monitor(float fltValue);
float RTE_Read_P56_Freq_Monitor(void);
void RTE_Write_P56_Freq_Monitor(float fltValue);
float RTE_Read_P32_Monitor(void);
void RTE_Write_P32_Monitor(float fltValue);
float RTE_Read_P13_Monitor(void);
void RTE_Write_P13_Monitor(float fltValue);
float RTE_Read_P28_Monitor(void);
void RTE_Write_P28_Monitor(float fltValue);
float RTE_Read_P27_Monitor(void);
void RTE_Write_P27_Monitor(float fltValue);
float RTE_Read_P29_Monitor(void);
void RTE_Write_P29_Monitor(float fltValue);
float RTE_Read_P08_Monitor(void);
void RTE_Write_P08_Monitor(float fltValue);
float RTE_Read_P54_Monitor(void);
void RTE_Write_P54_Monitor(float fltValue);
float RTE_Read_P12_Monitor(void);
void RTE_Write_P12_Monitor(float fltValue);
float RTE_Read_P36_Monitor(void);
void RTE_Write_P36_Monitor(float fltValue);
float RTE_Read_P25_Monitor(void);
void RTE_Write_P25_Monitor(float fltValue);
float RTE_Read_P53_Monitor(void);
void RTE_Write_P53_Monitor(float fltValue);
float RTE_Read_P11_Monitor(void);
void RTE_Write_P11_Monitor(float fltValue);
float RTE_Read_P61_Monitor(void);
void RTE_Write_P61_Monitor(float fltValue);
float RTE_Read_P52_Monitor(void);
void RTE_Write_P52_Monitor(float fltValue);
float RTE_Read_P07_Monitor(void);
void RTE_Write_P07_Monitor(float fltValue);
float RTE_Read_P38_Monitor(void);
void RTE_Write_P38_Monitor(float fltValue);
float RTE_Read_P55_Monitor(void);
void RTE_Write_P55_Monitor(float fltValue);
float RTE_Read_P30_Monitor(void);
void RTE_Write_P30_Monitor(float fltValue);
float RTE_Read_P35_Monitor(void);
void RTE_Write_P35_Monitor(float fltValue);
float RTE_Read_APP_10MS_OUT1(void);
void RTE_Write_APP_10MS_OUT1(float fltValue);
float RTE_Read_APP_10MS_IN1(void);
void RTE_Write_APP_10MS_IN1(float fltValue);
float RTE_Read_DTC_Test5FL2_Monitor(void);
void RTE_Write_DTC_Test5FL2_Monitor(float fltValue);
float RTE_Read_DTC_Test5FL1_Monitor(void);
void RTE_Write_DTC_Test5FL1_Monitor(float fltValue);
float RTE_Read_DTC_Test5War_Monitor(void);
void RTE_Write_DTC_Test5War_Monitor(float fltValue);
float RTE_Read_DTC_Test4FL2_Monitor(void);
void RTE_Write_DTC_Test4FL2_Monitor(float fltValue);
float RTE_Read_DTC_Test4FL1_Monitor(void);
void RTE_Write_DTC_Test4FL1_Monitor(float fltValue);
float RTE_Read_DTC_Test4War_Monitor(void);
void RTE_Write_DTC_Test4War_Monitor(float fltValue);
float RTE_Read_DTC_Test3FL2_Monitor(void);
void RTE_Write_DTC_Test3FL2_Monitor(float fltValue);
float RTE_Read_DTC_Test3FL1_Monitor(void);
void RTE_Write_DTC_Test3FL1_Monitor(float fltValue);
float RTE_Read_DTC_Test3War_Monitor(void);
void RTE_Write_DTC_Test3War_Monitor(float fltValue);
float RTE_Read_DTC_Test2FL2_Monitor(void);
void RTE_Write_DTC_Test2FL2_Monitor(float fltValue);
float RTE_Read_DTC_Test2FL1_Monitor(void);
void RTE_Write_DTC_Test2FL1_Monitor(float fltValue);
float RTE_Read_DTC_Test2War_Monitor(void);
void RTE_Write_DTC_Test2War_Monitor(float fltValue);
float RTE_Read_DTC_Test1FL2_Monitor(void);
void RTE_Write_DTC_Test1FL2_Monitor(float fltValue);
float RTE_Read_DTC_Test1FL1_Monitor(void);
void RTE_Write_DTC_Test1FL1_Monitor(float fltValue);
float RTE_Read_DTC_Test1War_Monitor(void);
void RTE_Write_DTC_Test1War_Monitor(float fltValue);
float RTE_Read_DTC_Test5FL2(void);
void RTE_Write_DTC_Test5FL2(float fltValue);
float RTE_Read_DTC_Test5FL1(void);
void RTE_Write_DTC_Test5FL1(float fltValue);
float RTE_Read_DTC_Test5War(void);
void RTE_Write_DTC_Test5War(float fltValue);
float RTE_Read_DTC_Test4FL2(void);
void RTE_Write_DTC_Test4FL2(float fltValue);
float RTE_Read_DTC_Test4FL1(void);
void RTE_Write_DTC_Test4FL1(float fltValue);
float RTE_Read_DTC_Test4War(void);
void RTE_Write_DTC_Test4War(float fltValue);
float RTE_Read_DTC_Test3FL2(void);
void RTE_Write_DTC_Test3FL2(float fltValue);
float RTE_Read_DTC_Test3FL1(void);
void RTE_Write_DTC_Test3FL1(float fltValue);
float RTE_Read_DTC_Test3War(void);
void RTE_Write_DTC_Test3War(float fltValue);
float RTE_Read_DTC_Test2FL2(void);
void RTE_Write_DTC_Test2FL2(float fltValue);
float RTE_Read_DTC_Test2FL1(void);
void RTE_Write_DTC_Test2FL1(float fltValue);
float RTE_Read_DTC_Test2War(void);
void RTE_Write_DTC_Test2War(float fltValue);
float RTE_Read_DTC_Test1FL2(void);
void RTE_Write_DTC_Test1FL2(float fltValue);
float RTE_Read_DTC_Test1FL1(void);
void RTE_Write_DTC_Test1FL1(float fltValue);
float RTE_Read_DTC_Test1War(void);
void RTE_Write_DTC_Test1War(float fltValue);
float RTE_Read_FLT_System_Monitor(void);
void RTE_Write_FLT_System_Monitor(float fltValue);
float RTE_Read_DTC_BMS_Monitor(void);
void RTE_Write_DTC_BMS_Monitor(float fltValue);
float RTE_Read_Test_1ms_Manual(void);
void RTE_Write_Test_1ms_Manual(float fltValue);
float RTE_Read_Test_1ms_Monitor(void);
void RTE_Write_Test_1ms_Monitor(float fltValue);
float RTE_Read_Test_1ms(void);
void RTE_Write_Test_1ms(float fltValue);
float RTE_Read_APP_1MS_OUT1(void);
void RTE_Write_APP_1MS_OUT1(float fltValue);
float RTE_Read_APP_1MS_IN1(void);
void RTE_Write_APP_1MS_IN1(float fltValue);
float RTE_Read_APP_50MS_OUT1(void);
void RTE_Write_APP_50MS_OUT1(float fltValue);
float RTE_Read_APP_50MS_IN1(void);
void RTE_Write_APP_50MS_IN1(float fltValue);

/* RTE SWC Init */
void RTE_vdInit(void);


/* RTE SWC Deinit */
void RTE_vdDeInit(void);


/* RTE SWC Access */
STATUS_t RTE_eReadData(uint16_t u16Id, float* pfltData);
STATUS_t RTE_eWriteData(uint16_t u16Id, float fltData);



/* Framework External Services Interfaces */
#define RTE_Service_COM_vdReadSignal ECU_COM_vdReadSignal
#define RTE_Service_COM_vdWriteSignal ECU_COM_vdWriteSignal
#define RTE_Service_COM_vdEnable ECU_COM_vdEnable
#define RTE_Service_ANLG_eReadSignal ECU_ANLG_eReadSignal
#define RTE_Service_IO_eOutputControl ECU_IO_eOutputControl
#define RTE_Service_IO_eInputRead ECU_IO_eInputRead
#define RTE_Service_MEM_eWriteSignalValue ECU_MEM_eWriteSignalValue
#define RTE_Service_MEM_eReadSignalValue ECU_MEM_eReadSignalValue
#define RTE_Service_SYS_vdShutdown ECU_SYS_vdShutdown
#define RTE_Service_IO_eReadPwm ECU_IO_eReadPwm
#define RTE_Service_IO_eSetPwm ECU_IO_eSetPwm
#define RTE_Service_SYS_vdGetResetStatus ECU_SYS_vdGetResetStatus
#define RTE_Service_SYS_vdClearResetStatus ECU_SYS_vdClearResetStatus
#define RTE_Service_IO_eInternalOutputControl ECU_IO_eInternalOutputControl

extern STATUS_t RTE_Service_COM_vdReadSignal(uint8_t u8IdSignal, float* pfltValue);
extern STATUS_t RTE_Service_COM_vdWriteSignal(uint8_t u8IdSignal, float fltValue);
extern STATUS_t RTE_Service_COM_vdEnable(uint8_t u8Enable);
extern STATUS_t RTE_Service_ANLG_eReadSignal(uint8_t u8IndexSignal, float* pfltValue);
extern STATUS_t RTE_Service_IO_eOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand);
extern STATUS_t RTE_Service_IO_eInputRead(uint8_t u8IdInput, uint8_t* pu8Value);
extern STATUS_t RTE_Service_MEM_eWriteSignalValue(uint8_t u8SignalID, float fltValue, uint32_t u32Value);
extern STATUS_t RTE_Service_MEM_eReadSignalValue(uint8_t u8SignalID, float* pfltValue);
extern void RTE_Service_SYS_vdShutdown(void);
extern STATUS_t RTE_Service_IO_eReadPwm(uint8_t u8IdPin, uint32_t* pu32FreqHz, uint8_t* pu8DutyCycle);
extern STATUS_t RTE_Service_IO_eSetPwm(uint8_t u8IdPout, uint32_t u32FreqHz, uint8_t u8DutyCycle);
extern void RTE_Service_SYS_vdGetResetStatus(uint8_t* pu8IsExWdgReset);
extern void RTE_Service_SYS_vdClearResetStatus(uint8_t u8IsExWdgResetNeeded);
extern STATUS_t RTE_Service_IO_eInternalOutputControl(uint8_t u8IdOutput, ECU_IO_eOutputCommand_t eOutputCommand);

#endif /*RTE_H*/

