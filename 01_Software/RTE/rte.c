/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

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

File Name: rte.c
Author: deVCU-deMCD Generated 
E-mail: vinay.pawar@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "lib_types.h"
#include "rte.h"
#include "rte_app.h"


/* RTE Sender Receiver Bus Definition */

RTE_strData_t RTE_astrData[RTE_DATA_NUM] =
{
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_5,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_5,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_6,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_6,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_BMS_FAULT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_8,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_8,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_9,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_9,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_10,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_10,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HBRIDGE2_OUT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HBRIDGE2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSD4_P108,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSD3_P123,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSD2_P115,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSD1_P122,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID0_P69,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID8_P30,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID9_P29,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID5_P50,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID3_P49,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID7_P40,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID2_P60,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_INTERNAL_ID4,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID10_P75,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID1_P59,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID6_P39,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID12_P73,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID17_P78,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID15_P80,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID18_P77,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID19_P76,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID20_P70,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID14_P71,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID11_P74,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID16_P79,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ADC_5V_ID13_P72,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEMP1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEMP2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD2_OUT2_P6,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD3_OUT3_P4,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSDRESETPIN,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RESRVE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSDRESETPIN,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_H_BRIDGE1_DIRECTION,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD2_OUT4_P2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD3_OUT1_P8,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RESERVE2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD4_OUT3_P15,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD3_OUT2_P3,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD3_OUT4_P9,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD4_OUT1_P5,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD4_OUT2_P10,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD2_OUT3_P1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P23_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P34_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P22_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P42_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P51_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P31_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P41_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P21_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P61_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P27_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P38_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P37_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P24_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P26_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P35_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P28_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P33_AH,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P25_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P13_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P62_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P14_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ODOREADING3,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ODOREADING2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_READDATA,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DATA_COUNT2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P14_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_D3,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_D1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_A1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_A2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P62_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_A3,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_UPDATED_DATA,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RTE_ERASE_ENABLE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ERASE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ECU_HSD4_OUT4_P20,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RTE_WRITE_ENABLE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_READDATA2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SPEED,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DATACOUNT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_RTE_EEPROM_VALUE_READ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P12_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P11_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_H_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P17_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P7_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P16_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P12_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_3_P88,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_7_P103,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_5_P96,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_4_P87,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P7_DUTY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_2_P89,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P16_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_6_P94,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_16_P100,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P11_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_IGN,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_11_P121,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_15_P107,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_H_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_14_P105,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_8_P101,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_9_P128,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_10_P119,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_OUT_P17_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIN_P36_AL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ODOREADING1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_D2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ERASEEE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_12_P112,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_1_P90,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD1_OUT_13_P114,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_LSD_DATA,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_WRITE,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HSD_DATA,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWM_IN_P13_FREQ,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_SYSTEM_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_BMS_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS_MANUAL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	}
};


/* -----------------------------------------  */
/* RTE Sender Receiver Interfaces Defintions  */
/* -----------------------------------------  */

