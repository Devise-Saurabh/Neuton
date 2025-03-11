/*
***************************************************************************
***************************************************************************
(C) Devise electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt. Ltd

Devise Electronics Pvt. Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: ecu_com_cfg.c
Author: deMCD Generated 
E-mail: N/A 
***************************************************************************
***************************************************************************
*/

#include "ecu_com_cfg.h"
#include "ecu_com.h"
#include "ecu_com_cfg_gen.h"
#include "uc.h"


ECU_COM_strHandler_t ECU_COM_astrHandler[ECU_COM_HANDLER_NUM] = 
{
  {
    /*Handler ID*/
    ECU_COM_HANDLER_ID0,
    /*Channel Type*/
    ECU_COM_CH_TYPE_CAN,
    /*Number of Tx Frames*/
    ECU_COM_TX1_MSGS_NUM,
    /*Array of Tx Frames Objects*/
    ECU_COM_astrTx1Msg,
    /*Number of Tx Signals*/
    ECU_COM_TX1_SIGNALS_NUM,
    /*Array of Tx Signals Objects*/
    ECU_COM_astrTx1Signal,
    /*Number of Rx Frames*/
    ECU_COM_RX1_MSGS_NUM,
    /*Array of Rx Frames Objects*/
    ECU_COM_astrRx1Msg,
    /*Number of Rx Signals*/
    ECU_COM_RX1_SIGNALS_NUM,
    /*Array of Rx Signals Objects*/
    ECU_COM_astrRx1Signal,
    /*Low Layer Com Channel Id*/
    UC_CAN_MODULE_INDEX_0
  },
  {
    /*Handler ID*/
    ECU_COM_HANDLER_ID1,
    /*Channel Type*/
    ECU_COM_CH_TYPE_CAN,
    /*Number of Tx Frames*/
    ECU_COM_TX2_MSGS_NUM,
    /*Array of Tx Frames Objects*/
    ECU_COM_astrTx2Msg,
    /*Number of Tx Signals*/
    ECU_COM_TX2_SIGNALS_NUM,
    /*Array of Tx Signals Objects*/
    ECU_COM_astrTx2Signal,
    /*Number of Rx Frames*/
    ECU_COM_RX2_MSGS_NUM,
    /*Array of Rx Frames Objects*/
    ECU_COM_astrRx2Msg,
    /*Number of Rx Signals*/
    ECU_COM_RX2_SIGNALS_NUM,
    /*Array of Rx Signals Objects*/
    ECU_COM_astrRx2Signal,
    /*Low Layer Com Channel Id*/
    UC_CAN_MODULE_INDEX_1
  },
  {
    /*Handler ID*/
    ECU_COM_HANDLER_ID2,
    /*Channel Type*/
    ECU_COM_CH_TYPE_CAN,
    /*Number of Tx Frames*/
    ECU_COM_TX3_MSGS_NUM,
    /*Array of Tx Frames Objects*/
    ECU_COM_astrTx3Msg,
    /*Number of Tx Signals*/
    ECU_COM_TX3_SIGNALS_NUM,
    /*Array of Tx Signals Objects*/
    ECU_COM_astrTx3Signal,
    /*Number of Rx Frames*/
    ECU_COM_RX3_MSGS_NUM,
    /*Array of Rx Frames Objects*/
    ECU_COM_astrRx3Msg,
    /*Number of Rx Signals*/
    ECU_COM_RX3_SIGNALS_NUM,
    /*Array of Rx Signals Objects*/
    ECU_COM_astrRx3Signal,
    /*Low Layer Com Channel Id*/
    UC_CAN_MODULE_INDEX_2
  },
};


