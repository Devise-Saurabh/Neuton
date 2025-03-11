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
Author: deVCU-TAPAS Generated 
E-mail: devcu@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/
#ifndef RTE_H
#define RTE_H

#include "lib_types.h"
#include <stdlib.h>

/* TAPAS services includes */
#include "ecu.h"
#include "os.h"

#define RTE_MUTEX_FREE                                          (0)
#define RTE_MUTEX_BUSY                                          (1)

#define RTE_LOG_NO                                              (0)
#define RTE_LOG_YES                                             (1)


#define RTE_DATA_NUM                                                       (202)

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
#define RTE_DATA_ID_DTC_P1643                                              (13)
#define RTE_DATA_ID_DTC_P1642                                              (14)
#define RTE_DATA_ID_DTC_P1641                                              (15)
#define RTE_DATA_ID_DTC_P1246                                              (16)
#define RTE_DATA_ID_DTC_P1245                                              (17)
#define RTE_DATA_ID_DTC_P1243                                              (18)
#define RTE_DATA_ID_DTC_P1748                                              (19)
#define RTE_DATA_ID_DTC_P1747                                              (20)
#define RTE_DATA_ID_DTC_P114E                                              (21)
#define RTE_DATA_ID_DTC_P114A                                              (22)
#define RTE_DATA_ID_DTC_P1141                                              (23)
#define RTE_DATA_ID_DTC_P1140                                              (24)
#define RTE_DATA_ID_DTC_P1741                                              (25)
#define RTE_DATA_ID_DTC_P1338                                              (26)
#define RTE_DATA_ID_DTC_P1337                                              (27)
#define RTE_DATA_ID_DTC_P143F                                              (28)
#define RTE_DATA_ID_DTC_P143E                                              (29)
#define RTE_DATA_ID_DTC_P143D                                              (30)
#define RTE_DATA_ID_DTC_P143C                                              (31)
#define RTE_DATA_ID_DTC_P1336                                              (32)
#define RTE_DATA_ID_DTC_P163E                                              (33)
#define RTE_DATA_ID_DTC_P1639                                              (34)
#define RTE_DATA_ID_DTC_P1634                                              (35)
#define RTE_DATA_ID_DTC_P1533                                              (36)
#define RTE_DATA_ID_DTC_P1532                                              (37)
#define RTE_DATA_ID_DTC_P1531                                              (38)
#define RTE_DATA_ID_DTC_P1530                                              (39)
#define RTE_DATA_ID_DTC_P1234                                              (40)
#define RTE_DATA_ID_DTC_P1231                                              (41)
#define RTE_DATA_ID_DTC_P1736                                              (42)
#define RTE_DATA_ID_DTC_P1730                                              (43)
#define RTE_DATA_ID_DTC_P1731                                              (44)
#define RTE_DATA_ID_DTC_P1732                                              (45)
#define RTE_DATA_ID_DTC_P113C                                              (46)
#define RTE_DATA_ID_DTC_P113B                                              (47)
#define RTE_DATA_ID_DTC_P1139                                              (48)
#define RTE_DATA_ID_DTC_P1138                                              (49)
#define RTE_DATA_ID_DTC_P1137                                              (50)
#define RTE_DATA_ID_DTC_P1132                                              (51)
#define RTE_DATA_ID_DTC_P182E                                              (52)
#define RTE_DATA_ID_DTC_P182D                                              (53)
#define RTE_DATA_ID_DTC_P1829                                              (54)
#define RTE_DATA_ID_DTC_P1828                                              (55)
#define RTE_DATA_ID_DTC_P1827                                              (56)
#define RTE_DATA_ID_DTC_P1826                                              (57)
#define RTE_DATA_ID_DTC_P1825                                              (58)
#define RTE_DATA_ID_DTC_P1823                                              (59)
#define RTE_DATA_ID_DTC_P1822                                              (60)
#define RTE_DATA_ID_DTC_P1427                                              (61)
#define RTE_DATA_ID_DTC_P1426                                              (62)
#define RTE_DATA_ID_DTC_P1423                                              (63)
#define RTE_DATA_ID_DTC_P1422                                              (64)
#define RTE_DATA_ID_DTC_P1421                                              (65)
#define RTE_DATA_ID_DTC_P1420                                              (66)
#define RTE_DATA_ID_DTC_P1325                                              (67)
#define RTE_DATA_ID_DTC_P1324                                              (68)
#define RTE_DATA_ID_DTC_P1323                                              (69)
#define RTE_DATA_ID_DTC_P1322                                              (70)
#define RTE_DATA_ID_DTC_P162D                                              (71)
#define RTE_DATA_ID_DTC_P162C                                              (72)
#define RTE_DATA_ID_DTC_P1627                                              (73)
#define RTE_DATA_ID_DTC_P1626                                              (74)
#define RTE_DATA_ID_DTC_P1625                                              (75)
#define RTE_DATA_ID_DTC_P1620                                              (76)
#define RTE_DATA_ID_DTC_P1524                                              (77)
#define RTE_DATA_ID_DTC_P1525                                              (78)
#define RTE_DATA_ID_DTC_P1724                                              (79)
#define RTE_DATA_ID_DTC_P112D                                              (80)
#define RTE_DATA_ID_DTC_P1126                                              (81)
#define RTE_DATA_ID_DTC_P1124                                              (82)
#define RTE_DATA_ID_DTC_P1123                                              (83)
#define RTE_DATA_ID_DTC_P1720                                              (84)
#define RTE_DATA_ID_DTC_P1218                                              (85)
#define RTE_DATA_ID_DTC_P1217                                              (86)
#define RTE_DATA_ID_DTC_P181B                                              (87)
#define RTE_DATA_ID_DTC_P181A                                              (88)
#define RTE_DATA_ID_DTC_P1811                                              (89)
#define RTE_DATA_ID_DTC_P1810                                              (90)
#define RTE_DATA_ID_DTC_P1419                                              (91)
#define RTE_DATA_ID_DTC_P1418                                              (92)
#define RTE_DATA_ID_DTC_P1415                                              (93)
#define RTE_DATA_ID_DTC_P1414                                              (94)
#define RTE_DATA_ID_DTC_P161F                                              (95)
#define RTE_DATA_ID_DTC_P161B                                              (96)
#define RTE_DATA_ID_DTC_P161A                                              (97)
#define RTE_DATA_ID_DTC_P1618                                              (98)
#define RTE_DATA_ID_DTC_P1518                                              (99)
#define RTE_DATA_ID_DTC_P1517                                              (100)
#define RTE_DATA_ID_DTC_P1516                                              (101)
#define RTE_DATA_ID_DTC_P1210                                              (102)
#define RTE_DATA_ID_DTC_P1713                                              (103)
#define RTE_DATA_ID_DTC_P180C                                              (104)
#define RTE_DATA_ID_DTC_P140B                                              (105)
#define RTE_DATA_ID_DTC_P140A                                              (106)
#define RTE_DATA_ID_DTC_P1301                                              (107)
#define RTE_DATA_ID_DTC_P1300                                              (108)
#define RTE_DATA_ID_DTC_P1202                                              (109)
#define RTE_DATA_ID_DTC_P170A                                              (110)
#define RTE_DATA_ID_DTC_P1709                                              (111)
#define RTE_DATA_ID_DTC_P1105                                              (112)
#define RTE_DATA_ID_DTC_P1705                                              (113)
#define RTE_DATA_ID_APP_100MS_OUT1                                         (114)
#define RTE_DATA_ID_APP_100MS_IN1                                          (115)
#define RTE_DATA_ID_MCU_ESTOP_MONITOR                                      (116)
#define RTE_DATA_ID_HVIL_MONITOR                                           (117)
#define RTE_DATA_ID_DFCP07_MONITOR                                         (118)
#define RTE_DATA_ID_SYS_THERM_MONITOR                                      (119)
#define RTE_DATA_ID_SW_VERSION                                             (120)
#define RTE_DATA_ID_APPLIM_MANUAL                                          (121)
#define RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE                                (122)
#define RTE_DATA_ID_CREEPSPEED_MANUAL                                      (123)
#define RTE_DATA_ID_MCUTEMP_MANUAL                                         (124)
#define RTE_DATA_ID_MOTORTEMP_MANUAL                                       (125)
#define RTE_DATA_ID_DTC_P218                                               (126)
#define RTE_DATA_ID_DTC_P186A                                              (127)
#define RTE_DATA_ID_BOOTNUMBER_MONITOR                                     (128)
#define RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL                              (129)
#define RTE_DATA_ID_TRQ_CONTROLL_MONITOR                                   (130)
#define RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR                                (131)
#define RTE_DATA_ID_REG_ILIM_MANUAL                                        (132)
#define RTE_DATA_ID_DIS_ILIM_MANUAL                                        (133)
#define RTE_DATA_ID_TRQ_LIMITATIONCAUSE                                    (134)
#define RTE_DATA_ID_TRQ_I_BATT_MONITOR                                     (135)
#define RTE_DATA_ID_MAXCHRGCURRENT_MONITOR                                 (136)
#define RTE_DATA_ID_CHRG_CONTI_MONITOR                                     (137)
#define RTE_DATA_ID_ISWATCHDOG                                             (138)
#define RTE_DATA_ID_AUX_VTG_MONITOR                                        (139)
#define RTE_DATA_ID_COOLENTTEMPOUT_MONITOR                                 (140)
#define RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR                        (141)
#define RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR                               (142)
#define RTE_DATA_ID_TORQUETHERM_MONITOR                                    (143)
#define RTE_DATA_ID_TRQ_THERM_LIMITS                                       (144)
#define RTE_DATA_ID_TRQ_THERMDERATE_MANUAL                                 (145)
#define RTE_DATA_ID_MCUTEMP_MONITOR                                        (146)
#define RTE_DATA_ID_MOTORTEMP_MONITOR                                      (147)
#define RTE_DATA_ID_CHRG_MAX_I_MANUAL                                      (148)
#define RTE_DATA_ID_SYS_CHRG_MONITOR                                       (149)
#define RTE_DATA_ID_SYS_DRV_MONITOR                                        (150)
#define RTE_DATA_ID_SYS_GEAR_MONITOR                                       (151)
#define RTE_DATA_ID_SYS_MCU_MONITOR                                        (152)
#define RTE_DATA_ID_SYS_BAT_MONITOR                                        (153)
#define RTE_DATA_ID_TCALIB_REVSPEEDLIM                                     (154)
#define RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR                                 (155)
#define RTE_DATA_ID_TCALIB_PEDALMASSFACTOR                                 (156)
#define RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD                             (157)
#define RTE_DATA_ID_TCALIB_MAXREGENTORQUE                                  (158)
#define RTE_DATA_ID_TCALIB_FSPEEDLIMIT                                     (159)
#define RTE_DATA_ID_TRQREGCURRENT_MONITOR                                  (160)
#define RTE_DATA_ID_TRQLTSELECT_MANUAL                                     (161)
#define RTE_DATA_ID_TRQPOSLIM_MANUAL                                       (162)
#define RTE_DATA_ID_TRQNEGLIM_MANUAL                                       (163)
#define RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR                               (164)
#define RTE_DATA_ID_BRKBPP_MANUAL                                          (165)
#define RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL                                   (166)
#define RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL                                  (167)
#define RTE_DATA_ID_BRKEM1_PGN_MONITOR                                     (168)
#define RTE_DATA_ID_BRKTRQPCT_MONITOR                                      (169)
#define RTE_DATA_ID_DRV_BRK_MODE_MONITOR                                   (170)
#define RTE_DATA_ID_TCALIB_M_FACTOR                                        (171)
#define RTE_DATA_ID_TCALIB_PEDALMPOS                                       (172)
#define RTE_DATA_ID_TCALIB_Y_FACTOR                                        (173)
#define RTE_DATA_ID_TCALIB_CH_FACTOR                                       (174)
#define RTE_DATA_ID_VEHICLE_SPEED_MONITOR                                  (175)
#define RTE_DATA_ID_COOLENTTEMPIN_MONITOR                                  (176)
#define RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR                               (177)
#define RTE_DATA_ID_TORQUEABSREGEN_MONITOR                                 (178)
#define RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR                             (179)
#define RTE_DATA_ID_TORQUEMCUDERATING_MONITOR                              (180)
#define RTE_DATA_ID_TORQUEOVERSPEED_MONITOR                                (181)
#define RTE_DATA_ID_MAXCREEPTORQUE_MANUAL                                  (182)
#define RTE_DATA_ID_CREEPRATECHANGE_MANUAL                                 (183)
#define RTE_DATA_ID_CANPUMP_MONITOR                                        (184)
#define RTE_DATA_ID_PWMFAN_MONITOR                                         (185)
#define RTE_DATA_ID_CREEPTRQ_MONITOR                                       (186)
#define RTE_DATA_ID_ACCPEDALTRQ_MONITOR                                    (187)
#define RTE_DATA_ID_MCUTORQUE_MONITOR                                      (188)
#define RTE_DATA_ID_BRAKE_SW_MANUAL                                        (189)
#define RTE_DATA_ID_TRQTOMCU_MANUAL                                        (190)
#define RTE_DATA_ID_BRAKESWITCH_MONITOR                                    (191)
#define RTE_DATA_ID_APP_MONITOR                                            (192)
#define RTE_DATA_ID_KEY_ON_MONITOR                                         (193)
#define RTE_DATA_ID_KEY_ACC_MONITOR                                        (194)
#define RTE_DATA_ID_BMS_PACKSTATE_MONITOR                                  (195)
#define RTE_DATA_ID_APP_10MS_OUT1                                          (196)
#define RTE_DATA_ID_APP_10MS_IN1                                           (197)
#define RTE_DATA_ID_APP_1MS_OUT1                                           (198)
#define RTE_DATA_ID_APP_1MS_IN1                                            (199)
#define RTE_DATA_ID_APP_50MS_OUT1                                          (200)
#define RTE_DATA_ID_APP_50MS_IN1                                           (201)


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
float RTE_Read_DTC_P1643(void);
void RTE_Write_DTC_P1643(float fltValue);
float RTE_Read_DTC_P1642(void);
void RTE_Write_DTC_P1642(float fltValue);
float RTE_Read_DTC_P1641(void);
void RTE_Write_DTC_P1641(float fltValue);
float RTE_Read_DTC_P1246(void);
void RTE_Write_DTC_P1246(float fltValue);
float RTE_Read_DTC_P1245(void);
void RTE_Write_DTC_P1245(float fltValue);
float RTE_Read_DTC_P1243(void);
void RTE_Write_DTC_P1243(float fltValue);
float RTE_Read_DTC_P1748(void);
void RTE_Write_DTC_P1748(float fltValue);
float RTE_Read_DTC_P1747(void);
void RTE_Write_DTC_P1747(float fltValue);
float RTE_Read_DTC_P114E(void);
void RTE_Write_DTC_P114E(float fltValue);
float RTE_Read_DTC_P114A(void);
void RTE_Write_DTC_P114A(float fltValue);
float RTE_Read_DTC_P1141(void);
void RTE_Write_DTC_P1141(float fltValue);
float RTE_Read_DTC_P1140(void);
void RTE_Write_DTC_P1140(float fltValue);
float RTE_Read_DTC_P1741(void);
void RTE_Write_DTC_P1741(float fltValue);
float RTE_Read_DTC_P1338(void);
void RTE_Write_DTC_P1338(float fltValue);
float RTE_Read_DTC_P1337(void);
void RTE_Write_DTC_P1337(float fltValue);
float RTE_Read_DTC_P143F(void);
void RTE_Write_DTC_P143F(float fltValue);
float RTE_Read_DTC_P143E(void);
void RTE_Write_DTC_P143E(float fltValue);
float RTE_Read_DTC_P143D(void);
void RTE_Write_DTC_P143D(float fltValue);
float RTE_Read_DTC_P143C(void);
void RTE_Write_DTC_P143C(float fltValue);
float RTE_Read_DTC_P1336(void);
void RTE_Write_DTC_P1336(float fltValue);
float RTE_Read_DTC_P163E(void);
void RTE_Write_DTC_P163E(float fltValue);
float RTE_Read_DTC_P1639(void);
void RTE_Write_DTC_P1639(float fltValue);
float RTE_Read_DTC_P1634(void);
void RTE_Write_DTC_P1634(float fltValue);
float RTE_Read_DTC_P1533(void);
void RTE_Write_DTC_P1533(float fltValue);
float RTE_Read_DTC_P1532(void);
void RTE_Write_DTC_P1532(float fltValue);
float RTE_Read_DTC_P1531(void);
void RTE_Write_DTC_P1531(float fltValue);
float RTE_Read_DTC_P1530(void);
void RTE_Write_DTC_P1530(float fltValue);
float RTE_Read_DTC_P1234(void);
void RTE_Write_DTC_P1234(float fltValue);
float RTE_Read_DTC_P1231(void);
void RTE_Write_DTC_P1231(float fltValue);
float RTE_Read_DTC_P1736(void);
void RTE_Write_DTC_P1736(float fltValue);
float RTE_Read_DTC_P1730(void);
void RTE_Write_DTC_P1730(float fltValue);
float RTE_Read_DTC_P1731(void);
void RTE_Write_DTC_P1731(float fltValue);
float RTE_Read_DTC_P1732(void);
void RTE_Write_DTC_P1732(float fltValue);
float RTE_Read_DTC_P113C(void);
void RTE_Write_DTC_P113C(float fltValue);
float RTE_Read_DTC_P113B(void);
void RTE_Write_DTC_P113B(float fltValue);
float RTE_Read_DTC_P1139(void);
void RTE_Write_DTC_P1139(float fltValue);
float RTE_Read_DTC_P1138(void);
void RTE_Write_DTC_P1138(float fltValue);
float RTE_Read_DTC_P1137(void);
void RTE_Write_DTC_P1137(float fltValue);
float RTE_Read_DTC_P1132(void);
void RTE_Write_DTC_P1132(float fltValue);
float RTE_Read_DTC_P182E(void);
void RTE_Write_DTC_P182E(float fltValue);
float RTE_Read_DTC_P182D(void);
void RTE_Write_DTC_P182D(float fltValue);
float RTE_Read_DTC_P1829(void);
void RTE_Write_DTC_P1829(float fltValue);
float RTE_Read_DTC_P1828(void);
void RTE_Write_DTC_P1828(float fltValue);
float RTE_Read_DTC_P1827(void);
void RTE_Write_DTC_P1827(float fltValue);
float RTE_Read_DTC_P1826(void);
void RTE_Write_DTC_P1826(float fltValue);
float RTE_Read_DTC_P1825(void);
void RTE_Write_DTC_P1825(float fltValue);
float RTE_Read_DTC_P1823(void);
void RTE_Write_DTC_P1823(float fltValue);
float RTE_Read_DTC_P1822(void);
void RTE_Write_DTC_P1822(float fltValue);
float RTE_Read_DTC_P1427(void);
void RTE_Write_DTC_P1427(float fltValue);
float RTE_Read_DTC_P1426(void);
void RTE_Write_DTC_P1426(float fltValue);
float RTE_Read_DTC_P1423(void);
void RTE_Write_DTC_P1423(float fltValue);
float RTE_Read_DTC_P1422(void);
void RTE_Write_DTC_P1422(float fltValue);
float RTE_Read_DTC_P1421(void);
void RTE_Write_DTC_P1421(float fltValue);
float RTE_Read_DTC_P1420(void);
void RTE_Write_DTC_P1420(float fltValue);
float RTE_Read_DTC_P1325(void);
void RTE_Write_DTC_P1325(float fltValue);
float RTE_Read_DTC_P1324(void);
void RTE_Write_DTC_P1324(float fltValue);
float RTE_Read_DTC_P1323(void);
void RTE_Write_DTC_P1323(float fltValue);
float RTE_Read_DTC_P1322(void);
void RTE_Write_DTC_P1322(float fltValue);
float RTE_Read_DTC_P162D(void);
void RTE_Write_DTC_P162D(float fltValue);
float RTE_Read_DTC_P162C(void);
void RTE_Write_DTC_P162C(float fltValue);
float RTE_Read_DTC_P1627(void);
void RTE_Write_DTC_P1627(float fltValue);
float RTE_Read_DTC_P1626(void);
void RTE_Write_DTC_P1626(float fltValue);
float RTE_Read_DTC_P1625(void);
void RTE_Write_DTC_P1625(float fltValue);
float RTE_Read_DTC_P1620(void);
void RTE_Write_DTC_P1620(float fltValue);
float RTE_Read_DTC_P1524(void);
void RTE_Write_DTC_P1524(float fltValue);
float RTE_Read_DTC_P1525(void);
void RTE_Write_DTC_P1525(float fltValue);
float RTE_Read_DTC_P1724(void);
void RTE_Write_DTC_P1724(float fltValue);
float RTE_Read_DTC_P112D(void);
void RTE_Write_DTC_P112D(float fltValue);
float RTE_Read_DTC_P1126(void);
void RTE_Write_DTC_P1126(float fltValue);
float RTE_Read_DTC_P1124(void);
void RTE_Write_DTC_P1124(float fltValue);
float RTE_Read_DTC_P1123(void);
void RTE_Write_DTC_P1123(float fltValue);
float RTE_Read_DTC_P1720(void);
void RTE_Write_DTC_P1720(float fltValue);
float RTE_Read_DTC_P1218(void);
void RTE_Write_DTC_P1218(float fltValue);
float RTE_Read_DTC_P1217(void);
void RTE_Write_DTC_P1217(float fltValue);
float RTE_Read_DTC_P181B(void);
void RTE_Write_DTC_P181B(float fltValue);
float RTE_Read_DTC_P181A(void);
void RTE_Write_DTC_P181A(float fltValue);
float RTE_Read_DTC_P1811(void);
void RTE_Write_DTC_P1811(float fltValue);
float RTE_Read_DTC_P1810(void);
void RTE_Write_DTC_P1810(float fltValue);
float RTE_Read_DTC_P1419(void);
void RTE_Write_DTC_P1419(float fltValue);
float RTE_Read_DTC_P1418(void);
void RTE_Write_DTC_P1418(float fltValue);
float RTE_Read_DTC_P1415(void);
void RTE_Write_DTC_P1415(float fltValue);
float RTE_Read_DTC_P1414(void);
void RTE_Write_DTC_P1414(float fltValue);
float RTE_Read_DTC_P161F(void);
void RTE_Write_DTC_P161F(float fltValue);
float RTE_Read_DTC_P161B(void);
void RTE_Write_DTC_P161B(float fltValue);
float RTE_Read_DTC_P161A(void);
void RTE_Write_DTC_P161A(float fltValue);
float RTE_Read_DTC_P1618(void);
void RTE_Write_DTC_P1618(float fltValue);
float RTE_Read_DTC_P1518(void);
void RTE_Write_DTC_P1518(float fltValue);
float RTE_Read_DTC_P1517(void);
void RTE_Write_DTC_P1517(float fltValue);
float RTE_Read_DTC_P1516(void);
void RTE_Write_DTC_P1516(float fltValue);
float RTE_Read_DTC_P1210(void);
void RTE_Write_DTC_P1210(float fltValue);
float RTE_Read_DTC_P1713(void);
void RTE_Write_DTC_P1713(float fltValue);
float RTE_Read_DTC_P180C(void);
void RTE_Write_DTC_P180C(float fltValue);
float RTE_Read_DTC_P140B(void);
void RTE_Write_DTC_P140B(float fltValue);
float RTE_Read_DTC_P140A(void);
void RTE_Write_DTC_P140A(float fltValue);
float RTE_Read_DTC_P1301(void);
void RTE_Write_DTC_P1301(float fltValue);
float RTE_Read_DTC_P1300(void);
void RTE_Write_DTC_P1300(float fltValue);
float RTE_Read_DTC_P1202(void);
void RTE_Write_DTC_P1202(float fltValue);
float RTE_Read_DTC_P170A(void);
void RTE_Write_DTC_P170A(float fltValue);
float RTE_Read_DTC_P1709(void);
void RTE_Write_DTC_P1709(float fltValue);
float RTE_Read_DTC_P1105(void);
void RTE_Write_DTC_P1105(float fltValue);
float RTE_Read_DTC_P1705(void);
void RTE_Write_DTC_P1705(float fltValue);
float RTE_Read_APP_100MS_OUT1(void);
void RTE_Write_APP_100MS_OUT1(float fltValue);
float RTE_Read_APP_100MS_IN1(void);
void RTE_Write_APP_100MS_IN1(float fltValue);
float RTE_Read_MCU_ESTOP_Monitor(void);
void RTE_Write_MCU_ESTOP_Monitor(float fltValue);
float RTE_Read_HVIL_Monitor(void);
void RTE_Write_HVIL_Monitor(float fltValue);
float RTE_Read_DFCP07_Monitor(void);
void RTE_Write_DFCP07_Monitor(float fltValue);
float RTE_Read_Sys_Therm_Monitor(void);
void RTE_Write_Sys_Therm_Monitor(float fltValue);
float RTE_Read_SW_Version(void);
void RTE_Write_SW_Version(float fltValue);
float RTE_Read_AppLim_manual(void);
void RTE_Write_AppLim_manual(float fltValue);
float RTE_Read_Tcalib_MaxDrivingTorque(void);
void RTE_Write_Tcalib_MaxDrivingTorque(float fltValue);
float RTE_Read_CreepSpeed_Manual(void);
void RTE_Write_CreepSpeed_Manual(float fltValue);
float RTE_Read_MCUTemp_Manual(void);
void RTE_Write_MCUTemp_Manual(float fltValue);
float RTE_Read_MotorTemp_Manual(void);
void RTE_Write_MotorTemp_Manual(float fltValue);
float RTE_Read_DTC_P218(void);
void RTE_Write_DTC_P218(float fltValue);
float RTE_Read_DTC_P186A(void);
void RTE_Write_DTC_P186A(float fltValue);
float RTE_Read_BootNumber_Monitor(void);
void RTE_Write_BootNumber_Monitor(float fltValue);
float RTE_Read_Trq_SkipCurrentLim_Manual(void);
void RTE_Write_Trq_SkipCurrentLim_Manual(float fltValue);
float RTE_Read_Trq_Controll_Monitor(void);
void RTE_Write_Trq_Controll_Monitor(float fltValue);
float RTE_Read_Trq_OverCurrent_Monitor(void);
void RTE_Write_Trq_OverCurrent_Monitor(float fltValue);
float RTE_Read_Reg_Ilim_Manual(void);
void RTE_Write_Reg_Ilim_Manual(float fltValue);
float RTE_Read_Dis_Ilim_Manual(void);
void RTE_Write_Dis_Ilim_Manual(float fltValue);
float RTE_Read_Trq_LimitationCause(void);
void RTE_Write_Trq_LimitationCause(float fltValue);
float RTE_Read_Trq_I_Batt_Monitor(void);
void RTE_Write_Trq_I_Batt_Monitor(float fltValue);
float RTE_Read_MaxChrgCurrent_Monitor(void);
void RTE_Write_MaxChrgCurrent_Monitor(float fltValue);
float RTE_Read_Chrg_ContI_Monitor(void);
void RTE_Write_Chrg_ContI_Monitor(float fltValue);
float RTE_Read_isWatchdog(void);
void RTE_Write_isWatchdog(float fltValue);
float RTE_Read_Aux_Vtg_Monitor(void);
void RTE_Write_Aux_Vtg_Monitor(float fltValue);
float RTE_Read_CoolentTempOut_Monitor(void);
void RTE_Write_CoolentTempOut_Monitor(float fltValue);
float RTE_Read_EEpromEnergyConsumption_Monitor(void);
void RTE_Write_EEpromEnergyConsumption_Monitor(float fltValue);
float RTE_Read_TrqThermSpeedLim_Monitor(void);
void RTE_Write_TrqThermSpeedLim_Monitor(float fltValue);
float RTE_Read_TorqueTherm_Monitor(void);
void RTE_Write_TorqueTherm_Monitor(float fltValue);
float RTE_Read_Trq_Therm_Limits(void);
void RTE_Write_Trq_Therm_Limits(float fltValue);
float RTE_Read_Trq_ThermDerate_Manual(void);
void RTE_Write_Trq_ThermDerate_Manual(float fltValue);
float RTE_Read_MCUTemp_Monitor(void);
void RTE_Write_MCUTemp_Monitor(float fltValue);
float RTE_Read_MotorTemp_Monitor(void);
void RTE_Write_MotorTemp_Monitor(float fltValue);
float RTE_Read_Chrg_Max_I_Manual(void);
void RTE_Write_Chrg_Max_I_Manual(float fltValue);
float RTE_Read_Sys_Chrg_Monitor(void);
void RTE_Write_Sys_Chrg_Monitor(float fltValue);
float RTE_Read_Sys_DRV_Monitor(void);
void RTE_Write_Sys_DRV_Monitor(float fltValue);
float RTE_Read_Sys_Gear_Monitor(void);
void RTE_Write_Sys_Gear_Monitor(float fltValue);
float RTE_Read_Sys_MCU_Monitor(void);
void RTE_Write_Sys_MCU_Monitor(float fltValue);
float RTE_Read_Sys_Bat_Monitor(void);
void RTE_Write_Sys_Bat_Monitor(float fltValue);
float RTE_Read_Tcalib_RevspeedLim(void);
void RTE_Write_Tcalib_RevspeedLim(float fltValue);
float RTE_Read_Tcalib_fSpeedLimFactor(void);
void RTE_Write_Tcalib_fSpeedLimFactor(float fltValue);
float RTE_Read_Tcalib_PedalMassFactor(void);
void RTE_Write_Tcalib_PedalMassFactor(float fltValue);
float RTE_Read_Tcalib_MinCompSpeedForward(void);
void RTE_Write_Tcalib_MinCompSpeedForward(float fltValue);
float RTE_Read_Tcalib_MaxRegenTorque(void);
void RTE_Write_Tcalib_MaxRegenTorque(float fltValue);
float RTE_Read_Tcalib_fSpeedLimit(void);
void RTE_Write_Tcalib_fSpeedLimit(float fltValue);
float RTE_Read_TrqRegCurrent_Monitor(void);
void RTE_Write_TrqRegCurrent_Monitor(float fltValue);
float RTE_Read_TrqLTSelect_Manual(void);
void RTE_Write_TrqLTSelect_Manual(float fltValue);
float RTE_Read_TrqPosLim_Manual(void);
void RTE_Write_TrqPosLim_Manual(float fltValue);
float RTE_Read_TrqNegLim_Manual(void);
void RTE_Write_TrqNegLim_Manual(float fltValue);
float RTE_Read_Refu_AirPressure_Monitor(void);
void RTE_Write_Refu_AirPressure_Monitor(float fltValue);
float RTE_Read_BrkBPP_Manual(void);
void RTE_Write_BrkBPP_Manual(float fltValue);
float RTE_Read_BrkDrivingTrq_Manual(void);
void RTE_Write_BrkDrivingTrq_Manual(float fltValue);
float RTE_Read_BrkTractionTrq_Manual(void);
void RTE_Write_BrkTractionTrq_Manual(float fltValue);
float RTE_Read_BrkEM1_PGN_Monitor(void);
void RTE_Write_BrkEM1_PGN_Monitor(float fltValue);
float RTE_Read_BrkTrqPct_Monitor(void);
void RTE_Write_BrkTrqPct_Monitor(float fltValue);
float RTE_Read_Drv_Brk_Mode_Monitor(void);
void RTE_Write_Drv_Brk_Mode_Monitor(float fltValue);
float RTE_Read_Tcalib_M_Factor(void);
void RTE_Write_Tcalib_M_Factor(float fltValue);
float RTE_Read_Tcalib_PedalMPos(void);
void RTE_Write_Tcalib_PedalMPos(float fltValue);
float RTE_Read_Tcalib_Y_Factor(void);
void RTE_Write_Tcalib_Y_Factor(float fltValue);
float RTE_Read_Tcalib_Ch_Factor(void);
void RTE_Write_Tcalib_Ch_Factor(float fltValue);
float RTE_Read_Vehicle_Speed_Monitor(void);
void RTE_Write_Vehicle_Speed_Monitor(float fltValue);
float RTE_Read_CoolentTempIn_Monitor(void);
void RTE_Write_CoolentTempIn_Monitor(float fltValue);
float RTE_Read_TorqueOutOfOrder_Monitor(void);
void RTE_Write_TorqueOutOfOrder_Monitor(float fltValue);
float RTE_Read_TorqueABSRegen_Monitor(void);
void RTE_Write_TorqueABSRegen_Monitor(float fltValue);
float RTE_Read_TorqueCurrentLimit_Monitor(void);
void RTE_Write_TorqueCurrentLimit_Monitor(float fltValue);
float RTE_Read_TorqueMCUDerating_Monitor(void);
void RTE_Write_TorqueMCUDerating_Monitor(float fltValue);
float RTE_Read_TorqueOverspeed_Monitor(void);
void RTE_Write_TorqueOverspeed_Monitor(float fltValue);
float RTE_Read_MaxCreepTorque_Manual(void);
void RTE_Write_MaxCreepTorque_Manual(float fltValue);
float RTE_Read_CreepRateChange_Manual(void);
void RTE_Write_CreepRateChange_Manual(float fltValue);
float RTE_Read_CANpump_Monitor(void);
void RTE_Write_CANpump_Monitor(float fltValue);
float RTE_Read_PWMfan_Monitor(void);
void RTE_Write_PWMfan_Monitor(float fltValue);
float RTE_Read_CreepTrq_Monitor(void);
void RTE_Write_CreepTrq_Monitor(float fltValue);
float RTE_Read_AccPedalTrq_Monitor(void);
void RTE_Write_AccPedalTrq_Monitor(float fltValue);
float RTE_Read_MCUTorque_Monitor(void);
void RTE_Write_MCUTorque_Monitor(float fltValue);
float RTE_Read_Brake_Sw_Manual(void);
void RTE_Write_Brake_Sw_Manual(float fltValue);
float RTE_Read_TrqToMCU_manual(void);
void RTE_Write_TrqToMCU_manual(float fltValue);
float RTE_Read_BrakeSwitch_Monitor(void);
void RTE_Write_BrakeSwitch_Monitor(float fltValue);
float RTE_Read_APP_Monitor(void);
void RTE_Write_APP_Monitor(float fltValue);
float RTE_Read_Key_ON_Monitor(void);
void RTE_Write_Key_ON_Monitor(float fltValue);
float RTE_Read_Key_Acc_Monitor(void);
void RTE_Write_Key_Acc_Monitor(float fltValue);
float RTE_Read_BMS_PackState_Monitor(void);
void RTE_Write_BMS_PackState_Monitor(float fltValue);
float RTE_Read_APP_10MS_OUT1(void);
void RTE_Write_APP_10MS_OUT1(float fltValue);
float RTE_Read_APP_10MS_IN1(void);
void RTE_Write_APP_10MS_IN1(float fltValue);
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