float RTE_Read_DTC_NONAME_5(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_5(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_5(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_5(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_6(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_6(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_6(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_6(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_BMS_FAULT(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_BMS_FAULT(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_BMS_FAULT(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_BMS_FAULT(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_8(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_8(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_8(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_8(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_9(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_9(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_9(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_9(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_10(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_10(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_10(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_10(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_SystemErrorSeverity(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_SystemErrorSeverity(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_100MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_100MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_100MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_100MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HBridge2_Out(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_OUT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HBRIDGE2_OUT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HBridge2_Out(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_OUT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HBRIDGE2_OUT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HBridge2_Direction_Pin_out(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HBridge2_Direction_Pin_out(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HBridge2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HBRIDGE2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HBridge2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HBRIDGE2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HBridge2_Direction_Pin(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HBridge2_Direction_Pin(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSD4_P108(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSD4_P108].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSD4_P108].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSD4_P108(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSD4_P108].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSD4_P108].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSD3_P123(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSD3_P123].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSD3_P123].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSD3_P123(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSD3_P123].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSD3_P123].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSD2_P115(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSD2_P115].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSD2_P115].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSD2_P115(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSD2_P115].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSD2_P115].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSD1_P122(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSD1_P122].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSD1_P122].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSD1_P122(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSD1_P122].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSD1_P122].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_10MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_10MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_App_10ms(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_10MS].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_App_10ms(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_10MS].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID0_P69(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID0_P69].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID0_P69].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID0_P69(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID0_P69].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID0_P69].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID8_P30(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID8_P30].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID8_P30].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID8_P30(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID8_P30].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID8_P30].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID9_P29(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID9_P29].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID9_P29].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID9_P29(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID9_P29].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID9_P29].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID5_P50(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID5_P50].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID5_P50].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID5_P50(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID5_P50].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID5_P50].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID3_P49(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID3_P49].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID3_P49].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID3_P49(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID3_P49].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID3_P49].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID7_P40(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID7_P40].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID7_P40].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID7_P40(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID7_P40].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID7_P40].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID2_P60(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID2_P60].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID2_P60].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID2_P60(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID2_P60].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID2_P60].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_Internal_ID4(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_INTERNAL_ID4].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_INTERNAL_ID4].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_Internal_ID4(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_INTERNAL_ID4].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_INTERNAL_ID4].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID10_P75(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID10_P75].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID10_P75].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID10_P75(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID10_P75].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID10_P75].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID1_P59(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID1_P59].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID1_P59].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID1_P59(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID1_P59].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID1_P59].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID6_P39(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID6_P39].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID6_P39].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID6_P39(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID6_P39].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID6_P39].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID12_P73(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID12_P73].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID12_P73].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID12_P73(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID12_P73].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID12_P73].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID17_P78(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID17_P78].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID17_P78].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID17_P78(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID17_P78].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID17_P78].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID15_P80(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID15_P80].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID15_P80].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID15_P80(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID15_P80].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID15_P80].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID18_P77(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID18_P77].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID18_P77].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID18_P77(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID18_P77].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID18_P77].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID19_P76(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID19_P76].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID19_P76].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID19_P76(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID19_P76].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID19_P76].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID20_P70(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID20_P70].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID20_P70].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID20_P70(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID20_P70].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID20_P70].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID14_P71(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID14_P71].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID14_P71].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID14_P71(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID14_P71].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID14_P71].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID11_P74(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID11_P74].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID11_P74].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID11_P74(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID11_P74].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID11_P74].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID16_P79(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID16_P79].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID16_P79].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID16_P79(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID16_P79].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID16_P79].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ADC_5v_ID13_P72(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID13_P72].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ADC_5V_ID13_P72].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ADC_5v_ID13_P72(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ADC_5V_ID13_P72].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ADC_5V_ID13_P72].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Temp1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEMP1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEMP1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Temp1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEMP1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEMP1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Temp2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEMP2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEMP2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Temp2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEMP2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEMP2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD2_OUT2_P6(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT2_P6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT2_P6].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD2_OUT2_P6(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT2_P6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT2_P6].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD3_OUT3_P4(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT3_P4].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT3_P4].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD3_OUT3_P4(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT3_P4].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT3_P4].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSDResetPin(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSDRESETPIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSDRESETPIN].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSDResetPin(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSDRESETPIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSDRESETPIN].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Resrve(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RESRVE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RESRVE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Resrve(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RESRVE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RESRVE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSDResetPin(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSDRESETPIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSDRESETPIN].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSDResetPin(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSDRESETPIN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSDRESETPIN].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_H_Bridge1_Direction(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_H_BRIDGE1_DIRECTION].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_H_BRIDGE1_DIRECTION].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_H_Bridge1_Direction(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_H_BRIDGE1_DIRECTION].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_H_BRIDGE1_DIRECTION].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD2_OUT4_P2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT4_P2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT4_P2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD2_OUT4_P2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT4_P2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT4_P2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD3_OUT1_P8(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT1_P8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT1_P8].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD3_OUT1_P8(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT1_P8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT1_P8].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Reserve2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RESERVE2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RESERVE2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Reserve2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RESERVE2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RESERVE2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD4_OUT3_P15(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT3_P15].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT3_P15].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD4_OUT3_P15(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT3_P15].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT3_P15].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD3_OUT2_P3(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT2_P3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT2_P3].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD3_OUT2_P3(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT2_P3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT2_P3].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD3_OUT4_P9(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT4_P9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT4_P9].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD3_OUT4_P9(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT4_P9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD3_OUT4_P9].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD4_OUT1_P5(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT1_P5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT1_P5].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD4_OUT1_P5(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT1_P5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT1_P5].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD4_OUT2_P10(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT2_P10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT2_P10].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD4_OUT2_P10(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT2_P10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT2_P10].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD2_OUT3_P1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT3_P1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT3_P1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD2_OUT3_P1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT3_P1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD2_OUT3_P1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P23_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P23_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P23_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P23_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P23_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P23_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P34_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P34_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P34_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P34_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P34_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P34_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P22_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P22_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P22_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P22_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P22_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P22_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P42_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P42_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P42_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P42_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P42_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P42_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P51_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P51_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P51_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P51_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P51_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P51_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P31_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P31_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P31_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P31_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P31_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P31_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P41_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P41_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P41_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P41_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P41_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P41_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P21_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P21_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P21_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P21_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P21_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P21_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P61_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P61_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P61_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P61_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P61_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P61_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P27_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P27_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P27_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P27_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P27_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P27_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P38_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P38_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P38_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P38_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P38_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P38_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P37_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P37_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P37_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P37_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P37_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P37_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P24_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P24_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P24_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P24_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P24_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P24_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P26_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P26_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P26_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P26_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P26_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P26_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P35_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P35_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P35_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P35_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P35_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P35_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P28_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P28_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P28_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P28_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P28_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P28_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P33_AH(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P33_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P33_AH].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P33_AH(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P33_AH].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P33_AH].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P25_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P25_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P25_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P25_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P25_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P25_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P13_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P13_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P13_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P13_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P13_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P13_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P62_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P62_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P62_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P62_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P62_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P62_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P14_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P14_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P14_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P14_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P14_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P14_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_OdoReading3(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ODOREADING3].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_OdoReading3(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ODOREADING3].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_OdoReading2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ODOREADING2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_OdoReading2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ODOREADING2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ReadData(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_READDATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_READDATA].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ReadData(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_READDATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_READDATA].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Data_Count2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DATA_COUNT2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DATA_COUNT2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Data_Count2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DATA_COUNT2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DATA_COUNT2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P14_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P14_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P14_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P14_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P14_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P14_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_D3(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_D3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_D3].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_D3(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_D3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_D3].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_D1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_D1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_D1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_D1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_D1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_D1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_A1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_A1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_A1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_A1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_A1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_A1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_A2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_A2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_A2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_A2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_A2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_A2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P62_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P62_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P62_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P62_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P62_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P62_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_A3(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_A3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_A3].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_A3(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_A3].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_A3].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Updated_Data(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_UPDATED_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_UPDATED_DATA].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Updated_Data(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_UPDATED_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_UPDATED_DATA].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_RTE_Erase_Enable(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_RTE_Erase_Enable(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Erase(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ERASE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ERASE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Erase(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ERASE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ERASE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_ECU_HSD4_OUT4_P20(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT4_P20].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT4_P20].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_ECU_HSD4_OUT4_P20(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT4_P20].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT4_P20].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_RTE_EEPROM_Value_Write(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_RTE_EEPROM_Value_Write(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_WRITE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_RTE_Write_Enable(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_RTE_Write_Enable(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Readdata2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_READDATA2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_READDATA2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Readdata2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_READDATA2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_READDATA2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Speed(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SPEED].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SPEED].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Speed(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SPEED].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SPEED].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DataCount(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DATACOUNT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DATACOUNT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DataCount(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DATACOUNT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DATACOUNT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_RTE_EEPROM_Value_Read(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_READ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_READ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_RTE_EEPROM_Value_Read(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_READ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_RTE_EEPROM_VALUE_READ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P12_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P12_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P11_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P11_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_H_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_H_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_H_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_H_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_H_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_H_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P17_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P17_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P7_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P7_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P16_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P16_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P12_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P12_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P12_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_3_P88(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_3_P88].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_3_P88].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_3_P88(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_3_P88].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_3_P88].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_7_P103(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_7_P103].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_7_P103].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_7_P103(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_7_P103].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_7_P103].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_5_P96(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_5_P96].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_5_P96].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_5_P96(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_5_P96].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_5_P96].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_4_P87(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_4_P87].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_4_P87].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_4_P87(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_4_P87].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_4_P87].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P7_Duty(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_DUTY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P7_Duty(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_DUTY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P7_DUTY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_2_P89(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_2_P89].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_2_P89].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_2_P89(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_2_P89].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_2_P89].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P16_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P16_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P16_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_6_P94(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_6_P94].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_6_P94].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_6_P94(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_6_P94].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_6_P94].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_16_P100(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_16_P100].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_16_P100].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_16_P100(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_16_P100].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_16_P100].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P11_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P11_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P11_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Ign(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_IGN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_IGN].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Ign(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_IGN].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_IGN].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_11_P121(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_11_P121].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_11_P121].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_11_P121(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_11_P121].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_11_P121].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_15_P107(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_15_P107].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_15_P107].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_15_P107(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_15_P107].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_15_P107].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_H_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_H_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_H_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_H_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_H_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_H_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_14_P105(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_14_P105].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_14_P105].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_14_P105(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_14_P105].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_14_P105].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_8_P101(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_8_P101].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_8_P101].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_8_P101(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_8_P101].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_8_P101].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_9_P128(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_9_P128].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_9_P128].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_9_P128(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_9_P128].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_9_P128].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_10_P119(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_10_P119].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_10_P119].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_10_P119(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_10_P119].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_10_P119].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_Out_P17_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_Out_P17_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_OUT_P17_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DIN_P36_AL(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P36_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIN_P36_AL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DIN_P36_AL(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIN_P36_AL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIN_P36_AL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_OdoReading1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ODOREADING1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_OdoReading1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ODOREADING1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ODOREADING1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_D2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_D2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_D2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_D2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_D2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_D2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Eraseee(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ERASEEE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ERASEEE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Eraseee(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ERASEEE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ERASEEE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_12_P112(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_12_P112].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_12_P112].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_12_P112(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_12_P112].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_12_P112].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_1_P90(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_1_P90].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_1_P90].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_1_P90(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_1_P90].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_1_P90].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD1_OUT_13_P114(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_13_P114].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD1_OUT_13_P114].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD1_OUT_13_P114(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD1_OUT_13_P114].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD1_OUT_13_P114].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_LSD_DATA(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_LSD_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_LSD_DATA].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_LSD_DATA(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_LSD_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_LSD_DATA].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Write(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_WRITE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_WRITE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Write(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_WRITE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_WRITE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HSD_DATA(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HSD_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HSD_DATA].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HSD_DATA(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HSD_DATA].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HSD_DATA].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWM_IN_P13_Freq(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P13_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWM_IN_P13_FREQ].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWM_IN_P13_Freq(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWM_IN_P13_FREQ].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWM_IN_P13_FREQ].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test5War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test5War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test4War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test4War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test3War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test3War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test2War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test2War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_Test1War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_Test1War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_System_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_System_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_BMS_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_BMS_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Test_1ms_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Test_1ms_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Test_1ms_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Test_1ms_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Test_1ms(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Test_1ms(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_1MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_1MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_1MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_1MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_50MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_50MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_50MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_50MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}



/*------------------------------------*/
/*       SWCs Initialization          */
/*------------------------------------*/

void RTE_vdInit(void)
{
  /*1ms Runnables Init*/
  app_FaultMgr_initialize();
  app_Main1msMgr_initialize();
  /*10ms Runnables Init*/
  app_Main10msMgr_initialize();
  /*50ms Runnables Init*/
  app_Main50msMgr_initialize();
  /*100ms Runnables Init*/
  app_Main100msMgr_initialize();
}




/*------------------------------------*/
/*       SWCs DeInitialization        */
/*------------------------------------*/

void RTE_vdDeInit(void)
{
  /*1ms Runnables DeInit*/
  app_FaultMgr_terminate();
  app_Main1msMgr_terminate();
  /*10ms Runnables DeInit*/
  app_Main10msMgr_terminate();
  /*50ms Runnables DeInit*/
  app_Main50msMgr_terminate();
  /*100ms Runnables DeInit*/
  app_Main100msMgr_terminate();
}




/*------------------------------------*/
/*       RTE Access Functions         */
/*------------------------------------*/

STATUS_t RTE_eReadData(uint16_t u16Id, float* pfltData)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u16Id < RTE_DATA_NUM)
  {
     eStatus = STATUS_OK;
     *pfltData = RTE_astrData[u16Id].fltData;
  }
  return eStatus;
}

STATUS_t RTE_eWriteData(uint16_t u16Id, float fltData)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u16Id < RTE_DATA_NUM)
  {
     eStatus = STATUS_OK;
     RTE_astrData[u16Id].fltData = fltData;
  }
  return eStatus;  
}


