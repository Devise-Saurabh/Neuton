/*
***************************************************************************
***************************************************************************
(C) 2020 2021 Devise Electronics Pvt Ltd  All rights reserved.

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

File Name: ecu_com_cfg_gen.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_COM_CFG_GEN_H
#define ECU_COM_CFG_GEN_H


/*********** NETWORK 1 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX1_MSGS_NUM                                               (1)
#define G2EVCC_VCU_RX2                                                     (0)


/* Defines of Tx Messages */
#define ECU_COM_TX1_MSGS_NUM                                               (8)
#define EEPROM                                                             (0)
#define ADC1TO8                                                            (1)
#define ADC_17TO24                                                         (2)
#define PWM_IN                                                             (3)
#define PWM_IN_DUTYCYCLE                                                   (4)
#define GPIO_INPUTS                                                        (5)
#define CAN_COM1                                                           (6)
#define ADC_9TO16                                                          (7)


/* Defines of Rx Signals */
#define ECU_COM_RX1_SIGNALS_NUM                                            (7)
#define G2_GUNLOCKFEEDBACK                                                 (0)
#define G2VEHICLE_IMMOBILIZE                                               (1)
#define G2GUN_LOCK_FAULT                                                   (2)
#define G2TEMPERATURE2_FAULT                                               (3)
#define G2TEMPERATURE1_FAULT                                               (4)
#define G2TEMPERATURE_2_VAL                                                (5)
#define G2TEMPERATURE_1_VAL                                                (6)


/* Defines of Tx Signals */
#define ECU_COM_TX1_SIGNALS_NUM                                            (51)
#define EEPROM_VALUE                                                       (0)
#define POWER_SUPPLY24V                                                    (1)
#define ADC_P50                                                            (2)
#define ADC_P49                                                            (3)
#define ADC_P59                                                            (4)
#define ADC_P69                                                            (5)
#define ADC_P29                                                            (6)
#define ADC_P30                                                            (7)
#define ADC_P60                                                            (8)
#define ADC_P70                                                            (9)
#define ADC_P76                                                            (10)
#define ADC_P77                                                            (11)
#define ADC_P78                                                            (12)
#define ADC_P79                                                            (13)
#define PWM_IN_P62_FREQUENCY                                               (14)
#define PWM_IN_P62_DUTYCYCLE                                               (15)
#define PWM_IN_P14_FREQUENCY                                               (16)
#define PWM_IN_P14_DUTYCYCLE                                               (17)
#define PWM_IN_P13_DUTYCYCLE                                               (18)
#define PWM_IN_P13_FREQUENCY                                               (19)
#define PWM_IN_DUTYCYCLE_P13                                               (20)
#define PWM_IN_DUTYCYCLE_P62                                               (21)
#define PWM_IN_DUTYCYCLE_P14                                               (22)
#define DIN_P38                                                            (23)
#define DIN_P28                                                            (24)
#define DIN_P24                                                            (25)
#define DIN_P36                                                            (26)
#define DIN_P33                                                            (27)
#define DIN_P35                                                            (28)
#define DIN_P26                                                            (29)
#define DIN_P25                                                            (30)
#define DIN_P37                                                            (31)
#define DIN_P41                                                            (32)
#define DIN_P23                                                            (33)
#define DIN_P31                                                            (34)
#define DIN_P42                                                            (35)
#define DIN_P21                                                            (36)
#define DIN_P27                                                            (37)
#define DIN_P34                                                            (38)
#define DIN_P22                                                            (39)
#define DIN_P51                                                            (40)
#define DIN_P61                                                            (41)
#define CAN1_SIGNAL                                                        (42)
#define ADC_P80                                                            (43)
#define ADC_P71                                                            (44)
#define ADC_P39                                                            (45)
#define ADC_P40                                                            (46)
#define ADC_P74                                                            (47)
#define ADC_P72                                                            (48)
#define ADC_P75                                                            (49)
#define ADC_P73                                                            (50)


