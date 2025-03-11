/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Bavdhan,
411021, Pune,
India

File Name: rte.h
Author: deVCU-deMCD Generated 
E-mail: vinay.pawar@deviseelectronics.com  
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


#define RTE_DATA_NUM                                                       (181)

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
#define RTE_DATA_ID_HBRIDGE2_OUT                                           (15)
#define RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT                             (16)
#define RTE_DATA_ID_HBRIDGE2                                               (17)
#define RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN                                 (18)
#define RTE_DATA_ID_HSD4_P108                                              (19)
#define RTE_DATA_ID_HSD3_P123                                              (20)
#define RTE_DATA_ID_HSD2_P115                                              (21)
#define RTE_DATA_ID_HSD1_P122                                              (22)
#define RTE_DATA_ID_APP_10MS_IN1                                           (23)
#define RTE_DATA_ID_APP_10MS                                               (24)
#define RTE_DATA_ID_ADC_5V_ID0_P69                                         (25)
#define RTE_DATA_ID_ADC_5V_ID8_P30                                         (26)
#define RTE_DATA_ID_ADC_5V_ID9_P29                                         (27)
#define RTE_DATA_ID_ADC_5V_ID5_P50                                         (28)
#define RTE_DATA_ID_ADC_5V_ID3_P49                                         (29)
#define RTE_DATA_ID_ADC_5V_ID7_P40                                         (30)
#define RTE_DATA_ID_ADC_5V_ID2_P60                                         (31)
#define RTE_DATA_ID_ADC_INTERNAL_ID4                                       (32)
#define RTE_DATA_ID_ADC_5V_ID10_P75                                        (33)
#define RTE_DATA_ID_ADC_5V_ID1_P59                                         (34)
#define RTE_DATA_ID_ADC_5V_ID6_P39                                         (35)
#define RTE_DATA_ID_ADC_5V_ID12_P73                                        (36)
#define RTE_DATA_ID_ADC_5V_ID17_P78                                        (37)
#define RTE_DATA_ID_ADC_5V_ID15_P80                                        (38)
#define RTE_DATA_ID_ADC_5V_ID18_P77                                        (39)
#define RTE_DATA_ID_ADC_5V_ID19_P76                                        (40)
#define RTE_DATA_ID_ADC_5V_ID20_P70                                        (41)
#define RTE_DATA_ID_ADC_5V_ID14_P71                                        (42)
#define RTE_DATA_ID_ADC_5V_ID11_P74                                        (43)
#define RTE_DATA_ID_ADC_5V_ID16_P79                                        (44)
#define RTE_DATA_ID_ADC_5V_ID13_P72                                        (45)
#define RTE_DATA_ID_TEMP1                                                  (46)
#define RTE_DATA_ID_TEMP2                                                  (47)
#define RTE_DATA_ID_ECU_HSD2_OUT2_P6                                       (48)
#define RTE_DATA_ID_ECU_HSD3_OUT3_P4                                       (49)
#define RTE_DATA_ID_LSDRESETPIN                                            (50)
#define RTE_DATA_ID_RESRVE                                                 (51)
#define RTE_DATA_ID_HSDRESETPIN                                            (52)
#define RTE_DATA_ID_H_BRIDGE1_DIRECTION                                    (53)
#define RTE_DATA_ID_ECU_HSD2_OUT4_P2                                       (54)
#define RTE_DATA_ID_ECU_HSD3_OUT1_P8                                       (55)
#define RTE_DATA_ID_RESERVE2                                               (56)
#define RTE_DATA_ID_ECU_HSD4_OUT3_P15                                      (57)
#define RTE_DATA_ID_ECU_HSD3_OUT2_P3                                       (58)
#define RTE_DATA_ID_ECU_HSD3_OUT4_P9                                       (59)
#define RTE_DATA_ID_ECU_HSD4_OUT1_P5                                       (60)
#define RTE_DATA_ID_ECU_HSD4_OUT2_P10                                      (61)
#define RTE_DATA_ID_ECU_HSD2_OUT3_P1                                       (62)
#define RTE_DATA_ID_DIN_P23_AH                                             (63)
#define RTE_DATA_ID_DIN_P34_AL                                             (64)
#define RTE_DATA_ID_DIN_P22_AH                                             (65)
#define RTE_DATA_ID_DIN_P42_AH                                             (66)
#define RTE_DATA_ID_DIN_P51_AH                                             (67)
#define RTE_DATA_ID_DIN_P31_AH                                             (68)
#define RTE_DATA_ID_DIN_P41_AH                                             (69)
#define RTE_DATA_ID_DIN_P21_AH                                             (70)
#define RTE_DATA_ID_DIN_P61_AH                                             (71)
#define RTE_DATA_ID_DIN_P27_AH                                             (72)
#define RTE_DATA_ID_DIN_P38_AL                                             (73)
#define RTE_DATA_ID_DIN_P37_AH                                             (74)
#define RTE_DATA_ID_DIN_P24_AH                                             (75)
#define RTE_DATA_ID_DIN_P26_AL                                             (76)
#define RTE_DATA_ID_DIN_P35_AL                                             (77)
#define RTE_DATA_ID_DIN_P28_AL                                             (78)
#define RTE_DATA_ID_DIN_P33_AH                                             (79)
#define RTE_DATA_ID_DIN_P25_AL                                             (80)
#define RTE_DATA_ID_PWM_IN_P13_DUTY                                        (81)
#define RTE_DATA_ID_PWM_IN_P62_DUTY                                        (82)
#define RTE_DATA_ID_PWM_IN_P14_DUTY                                        (83)
#define RTE_DATA_ID_ODOREADING3                                            (84)
#define RTE_DATA_ID_ODOREADING2                                            (85)
#define RTE_DATA_ID_READDATA                                               (86)
#define RTE_DATA_ID_DATA_COUNT2                                            (87)
#define RTE_DATA_ID_PWM_IN_P14_FREQ                                        (88)
#define RTE_DATA_ID_D3                                                     (89)
#define RTE_DATA_ID_D1                                                     (90)
#define RTE_DATA_ID_A1                                                     (91)
#define RTE_DATA_ID_A2                                                     (92)
#define RTE_DATA_ID_PWM_IN_P62_FREQ                                        (93)
#define RTE_DATA_ID_A3                                                     (94)
#define RTE_DATA_ID_UPDATED_DATA                                           (95)
#define RTE_DATA_ID_RTE_ERASE_ENABLE                                       (96)
#define RTE_DATA_ID_ERASE                                                  (97)
#define RTE_DATA_ID_ECU_HSD4_OUT4_P20                                      (98)
#define RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE                                 (99)
#define RTE_DATA_ID_RTE_WRITE_ENABLE                                       (100)
#define RTE_DATA_ID_READDATA2                                              (101)
#define RTE_DATA_ID_SPEED                                                  (102)
#define RTE_DATA_ID_DATACOUNT                                              (103)
#define RTE_DATA_ID_RTE_EEPROM_VALUE_READ                                  (104)
#define RTE_DATA_ID_PWM_OUT_P12_DUTY                                       (105)
#define RTE_DATA_ID_PWM_OUT_P11_DUTY                                       (106)
#define RTE_DATA_ID_PWM_OUT_H_DUTY                                         (107)
#define RTE_DATA_ID_PWM_OUT_P17_DUTY                                       (108)
#define RTE_DATA_ID_PWM_OUT_P7_FREQ                                        (109)
#define RTE_DATA_ID_PWM_OUT_P16_DUTY                                       (110)
#define RTE_DATA_ID_PWM_OUT_P12_FREQ                                       (111)
#define RTE_DATA_ID_LSD1_OUT_3_P88                                         (112)
#define RTE_DATA_ID_LSD1_OUT_7_P103                                        (113)
#define RTE_DATA_ID_LSD1_OUT_5_P96                                         (114)
#define RTE_DATA_ID_LSD1_OUT_4_P87                                         (115)
#define RTE_DATA_ID_PWM_OUT_P7_DUTY                                        (116)
#define RTE_DATA_ID_LSD1_OUT_2_P89                                         (117)
#define RTE_DATA_ID_PWM_OUT_P16_FREQ                                       (118)
#define RTE_DATA_ID_LSD1_OUT_6_P94                                         (119)
#define RTE_DATA_ID_LSD1_OUT_16_P100                                       (120)
#define RTE_DATA_ID_PWM_OUT_P11_FREQ                                       (121)
#define RTE_DATA_ID_IGN                                                    (122)
#define RTE_DATA_ID_LSD1_OUT_11_P121                                       (123)
#define RTE_DATA_ID_LSD1_OUT_15_P107                                       (124)
#define RTE_DATA_ID_PWM_OUT_H_FREQ                                         (125)
#define RTE_DATA_ID_LSD1_OUT_14_P105                                       (126)
#define RTE_DATA_ID_LSD1_OUT_8_P101                                        (127)
#define RTE_DATA_ID_LSD1_OUT_9_P128                                        (128)
#define RTE_DATA_ID_LSD1_OUT_10_P119                                       (129)
#define RTE_DATA_ID_PWM_OUT_P17_FREQ                                       (130)
#define RTE_DATA_ID_DIN_P36_AL                                             (131)
#define RTE_DATA_ID_ODOREADING1                                            (132)
#define RTE_DATA_ID_D2                                                     (133)
#define RTE_DATA_ID_ERASEEE                                                (134)
#define RTE_DATA_ID_LSD1_OUT_12_P112                                       (135)
#define RTE_DATA_ID_LSD1_OUT_1_P90                                         (136)
#define RTE_DATA_ID_LSD1_OUT_13_P114                                       (137)
#define RTE_DATA_ID_LSD_DATA                                               (138)
#define RTE_DATA_ID_WRITE                                                  (139)
#define RTE_DATA_ID_HSD_DATA                                               (140)
#define RTE_DATA_ID_PWM_IN_P13_FREQ                                        (141)
#define RTE_DATA_ID_DTC_TEST5FL2_MONITOR                                   (142)
#define RTE_DATA_ID_DTC_TEST5FL1_MONITOR                                   (143)
#define RTE_DATA_ID_DTC_TEST5WAR_MONITOR                                   (144)
#define RTE_DATA_ID_DTC_TEST4FL2_MONITOR                                   (145)
#define RTE_DATA_ID_DTC_TEST4FL1_MONITOR                                   (146)
#define RTE_DATA_ID_DTC_TEST4WAR_MONITOR                                   (147)
#define RTE_DATA_ID_DTC_TEST3FL2_MONITOR                                   (148)
#define RTE_DATA_ID_DTC_TEST3FL1_MONITOR                                   (149)
#define RTE_DATA_ID_DTC_TEST3WAR_MONITOR                                   (150)
#define RTE_DATA_ID_DTC_TEST2FL2_MONITOR                                   (151)
#define RTE_DATA_ID_DTC_TEST2FL1_MONITOR                                   (152)
#define RTE_DATA_ID_DTC_TEST2WAR_MONITOR                                   (153)
#define RTE_DATA_ID_DTC_TEST1FL2_MONITOR                                   (154)
#define RTE_DATA_ID_DTC_TEST1FL1_MONITOR                                   (155)
#define RTE_DATA_ID_DTC_TEST1WAR_MONITOR                                   (156)
#define RTE_DATA_ID_DTC_TEST5FL2                                           (157)
#define RTE_DATA_ID_DTC_TEST5FL1                                           (158)
#define RTE_DATA_ID_DTC_TEST5WAR                                           (159)
#define RTE_DATA_ID_DTC_TEST4FL2                                           (160)
#define RTE_DATA_ID_DTC_TEST4FL1                                           (161)
#define RTE_DATA_ID_DTC_TEST4WAR                                           (162)
#define RTE_DATA_ID_DTC_TEST3FL2                                           (163)
#define RTE_DATA_ID_DTC_TEST3FL1                                           (164)
#define RTE_DATA_ID_DTC_TEST3WAR                                           (165)
#define RTE_DATA_ID_DTC_TEST2FL2                                           (166)
#define RTE_DATA_ID_DTC_TEST2FL1                                           (167)
#define RTE_DATA_ID_DTC_TEST2WAR                                           (168)
#define RTE_DATA_ID_DTC_TEST1FL2                                           (169)
#define RTE_DATA_ID_DTC_TEST1FL1                                           (170)
#define RTE_DATA_ID_DTC_TEST1WAR                                           (171)
#define RTE_DATA_ID_FLT_SYSTEM_MONITOR                                     (172)
#define RTE_DATA_ID_DTC_BMS_MONITOR                                        (173)
#define RTE_DATA_ID_TEST_1MS_MANUAL                                        (174)
#define RTE_DATA_ID_TEST_1MS_MONITOR                                       (175)
#define RTE_DATA_ID_TEST_1MS                                               (176)
#define RTE_DATA_ID_APP_1MS_OUT1                                           (177)
#define RTE_DATA_ID_APP_1MS_IN1                                            (178)
#define RTE_DATA_ID_APP_50MS_OUT1                                          (179)
#define RTE_DATA_ID_APP_50MS_IN1                                           (180)


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
float RTE_Read_HBridge2_Out(void);
void RTE_Write_HBridge2_Out(float fltValue);
float RTE_Read_HBridge2_Direction_Pin_out(void);
void RTE_Write_HBridge2_Direction_Pin_out(float fltValue);
float RTE_Read_HBridge2(void);
void RTE_Write_HBridge2(float fltValue);
float RTE_Read_HBridge2_Direction_Pin(void);
void RTE_Write_HBridge2_Direction_Pin(float fltValue);
float RTE_Read_HSD4_P108(void);
void RTE_Write_HSD4_P108(float fltValue);
float RTE_Read_HSD3_P123(void);
void RTE_Write_HSD3_P123(float fltValue);
float RTE_Read_HSD2_P115(void);
void RTE_Write_HSD2_P115(float fltValue);
float RTE_Read_HSD1_P122(void);
void RTE_Write_HSD1_P122(float fltValue);
float RTE_Read_APP_10MS_IN1(void);
void RTE_Write_APP_10MS_IN1(float fltValue);
float RTE_Read_App_10ms(void);
void RTE_Write_App_10ms(float fltValue);
float RTE_Read_ADC_5v_ID0_P69(void);
void RTE_Write_ADC_5v_ID0_P69(float fltValue);
float RTE_Read_ADC_5v_ID8_P30(void);
void RTE_Write_ADC_5v_ID8_P30(float fltValue);
float RTE_Read_ADC_5v_ID9_P29(void);
void RTE_Write_ADC_5v_ID9_P29(float fltValue);
float RTE_Read_ADC_5v_ID5_P50(void);
void RTE_Write_ADC_5v_ID5_P50(float fltValue);
float RTE_Read_ADC_5v_ID3_P49(void);
void RTE_Write_ADC_5v_ID3_P49(float fltValue);
float RTE_Read_ADC_5v_ID7_P40(void);
void RTE_Write_ADC_5v_ID7_P40(float fltValue);
float RTE_Read_ADC_5v_ID2_P60(void);
void RTE_Write_ADC_5v_ID2_P60(float fltValue);
float RTE_Read_ADC_Internal_ID4(void);
void RTE_Write_ADC_Internal_ID4(float fltValue);
float RTE_Read_ADC_5v_ID10_P75(void);
void RTE_Write_ADC_5v_ID10_P75(float fltValue);
float RTE_Read_ADC_5v_ID1_P59(void);
void RTE_Write_ADC_5v_ID1_P59(float fltValue);
float RTE_Read_ADC_5v_ID6_P39(void);
void RTE_Write_ADC_5v_ID6_P39(float fltValue);
float RTE_Read_ADC_5v_ID12_P73(void);
void RTE_Write_ADC_5v_ID12_P73(float fltValue);
float RTE_Read_ADC_5v_ID17_P78(void);
void RTE_Write_ADC_5v_ID17_P78(float fltValue);
float RTE_Read_ADC_5v_ID15_P80(void);
void RTE_Write_ADC_5v_ID15_P80(float fltValue);
float RTE_Read_ADC_5v_ID18_P77(void);
void RTE_Write_ADC_5v_ID18_P77(float fltValue);
float RTE_Read_ADC_5v_ID19_P76(void);
void RTE_Write_ADC_5v_ID19_P76(float fltValue);
float RTE_Read_ADC_5v_ID20_P70(void);
void RTE_Write_ADC_5v_ID20_P70(float fltValue);
float RTE_Read_ADC_5v_ID14_P71(void);
void RTE_Write_ADC_5v_ID14_P71(float fltValue);
float RTE_Read_ADC_5v_ID11_P74(void);
void RTE_Write_ADC_5v_ID11_P74(float fltValue);
float RTE_Read_ADC_5v_ID16_P79(void);
void RTE_Write_ADC_5v_ID16_P79(float fltValue);
float RTE_Read_ADC_5v_ID13_P72(void);
void RTE_Write_ADC_5v_ID13_P72(float fltValue);
float RTE_Read_Temp1(void);
void RTE_Write_Temp1(float fltValue);
float RTE_Read_Temp2(void);
void RTE_Write_Temp2(float fltValue);
float RTE_Read_ECU_HSD2_OUT2_P6(void);
void RTE_Write_ECU_HSD2_OUT2_P6(float fltValue);
float RTE_Read_ECU_HSD3_OUT3_P4(void);
void RTE_Write_ECU_HSD3_OUT3_P4(float fltValue);
float RTE_Read_LSDResetPin(void);
void RTE_Write_LSDResetPin(float fltValue);
float RTE_Read_Resrve(void);
void RTE_Write_Resrve(float fltValue);
float RTE_Read_HSDResetPin(void);
void RTE_Write_HSDResetPin(float fltValue);
float RTE_Read_H_Bridge1_Direction(void);
void RTE_Write_H_Bridge1_Direction(float fltValue);
float RTE_Read_ECU_HSD2_OUT4_P2(void);
void RTE_Write_ECU_HSD2_OUT4_P2(float fltValue);
float RTE_Read_ECU_HSD3_OUT1_P8(void);
void RTE_Write_ECU_HSD3_OUT1_P8(float fltValue);
float RTE_Read_Reserve2(void);
void RTE_Write_Reserve2(float fltValue);
float RTE_Read_ECU_HSD4_OUT3_P15(void);
void RTE_Write_ECU_HSD4_OUT3_P15(float fltValue);
float RTE_Read_ECU_HSD3_OUT2_P3(void);
void RTE_Write_ECU_HSD3_OUT2_P3(float fltValue);
float RTE_Read_ECU_HSD3_OUT4_P9(void);
void RTE_Write_ECU_HSD3_OUT4_P9(float fltValue);
float RTE_Read_ECU_HSD4_OUT1_P5(void);
void RTE_Write_ECU_HSD4_OUT1_P5(float fltValue);
float RTE_Read_ECU_HSD4_OUT2_P10(void);
void RTE_Write_ECU_HSD4_OUT2_P10(float fltValue);
float RTE_Read_ECU_HSD2_OUT3_P1(void);
void RTE_Write_ECU_HSD2_OUT3_P1(float fltValue);
float RTE_Read_DIN_P23_AH(void);
void RTE_Write_DIN_P23_AH(float fltValue);
float RTE_Read_DIN_P34_AL(void);
void RTE_Write_DIN_P34_AL(float fltValue);
float RTE_Read_DIN_P22_AH(void);
void RTE_Write_DIN_P22_AH(float fltValue);
float RTE_Read_DIN_P42_AH(void);
void RTE_Write_DIN_P42_AH(float fltValue);
float RTE_Read_DIN_P51_AH(void);
void RTE_Write_DIN_P51_AH(float fltValue);
float RTE_Read_DIN_P31_AH(void);
void RTE_Write_DIN_P31_AH(float fltValue);
float RTE_Read_DIN_P41_AH(void);
void RTE_Write_DIN_P41_AH(float fltValue);
float RTE_Read_DIN_P21_AH(void);
void RTE_Write_DIN_P21_AH(float fltValue);
float RTE_Read_DIN_P61_AH(void);
void RTE_Write_DIN_P61_AH(float fltValue);
float RTE_Read_DIN_P27_AH(void);
void RTE_Write_DIN_P27_AH(float fltValue);
float RTE_Read_DIN_P38_AL(void);
void RTE_Write_DIN_P38_AL(float fltValue);
float RTE_Read_DIN_P37_AH(void);
void RTE_Write_DIN_P37_AH(float fltValue);
float RTE_Read_DIN_P24_AH(void);
void RTE_Write_DIN_P24_AH(float fltValue);
float RTE_Read_DIN_P26_AL(void);
void RTE_Write_DIN_P26_AL(float fltValue);
float RTE_Read_DIN_P35_AL(void);
void RTE_Write_DIN_P35_AL(float fltValue);
float RTE_Read_DIN_P28_AL(void);
void RTE_Write_DIN_P28_AL(float fltValue);
float RTE_Read_DIN_P33_AH(void);
void RTE_Write_DIN_P33_AH(float fltValue);
float RTE_Read_DIN_P25_AL(void);
void RTE_Write_DIN_P25_AL(float fltValue);
float RTE_Read_PWM_IN_P13_Duty(void);
void RTE_Write_PWM_IN_P13_Duty(float fltValue);
float RTE_Read_PWM_IN_P62_Duty(void);
void RTE_Write_PWM_IN_P62_Duty(float fltValue);
float RTE_Read_PWM_IN_P14_Duty(void);
void RTE_Write_PWM_IN_P14_Duty(float fltValue);
float RTE_Read_OdoReading3(void);
void RTE_Write_OdoReading3(float fltValue);
float RTE_Read_OdoReading2(void);
void RTE_Write_OdoReading2(float fltValue);
float RTE_Read_ReadData(void);
void RTE_Write_ReadData(float fltValue);
float RTE_Read_Data_Count2(void);
void RTE_Write_Data_Count2(float fltValue);
float RTE_Read_PWM_IN_P14_Freq(void);
void RTE_Write_PWM_IN_P14_Freq(float fltValue);
float RTE_Read_D3(void);
void RTE_Write_D3(float fltValue);
float RTE_Read_D1(void);
void RTE_Write_D1(float fltValue);
float RTE_Read_A1(void);
void RTE_Write_A1(float fltValue);
float RTE_Read_A2(void);
void RTE_Write_A2(float fltValue);
float RTE_Read_PWM_IN_P62_Freq(void);
void RTE_Write_PWM_IN_P62_Freq(float fltValue);
float RTE_Read_A3(void);
void RTE_Write_A3(float fltValue);
float RTE_Read_Updated_Data(void);
void RTE_Write_Updated_Data(float fltValue);
float RTE_Read_RTE_Erase_Enable(void);
void RTE_Write_RTE_Erase_Enable(float fltValue);
float RTE_Read_Erase(void);
void RTE_Write_Erase(float fltValue);
float RTE_Read_ECU_HSD4_OUT4_P20(void);
void RTE_Write_ECU_HSD4_OUT4_P20(float fltValue);
float RTE_Read_RTE_EEPROM_Value_Write(void);
void RTE_Write_RTE_EEPROM_Value_Write(float fltValue);
float RTE_Read_RTE_Write_Enable(void);
void RTE_Write_RTE_Write_Enable(float fltValue);
float RTE_Read_Readdata2(void);
void RTE_Write_Readdata2(float fltValue);
float RTE_Read_Speed(void);
void RTE_Write_Speed(float fltValue);
float RTE_Read_DataCount(void);
void RTE_Write_DataCount(float fltValue);
float RTE_Read_RTE_EEPROM_Value_Read(void);
void RTE_Write_RTE_EEPROM_Value_Read(float fltValue);
float RTE_Read_PWM_Out_P12_Duty(void);
void RTE_Write_PWM_Out_P12_Duty(float fltValue);
float RTE_Read_PWM_Out_P11_Duty(void);
void RTE_Write_PWM_Out_P11_Duty(float fltValue);
float RTE_Read_PWM_Out_H_Duty(void);
void RTE_Write_PWM_Out_H_Duty(float fltValue);
float RTE_Read_PWM_Out_P17_Duty(void);
void RTE_Write_PWM_Out_P17_Duty(float fltValue);
float RTE_Read_PWM_Out_P7_Freq(void);
void RTE_Write_PWM_Out_P7_Freq(float fltValue);
float RTE_Read_PWM_Out_P16_Duty(void);
void RTE_Write_PWM_Out_P16_Duty(float fltValue);
float RTE_Read_PWM_Out_P12_Freq(void);
void RTE_Write_PWM_Out_P12_Freq(float fltValue);
float RTE_Read_LSD1_OUT_3_P88(void);
void RTE_Write_LSD1_OUT_3_P88(float fltValue);
float RTE_Read_LSD1_OUT_7_P103(void);
void RTE_Write_LSD1_OUT_7_P103(float fltValue);
float RTE_Read_LSD1_OUT_5_P96(void);
void RTE_Write_LSD1_OUT_5_P96(float fltValue);
float RTE_Read_LSD1_OUT_4_P87(void);
void RTE_Write_LSD1_OUT_4_P87(float fltValue);
float RTE_Read_PWM_Out_P7_Duty(void);
void RTE_Write_PWM_Out_P7_Duty(float fltValue);
float RTE_Read_LSD1_OUT_2_P89(void);
void RTE_Write_LSD1_OUT_2_P89(float fltValue);
float RTE_Read_PWM_Out_P16_Freq(void);
void RTE_Write_PWM_Out_P16_Freq(float fltValue);
float RTE_Read_LSD1_OUT_6_P94(void);
void RTE_Write_LSD1_OUT_6_P94(float fltValue);
float RTE_Read_LSD1_OUT_16_P100(void);
void RTE_Write_LSD1_OUT_16_P100(float fltValue);
float RTE_Read_PWM_Out_P11_Freq(void);
void RTE_Write_PWM_Out_P11_Freq(float fltValue);
float RTE_Read_Ign(void);
void RTE_Write_Ign(float fltValue);
float RTE_Read_LSD1_OUT_11_P121(void);
void RTE_Write_LSD1_OUT_11_P121(float fltValue);
float RTE_Read_LSD1_OUT_15_P107(void);
void RTE_Write_LSD1_OUT_15_P107(float fltValue);
float RTE_Read_PWM_Out_H_Freq(void);
void RTE_Write_PWM_Out_H_Freq(float fltValue);
float RTE_Read_LSD1_OUT_14_P105(void);
void RTE_Write_LSD1_OUT_14_P105(float fltValue);
float RTE_Read_LSD1_OUT_8_P101(void);
void RTE_Write_LSD1_OUT_8_P101(float fltValue);
float RTE_Read_LSD1_OUT_9_P128(void);
void RTE_Write_LSD1_OUT_9_P128(float fltValue);
float RTE_Read_LSD1_OUT_10_P119(void);
void RTE_Write_LSD1_OUT_10_P119(float fltValue);
float RTE_Read_PWM_Out_P17_Freq(void);
void RTE_Write_PWM_Out_P17_Freq(float fltValue);
float RTE_Read_DIN_P36_AL(void);
void RTE_Write_DIN_P36_AL(float fltValue);
float RTE_Read_OdoReading1(void);
void RTE_Write_OdoReading1(float fltValue);
float RTE_Read_D2(void);
void RTE_Write_D2(float fltValue);
float RTE_Read_Eraseee(void);
void RTE_Write_Eraseee(float fltValue);
float RTE_Read_LSD1_OUT_12_P112(void);
void RTE_Write_LSD1_OUT_12_P112(float fltValue);
float RTE_Read_LSD1_OUT_1_P90(void);
void RTE_Write_LSD1_OUT_1_P90(float fltValue);
float RTE_Read_LSD1_OUT_13_P114(void);
void RTE_Write_LSD1_OUT_13_P114(float fltValue);
float RTE_Read_LSD_DATA(void);
void RTE_Write_LSD_DATA(float fltValue);
float RTE_Read_Write(void);
void RTE_Write_Write(float fltValue);
float RTE_Read_HSD_DATA(void);
void RTE_Write_HSD_DATA(float fltValue);
float RTE_Read_PWM_IN_P13_Freq(void);
void RTE_Write_PWM_IN_P13_Freq(float fltValue);
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

