/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

Devise Electronics Pvt Ltd
Bavdhan,
411021, Pune,
India

File Name: rte.c
Author: deVCU-TAPAS Generated 
E-mail: devcu@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "lib_types.h"
#include "rte.h"
#include "rte_app.h"


/* RTE Sender Receiver Bus Definition */

RTE_strData_t RTE_astrData[RTE_DATA_NUM] =
{
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_5,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_5,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_6,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_6,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_BMS_FAULT,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_8,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_8,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_9,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_9,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_10,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_10,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1643,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1642,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1641,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1246,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1245,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1243,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1748,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1747,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P114E,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P114A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1141,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1140,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1741,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1338,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1337,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P143F,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P143E,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P143D,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P143C,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1336,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P163E,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1639,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1634,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1533,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1532,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1531,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1530,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1234,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1231,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1736,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1730,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1731,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1732,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P113C,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P113B,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1139,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1138,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1137,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1132,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P182E,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P182D,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1829,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1828,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1827,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1826,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1825,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1823,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1822,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1427,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1426,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1423,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1422,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1421,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1420,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1325,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1324,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1323,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1322,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P162D,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P162C,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1627,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1626,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1625,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1620,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1524,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1525,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1724,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P112D,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1126,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1124,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1123,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1720,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1218,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1217,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P181B,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P181A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1811,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1810,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1419,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1418,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1415,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1414,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P161F,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P161B,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P161A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1618,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1518,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1517,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1516,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1210,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1713,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P180C,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P140B,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P140A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1301,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1300,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1202,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P170A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1709,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1105,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P1705,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_OUT1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_IN1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_HVIL_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DCDCRLY_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DFCP07_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_THERM_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SW_VERSION,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APPSAT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APPLIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CREEPSPEED_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MCUTEMP_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MOTORTEMP_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P218,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_P186A,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BOOTNUMBER_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_CONTROLL_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_REG_ILIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DIS_ILIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_LIMITATIONCAUSE,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_I_BATT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MAXCHRGCURRENT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CHRG_CONTI_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ISWATCHDOG,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_AUX_VTG_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_COOLENTTEMPOUT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUETHERM_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_THERM_LIMITS,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQ_THERMDERATE_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MCUTEMP_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MOTORTEMP_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CHRG_MAX_I_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_CHRG_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_DRV_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_GEAR_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_MCU_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_SYS_BAT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_REVSPEEDLIM,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_PEDALMASSFACTOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_MAXREGENTORQUE,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_FSPEEDLIMIT,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQREGCURRENT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQLTSELECT_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQPOSLIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQNEGLIM_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRKBPP_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRKEM1_PGN_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRKTRQPCT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DRV_BRK_MODE_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_M_FACTOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_PEDALMPOS,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_Y_FACTOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TCALIB_CH_FACTOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_VEHICLE_SPEED_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_COOLENTTEMPIN_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUEABSREGEN_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUEMCUDERATING_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TORQUEOVERSPEED_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MAXCREEPTORQUE_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CREEPRATECHANGE_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CANPUMP_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_PWMFAN_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_CREEPTRQ_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_ACCPEDALTRQ_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_MCUTORQUE_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRAKE_SW_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TRQTOMCU_MANUAL,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BRAKESWITCH_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_KEY_ON_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_KEY_ACC_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_OPERATREQ_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_BMS_PACKSTATE_MONITOR,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS_OUT1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS_IN1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_OUT1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_IN1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_OUT1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_IN1,
		/* Data */
		TAPAS_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	}
};


/* -----------------------------------------  */
/* RTE Sender Receiver Interfaces Defintions  */
/* -----------------------------------------  */

