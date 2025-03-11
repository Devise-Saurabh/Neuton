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

File Name: uc_can_cfg.h
Author: deMCD Generated 
E-mail: N/A 
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
#define UC_CAN_TX1_MSGS_NUM                      (4)

#define UC_CAN_TX1_MSG_INDEX_0                   (0)
#define UC_CAN_TX1_MSG_INDEX_1                   (1)
#define UC_CAN_TX1_MSG_INDEX_2                   (2)
#define UC_CAN_TX1_MSG_INDEX_3                   (3)



#define UC_CAN_RX1_MSGS_NUM                      (4)

#define UC_CAN_RX1_MSG_INDEX_0                   (0)
#define UC_CAN_RX1_MSG_INDEX_1                   (1)
#define UC_CAN_RX1_MSG_INDEX_2                   (2)
#define UC_CAN_RX1_MSG_INDEX_3                   (3)


/* CAN 2 CONFIGURATIONS */
#define UC_CAN_TX2_MSGS_NUM                      (2)

#define UC_CAN_TX2_MSG_INDEX_0                   (0)
#define UC_CAN_TX2_MSG_INDEX_1                   (1)



#define UC_CAN_RX2_MSGS_NUM                      (2)

#define UC_CAN_RX2_MSG_INDEX_0                   (0)
#define UC_CAN_RX2_MSG_INDEX_1                   (1)


/* CAN 3 CONFIGURATIONS */
#define UC_CAN_TX3_MSGS_NUM                      (2)

#define UC_CAN_TX3_MSG_INDEX_0                   (0)
#define UC_CAN_TX3_MSG_INDEX_1                   (1)



#define UC_CAN_RX3_MSGS_NUM                      (2)

#define UC_CAN_RX3_MSG_INDEX_0                   (0)
#define UC_CAN_RX3_MSG_INDEX_1                   (1)


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