/*********** NETWORK 2 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX2_MSGS_NUM                                               (1)
#define MCUCOMMAND1RESPONSE                                                (0)


/* Defines of Tx Messages */
#define ECU_COM_TX2_MSGS_NUM                                               (2)
#define CAN_COM2                                                           (0)
#define MCUCOMMAND2RESPONSE                                                (1)


/* Defines of Rx Signals */
#define ECU_COM_RX2_SIGNALS_NUM                                            (12)
#define COMMANDMODE_MCUCMD1RES                                             (0)
#define MAXSAFEMOTORSPEEDREVERSESTATUS                                     (1)
#define MAXSAFEMOTORSPEEDREVERSE                                           (2)
#define MAXSAFEMOTORSPEEDFORWARDSTATUS                                     (3)
#define MAXSAFEMOTORSPEEDFORWARD                                           (4)
#define REGENDERATINGSTATUS                                                (5)
#define OPERATIONALMODE_MCUCMD1RES                                         (6)
#define TRACTIONDERATINGSTATUS                                             (7)
#define ROLLINGCOUNTER_MCUCMD1RESPONSE                                     (8)
#define REGENDERATING                                                      (9)
#define TRACTIONDERATING                                                   (10)
#define STATEMCU                                                           (11)


/* Defines of Tx Signals */
#define ECU_COM_TX2_SIGNALS_NUM                                            (8)
#define CAN2_SIGNAL                                                        (0)
#define SPEEDREDUCTIONREQUEST                                              (1)
#define EMERGENCYSTOP                                                      (2)
#define ROLLINGCOUNTER_MCUCMD2RESPONSE                                     (3)
#define MOTORANGLESTATUS                                                   (4)
#define MOTORSPEEDSTATUS                                                   (5)
#define MOTORANGLE                                                         (6)
#define MOTORSPEED                                                         (7)


/*********** NETWORK 3 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX3_MSGS_NUM                                               (1)
#define GEAR_SELECTOR_ETC7                                                 (0)


/* Defines of Tx Messages */
#define ECU_COM_TX3_MSGS_NUM                                               (2)
#define GPIO_CHECK_VCUTEST1                                                (0)
#define CAN_COM3                                                           (1)


/* Defines of Rx Signals */
#define ECU_COM_RX3_SIGNALS_NUM                                            (5)
#define MOTOR_SPEED                                                        (0)
#define TRACTION_BATTERY_CURRENT                                           (1)
#define TRACTION_BATTERY_SOC                                               (2)
#define HV_SYSTEM_VOLTAGE                                                  (3)
#define TRAS_CURRENT_RANGE                                                 (4)


/* Defines of Tx Signals */
#define ECU_COM_TX3_SIGNALS_NUM                                            (25)
#define P08                                                                (0)
#define P35                                                                (1)
#define P36                                                                (2)
#define P38                                                                (3)
#define P52                                                                (4)
#define P53                                                                (5)
#define P54                                                                (6)
#define P55                                                                (7)
#define P61                                                                (8)
#define P11                                                                (9)
#define P12                                                                (10)
#define P13                                                                (11)
#define P25                                                                (12)
#define P27                                                                (13)
#define P28                                                                (14)
#define P29                                                                (15)
#define P30                                                                (16)
#define P32                                                                (17)
#define ANL_P48                                                            (18)
#define ANL_P49_24V                                                        (19)
#define P07                                                                (20)
#define ANL_P50_24V                                                        (21)
#define ANL_P65_12V                                                        (22)
#define ANL_P67_5V                                                         (23)
#define CAN3_SIGNAL                                                        (24)




/* Defines of Application ECU Signals */

