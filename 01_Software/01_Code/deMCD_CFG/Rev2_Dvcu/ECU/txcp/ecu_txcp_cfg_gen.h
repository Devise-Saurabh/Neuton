/*
***************************************************************************
***************************************************************************
(C) Copyright 2020 2021 Devise Electronics Pvt Ltd.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: ecu_txcp_cfg_gen.h
Author: deMCD Generated
E-mail: vinay.pawar@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef ECU_TXCP_CFG_GEN_H
#define ECU_TXCP_CFG_GEN_H

/* CAN Frames Config */

#define ECU_TXCP_CAN_CHANNEL_GEN                    UC_CAN_MODULE_INDEX_0

#define ECU_TXCP_RX_REQ_FRAME_GEN                   UC_CAN_RX1_MSG_INDEX_1
#define ECU_TXCP_RX_HEARTBEAT_FRAME_GEN             UC_CAN_RX1_MSG_INDEX_2

#define ECU_TXCP_TX_RESPONSE_FRAME_GEN              UC_CAN_TX1_MSG_INDEX_1
#define ECU_TXCP_TX_HEARTBEAT_FRAME_GEN             UC_CAN_TX1_MSG_INDEX_2

#endif /*ECU_TXCP_CFG_GEN_H*/


