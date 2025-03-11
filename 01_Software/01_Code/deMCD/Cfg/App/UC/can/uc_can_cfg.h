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

#ifndef UC_CAN_CFG_H
#define UC_CAN_CFG_H

#define UC_CAN_MODULE_ENABLE

#define UC_CAN_OS_TASK_MS                       (1)

#define UC_CAN_SYSTEM_INPUT_FREQUENCY_MHZ       (UC_SYSTEM_FREQUENCY_MHZ/2)

#define UC_CAN_MODULE_NUM                          (3)

#define UC_CAN_MODULE_INDEX_0                      (0)
#define UC_CAN_MODULE_INDEX_1                      (1)
#define UC_CAN_MODULE_INDEX_2                      (2)

/* CAN 1 CONFIGURATIONS */
#define UC_CAN_TX1_MSGS_NUM                      (5)

#define UC_CAN_TX1_MSG_INDEX_0                   (0)
#define UC_CAN_TX1_MSG_INDEX_1                   (1)
#define UC_CAN_TX1_MSG_INDEX_2                   (2)
#define UC_CAN_TX1_MSG_INDEX_3                   (3)
#define UC_CAN_TX1_MSG_INDEX_4                   (4)

#define UC_CAN_RX1_MSGS_NUM                      (8)

#define UC_CAN_RX1_MSG_INDEX_0                   (0)
#define UC_CAN_RX1_MSG_INDEX_1                   (1)
#define UC_CAN_RX1_MSG_INDEX_2                   (2)
#define UC_CAN_RX1_MSG_INDEX_3                   (3)
#define UC_CAN_RX1_MSG_INDEX_4                   (4)
#define UC_CAN_RX1_MSG_INDEX_5                   (5)
#define UC_CAN_RX1_MSG_INDEX_6                   (6)
#define UC_CAN_RX1_MSG_INDEX_7                   (7)


/* CAN 2 CONFIGURATIONS */
#define UC_CAN_TX2_MSGS_NUM                      (19)

#define UC_CAN_TX2_MSG_INDEX_0                   (0)
#define UC_CAN_TX2_MSG_INDEX_1                   (1)
#define UC_CAN_TX2_MSG_INDEX_2                   (2)
#define UC_CAN_TX2_MSG_INDEX_3                   (3)
#define UC_CAN_TX2_MSG_INDEX_4                   (4)
#define UC_CAN_TX2_MSG_INDEX_5                   (5)
#define UC_CAN_TX2_MSG_INDEX_6                   (6)
#define UC_CAN_TX2_MSG_INDEX_7                   (7)
#define UC_CAN_TX2_MSG_INDEX_8                   (8)
#define UC_CAN_TX2_MSG_INDEX_9                   (9)
#define UC_CAN_TX2_MSG_INDEX_10                  (10)
#define UC_CAN_TX2_MSG_INDEX_11                  (11)
#define UC_CAN_TX2_MSG_INDEX_12                  (12)
#define UC_CAN_TX2_MSG_INDEX_13                  (13)
#define UC_CAN_TX2_MSG_INDEX_14                  (14)
#define UC_CAN_TX2_MSG_INDEX_15                  (15)
#define UC_CAN_TX2_MSG_INDEX_16                  (16)
#define UC_CAN_TX2_MSG_INDEX_17                  (17)
#define UC_CAN_TX2_MSG_INDEX_18                  (18)

#define UC_CAN_RX2_MSGS_NUM                      (16)

#define UC_CAN_RX2_MSG_INDEX_0                   (0)
#define UC_CAN_RX2_MSG_INDEX_1                   (1)
#define UC_CAN_RX2_MSG_INDEX_2                   (2)
#define UC_CAN_RX2_MSG_INDEX_3                   (3)
#define UC_CAN_RX2_MSG_INDEX_4                   (4)
#define UC_CAN_RX2_MSG_INDEX_5                   (5)
#define UC_CAN_RX2_MSG_INDEX_6                   (6)
#define UC_CAN_RX2_MSG_INDEX_7                   (7)
#define UC_CAN_RX2_MSG_INDEX_8                   (8)
#define UC_CAN_RX2_MSG_INDEX_9                   (9)
#define UC_CAN_RX2_MSG_INDEX_10                  (10)
#define UC_CAN_RX2_MSG_INDEX_11                  (11)
#define UC_CAN_RX2_MSG_INDEX_12                  (12)
#define UC_CAN_RX2_MSG_INDEX_13                  (13)
#define UC_CAN_RX2_MSG_INDEX_14                  (14)
#define UC_CAN_RX2_MSG_INDEX_15                  (15)

/* CAN 3 CONFIGURATIONS */
#define UC_CAN_TX3_MSGS_NUM                      (3)

#define UC_CAN_TX3_MSG_INDEX_0                   (0)
#define UC_CAN_TX3_MSG_INDEX_1                   (1)
#define UC_CAN_TX3_MSG_INDEX_2                   (2)

#define UC_CAN_RX3_MSGS_NUM                      (3)

#define UC_CAN_RX3_MSG_INDEX_0                   (0)
#define UC_CAN_RX3_MSG_INDEX_1                   (1)
#define UC_CAN_RX3_MSG_INDEX_2                   (2)


/* MAP THE HARDWARE AND THE SOFTWARE MODULES FOR INTERRUPTS */
#ifdef UC_CAN_MODULE_INDEX_0
  #define UC_CAN_DCAN1_SW_CAN_MODULE            UC_CAN_MODULE_INDEX_0
#endif /*UC_CAN_MODULE_INDEX_0*/

#ifdef UC_CAN_MODULE_INDEX_1
  #define UC_CAN_DCAN2_SW_CAN_MODULE            UC_CAN_MODULE_INDEX_1 
#endif /*UC_CAN_MODULE_INDEX_1*/

#ifdef UC_CAN_MODULE_INDEX_2
  #define UC_CAN_DCAN3_SW_CAN_MODULE            UC_CAN_MODULE_INDEX_2 
#endif /*UC_CAN_MODULE_INDEX_2*/

#endif /*UC_CAN_CFG_H*/

