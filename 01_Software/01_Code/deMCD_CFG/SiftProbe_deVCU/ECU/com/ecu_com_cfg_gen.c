/*
***************************************************************************
***************************************************************************
(C) Devise electronics Pvt Ltd  All rights reserved.

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

File Name: ecu_com_cfg_gen.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc.h"
#include "ecu_com.h"
#include "ecu_com_cfg_gen.h"


/*********** NETWORK 1 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx1Msg[ECU_COM_RX1_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_3,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strMsg_t ECU_COM_astrTx1Msg[ECU_COM_TX1_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		EEPROM,
        /*Can Msg Id*/
		0x95,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_3,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_4,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_5,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_6,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		PWM_IN_DUTYCYCLE,
        /*Can Msg Id*/
		0x96,
        /*DLC*/
		4,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_7,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_8,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		CAN_COM1,
        /*Can Msg Id*/
		0x97,
        /*DLC*/
		2,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_9,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_10,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx1Signal[ECU_COM_RX1_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		G2_GUNLOCKFEEDBACK,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		45,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2VEHICLE_IMMOBILIZE,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		44,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2GUN_LOCK_FAULT,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		43,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2TEMPERATURE2_FAULT,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		42,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2TEMPERATURE1_FAULT,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		41,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2TEMPERATURE_2_VAL,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		10,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		G2TEMPERATURE_1_VAL,
        /*Frame Id*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		10,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


ECU_COM_strSignal_t ECU_COM_astrTx1Signal[ECU_COM_TX1_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		EEPROM_VALUE,
        /*Frame Id*/
		EEPROM,
        /*Can Msg Id*/
		0x95,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		POWER_SUPPLY24V,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P50,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		55,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P49,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P59,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P69,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P29,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P30,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P60,
        /*Frame Id*/
		ADC1TO8,
        /*Can Msg Id*/
		0x90,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P70,
        /*Frame Id*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P76,
        /*Frame Id*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P77,
        /*Frame Id*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P78,
        /*Frame Id*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P79,
        /*Frame Id*/
		ADC_17TO24,
        /*Can Msg Id*/
		0x92,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P62_FREQUENCY,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		10,
        /*Mask*/
		1023,
        /*MSB number*/
		43,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P62_DUTYCYCLE,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		7,
        /*Mask*/
		127,
        /*MSB number*/
		50,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P14_FREQUENCY,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		10,
        /*Mask*/
		1023,
        /*MSB number*/
		26,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P14_DUTYCYCLE,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		7,
        /*Mask*/
		127,
        /*MSB number*/
		33,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P13_DUTYCYCLE,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		7,
        /*Mask*/
		127,
        /*MSB number*/
		16,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_P13_FREQUENCY,
        /*Frame Id*/
		PWM_IN,
        /*Can Msg Id*/
		0x94,
        /*Size*/
		10,
        /*Mask*/
		1023,
        /*MSB number*/
		9,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_DUTYCYCLE_P13,
        /*Frame Id*/
		PWM_IN_DUTYCYCLE,
        /*Can Msg Id*/
		0x96,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_DUTYCYCLE_P62,
        /*Frame Id*/
		PWM_IN_DUTYCYCLE,
        /*Can Msg Id*/
		0x96,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		PWM_IN_DUTYCYCLE_P14,
        /*Frame Id*/
		PWM_IN_DUTYCYCLE,
        /*Can Msg Id*/
		0x96,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P38,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P28,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		14,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P24,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		13,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P36,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		12,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P33,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		11,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P35,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		10,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P26,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		9,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P25,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P37,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		6,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P41,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		5,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P23,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		4,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P31,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		3,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P42,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		2,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P21,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		1,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P27,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		18,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P34,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		17,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P22,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		16,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P51,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		8,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		DIN_P61,
        /*Frame Id*/
		GPIO_INPUTS,
        /*Can Msg Id*/
		0x93,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		0,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		CAN1_SIGNAL,
        /*Frame Id*/
		CAN_COM1,
        /*Can Msg Id*/
		0x97,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P80,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P71,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		55,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P39,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P40,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P74,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P72,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P75,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ADC_P73,
        /*Frame Id*/
		ADC_9TO16,
        /*Can Msg Id*/
		0x91,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


/*********** NETWORK 2 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx2Msg[ECU_COM_RX2_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*DLC*/
		6,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_1,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strMsg_t ECU_COM_astrTx2Msg[ECU_COM_TX2_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		CAN_COM2,
        /*Can Msg Id*/
		0x99,
        /*DLC*/
		1,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_1,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*DLC*/
		5,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_2,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx2Signal[ECU_COM_RX2_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		COMMANDMODE_MCUCMD1RES,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		3,
        /*Mask*/
		7,
        /*MSB number*/
		27,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MAXSAFEMOTORSPEEDREVERSESTATUS,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		42,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MAXSAFEMOTORSPEEDREVERSE,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		9,
        /*Mask*/
		511,
        /*MSB number*/
		40,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		100,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MAXSAFEMOTORSPEEDFORWARDSTATUS,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		41,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MAXSAFEMOTORSPEEDFORWARD,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		9,
        /*Mask*/
		511,
        /*MSB number*/
		24,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		100,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		REGENDERATINGSTATUS,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		OPERATIONALMODE_MCUCMD1RES,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		3,
        /*Mask*/
		7,
        /*MSB number*/
		6,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		TRACTIONDERATINGSTATUS,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		43,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ROLLINGCOUNTER_MCUCMD1RESPONSE,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		REGENDERATING,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		11,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		TRACTIONDERATING,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		STATEMCU,
        /*Frame Id*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		3,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


ECU_COM_strSignal_t ECU_COM_astrTx2Signal[ECU_COM_TX2_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN2_SIGNAL,
        /*Frame Id*/
		CAN_COM2,
        /*Can Msg Id*/
		0x99,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		SPEEDREDUCTIONREQUEST,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		34,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		EMERGENCYSTOP,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		35,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ROLLINGCOUNTER_MCUCMD2RESPONSE,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MOTORANGLESTATUS,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		32,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MOTORSPEEDSTATUS,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		33,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MOTORANGLE,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1.5259e-05,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		MOTORSPEED,
        /*Frame Id*/
		MCUCOMMAND2RESPONSE,
        /*Can Msg Id*/
		0x44,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		-32767,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


/*********** NETWORK 3 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx3Msg[ECU_COM_RX3_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX3_MSG_INDEX_1,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strMsg_t ECU_COM_astrTx3Msg[ECU_COM_TX3_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX3_MSG_INDEX_1,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		CAN_COM3,
        /*Can Msg Id*/
		0x98,
        /*DLC*/
		1,
        /*Lower Layer Frame Id */
		UC_CAN_TX3_MSG_INDEX_2,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx3Signal[ECU_COM_RX3_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		MOTOR_SPEED,
        /*Frame Id*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		55,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		-32762,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		TRACTION_BATTERY_CURRENT,
        /*Frame Id*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		TRACTION_BATTERY_SOC,
        /*Frame Id*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.5,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		HV_SYSTEM_VOLTAGE,
        /*Frame Id*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		TRAS_CURRENT_RANGE,
        /*Frame Id*/
		GEAR_SELECTOR_ETC7,
        /*Can Msg Id*/
		0xF00500,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


ECU_COM_strSignal_t ECU_COM_astrTx3Signal[ECU_COM_TX3_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		P08,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		1,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P35,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		11,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P36,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		12,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P38,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		13,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P52,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		14,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P53,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P54,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		16,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P55,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		17,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P61,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		18,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P11,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		2,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P12,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		3,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P13,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		4,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P25,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		5,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P27,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		6,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P28,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P29,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		8,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P30,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		9,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P32,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		10,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ANL_P48,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ANL_P49_24V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		P07,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		0,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ANL_P50_24V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ANL_P65_12V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		55,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		ANL_P67_5V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	},
	{
  	    /*Signal ID*/
		CAN3_SIGNAL,
        /*Frame Id*/
		CAN_COM3,
        /*Can Msg Id*/
		0x98,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		0,
        /*Raw Value*/
		deMCD_DEFAULT,
        /*Physical Value*/
		deMCD_DEFAULT,
        /*Status*/
		SIGNAL_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE,
	}
};


ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeRx[ECU_COM_RX_SIGNALS_NUM] = 
{
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		COMMANDMODE_MCUCMD1RES,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2GUN_LOCK_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2TEMPERATURE1_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2TEMPERATURE2_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2TEMPERATURE_1_VAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2TEMPERATURE_2_VAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2VEHICLE_IMMOBILIZE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2_GUNLOCKFEEDBACK,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HV_SYSTEM_VOLTAGE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MAXSAFEMOTORSPEEDFORWARD,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MAXSAFEMOTORSPEEDFORWARDSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MAXSAFEMOTORSPEEDREVERSE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MAXSAFEMOTORSPEEDREVERSESTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTOR_SPEED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		OPERATIONALMODE_MCUCMD1RES,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		REGENDERATING,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		REGENDERATINGSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ROLLINGCOUNTER_MCUCMD1RESPONSE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATEMCU,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTIONDERATING,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTIONDERATINGSTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTION_BATTERY_CURRENT,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTION_BATTERY_SOC,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRAS_CURRENT_RANGE,
	}
};


ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeTx[ECU_COM_TX_SIGNALS_NUM] = 
{
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P29,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P30,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P39,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P40,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P49,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P50,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P59,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P60,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P69,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P70,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P71,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P72,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P73,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P74,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P75,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P76,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P77,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P78,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P79,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ADC_P80,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P48,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P49_24V,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P50_24V,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P65_12V,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P67_5V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CAN1_SIGNAL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CAN2_SIGNAL,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CAN3_SIGNAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P21,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P22,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P23,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P24,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P25,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P26,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P27,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P28,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P31,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P33,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P34,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P35,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P36,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P37,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P38,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P41,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P42,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P51,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DIN_P61,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EEPROM_VALUE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EMERGENCYSTOP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MOTORANGLE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MOTORANGLESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MOTORSPEED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MOTORSPEEDSTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P07,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P08,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P11,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P12,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P13,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P25,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P27,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P28,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P29,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P30,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P32,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P35,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P36,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P38,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P52,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P53,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P54,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P55,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P61,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		POWER_SUPPLY24V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_DUTYCYCLE_P13,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_DUTYCYCLE_P14,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_DUTYCYCLE_P62,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P13_DUTYCYCLE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P13_FREQUENCY,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P14_DUTYCYCLE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P14_FREQUENCY,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P62_DUTYCYCLE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_IN_P62_FREQUENCY,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ROLLINGCOUNTER_MCUCMD2RESPONSE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		SPEEDREDUCTIONREQUEST,
	}
};


