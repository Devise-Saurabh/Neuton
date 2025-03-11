/*
***************************************************************************
***************************************************************************
(C) 2016 SIGRA Technologies GmbH  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Erandwane,
411038, Pune,
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
		REFU_DC_AC_TO_VCU_RX2,
        /*Can Msg Id*/
		0xC010405,
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
	},
	{
  	    /*Msg ID*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_4,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_5,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_SAFETY,
        /*Can Msg Id*/
		0x18F30597,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_6,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_7,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_8,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_9,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		BMS_AVERAGECELL_TEMP,
        /*Can Msg Id*/
		0x18F30A97,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_10,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		G2EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC02,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_11,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_12,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
        /*DLC*/
		7,
        /*Lower Layer Frame Id */
		UC_CAN_RX1_MSG_INDEX_13,
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
		GPIO_CHECK_VCUTEST1,
        /*Can Msg Id*/
		0x666,
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
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
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
		VCU_TO_REFU_DC_AC,
        /*Can Msg Id*/
		0x18FF0DFE,
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
		HOST_REQUESTBMSMODE,
        /*Can Msg Id*/
		0x180697A7,
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
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
        /*DLC*/
		8,
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
		G2VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180694A7,
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
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
        /*DLC*/
		8,
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
		G1VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180696A7,
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
	},
	{
  	    /*Msg ID*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX1_MSG_INDEX_11,
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
		OUTPUT_CURRENT_EHVS,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX2,
        /*Can Msg Id*/
		0xC010405,
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
		OUTPUT_CURRENT_AIRCOMP,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX2,
        /*Can Msg Id*/
		0xC010405,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		ACTUAL_TEMP_PUMP_AIRCOMP,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX2,
        /*Can Msg Id*/
		0xC010405,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		FAULT_CODE_EHVS_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		DC_LINK_VOLTAGE_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		STATUSU1_FAULT_AIRCOMP_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		19,
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
		STATUSU0_FAULT_EHVS_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
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
		STATUSU0_WARNING_EHVS_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
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
		STATUSU0_OVERCURRENTFAULT_EHVS_V,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
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
		STATUSU1_WARNING_AIRCOMP_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		1,
        /*Mask*/
		1,
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
		STATUSU1_OVERTEMP_AIRCOMP_VCU_RX,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		25,
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
		STATUSU1_OVERCURRENT_AIRCOMP_VCU,
        /*Frame Id*/
		REFU_DC_AC_TO_VCU_RX1,
        /*Can Msg Id*/
		0xC010305,
        /*Size*/
		1,
        /*Mask*/
		1,
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
		BMS_HIGHESTOUTLETTEMP,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		-40,
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
		BMS_HIGHESTINLETTEMP,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		-40,
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
		BMS_TMIN_CELL_ID,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		BMS_TMAX_CELL_ID,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		BMS_TMIN_SUBPACK_ID,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
        /*Size*/
		4,
        /*Mask*/
		15,
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
		BMS_TMAX_SUBPACK_ID,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
        /*Size*/
		4,
        /*Mask*/
		15,
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
		BMS_MINCELLTEMP,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		-40,
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
		BMS_MAXCELLTEMP,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		-40,
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
		CHECKSUM_123,
        /*Frame Id*/
		BMS_TEMPERATURE,
        /*Can Msg Id*/
		0x18F30397,
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
		HV_CONTACTOR_STATUS,
        /*Frame Id*/
		BMS_SAFETY,
        /*Can Msg Id*/
		0x18F30597,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		40,
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
		SWITCHING_SYNC_STATUS,
        /*Frame Id*/
		BMS_SAFETY,
        /*Can Msg Id*/
		0x18F30597,
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
		BMS_SYSTEMISORES,
        /*Frame Id*/
		BMS_SAFETY,
        /*Can Msg Id*/
		0x18F30597,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		BMS_DCBUSVOLTAGE,
        /*Frame Id*/
		BMS_SAFETY,
        /*Can Msg Id*/
		0x18F30597,
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
		BMS_SUBPACK16STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK15STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		61,
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
		BMS_SUBPACK14STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		59,
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
		BMS_SUBPACK13STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		57,
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
		BMS_SUBPACK12STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK11STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		53,
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
		BMS_SUBPACK10STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		51,
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
		BMS_SUBPACK9STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		49,
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
		BMS_SUBPACK8STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK7STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK6STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK5STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK4STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK3STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		37,
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
		BMS_SUBPACK2STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BMS_SUBPACK1STATUS,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		DETECTED_STRING,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
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
		CONNECTED_STRING,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
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
		BMS_PACKSTATE,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
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
		SYS_DTC,
        /*Frame Id*/
		BMS_PACK_SUBPACK_STATUS,
        /*Can Msg Id*/
		0x18F30897,
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
		BMS_MAXBATVOLTALLOWED,
        /*Frame Id*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		63,
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
		BMS_MAXCONTCHRGCURRENT,
        /*Frame Id*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
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
		BMS_MAXCONTDISCHRGCURRENT,
        /*Frame Id*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		31,
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
		MESSAGECOUNTER_122,
        /*Frame Id*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
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
		CHECKSUM_122,
        /*Frame Id*/
		BMS_CHARGE_DISCHARGE_DETAILS,
        /*Can Msg Id*/
		0x18F30497,
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
		BATTERY_SOH,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
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
		BMS_SOC,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		55,
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
		BMS_PACKVOLTAGE,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
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
		BMS_MESSAGECOUNTER_126_HEARTBEAT,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
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
		BMS_PACKCURRENT,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		31,
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
		BMS_CHECKSUM_126,
        /*Frame Id*/
		BMS_BATTERY_PARAMETERS,
        /*Can Msg Id*/
		0x18F30097,
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
		BMS_AVERAGECELLTEMPERATURE,
        /*Frame Id*/
		BMS_AVERAGECELL_TEMP,
        /*Can Msg Id*/
		0x18F30A97,
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
		BMS_AVERAGECELLVOLTAGE,
        /*Frame Id*/
		BMS_AVERAGECELL_TEMP,
        /*Can Msg Id*/
		0x18F30A97,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.001,
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
	},
	{
  	    /*Signal ID*/
		G2DIFF_CURRENT_MEASURE,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		63,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2NEGATIVE_CONTACTOR_CONTROL,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		36,
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
		G2CHARGING_STATUS,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
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
		G2POSITIVE_CONTACTOR_CONTROL,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
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
		G2CHARGER_GUN_DETECTED,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
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
		G2EVCC_READY,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
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
		G2EVCC_STATUS_CODE,
        /*Frame Id*/
		G2EVCC_VCU_RX1,
        /*Can Msg Id*/
		0x18F30287,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1_GUNLOCKFEEDBACK,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1VEHICLE_IMMOBILIZE,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1GUN_LOCK_FAULT,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1TEMPERATURE2_FAULT,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1TEMPERATURE1_FAULT,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1TEMPERATURE_2_VAL,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		G1TEMPERATURE_1_VAL,
        /*Frame Id*/
		G1EVCC_VCU_RX2,
        /*Can Msg Id*/
		0xECC01,
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
		VCU_PARALOGCOOLENTOUT,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
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
		VCU_PARALOGCOOLENTIN,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
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
		VCU_PARALOG_MOTORRPM,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
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
	},
	{
  	    /*Signal ID*/
		VCU_PARALOG_VEHSPEED,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
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
		VCU_PARALOG_TRQCMD,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
        /*Offset*/
		-4096,
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
		VCU_PARALOG_ACCPEDAL,
        /*Frame Id*/
		VCU_PARALOGGINGTX1,
        /*Can Msg Id*/
		0x555,
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
		DCDCONOFF,
        /*Frame Id*/
		VCU_TO_REFU_DC_AC,
        /*Can Msg Id*/
		0x18FF0DFE,
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
		CONTROL1_AIRCOMP,
        /*Frame Id*/
		VCU_TO_REFU_DC_AC,
        /*Can Msg Id*/
		0x18FF0DFE,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		CONTROL0_EHPS,
        /*Frame Id*/
		VCU_TO_REFU_DC_AC,
        /*Can Msg Id*/
		0x18FF0DFE,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		REBOOT_REQUEST,
        /*Frame Id*/
		HOST_REQUESTBMSMODE,
        /*Can Msg Id*/
		0x180697A7,
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
		HOST_BMSSTATEREQUEST,
        /*Frame Id*/
		HOST_REQUESTBMSMODE,
        /*Can Msg Id*/
		0x180697A7,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		19,
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
		MESSAGECOUNTER_200,
        /*Frame Id*/
		HOST_REQUESTBMSMODE,
        /*Can Msg Id*/
		0x180697A7,
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
		CHECKSUM_200,
        /*Frame Id*/
		HOST_REQUESTBMSMODE,
        /*Can Msg Id*/
		0x180697A7,
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
		G2NOMI_BATT_CAPA,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2REMAIN_BATT_CAPA,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2EV_ERROR_CODE,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2VEHI_STOP_CHARG_FLAG,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
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
		G2CHARG_COMP_FLAG,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
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
		G2EV_READY_FLAG,
        /*Frame Id*/
		G2VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180693A7,
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
		G2BATTERY_PACK_PRESENT_VOLT,
        /*Frame Id*/
		G2VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180694A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		0.25,
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
		G2EV_CONTI_CHARG_CUR_LIMIT,
        /*Frame Id*/
		G2VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180694A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2SOC,
        /*Frame Id*/
		G2VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180694A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G2EV_MAX_CHARG_CUR_LIMIT,
        /*Frame Id*/
		G2VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180694A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		0.25,
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
		G1NOMI_BATT_CAPA,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1REMAIN_BATT_CAPA,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1EV_ERROR_CODE,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1VEHI_STOP_CHARG_FLAG,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
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
		G1CHARG_COMP_FLAG,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
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
		G1EV_READY_FLAG,
        /*Frame Id*/
		G1VCU_EVCC_TX2,
        /*Can Msg Id*/
		0x180695A7,
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
		G1BATTERY_PACK_PRESENT_VOLT,
        /*Frame Id*/
		G1VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180696A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		0.25,
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
		G1EV_CONTI_CHARG_CUR_LIMIT,
        /*Frame Id*/
		G1VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180696A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1SOC,
        /*Frame Id*/
		G1VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180696A7,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
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
		G1EV_MAX_CHARG_CUR_LIMIT,
        /*Frame Id*/
		G1VCU_EVCC_TX1,
        /*Can Msg Id*/
		0x180696A7,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_BIG_ENDIAN,
        /*Resolution*/
		0.25,
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
		INTERNAL_ANL_VCU_VTG,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		ANL_P68_5V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		ANL_P69_5V,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		PWM_P66_DC,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		PWM_P66_FREQ,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		PWM_P56_FREQ,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		PWM_P56_DC,
        /*Frame Id*/
		GPIO_CHECK_VCUTEST2,
        /*Can Msg Id*/
		0x667,
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
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_1,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*DLC*/
		7,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_2,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
        /*DLC*/
		5,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_3,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_4,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*DLC*/
		6,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_5,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
        /*DLC*/
		4,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_6,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_7,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*DLC*/
		7,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_8,
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
		UC_CAN_RX2_MSG_INDEX_9,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		MCUCOMMAND1RESPONSE,
        /*Can Msg Id*/
		0x43,
        /*DLC*/
		6,
        /*Lower Layer Frame Id */
		UC_CAN_RX2_MSG_INDEX_10,
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
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*DLC*/
		8,
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
		PUMPCONTROLINFORMATION_TX,
        /*Can Msg Id*/
		0x18FAC603,
        /*DLC*/
		1,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_2,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUSELECTPROTOCOLVERSION,
        /*Can Msg Id*/
		0x444,
        /*DLC*/
		2,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_3,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUPOLLINGMCU,
        /*Can Msg Id*/
		0x447,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_4,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUCOMMANDSAFETY,
        /*Can Msg Id*/
		0x42,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_5,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
        /*DLC*/
		6,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_6,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUPOLLINGVMURESPONSE,
        /*Can Msg Id*/
		0x446,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_7,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_TX2_MSG_INDEX_8,
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
		T2B_SIGNAL_LIFE,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		T2B_FAULT_CODE,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		T2B_COMP_FREQUENCY,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		T2B_BMS_WORK_MODE,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		20,
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
		T2B_TMS_WORK_MODE,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
        /*Size*/
		3,
        /*Mask*/
		7,
        /*MSB number*/
		19,
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
		T2B_MODE,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		T2B_COOLANT_OUT_TEMP,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		-40,
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
		T2B_COOLANT_IN_TEMP,
        /*Frame Id*/
		TMS_VCU_RX1,
        /*Can Msg Id*/
		0x18FFF345,
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
		-40,
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
		PUMPTEMP,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
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
		-50,
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
		PUMPVOLTAGE,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.2,
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
		PUMPUNDERVOLTAGEFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPTHERMALFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		37,
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
		PUMPSTALLFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPSPEED,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
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
		PUMPOVERVOLTAGEFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPOVERCURRENTFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPFAULTLEVEL,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPDRYRUNFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		PUMPCURRENT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.2,
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
		PUMPCOMMUNICATIONFAULT,
        /*Frame Id*/
		PUMPINFORMATION_RX,
        /*Can Msg Id*/
		0x18FAC503,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		MOTORTEMPERATURE,
        /*Frame Id*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
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
		-40,
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
		EMITEMPERATURE,
        /*Frame Id*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
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
		-40,
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
		MCUTEMPERATURE,
        /*Frame Id*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
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
		-40,
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
		AMBIENTTEMPERATURE,
        /*Frame Id*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
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
		-40,
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
		ROLLINGCOUNTER_MCUTHERMAL2,
        /*Frame Id*/
		MCUTHERMAL2,
        /*Can Msg Id*/
		0x44A,
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
		MCU_POLLING_MCU_BYTE8,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE7,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE6,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE5,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE4,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE3,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE2,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		MCU_POLLING_MCU_BYTE1,
        /*Frame Id*/
		MCUPOLLINGMCURESPONSE,
        /*Can Msg Id*/
		0x448,
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
		ROLLINGCOUNTER_MCUINFO1,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
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
		HIGHPOWERVOLTAGESTATUS,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		21,
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
		HIGHPOWERVOLTAGE,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		11,
        /*Mask*/
		2047,
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
		HIGHPOWERCURRENTSTATUS,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		19,
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
		HIGHPOWERCURRENT,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		14,
        /*Mask*/
		16383,
        /*MSB number*/
		37,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.25,
        /*Offset*/
		-2048,
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
		AUXILIARYVOLTAGESTATUS,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		20,
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
		AUXILIARYVOLTAGE,
        /*Frame Id*/
		MCUINFO1,
        /*Can Msg Id*/
		0x440,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.25,
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
		FAULTPHASETOCHASSISSTATUS,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTINTERLOCKMOTORCABLESTATUS,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTINTERLOCKBATTERYCABLESTATUS,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTDRIVECOVERWASOPENEDSTATUS,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTDRIVECOVERWASOPENED,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTINTERLOCKMOTORCABLE,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTINTERLOCKBATTERYCABLE,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		FAULTPHASETOCHASSIS,
        /*Frame Id*/
		MCUEVENTINFO1,
        /*Can Msg Id*/
		0x442,
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
		MCUPOLLINGVMU_BYTE8,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE7,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE6,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE5,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE4,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE3,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE2,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		MCUPOLLINGVMU_BYTE1,
        /*Frame Id*/
		MCUPOLLINGVMU,
        /*Can Msg Id*/
		0x445,
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
		ROLLINGCOUNTER_MCUINFO2,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		4,
        /*Mask*/
		15,
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
		MOTORTORQUEESTIMATEDSTATUS,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		49,
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
		REGENTORQUEAVAILSTATUS,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		51,
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
		TRACTIONTORQUEAVAILSTATUS,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		1,
        /*Mask*/
		1,
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
		REGENTORQUEAVAIL,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		15,
        /*Mask*/
		32767,
        /*MSB number*/
		46,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
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
		TRACTIONTORQUEAVAIL,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		15,
        /*Mask*/
		32767,
        /*MSB number*/
		30,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
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
		MOTORTORQUEESTIMATED,
        /*Frame Id*/
		MCUINFO2,
        /*Can Msg Id*/
		0x441,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
        /*Offset*/
		-4096,
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
	},
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
		B2T_BMS_WORK_MODE,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		36,
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
		B2T_SIGNAL_LIFE,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		B2T_BATTERY_AVG_TEMP,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		-40,
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
		B2T_SET_TARGET_TEMP,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		-40,
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
		B2T_COMP_SPEED_RESTRICTION,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*Size*/
		3,
        /*Mask*/
		7,
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
		B2T_TMS_CONTROL_CMD,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*Size*/
		3,
        /*Mask*/
		7,
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
		B2T_MODE,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		B2T_DIFFERENTIAL2,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*Size*/
		4,
        /*Mask*/
		15,
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
		B2T_DIFFERENTIAL1,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
        /*Size*/
		4,
        /*Mask*/
		15,
        /*MSB number*/
		19,
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
		B2T_TCELL_MIN,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		-40,
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
		B2T_TCELL_MAX,
        /*Frame Id*/
		VCU_TMS_TX,
        /*Can Msg Id*/
		0x18FF45F3,
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
		-40,
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
		TARGETVALUE,
        /*Frame Id*/
		PUMPCONTROLINFORMATION_TX,
        /*Can Msg Id*/
		0x18FAC603,
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
		MAJORMCUPROTOCOL,
        /*Frame Id*/
		VMUSELECTPROTOCOLVERSION,
        /*Can Msg Id*/
		0x444,
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
		MINORMCUPROTOCOL,
        /*Frame Id*/
		VMUSELECTPROTOCOLVERSION,
        /*Can Msg Id*/
		0x444,
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
		MCUREQUESTID,
        /*Frame Id*/
		VMUPOLLINGMCU,
        /*Can Msg Id*/
		0x447,
        /*Size*/
		7,
        /*Mask*/
		127,
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
		ROLLINGCOUNTER_VMUCMDSAFETY,
        /*Frame Id*/
		VMUCOMMANDSAFETY,
        /*Can Msg Id*/
		0x42,
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
		REFERENCECOMMANDMODE,
        /*Frame Id*/
		VMUCOMMANDSAFETY,
        /*Can Msg Id*/
		0x42,
        /*Size*/
		3,
        /*Mask*/
		7,
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
		REFERENCESPEEDCOMMAND,
        /*Frame Id*/
		VMUCOMMANDSAFETY,
        /*Can Msg Id*/
		0x42,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		31,
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
	},
	{
  	    /*Signal ID*/
		REFERENCETORQUECOMMAND,
        /*Frame Id*/
		VMUCOMMANDSAFETY,
        /*Can Msg Id*/
		0x42,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
        /*Offset*/
		-4096,
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
		ROLLINGCOUNTER_VMUCMD2,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
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
		SPEEDCOMMAND,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		1,
        /*Offset*/
		-32760,
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
		TORQUECOMMAND,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
        /*Size*/
		16,
        /*Mask*/
		65535,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.125,
        /*Offset*/
		-4096,
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
		COMMANDMODEEXT,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
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
		TORQUECOMMANDSTATUS,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
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
		SPEEDCOMMANDSTATUS,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
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
		COMMANDMODE_VMUCMD2,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		OPERATIONALMODE,
        /*Frame Id*/
		VMUCOMMAND2,
        /*Can Msg Id*/
		0x41,
        /*Size*/
		3,
        /*Mask*/
		7,
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
		ACKNOWLEDGEMENT,
        /*Frame Id*/
		VMUPOLLINGVMURESPONSE,
        /*Can Msg Id*/
		0x446,
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
		BOOTNUMBER,
        /*Frame Id*/
		VMUPOLLINGVMURESPONSE,
        /*Can Msg Id*/
		0x446,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		VMUREQUESTID,
        /*Frame Id*/
		VMUPOLLINGVMURESPONSE,
        /*Can Msg Id*/
		0x446,
        /*Size*/
		7,
        /*Mask*/
		127,
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
		ROLLINGCOUNTER_VMUCMD1,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		4,
        /*Mask*/
		15,
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
		MINBATTERYVOLTAGESTATUS,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		1,
        /*Mask*/
		1,
        /*MSB number*/
		46,
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
		MAXDISCHARGECURRENTSTATUS,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
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
		MAXCHARGECURRENTSTATUS,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		1,
        /*Mask*/
		1,
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
		MAXBATTERYVOLTAGESTATUS,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
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
		MINBATTERYVOLTAGE,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		12,
        /*Mask*/
		4095,
        /*MSB number*/
		59,
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
		MAXBATTERYVOLTAGE,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		12,
        /*Mask*/
		4095,
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
		MAXDISCHARGECURRENT,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		12,
        /*Mask*/
		4095,
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
		MAXCHARGECURRENT,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		12,
        /*Mask*/
		4095,
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
		OPERATIONREQUEST_VMUCMD1,
        /*Frame Id*/
		VMUCOMMAND1,
        /*Can Msg Id*/
		0x40,
        /*Size*/
		3,
        /*Mask*/
		7,
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
	}
};