float RTE_Read_DTC_NONAME_5(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_5(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_5].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_5(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_5(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_5].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_6(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_6(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_6].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_6(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_6(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_6].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_BMS_FAULT(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_BMS_FAULT(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_BMS_FAULT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_BMS_FAULT(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_BMS_FAULT(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_8(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_8(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_8].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_8(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_8(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_8].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_9(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_9(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_9].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_9(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_9(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_9].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_NONAME_10(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_NONAME_10(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_NONAME_10].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_CLR_DTC_NONAME_10(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_CLR_DTC_NONAME_10(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_CLR_DTC_NONAME_10].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_FLT_SystemErrorSeverity(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_FLT_SystemErrorSeverity(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1643(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1643].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1643].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1643(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1643].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1643].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1642(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1642].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1642].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1642(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1642].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1642].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1641(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1641].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1641].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1641(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1641].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1641].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1246(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1246].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1246].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1246(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1246].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1246].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1245(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1245].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1245].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1245(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1245].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1245].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1243(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1243].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1243].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1243(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1243].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1243].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1748(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1748].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1748].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1748(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1748].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1748].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1747(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1747].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1747].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1747(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1747].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1747].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P114E(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P114E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P114E].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P114E(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P114E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P114E].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P114A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P114A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P114A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P114A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P114A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P114A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1141(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1141].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1141].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1141(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1141].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1141].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1140(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1140].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1140].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1140(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1140].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1140].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1741(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1741].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1741].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1741(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1741].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1741].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1338(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1338].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1338].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1338(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1338].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1338].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1337(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1337].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1337].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1337(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1337].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1337].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P143F(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143F].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P143F].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P143F(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143F].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P143F].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P143E(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P143E].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P143E(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P143E].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P143D(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P143D].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P143D(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P143D].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P143C(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P143C].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P143C(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P143C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P143C].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1336(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1336].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1336].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1336(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1336].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1336].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P163E(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P163E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P163E].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P163E(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P163E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P163E].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1639(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1639].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1639].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1639(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1639].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1639].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1634(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1634].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1634].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1634(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1634].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1634].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1533(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1533].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1533].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1533(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1533].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1533].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1532(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1532].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1532].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1532(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1532].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1532].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1531(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1531].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1531].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1531(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1531].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1531].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1530(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1530].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1530].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1530(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1530].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1530].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1234(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1234].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1234].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1234(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1234].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1234].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1231(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1231].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1231].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1231(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1231].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1231].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1736(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1736].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1736].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1736(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1736].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1736].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1730(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1730].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1730].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1730(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1730].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1730].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1731(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1731].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1731].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1731(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1731].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1731].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1732(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1732].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1732].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1732(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1732].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1732].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P113C(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P113C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P113C].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P113C(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P113C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P113C].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P113B(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P113B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P113B].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P113B(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P113B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P113B].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1139(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1139].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1139].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1139(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1139].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1139].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1138(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1138].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1138].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1138(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1138].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1138].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1137(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1137].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1137].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1137(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1137].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1137].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1132(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1132].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1132].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1132(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1132].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1132].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P182E(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P182E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P182E].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P182E(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P182E].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P182E].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P182D(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P182D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P182D].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P182D(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P182D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P182D].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1829(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1829].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1829].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1829(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1829].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1829].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1828(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1828].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1828].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1828(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1828].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1828].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1827(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1827].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1827].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1827(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1827].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1827].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1826(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1826].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1826].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1826(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1826].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1826].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1825(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1825].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1825].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1825(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1825].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1825].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1823(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1823].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1823].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1823(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1823].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1823].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1822(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1822].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1822].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1822(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1822].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1822].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1427(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1427].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1427].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1427(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1427].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1427].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1426(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1426].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1426].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1426(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1426].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1426].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1423(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1423].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1423].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1423(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1423].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1423].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1422(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1422].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1422].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1422(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1422].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1422].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1421(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1421].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1421].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1421(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1421].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1421].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1420(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1420].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1420].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1420(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1420].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1420].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1325(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1325].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1325].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1325(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1325].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1325].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1324(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1324].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1324].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1324(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1324].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1324].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1323(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1323].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1323].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1323(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1323].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1323].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1322(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1322].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1322].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1322(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1322].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1322].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P162D(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P162D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P162D].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P162D(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P162D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P162D].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P162C(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P162C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P162C].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P162C(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P162C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P162C].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1627(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1627].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1627].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1627(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1627].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1627].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1626(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1626].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1626].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1626(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1626].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1626].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1625(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1625].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1625].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1625(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1625].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1625].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1620(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1620].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1620].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1620(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1620].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1620].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1524(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1524].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1524].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1524(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1524].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1524].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1525(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1525].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1525].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1525(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1525].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1525].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1724(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1724].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1724].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1724(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1724].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1724].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P112D(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P112D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P112D].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P112D(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P112D].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P112D].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1126(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1126].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1126].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1126(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1126].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1126].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1124(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1124].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1124].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1124(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1124].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1124].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1123(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1123].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1123].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1123(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1123].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1123].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1720(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1720].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1720].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1720(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1720].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1720].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1218(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1218].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1218].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1218(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1218].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1218].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1217(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1217].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1217].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1217(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1217].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1217].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P181B(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P181B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P181B].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P181B(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P181B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P181B].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P181A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P181A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P181A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P181A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P181A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P181A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1811(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1811].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1811].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1811(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1811].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1811].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1810(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1810].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1810].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1810(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1810].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1810].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1419(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1419].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1419].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1419(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1419].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1419].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1418(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1418].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1418].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1418(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1418].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1418].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1415(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1415].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1415].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1415(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1415].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1415].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1414(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1414].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1414].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1414(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1414].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1414].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P161F(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161F].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P161F].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P161F(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161F].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P161F].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P161B(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P161B].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P161B(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P161B].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P161A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P161A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P161A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P161A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P161A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1618(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1618].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1618].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1618(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1618].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1618].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1518(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1518].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1518].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1518(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1518].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1518].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1517(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1517].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1517].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1517(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1517].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1517].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1516(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1516].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1516].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1516(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1516].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1516].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1210(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1210].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1210].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1210(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1210].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1210].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1713(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1713].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1713].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1713(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1713].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1713].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P180C(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P180C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P180C].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P180C(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P180C].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P180C].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P140B(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P140B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P140B].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P140B(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P140B].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P140B].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P140A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P140A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P140A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P140A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P140A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P140A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1301(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1301].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1301].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1301(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1301].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1301].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1300(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1300].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1300].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1300(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1300].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1300].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1202(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1202].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1202].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1202(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1202].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1202].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P170A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P170A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P170A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P170A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P170A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P170A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1709(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1709].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1709].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1709(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1709].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1709].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1105(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1105].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1105].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1105(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1105].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1105].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P1705(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1705].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P1705].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P1705(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P1705].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P1705].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_100MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_100MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_100MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_100MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_100MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_100MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_HVIL_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_HVIL_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_HVIL_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_HVIL_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_HVIL_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_HVIL_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DCDCRly_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DCDCRLY_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DCDCRLY_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DCDCRly_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DCDCRLY_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DCDCRLY_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DFCP07_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DFCP07_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DFCP07_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DFCP07_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DFCP07_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DFCP07_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_Therm_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_THERM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_THERM_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_Therm_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_THERM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_THERM_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_SW_Version(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SW_VERSION].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SW_VERSION].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_SW_Version(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SW_VERSION].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SW_VERSION].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APPSAT_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APPSAT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APPSAT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APPSAT_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APPSAT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APPSAT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_AppLim_manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APPLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APPLIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_AppLim_manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APPLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APPLIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_MaxDrivingTorque(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_MaxDrivingTorque(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_MAXDRIVINGTORQUE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CreepSpeed_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPSPEED_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CREEPSPEED_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CreepSpeed_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPSPEED_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CREEPSPEED_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MCUTemp_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTEMP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MCUTEMP_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MCUTemp_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTEMP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MCUTEMP_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MotorTemp_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MOTORTEMP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MOTORTEMP_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MotorTemp_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MOTORTEMP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MOTORTEMP_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P218(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P218].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P218].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P218(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P218].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P218].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_DTC_P186A(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P186A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_P186A].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_DTC_P186A(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_P186A].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_P186A].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BootNumber_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BOOTNUMBER_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BOOTNUMBER_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BootNumber_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BOOTNUMBER_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BOOTNUMBER_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_SkipCurrentLim_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_SkipCurrentLim_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_SKIPCURRENTLIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_Controll_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_CONTROLL_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_CONTROLL_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_Controll_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_CONTROLL_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_CONTROLL_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_OverCurrent_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_OverCurrent_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_OVERCURRENT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Reg_Ilim_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_REG_ILIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_REG_ILIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Reg_Ilim_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_REG_ILIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_REG_ILIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Dis_Ilim_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DIS_ILIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DIS_ILIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Dis_Ilim_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DIS_ILIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DIS_ILIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_LimitationCause(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_LIMITATIONCAUSE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_LIMITATIONCAUSE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_LimitationCause(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_LIMITATIONCAUSE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_LIMITATIONCAUSE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_I_Batt_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_I_BATT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_I_BATT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_I_Batt_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_I_BATT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_I_BATT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MaxChrgCurrent_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MAXCHRGCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MAXCHRGCURRENT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MaxChrgCurrent_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MAXCHRGCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MAXCHRGCURRENT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Chrg_ContI_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CHRG_CONTI_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CHRG_CONTI_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Chrg_ContI_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CHRG_CONTI_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CHRG_CONTI_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_isWatchdog(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ISWATCHDOG].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ISWATCHDOG].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_isWatchdog(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ISWATCHDOG].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ISWATCHDOG].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Aux_Vtg_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_AUX_VTG_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_AUX_VTG_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Aux_Vtg_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_AUX_VTG_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_AUX_VTG_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CoolentTempOut_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_COOLENTTEMPOUT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_COOLENTTEMPOUT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CoolentTempOut_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_COOLENTTEMPOUT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_COOLENTTEMPOUT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_EEpromEnergyConsumption_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_EEpromEnergyConsumption_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_EEPROMENERGYCONSUMPTION_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqThermSpeedLim_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqThermSpeedLim_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQTHERMSPEEDLIM_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueTherm_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUETHERM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUETHERM_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueTherm_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUETHERM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUETHERM_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_Therm_Limits(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_THERM_LIMITS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_THERM_LIMITS].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_Therm_Limits(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_THERM_LIMITS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_THERM_LIMITS].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Trq_ThermDerate_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_THERMDERATE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQ_THERMDERATE_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Trq_ThermDerate_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQ_THERMDERATE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQ_THERMDERATE_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MCUTemp_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTEMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MCUTEMP_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MCUTemp_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTEMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MCUTEMP_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MotorTemp_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MOTORTEMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MOTORTEMP_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MotorTemp_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MOTORTEMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MOTORTEMP_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Chrg_Max_I_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CHRG_MAX_I_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CHRG_MAX_I_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Chrg_Max_I_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CHRG_MAX_I_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CHRG_MAX_I_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_Chrg_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_CHRG_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_CHRG_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_Chrg_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_CHRG_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_CHRG_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_DRV_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_DRV_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_DRV_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_DRV_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_DRV_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_DRV_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_Gear_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_GEAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_GEAR_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_Gear_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_GEAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_GEAR_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_MCU_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_MCU_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_MCU_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_MCU_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_MCU_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_MCU_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Sys_Bat_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_BAT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_SYS_BAT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Sys_Bat_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_SYS_BAT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_SYS_BAT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_RevspeedLim(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_REVSPEEDLIM].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_REVSPEEDLIM].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_RevspeedLim(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_REVSPEEDLIM].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_REVSPEEDLIM].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_fSpeedLimFactor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_fSpeedLimFactor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMFACTOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_PedalMassFactor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMASSFACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMASSFACTOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_PedalMassFactor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMASSFACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMASSFACTOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_MinCompSpeedForward(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_MinCompSpeedForward(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_MINCOMPSPEEDFORWARD].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_MaxRegenTorque(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MAXREGENTORQUE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_MAXREGENTORQUE].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_MaxRegenTorque(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_MAXREGENTORQUE].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_MAXREGENTORQUE].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_fSpeedLimit(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMIT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMIT].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_fSpeedLimit(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMIT].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_FSPEEDLIMIT].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqRegCurrent_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQREGCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQREGCURRENT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqRegCurrent_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQREGCURRENT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQREGCURRENT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqLTSelect_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQLTSELECT_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQLTSELECT_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqLTSelect_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQLTSELECT_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQLTSELECT_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqPosLim_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQPOSLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQPOSLIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqPosLim_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQPOSLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQPOSLIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqNegLim_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQNEGLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQNEGLIM_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqNegLim_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQNEGLIM_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQNEGLIM_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Refu_AirPressure_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Refu_AirPressure_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_REFU_AIRPRESSURE_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrkBPP_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRKBPP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRKBPP_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrkBPP_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRKBPP_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRKBPP_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrkDrivingTrq_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrkDrivingTrq_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRKDRIVINGTRQ_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrkTractionTrq_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrkTractionTrq_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRKTRACTIONTRQ_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrkEM1_PGN_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRKEM1_PGN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRKEM1_PGN_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrkEM1_PGN_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRKEM1_PGN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRKEM1_PGN_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrkTrqPct_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRKTRQPCT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRKTRQPCT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrkTrqPct_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRKTRQPCT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRKTRQPCT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Drv_Brk_Mode_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DRV_BRK_MODE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DRV_BRK_MODE_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Drv_Brk_Mode_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DRV_BRK_MODE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DRV_BRK_MODE_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_M_Factor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_M_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_M_FACTOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_M_Factor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_M_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_M_FACTOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_PedalMPos(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMPOS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMPOS].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_PedalMPos(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMPOS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_PEDALMPOS].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_Y_Factor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_Y_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_Y_FACTOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_Y_Factor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_Y_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_Y_FACTOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Tcalib_Ch_Factor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_CH_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TCALIB_CH_FACTOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Tcalib_Ch_Factor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TCALIB_CH_FACTOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TCALIB_CH_FACTOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Vehicle_Speed_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_VEHICLE_SPEED_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_VEHICLE_SPEED_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Vehicle_Speed_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_VEHICLE_SPEED_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_VEHICLE_SPEED_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CoolentTempIn_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_COOLENTTEMPIN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_COOLENTTEMPIN_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CoolentTempIn_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_COOLENTTEMPIN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_COOLENTTEMPIN_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueOutOfOrder_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueOutOfOrder_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUEOUTOFORDER_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueABSRegen_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEABSREGEN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUEABSREGEN_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueABSRegen_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEABSREGEN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUEABSREGEN_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueCurrentLimit_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueCurrentLimit_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUECURRENTLIMIT_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueMCUDerating_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEMCUDERATING_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUEMCUDERATING_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueMCUDerating_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEMCUDERATING_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUEMCUDERATING_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TorqueOverspeed_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEOVERSPEED_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TORQUEOVERSPEED_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TorqueOverspeed_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TORQUEOVERSPEED_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TORQUEOVERSPEED_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MaxCreepTorque_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MAXCREEPTORQUE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MAXCREEPTORQUE_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MaxCreepTorque_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MAXCREEPTORQUE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MAXCREEPTORQUE_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CreepRateChange_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPRATECHANGE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CREEPRATECHANGE_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CreepRateChange_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPRATECHANGE_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CREEPRATECHANGE_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CANpump_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CANPUMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CANPUMP_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CANpump_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CANPUMP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CANPUMP_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_PWMfan_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_PWMFAN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_PWMFAN_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_PWMfan_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_PWMFAN_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_PWMFAN_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_CreepTrq_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPTRQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_CREEPTRQ_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_CreepTrq_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_CREEPTRQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_CREEPTRQ_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_AccPedalTrq_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_ACCPEDALTRQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_ACCPEDALTRQ_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_AccPedalTrq_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_ACCPEDALTRQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_ACCPEDALTRQ_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_MCUTorque_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTORQUE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_MCUTORQUE_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_MCUTorque_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_MCUTORQUE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_MCUTORQUE_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Brake_Sw_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRAKE_SW_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRAKE_SW_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Brake_Sw_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRAKE_SW_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRAKE_SW_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_TrqToMCU_manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TRQTOMCU_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TRQTOMCU_MANUAL].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_TrqToMCU_manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TRQTOMCU_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TRQTOMCU_MANUAL].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BrakeSwitch_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BRAKESWITCH_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BRAKESWITCH_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BrakeSwitch_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BRAKESWITCH_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BRAKESWITCH_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Key_ON_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_KEY_ON_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_KEY_ON_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Key_ON_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_KEY_ON_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_KEY_ON_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_Key_Acc_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_KEY_ACC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_KEY_ACC_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_Key_Acc_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_KEY_ACC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_KEY_ACC_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_OperatReq_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_OPERATREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_OPERATREQ_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_OperatReq_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_OPERATREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_OPERATREQ_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_BMS_PackState_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_BMS_PACKSTATE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_BMS_PACKSTATE_MONITOR].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_BMS_PackState_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_BMS_PACKSTATE_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_BMS_PACKSTATE_MONITOR].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_10MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_10MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_10MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_10MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_10MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_10MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_10MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_1MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_1MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_1MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_1MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_1MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_1MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_50MS_OUT1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_50MS_OUT1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_50MS_OUT1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}

