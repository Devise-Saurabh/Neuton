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

File Name: ecu_diag_cfg.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef ECU_DIAG_CFG_H
#define ECU_DIAG_CFG_H

#define ECU_DIAG_MODULE_ENABLE


#define ECU_DIAG_CYCLIC_TIME_MS                                    (10)

#define ECU_DIAG_CAN1_CHANNEL                                    UC_CAN_MODULE_INDEX_0
#define ECU_DIAG_CAN2_CHANNEL                                    UC_CAN_MODULE_INDEX_1
#define ECU_DIAG_CAN3_CHANNEL                                    UC_CAN_MODULE_INDEX_2

#define ECU_DIAG_CAN1_REQUEST                                    UC_CAN_RX1_MSG_INDEX_0
#define ECU_DIAG_CAN1_RESPONSE                                   UC_CAN_TX1_MSG_INDEX_0

#define ECU_DIAG_CAN2_REQUEST                                    UC_CAN_RX2_MSG_INDEX_0
#define ECU_DIAG_CAN2_RESPONSE                                   UC_CAN_TX2_MSG_INDEX_0

#define ECU_DIAG_CAN3_REQUEST                                    UC_CAN_RX3_MSG_INDEX_0
#define ECU_DIAG_CAN3_RESPONSE                                   UC_CAN_TX3_MSG_INDEX_0

#define ECU_DIAG_DATA_DEFAULT                                      (0)

#define ECU_DIAG_FRAME_DATA_NUM                                    (5)

#define ECU_DIAG_RESPONSE_CODE                                     (0x01)


#endif /*ECU_DIAG_CFG_H*/



