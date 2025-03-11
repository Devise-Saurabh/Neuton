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

File Name: ecu_com_cfg_gen.h
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_COM_CFG_GEN_H
#define ECU_COM_CFG_GEN_H


/*********** NETWORK 1 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX1_MSGS_NUM                                               (1)
#define TESTRX1CAN1                                                        (0)


/* Defines of Tx Messages */
#define ECU_COM_TX1_MSGS_NUM                                               (1)
#define TESTTX1CAN1                                                        (0)


/* Defines of Rx Signals */
#define ECU_COM_RX1_SIGNALS_NUM                                            (1)
#define CAN1TESTRX1                                                        (0)


/* Defines of Tx Signals */
#define ECU_COM_TX1_SIGNALS_NUM                                            (1)
#define CAN1TESTTX1                                                        (0)


/*********** NETWORK 2 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX2_MSGS_NUM                                               (1)
#define TESTRX1CAN2                                                        (0)


/* Defines of Tx Messages */
#define ECU_COM_TX2_MSGS_NUM                                               (1)
#define TESTTX1CAN2                                                        (0)


/* Defines of Rx Signals */
#define ECU_COM_RX2_SIGNALS_NUM                                            (1)
#define CAN2TESTRX1                                                        (0)


/* Defines of Tx Signals */
#define ECU_COM_TX2_SIGNALS_NUM                                            (1)
#define CAN2TESTTX2                                                        (0)


/*********** NETWORK 3 ***********/
/* Defines of Rx Messages */
#define ECU_COM_RX3_MSGS_NUM                                               (1)
#define TESTRX1CAN3                                                        (0)


/* Defines of Tx Messages */
#define ECU_COM_TX3_MSGS_NUM                                               (1)
#define TEXTTX1CAN3                                                        (0)


/* Defines of Rx Signals */
#define ECU_COM_RX3_SIGNALS_NUM                                            (1)
#define CAN3TESTRX1                                                        (0)


/* Defines of Tx Signals */
#define ECU_COM_TX3_SIGNALS_NUM                                            (1)
#define CAN3TEXTTX1                                                        (0)




/* Defines of Application ECU Signals */

/* Defines of Application ECU Rx Signals */
#define ECU_COM_RX_SIGNALS_NUM                                             (3)
#define APP_RX_CAN1TESTRX1                                                 (0)
#define APP_RX_CAN2TESTRX1                                                 (1)
#define APP_RX_CAN3TESTRX1                                                 (2)

/* Defines of Application ECU Tx Signals */
#define ECU_COM_TX_SIGNALS_NUM                                             (3)
#define APP_TX_CAN1TESTTX1                                                 (0)
#define APP_TX_CAN2TESTTX2                                                 (1)
#define APP_TX_CAN3TEXTTX1                                                 (2)


extern ECU_COM_strMsg_t ECU_COM_astrRx1Msg[ECU_COM_RX1_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx1Msg[ECU_COM_TX1_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx1Signal[ECU_COM_RX1_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx1Signal[ECU_COM_TX1_SIGNALS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrRx2Msg[ECU_COM_RX2_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx2Msg[ECU_COM_TX2_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx2Signal[ECU_COM_RX2_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx2Signal[ECU_COM_TX2_SIGNALS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrRx3Msg[ECU_COM_RX3_MSGS_NUM];
extern ECU_COM_strMsg_t ECU_COM_astrTx3Msg[ECU_COM_TX3_MSGS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrRx3Signal[ECU_COM_RX3_SIGNALS_NUM];
extern ECU_COM_strSignal_t ECU_COM_astrTx3Signal[ECU_COM_TX3_SIGNALS_NUM];
extern ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeRx[ECU_COM_RX_SIGNALS_NUM];
extern ECU_COM_strSigDecode_t ECU_COM_astrSigDecodeTx[ECU_COM_TX_SIGNALS_NUM];


#endif /*ECU_COM_CFG_GEN_H*/