float RTE_Read_APP_50MS_IN1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].fltData;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return fltReturnValue;
}

void RTE_Write_APP_50MS_IN1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_APP_50MS_IN1].fltData = fltValue;
		eStatus = STATUS_OK;
	}
	else
	{
		eStatus = STATUS_NOK;
	}
	
	/* eStatus will be used later for quality signals */
	VARIABLE_NOT_USED(eStatus);
	
	return;
}



/*------------------------------------*/
/*       SWCs Initialization          */
/*------------------------------------*/

void RTE_vdInit(void)
{
  /*1ms Runnables Init*/
  app_FaultMgr_initialize();
  app_Main1msMgr_initialize();
  /*10ms Runnables Init*/
  app_Main10msMgr_initialize();
  /*50ms Runnables Init*/
  app_Main50msMgr_initialize();
  /*100ms Runnables Init*/
  app_Main100msMgr_initialize();
}




/*------------------------------------*/
/*       SWCs DeInitialization        */
/*------------------------------------*/

void RTE_vdDeInit(void)
{
  /*1ms Runnables DeInit*/
  app_FaultMgr_terminate();
  app_Main1msMgr_terminate();
  /*10ms Runnables DeInit*/
  app_Main10msMgr_terminate();
  /*50ms Runnables DeInit*/
  app_Main50msMgr_terminate();
  /*100ms Runnables DeInit*/
  app_Main100msMgr_terminate();
}




/*------------------------------------*/
/*       RTE Access Functions         */
/*------------------------------------*/

STATUS_t RTE_eReadData(uint16_t u16Id, float* pfltData)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u16Id < RTE_DATA_NUM)
  {
     eStatus = STATUS_OK;
     *pfltData = RTE_astrData[u16Id].fltData;
  }
  return eStatus;
}

STATUS_t RTE_eWriteData(uint16_t u16Id, float fltData)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u16Id < RTE_DATA_NUM)
  {
     eStatus = STATUS_OK;
     RTE_astrData[u16Id].fltData = fltData;
  }
  return eStatus;  
}


