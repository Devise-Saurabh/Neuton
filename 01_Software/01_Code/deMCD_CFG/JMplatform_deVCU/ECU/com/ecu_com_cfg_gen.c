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
		TESTRX1CAN1,
        /*Can Msg Id*/
		0x225,
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
		TESTTX1CAN1,
        /*Can Msg Id*/
		0x226,
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
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx1Signal[ECU_COM_RX1_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN1TESTRX1,
        /*Frame Id*/
		TESTRX1CAN1,
        /*Can Msg Id*/
		0x225,
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


ECU_COM_strSignal_t ECU_COM_astrTx1Signal[ECU_COM_TX1_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN1TESTTX1,
        /*Frame Id*/
		TESTTX1CAN1,
        /*Can Msg Id*/
		0x226,
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


/*********** NETWORK 2 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx2Msg[ECU_COM_RX2_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		TESTRX1CAN2,
        /*Can Msg Id*/
		0x227,
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
	}
};


ECU_COM_strMsg_t ECU_COM_astrTx2Msg[ECU_COM_TX2_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		TESTTX1CAN2,
        /*Can Msg Id*/
		0x228,
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
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx2Signal[ECU_COM_RX2_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN2TESTRX1,
        /*Frame Id*/
		TESTRX1CAN2,
        /*Can Msg Id*/
		0x227,
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


ECU_COM_strSignal_t ECU_COM_astrTx2Signal[ECU_COM_TX2_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN2TESTTX2,
        /*Frame Id*/
		TESTTX1CAN2,
        /*Can Msg Id*/
		0x228,
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


/*********** NETWORK 3 ***********/
ECU_COM_strMsg_t ECU_COM_astrRx3Msg[ECU_COM_RX3_MSGS_NUM] =
{
	{
  	    /*Msg ID*/
		TESTRX1CAN3,
        /*Can Msg Id*/
		0x229,
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
		TEXTTX1CAN3,
        /*Can Msg Id*/
		0x230,
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
	}
};


ECU_COM_strSignal_t ECU_COM_astrRx3Signal[ECU_COM_RX3_SIGNALS_NUM] =
{
	{
  	    /*Signal ID*/
		CAN3TESTRX1,
        /*Frame Id*/
		TESTRX1CAN3,
        /*Can Msg Id*/
		0x229,
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
		CAN3TEXTTX1,
        /*Frame Id*/
		TEXTTX1CAN3,
        /*Can Msg Id*/
		0x230,
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
		0,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		CAN1TESTRX1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		CAN2TESTRX1,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_RX,
        /* Signal Id*/
		CAN3TESTRX1,
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
		CAN1TESTTX1,
	},
	{
  	    /* Handler Id */
		1,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CAN2TESTTX2,
	},
	{
  	    /* Handler Id */
		2,
        /* Signal Type */
		ECU_COM_CH_TYPE_TX,
        /* Signal Id*/
		CAN3TEXTTX1,
	}
};