/*********** NETWORK 3 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx3Msg[ECU_COM_RX3_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
	},
	{
  	    /*Msg ID*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX3_MSG_INDEX_2,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		ACC_PEDAL_POS_RX,
        /*Can Msg Id*/
		0xCF00382,
        /*DLC*/
		2,
        /*Lower Layer Frame Id */
		UC_CAN_RX3_MSG_INDEX_3,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX3_MSG_INDEX_4,
        /*Data*/
		{deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT},
        /*Status*/
		MESSAGE_NOT_AVAILABLE,
        /*New Data Flag*/
		deMCD_TRUE
	},
	{
  	    /*Msg ID*/
		GEAR_SELECTOR_DNRP,
        /*Can Msg Id*/
		0xC010005,
        /*DLC*/
		8,
        /*Lower Layer Frame Id */
		UC_CAN_RX3_MSG_INDEX_5,
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
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
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
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
        /*DLC*/
		8,
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
		ACC_PEDAL_FAULT_BYTE8,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE7,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE6,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE5,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE4,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE3,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE2,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		ACC_PEDAL_FAULT_BYTE1,
        /*Frame Id*/
		ACC_PEDAL_FAULT_RX,
        /*Can Msg Id*/
		0x18FECA82,
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
		AIR_COMPRESSOR_STATUS,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		49,
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
		AIR_SUSPENSION_SUPPLY_PRESSURE,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		47,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		AUXILIARY_EQUIPMENT_SUPPLY_PRESS,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		SERVICE_BRAKE_CIRCUIT_2_AIR_PRES,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		31,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		SERVICE_BRAKE_CIRCUIT_1_AIR_PRES,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		23,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		PARKING_AND_OR_TRAILER_AIR_PRESS,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		PNEUMATIC_SUPPLY_PRESSURE,
        /*Frame Id*/
		AIR1_EBC_VCU_RX,
        /*Can Msg Id*/
		0x18FEAE30,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		7,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		8,
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
		ACCPEDAL_POS1,
        /*Frame Id*/
		ACC_PEDAL_POS_RX,
        /*Can Msg Id*/
		0xCF00382,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.4,
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
		ACC_PEDAL2KICKDOWNSWITCH,
        /*Frame Id*/
		ACC_PEDAL_POS_RX,
        /*Can Msg Id*/
		0xCF00382,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ACC_PEDAL1LOWIDLESWITCH,
        /*Frame Id*/
		ACC_PEDAL_POS_RX,
        /*Can Msg Id*/
		0xCF00382,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		TRAILER_ABS_WARNING_SIGNAL,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		TRAILER_ABS_STATUS,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		61,
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
		HALT_BRAKE_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		59,
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
		SA_OF_CTRLLINGDEVICEFORBRAKECTRL,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
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
		ATC_ASR_INFORMATION_SIGNAL,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ABS_EBS_AMBER_WARNING_LAMP_STATE,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		EBS_RED_WARNING_LAMP_STATE,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ABS_FULLY_OPERATIONAL,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ENG_RET_SELECTION,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		39,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.4,
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
		ACLTR_INTERLOCK_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		25,
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
		TRACTION_CTRL_OVR_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ASR_HILL_HOLDER_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		21,
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
		ASR_OFFROAD_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
        /*MSB number*/
		19,
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
		ABS_OFFROAD_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		BRAKE_PEDAL_POSITION,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		8,
        /*Mask*/
		255,
        /*MSB number*/
		15,
        /*Big/Little Endian*/
		deMCD_LITTLE_ENDIAN,
        /*Resolution*/
		0.4,
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
		EBS_BRAKE_SWITCH,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ANTI_LOCK_BRAKING_ABS_ACTIVE,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ASR_BRAKE_CTRL_ACTIVE,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		ASR_ENG_CTRL_ACTIVE,
        /*Frame Id*/
		EBC1_EBC_VCU,
        /*Can Msg Id*/
		0x18F0010B,
        /*Size*/
		2,
        /*Mask*/
		3,
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
		TRANSREQUEST_GEAR,
        /*Frame Id*/
		GEAR_SELECTOR_DNRP,
        /*Can Msg Id*/
		0xC010005,
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
		GEARSELECTOR_TESTSIG2,
        /*Frame Id*/
		GEAR_SELECTOR_DNRP,
        /*Can Msg Id*/
		0xC010005,
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
		GEARSELECTOR_TESTSIG1,
        /*Frame Id*/
		GEAR_SELECTOR_DNRP,
        /*Can Msg Id*/
		0xC010005,
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


ECU_COM_strSignal_t ECU_COM_astrTx3Signal[ECU_COM_TX3_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		EM1_RET_LOCATION,
        /*Frame Id*/
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
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
		EM1_RET_TYPE,
        /*Frame Id*/
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
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
		EM1_REF_ENG_TORQ,
        /*Frame Id*/
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
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
		EM1_REF_RET_TORQ,
        /*Frame Id*/
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		EM1_ER_SEQUENCE_NUMBER,
        /*Frame Id*/
		VCU_CFG_EM1_ER_TX,
        /*Can Msg Id*/
		0x18EBFFEF,
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
		TPCM_EM1_PGN,
        /*Frame Id*/
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
        /*Size*/
		24,
        /*Mask*/
		16777215,
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
		TPCM_TPDT_5THFRAME,
        /*Frame Id*/
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
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
		TPCM_TPDT_FRAMES,
        /*Frame Id*/
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
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
		TPCM_EM1_BYT,
        /*Frame Id*/
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
        /*Size*/
		16,
        /*Mask*/
		65535,
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
		TPCM_EM1_BAM,
        /*Frame Id*/
		VCU_CFG_EM1_BAM_TX,
        /*Can Msg Id*/
		0x18ECFFEF,
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
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ABS_EBS_AMBER_WARNING_LAMP_STATE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ABS_FULLY_OPERATIONAL,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ABS_OFFROAD_SWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACCPEDAL_POS1,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL1LOWIDLESWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL2KICKDOWNSWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE1,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE2,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE3,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE4,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE5,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE6,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE7,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACC_PEDAL_FAULT_BYTE8,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACLTR_INTERLOCK_SWITCH,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ACTUAL_TEMP_PUMP_AIRCOMP,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AIR_COMPRESSOR_STATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AIR_SUSPENSION_SUPPLY_PRESSURE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AMBIENTTEMPERATURE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ANTI_LOCK_BRAKING_ABS_ACTIVE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ASR_BRAKE_CTRL_ACTIVE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ASR_ENG_CTRL_ACTIVE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ASR_HILL_HOLDER_SWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ASR_OFFROAD_SWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ATC_ASR_INFORMATION_SIGNAL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AUXILIARYVOLTAGE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AUXILIARYVOLTAGESTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		AUXILIARY_EQUIPMENT_SUPPLY_PRESS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BATTERY_SOH,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_AVERAGECELLTEMPERATURE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_AVERAGECELLVOLTAGE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_CHECKSUM_126,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_DCBUSVOLTAGE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_HIGHESTINLETTEMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_HIGHESTOUTLETTEMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MAXBATVOLTALLOWED,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MAXCELLTEMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MAXCONTCHRGCURRENT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MAXCONTDISCHRGCURRENT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MESSAGECOUNTER_126_HEARTBEAT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_MINCELLTEMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_PACKCURRENT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_PACKSTATE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_PACKVOLTAGE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SOC,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK10STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK11STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK12STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK13STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK14STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK15STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK16STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK1STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK2STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK3STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK4STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK5STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK6STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK7STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK8STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SUBPACK9STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_SYSTEMISORES,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_TMAX_CELL_ID,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_TMAX_SUBPACK_ID,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_TMIN_CELL_ID,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BMS_TMIN_SUBPACK_ID,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		BRAKE_PEDAL_POSITION,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		CHECKSUM_122,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		CHECKSUM_123,
	},
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
		CONNECTED_STRING,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		DC_LINK_VOLTAGE_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		DETECTED_STRING,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		EBS_BRAKE_SWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		EBS_RED_WARNING_LAMP_STATE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		EMERGENCYSTOP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		EMITEMPERATURE,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ENG_RET_SELECTION,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTDRIVECOVERWASOPENED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTDRIVECOVERWASOPENEDSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTINTERLOCKBATTERYCABLE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTINTERLOCKBATTERYCABLESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTINTERLOCKMOTORCABLE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTINTERLOCKMOTORCABLESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTPHASETOCHASSIS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULTPHASETOCHASSISSTATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		FAULT_CODE_EHVS_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1GUN_LOCK_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1TEMPERATURE1_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1TEMPERATURE2_FAULT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1TEMPERATURE_1_VAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1TEMPERATURE_2_VAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1VEHICLE_IMMOBILIZE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G1_GUNLOCKFEEDBACK,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2CHARGER_GUN_DETECTED,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2CHARGING_STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2DIFF_CURRENT_MEASURE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2EVCC_READY,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2EVCC_STATUS_CODE,
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
		G2NEGATIVE_CONTACTOR_CONTROL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		G2POSITIVE_CONTACTOR_CONTROL,
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
		GEARSELECTOR_TESTSIG1,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		GEARSELECTOR_TESTSIG2,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HALT_BRAKE_SWITCH,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HIGHPOWERCURRENT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HIGHPOWERCURRENTSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HIGHPOWERVOLTAGE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HIGHPOWERVOLTAGESTATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		HV_CONTACTOR_STATUS,
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
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE2,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE3,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE4,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE5,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE6,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE7,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUPOLLINGVMU_BYTE8,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCUTEMPERATURE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE2,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE3,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE4,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE5,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE6,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE7,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MCU_POLLING_MCU_BYTE8,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MESSAGECOUNTER_122,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORANGLE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORANGLESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORSPEED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORSPEEDSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORTEMPERATURE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORTORQUEESTIMATED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		MOTORTORQUEESTIMATEDSTATUS,
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
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		OUTPUT_CURRENT_AIRCOMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		OUTPUT_CURRENT_EHVS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PARKING_AND_OR_TRAILER_AIR_PRESS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PNEUMATIC_SUPPLY_PRESSURE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPCOMMUNICATIONFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPCURRENT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPDRYRUNFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPFAULTLEVEL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPOVERCURRENTFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPOVERVOLTAGEFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPSPEED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPSTALLFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPTEMP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPTHERMALFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPUNDERVOLTAGEFAULT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		PUMPVOLTAGE,
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
		REGENTORQUEAVAIL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		REGENTORQUEAVAILSTATUS,
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
		ROLLINGCOUNTER_MCUCMD2RESPONSE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ROLLINGCOUNTER_MCUINFO1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ROLLINGCOUNTER_MCUINFO2,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		ROLLINGCOUNTER_MCUTHERMAL2,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SA_OF_CTRLLINGDEVICEFORBRAKECTRL,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SERVICE_BRAKE_CIRCUIT_1_AIR_PRES,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SERVICE_BRAKE_CIRCUIT_2_AIR_PRES,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SPEEDREDUCTIONREQUEST,
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
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU0_FAULT_EHVS_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU0_OVERCURRENTFAULT_EHVS_V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU0_WARNING_EHVS_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU1_FAULT_AIRCOMP_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU1_OVERCURRENT_AIRCOMP_VCU,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU1_OVERTEMP_AIRCOMP_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		STATUSU1_WARNING_AIRCOMP_VCU_RX,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SWITCHING_SYNC_STATUS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		SYS_DTC,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_BMS_WORK_MODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_COMP_FREQUENCY,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_COOLANT_IN_TEMP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_COOLANT_OUT_TEMP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_FAULT_CODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_MODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_SIGNAL_LIFE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		T2B_TMS_WORK_MODE,
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
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTIONTORQUEAVAIL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTIONTORQUEAVAILSTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRACTION_CTRL_OVR_SWITCH,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRAILER_ABS_STATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRAILER_ABS_WARNING_SIGNAL,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		TRANSREQUEST_GEAR,
	}
};


ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeTx[ECU_COM_TX_SIGNALS_NUM] = 
{
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ACKNOWLEDGEMENT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P48,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P49_24V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P50_24V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P65_12V,
	},
	{
  	    /* Handler Id */
		0,
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
		ANL_P68_5V,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ANL_P69_5V,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_BATTERY_AVG_TEMP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_BMS_WORK_MODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_COMP_SPEED_RESTRICTION,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_DIFFERENTIAL1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_DIFFERENTIAL2,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_MODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_SET_TARGET_TEMP,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_SIGNAL_LIFE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_TCELL_MAX,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_TCELL_MIN,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		B2T_TMS_CONTROL_CMD,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		BOOTNUMBER,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CHECKSUM_200,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		COMMANDMODEEXT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		COMMANDMODE_VMUCMD2,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CONTROL0_EHPS,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CONTROL1_AIRCOMP,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		DCDCONOFF,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EM1_ER_SEQUENCE_NUMBER,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EM1_REF_ENG_TORQ,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EM1_REF_RET_TORQ,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EM1_RET_LOCATION,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		EM1_RET_TYPE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1BATTERY_PACK_PRESENT_VOLT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1CHARG_COMP_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1EV_CONTI_CHARG_CUR_LIMIT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1EV_ERROR_CODE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1EV_MAX_CHARG_CUR_LIMIT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1EV_READY_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1NOMI_BATT_CAPA,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1REMAIN_BATT_CAPA,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1SOC,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G1VEHI_STOP_CHARG_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2BATTERY_PACK_PRESENT_VOLT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2CHARG_COMP_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2EV_CONTI_CHARG_CUR_LIMIT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2EV_ERROR_CODE,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2EV_MAX_CHARG_CUR_LIMIT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2EV_READY_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2NOMI_BATT_CAPA,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2REMAIN_BATT_CAPA,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2SOC,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		G2VEHI_STOP_CHARG_FLAG,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		HOST_BMSSTATEREQUEST,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		INTERNAL_ANL_VCU_VTG,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAJORMCUPROTOCOL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXBATTERYVOLTAGE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXBATTERYVOLTAGESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXCHARGECURRENT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXCHARGECURRENTSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXDISCHARGECURRENT,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MAXDISCHARGECURRENTSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MCUREQUESTID,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MESSAGECOUNTER_200,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MINBATTERYVOLTAGE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MINBATTERYVOLTAGESTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		MINORMCUPROTOCOL,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		OPERATIONALMODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		OPERATIONREQUEST_VMUCMD1,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P07,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P08,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P11,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P12,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P13,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P25,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P27,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P28,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P29,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P30,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P32,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P35,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P36,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P38,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P52,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P53,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P54,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		P55,
	},
	{
  	    /* Handler Id */
		0,
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
		PWM_P56_DC,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_P56_FREQ,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_P66_DC,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		PWM_P66_FREQ,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		REBOOT_REQUEST,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		REFERENCECOMMANDMODE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		REFERENCESPEEDCOMMAND,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		REFERENCETORQUECOMMAND,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ROLLINGCOUNTER_VMUCMD1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ROLLINGCOUNTER_VMUCMD2,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		ROLLINGCOUNTER_VMUCMDSAFETY,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		SPEEDCOMMAND,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		SPEEDCOMMANDSTATUS,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TARGETVALUE,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TORQUECOMMAND,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TORQUECOMMANDSTATUS,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TPCM_EM1_BAM,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TPCM_EM1_BYT,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TPCM_EM1_PGN,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TPCM_TPDT_5THFRAME,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		TPCM_TPDT_FRAMES,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOGCOOLENTIN,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOGCOOLENTOUT,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOG_ACCPEDAL,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOG_MOTORRPM,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOG_TRQCMD,
	},
	{
  	    /* Handler Id */
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VCU_PARALOG_VEHSPEED,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		VMUREQUESTID,
	}
};


