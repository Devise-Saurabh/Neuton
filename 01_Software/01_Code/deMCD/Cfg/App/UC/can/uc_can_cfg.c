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

Devise Electronics Pvt Ltd,
Bavdhan,
411021, Pune,
India

File Name: uc_can_cfg.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com   
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
    UC_CAN_MSG_OBJ_8,
    /* Message Frame Id */
    0x301,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
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
    UC_CAN_MSG_OBJ_9,
    /* Message Frame Id */
    0x100,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
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
    UC_CAN_MSG_DISABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_10,
    /* Message Frame Id */
    0x101,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
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
    UC_CAN_MSG_OBJ_1,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC00EFD0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    0,
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
  {
    /* Message Index Id */
    UC_CAN_TX1_MSG_INDEX_4,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_2,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC01EFD0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_TX1_MSG_INDEX_4,
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
    UC_CAN_MSG_OBJ_18,
    /* Message Frame Id */
    0x300,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_MSG_OBJ_19,
    /* Message Frame Id */
    0x200,
    /* Extended Message Frame Id */
    0x000000,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    020,
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
    UC_CAN_MSG_OBJ_20,
    /* Message Frame Id */
    0x201,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_MSG_OBJ_11,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC00D0EF,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    5,
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
    UC_CAN_RX1_MSG_INDEX_4,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_12,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC01D0EF,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    5,
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
    UC_CAN_RX1_MSG_INDEX_5,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_13,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC02D0EF,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    50,
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
  {
    /* Message Index Id */
    UC_CAN_RX1_MSG_INDEX_6,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_14,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC03D0EF,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    5,
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
    UC_CAN_RX1_MSG_INDEX_7,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_15,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC04D0EF,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    50,
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
    UC_CAN_MSG_OBJ_38,
    /* Message Frame Id */
    0x301,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
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
    UC_CAN_MSG_OBJ_39,
    /* Message Frame Id */
    0x100,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_1,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_DISABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_40,
    /* Message Frame Id */
    0x101,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_2,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_3,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_21,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0xC01F3D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_3,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_4,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_22,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_TX2_MSG_INDEX_4,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_5,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_23,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x18008FD0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_TX2_MSG_INDEX_5,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_6,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_24,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800A8D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    10,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_6,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_7,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_25,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x180228D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_7,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_8,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_26,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x180328D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_8,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_9,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_27,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x180428D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_9,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_10,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_28,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x180528D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_10,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_11,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_29,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x180628D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_11,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_12,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_30,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_12,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_13,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_31,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1801B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_13,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_14,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_32,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1802B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_14,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_15,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_33,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1803B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_15,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_16,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_34,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1804B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_16,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_17,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_35,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1805B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_17,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX2_MSG_INDEX_18,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_36,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1806B4D0,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_TX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    0,
    /* Message Data*/
    UC_CAN_DATA_DEFAULT,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX2_MSG_INDEX_18,
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
    UC_CAN_MSG_OBJ_55,
    /* Message Frame Id */
    0x300,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_MSG_OBJ_56,
    /* Message Frame Id */
    0x200,
    /* Extended Message Frame Id */
    0x000000,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    020,
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
    UC_CAN_RX2_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_57,
    /* Message Frame Id */
    0x201,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_RX2_MSG_INDEX_3,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_41,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_4,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_42,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1801D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_5,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_43,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1802D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
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
    UC_CAN_RX2_MSG_INDEX_6,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_44,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1803D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
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
    UC_CAN_RX2_MSG_INDEX_7,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_45,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1804D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_8,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_46,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1805D0F3,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
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
    UC_CAN_RX2_MSG_INDEX_9,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_47,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D0D4,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_10,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_48,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1801D0D4,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_11,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_49,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D08F,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_12,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_50,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1801D08F,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
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
    UC_CAN_RX2_MSG_INDEX_13,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_51,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D0A8,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    40,
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
    UC_CAN_RX2_MSG_INDEX_14,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_52,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1801D0A8,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    200,
    /* Message jitter in ms */
    40,
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
    UC_CAN_RX2_MSG_INDEX_15,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_53,
    /* Message Frame Id */
    0x000,
    /* Extended Message Frame Id */
    0x1800D028,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT_PERIODIC,
    /* Message Period in ms*/
    500,
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
};

UC_CAN_strMsg_t UC_CAN_astrMsgTx3[UC_CAN_TX3_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_TX3_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_61,
    /* Message Frame Id */
    0x100,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
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
    UC_CAN_MSG_DISABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_62,
    /* Message Frame Id */
    0x101,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX3_MSG_INDEX_1,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  },
  {
    /* Message Index Id */
    UC_CAN_TX3_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_58,
    /* Message Frame Id */
    0x301,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_DATA_TEST,
    /* Message Trigger Interrupt Enable */
    deMCD_FALSE,
    /* Message Trigger Interrupt Callback*/
    deMCD_NULL,
    /* Message timing counter */
    UC_CAN_TX3_MSG_INDEX_2,
    /*Message Validity*/
    UC_CAN_MSG_INVALID
  }
};

UC_CAN_strMsg_t UC_CAN_astrMsgRx3[UC_CAN_RX3_MSGS_NUM] = 
{
  {
    /* Message Index Id */
    UC_CAN_RX3_MSG_INDEX_0,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_63,
    /* Message Frame Id */
    0x200,
    /* Extended Message Frame Id */
    0x000000,
    /*Message Frame DLC */
    8,
    /* Message Direction */
    UC_CAN_MSG_DIR_RX,
    /* Message Trigger */
    UC_CAN_MSG_TRIG_EVENT,
    /* Message Period in ms*/
    100,
    /* Message jitter in ms */
    020,
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
    UC_CAN_RX3_MSG_INDEX_1,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_64,
    /* Message Frame Id */
    0x201,
    /* Extended Message Frame Id */
    0x000000,
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
    UC_CAN_RX3_MSG_INDEX_2,
    /* Message Enable */
    UC_CAN_MSG_ENABLED,
    /* Message Object Box Buffer Id */
    UC_CAN_MSG_OBJ_59,
    /* Message Frame Id */
    0x300,
    /* Extended Message Frame Id */
    0x000000,
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
    0x00,
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
    0x01,
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
    0x02,
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