/* Defines of Application ECU Rx Signals */
#define ECU_COM_RX_SIGNALS_NUM                                             (24)
#define APP_RX_COMMANDMODE_MCUCMD1RES                                      (0)
#define APP_RX_G2GUN_LOCK_FAULT                                            (1)
#define APP_RX_G2TEMPERATURE1_FAULT                                        (2)
#define APP_RX_G2TEMPERATURE2_FAULT                                        (3)
#define APP_RX_G2TEMPERATURE_1_VAL                                         (4)
#define APP_RX_G2TEMPERATURE_2_VAL                                         (5)
#define APP_RX_G2VEHICLE_IMMOBILIZE                                        (6)
#define APP_RX_G2_GUNLOCKFEEDBACK                                          (7)
#define APP_RX_HV_SYSTEM_VOLTAGE                                           (8)
#define APP_RX_MAXSAFEMOTORSPEEDFORWARD                                    (9)
#define APP_RX_MAXSAFEMOTORSPEEDFORWARDSTATUS                              (10)
#define APP_RX_MAXSAFEMOTORSPEEDREVERSE                                    (11)
#define APP_RX_MAXSAFEMOTORSPEEDREVERSESTATUS                              (12)
#define APP_RX_MOTOR_SPEED                                                 (13)
#define APP_RX_OPERATIONALMODE_MCUCMD1RES                                  (14)
#define APP_RX_REGENDERATING                                               (15)
#define APP_RX_REGENDERATINGSTATUS                                         (16)
#define APP_RX_ROLLINGCOUNTER_MCUCMD1RESPONSE                              (17)
#define APP_RX_STATEMCU                                                    (18)
#define APP_RX_TRACTIONDERATING                                            (19)
#define APP_RX_TRACTIONDERATINGSTATUS                                      (20)
#define APP_RX_TRACTION_BATTERY_CURRENT                                    (21)
#define APP_RX_TRACTION_BATTERY_SOC                                        (22)
#define APP_RX_TRAS_CURRENT_RANGE                                          (23)

