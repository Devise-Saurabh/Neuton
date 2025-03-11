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


File Name: ecu_txcp_cfg.h
Author: Devise Electronics Embedded Team
E-mail: devcu@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef ECU_TXCP_CFG_H
#define ECU_TXCP_CFG_H

#define ECU_TXCP_MODULE_ENABLE
 

#define ECU_TXCP_MEM_XCP_ENABLE                 ECU_MEM_INT_XCP_ENABLE            

/* CAN Frames Config */
#define ECU_TXCP_CAN_CHANNEL                    ECU_TXCP_CAN_CHANNEL_GEN

#define ECU_TXCP_RX_REQ_FRAME                   ECU_TXCP_RX_REQ_FRAME_GEN
#define ECU_TXCP_RX_HEARTBEAT_FRAME             ECU_TXCP_RX_HEARTBEAT_FRAME_GEN

#define ECU_TXCP_TX_RESPONSE_FRAME              ECU_TXCP_TX_RESPONSE_FRAME_GEN
#define ECU_TXCP_TX_HEARTBEAT_FRAME             ECU_TXCP_TX_HEARTBEAT_FRAME_GEN

/* DIO Config */
#define ECU_TXCP_LED_INDICATOR             UC_DIO_OUTPUT_GIOHB4


#endif /*ECU_TXCP_CFG_H*/



