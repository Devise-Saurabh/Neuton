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

File Name: uc_can_cfg.c
Author: deMCD Generated 
E-mail: N/A 
***************************************************************************
***************************************************************************
*/

#include "uc_can_cfg.h"
#include "uc_can.h"

UC_CAN_strMsg_t UC_CAN_astrMsgTx1[UC_CAN_TX1_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_TX1_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_1,
    /* Message Frame Id */
    0x3A1,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX1_MSG_INDEX_0,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX1_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_2,
    /* Message Frame Id */
    0x1A0,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX1_MSG_INDEX_1,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX1_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_3,
    /* Message Frame Id */
    0x1A1,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX1_MSG_INDEX_2,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX1_MSG_INDEX_3,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_4,
    /* Message Frame Id */
    0x226,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX1_MSG_INDEX_3,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};

UC_CAN_strMsg_t UC_CAN_astrMsgRx1[UC_CAN_RX1_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_RX1_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_5,
    /* Message Frame Id */
    0x3A0,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    1,
    /* Message jitter in ms */
    5,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_TRUE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_RX1_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_6,
    /* Message Frame Id */
    0x2A0,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    20,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_RX1_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_7,
    /* Message Frame Id */
    0x2A1,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    1000,
    /* Message jitter in ms */
    100,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_RX1_MSG_INDEX_3,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_8,
    /* Message Frame Id */
    0x225,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};

UC_CAN_strMsg_t UC_CAN_astrMsgTx2[UC_CAN_TX2_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_9,
    /* Message Frame Id */
    0x3A1,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_0,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_10,
    /* Message Frame Id */
    0x228,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_1,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};

UC_CAN_strMsg_t UC_CAN_astrMsgRx2[UC_CAN_RX2_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_RX2_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_11,
    /* Message Frame Id */
    0x3A0,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    1,
    /* Message jitter in ms */
    5,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_TRUE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_RX2_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_12,
    /* Message Frame Id */
    0x227,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};

UC_CAN_strMsg_t UC_CAN_astrMsgTx3[UC_CAN_TX3_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_TX3_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_13,
    /* Message Frame Id */
    0x3A1,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX3_MSG_INDEX_0,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX3_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_14,
    /* Message Frame Id */
    0x230,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX3_MSG_INDEX_1,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};

UC_CAN_strMsg_t UC_CAN_astrMsgRx3[UC_CAN_RX3_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_RX3_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_15,
    /* Message Frame Id */
    0x3A0,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    1,
    /* Message jitter in ms */
    5,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_TRUE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_RX3_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_16,
    /* Message Frame Id */
    0x229,
    /* Extended Message Frame Id */
    0x0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    10,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    deMCD_DEFAULT,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
};


UC_CAN_strModule_t UC_CAN_astrModule[UC_CAN_MODULE_NUM] = 
{
  {
    /* CAN Module Array Index */
    UC_CAN_MODULE_INDEX_0,
    /* CAN Node Object */
    &UC_CAN_astrObj[UC_CAN_MODULE_1],
    /* Hardware Module Id */
    UC_CAN_MODULE_1,
    /* CAN Module Enable */
    UC_CAN_MODULE_ENABLED,
    /*CAN Module Network ID*/
    0,
    /* Baud Rate kbps*/
    250,
    /* Global Tx Interrupt Enable*/
    deMCD_FALSE,
    /* Global Rx Interrupt Enable*/
    deMCD_FALSE,
    /* Number of Transmitted Messages */
    UC_CAN_TX1_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgTx1,
    /* Number of Received Messages */
    UC_CAN_RX1_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgRx1,
    /* Module Status */
    UC_CAN_MODULE_NOT_INITIALIZED
  },
  {
    /* CAN Module Array Index */
    UC_CAN_MODULE_INDEX_1,
    /* CAN Node Object */
    &UC_CAN_astrObj[UC_CAN_MODULE_2],
    /* Hardware Module Id */
    UC_CAN_MODULE_2,
    /* CAN Module Enable */
    UC_CAN_MODULE_ENABLED,
    /*CAN Module Network ID*/
    1,
    /* Baud Rate kbps*/
    250,
    /* Global Tx Interrupt Enable*/
    deMCD_FALSE,
    /* Global Rx Interrupt Enable*/
    deMCD_FALSE,
    /* Number of Transmitted Messages */
    UC_CAN_TX2_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgTx2,
    /* Number of Received Messages */
    UC_CAN_RX2_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgRx2,
    /* Module Status */
    UC_CAN_MODULE_NOT_INITIALIZED
  },
  {
    /* CAN Module Array Index */
    UC_CAN_MODULE_INDEX_2,
    /* CAN Node Object */
    &UC_CAN_astrObj[UC_CAN_MODULE_3],
    /* Hardware Module Id */
    UC_CAN_MODULE_3,
    /* CAN Module Enable */
    UC_CAN_MODULE_ENABLED,
    /*CAN Module Network ID*/
    2,
    /* Baud Rate kbps*/
    250,
    /* Global Tx Interrupt Enable*/
    deMCD_FALSE,
    /* Global Rx Interrupt Enable*/
    deMCD_FALSE,
    /* Number of Transmitted Messages */
    UC_CAN_TX3_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgTx3,
    /* Number of Received Messages */
    UC_CAN_RX3_MSGS_NUM,
    /* Array of Tx Message Objects*/
    UC_CAN_astrMsgRx3,
    /* Module Status */
    UC_CAN_MODULE_NOT_INITIALIZED
  },
};


