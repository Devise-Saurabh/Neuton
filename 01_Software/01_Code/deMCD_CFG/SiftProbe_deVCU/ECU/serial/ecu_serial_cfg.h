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


File Name: ecu_serial_cfg.h
Author: Devise Electronics Embedded Team
E-mail: devcu@deviseelectronics.com
***************************************************************************
***************************************************************************
*/


#ifndef ECU_SERIAL_CFG_H
#define ECU_SERIAL_CFG_H

#define ECU_SERIAL_MODULE_ENABLE

#define ECU_SERIAL_BUFFER_BYTES_SIZE                         (1000)
#define ECU_SERIAL_START_END_BYTES_MAX_SIZE                   (10)

#define ECU_SERIAL_INTERFACES_NUM                             (1)
#define ECU_SERIAL_INTERFACE_ID0                              (0)


#define ECU_SERIAL_INTERFACE_ID0_RX_FRAMES_NUM                (6)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID0                 (0)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID1                 (1)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID2                 (2)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID3                 (3)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID4                 (4)
#define ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID5                 (5)

#define ECU_SERIAL_INTERFACE_ID_UART2         ECU_SERIAL_INTERFACE_ID0  
/*#define ECU_SERIAL_INTERFACE_ID_UART1         ECU_SERIAL_INTERFACE_ID1*/

#endif /*ECU_SERIAL_CFG_H*/