/* Defines of Application ECU Tx Signals */
#define ECU_COM_TX_SIGNALS_NUM                                             (84)
#define APP_TX_ADC_P29                                                     (0)
#define APP_TX_ADC_P30                                                     (1)
#define APP_TX_ADC_P39                                                     (2)
#define APP_TX_ADC_P40                                                     (3)
#define APP_TX_ADC_P49                                                     (4)
#define APP_TX_ADC_P50                                                     (5)
#define APP_TX_ADC_P59                                                     (6)
#define APP_TX_ADC_P60                                                     (7)
#define APP_TX_ADC_P69                                                     (8)
#define APP_TX_ADC_P70                                                     (9)
#define APP_TX_ADC_P71                                                     (10)
#define APP_TX_ADC_P72                                                     (11)
#define APP_TX_ADC_P73                                                     (12)
#define APP_TX_ADC_P74                                                     (13)
#define APP_TX_ADC_P75                                                     (14)
#define APP_TX_ADC_P76                                                     (15)
#define APP_TX_ADC_P77                                                     (16)
#define APP_TX_ADC_P78                                                     (17)
#define APP_TX_ADC_P79                                                     (18)
#define APP_TX_ADC_P80                                                     (19)
#define APP_TX_ANL_P48                                                     (20)
#define APP_TX_ANL_P49_24V                                                 (21)
#define APP_TX_ANL_P50_24V                                                 (22)
#define APP_TX_ANL_P65_12V                                                 (23)
#define APP_TX_ANL_P67_5V                                                  (24)
#define APP_TX_CAN1_SIGNAL                                                 (25)
#define APP_TX_CAN2_SIGNAL                                                 (26)
#define APP_TX_CAN3_SIGNAL                                                 (27)
#define APP_TX_DIN_P21                                                     (28)
#define APP_TX_DIN_P22                                                     (29)
#define APP_TX_DIN_P23                                                     (30)
#define APP_TX_DIN_P24                                                     (31)
#define APP_TX_DIN_P25                                                     (32)
#define APP_TX_DIN_P26                                                     (33)
#define APP_TX_DIN_P27                                                     (34)
#define APP_TX_DIN_P28                                                     (35)
#define APP_TX_DIN_P31                                                     (36)
#define APP_TX_DIN_P33                                                     (37)
#define APP_TX_DIN_P34                                                     (38)
#define APP_TX_DIN_P35                                                     (39)
#define APP_TX_DIN_P36                                                     (40)
#define APP_TX_DIN_P37                                                     (41)
#define APP_TX_DIN_P38                                                     (42)
#define APP_TX_DIN_P41                                                     (43)
#define APP_TX_DIN_P42                                                     (44)
#define APP_TX_DIN_P51                                                     (45)
#define APP_TX_DIN_P61                                                     (46)
#define APP_TX_EEPROM_VALUE                                                (47)
#define APP_TX_EMERGENCYSTOP                                               (48)
#define APP_TX_MOTORANGLE                                                  (49)
#define APP_TX_MOTORANGLESTATUS                                            (50)
#define APP_TX_MOTORSPEED                                                  (51)
#define APP_TX_MOTORSPEEDSTATUS                                            (52)
#define APP_TX_P07                                                         (53)
#define APP_TX_P08                                                         (54)
#define APP_TX_P11                                                         (55)
#define APP_TX_P12                                                         (56)
#define APP_TX_P13                                                         (57)
#define APP_TX_P25                                                         (58)
#define APP_TX_P27                                                         (59)
#define APP_TX_P28                                                         (60)
#define APP_TX_P29                                                         (61)
#define APP_TX_P30                                                         (62)
#define APP_TX_P32                                                         (63)
#define APP_TX_P35                                                         (64)
#define APP_TX_P36                                                         (65)
#define APP_TX_P38                                                         (66)
#define APP_TX_P52                                                         (67)
#define APP_TX_P53                                                         (68)
#define APP_TX_P54                                                         (69)
#define APP_TX_P55                                                         (70)
#define APP_TX_P61                                                         (71)
#define APP_TX_POWER_SUPPLY24V                                             (72)
#define APP_TX_PWM_IN_DUTYCYCLE_P13                                        (73)
#define APP_TX_PWM_IN_DUTYCYCLE_P14                                        (74)
#define APP_TX_PWM_IN_DUTYCYCLE_P62                                        (75)
#define APP_TX_PWM_IN_P13_DUTYCYCLE                                        (76)
#define APP_TX_PWM_IN_P13_FREQUENCY                                        (77)
#define APP_TX_PWM_IN_P14_DUTYCYCLE                                        (78)
#define APP_TX_PWM_IN_P14_FREQUENCY                                        (79)
#define APP_TX_PWM_IN_P62_DUTYCYCLE                                        (80)
#define APP_TX_PWM_IN_P62_FREQUENCY                                        (81)
#define APP_TX_ROLLINGCOUNTER_MCUCMD2RESPONSE                              (82)
#define APP_TX_SPEEDREDUCTIONREQUEST                                       (83)


extern ECU_COM_strMsg_t ECU_COM_astrRx1Msg[ECU_COM_RX1_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx1Msg[ECU_COM_TX1_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx1Signal[ECU_COM_RX1_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx1Signal[ECU_COM_TX1_SIGNALS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrRx2Msg[ECU_COM_RX2_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx2Msg[ECU_COM_TX2_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx2Signal[ECU_COM_RX2_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx2Signal[ECU_COM_TX2_SIGNALS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrRx3Msg[ECU_COM_RX3_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx3Msg[ECU_COM_TX3_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx3Signal[ECU_COM_RX3_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx3Signal[ECU_COM_TX3_SIGNALS_NUM];
extern ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeRx[ECU_COM_RX_SIGNALS_NUM];
extern ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeTx[ECU_COM_TX_SIGNALS_NUM];


#endif /*ECU_COM_CFG_GEN_H*/


