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
Author: deVCU-deMCD Generated 
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
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_5,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_6,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_6,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_BMS_FAULT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_BMS_FAULT,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_8,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_8,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_9,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_9,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_NONAME_10,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_CLR_DTC_NONAME_10,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_SYSTEMERRORSEVERITY,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_100MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P66_DC_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P66_FREQ_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P56_DC_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P56_FREQ_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P32_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P13_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P28_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P27_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P29_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P08_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P54_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P12_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P36_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P25_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P53_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P11_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P61_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P52_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P07_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P38_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P55_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P30_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_P35_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_10MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL2_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL1_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1WAR_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST5WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST4WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST3WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST2WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL2,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1FL1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_TEST1WAR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_FLT_SYSTEM_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_DTC_BMS_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS_MANUAL,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS_MONITOR,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_TEST_1MS,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_1MS_IN1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_OUT1,
		/* Data */
		deMCD_DEFAULT,
		/* Access Mutex */
		RTE_MUTEX_FREE,
		/* Log Flag */
		RTE_LOG_NO
	},
	{
		/* Data ID */
		RTE_DATA_ID_APP_50MS_IN1,
		/* Data */
		deMCD_DEFAULT,
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

float RTE_Read_P66_DC_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P66_DC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P66_DC_MONITOR].fltData;
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

void RTE_Write_P66_DC_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P66_DC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P66_DC_MONITOR].fltData = fltValue;
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

float RTE_Read_P66_Freq_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P66_FREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P66_FREQ_MONITOR].fltData;
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

void RTE_Write_P66_Freq_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P66_FREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P66_FREQ_MONITOR].fltData = fltValue;
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

float RTE_Read_P56_DC_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P56_DC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P56_DC_MONITOR].fltData;
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

void RTE_Write_P56_DC_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P56_DC_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P56_DC_MONITOR].fltData = fltValue;
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

float RTE_Read_P56_Freq_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P56_FREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P56_FREQ_MONITOR].fltData;
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

void RTE_Write_P56_Freq_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P56_FREQ_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P56_FREQ_MONITOR].fltData = fltValue;
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

float RTE_Read_P32_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P32_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P32_MONITOR].fltData;
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

void RTE_Write_P32_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P32_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P32_MONITOR].fltData = fltValue;
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

float RTE_Read_P13_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P13_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P13_MONITOR].fltData;
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

void RTE_Write_P13_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P13_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P13_MONITOR].fltData = fltValue;
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

float RTE_Read_P28_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P28_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P28_MONITOR].fltData;
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

void RTE_Write_P28_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P28_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P28_MONITOR].fltData = fltValue;
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

float RTE_Read_P27_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P27_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P27_MONITOR].fltData;
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

void RTE_Write_P27_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P27_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P27_MONITOR].fltData = fltValue;
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

float RTE_Read_P29_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P29_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P29_MONITOR].fltData;
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

void RTE_Write_P29_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P29_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P29_MONITOR].fltData = fltValue;
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

float RTE_Read_P08_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P08_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P08_MONITOR].fltData;
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

void RTE_Write_P08_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P08_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P08_MONITOR].fltData = fltValue;
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

float RTE_Read_P54_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P54_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P54_MONITOR].fltData;
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

void RTE_Write_P54_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P54_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P54_MONITOR].fltData = fltValue;
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

float RTE_Read_P12_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P12_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P12_MONITOR].fltData;
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

void RTE_Write_P12_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P12_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P12_MONITOR].fltData = fltValue;
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

float RTE_Read_P36_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P36_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P36_MONITOR].fltData;
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

void RTE_Write_P36_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P36_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P36_MONITOR].fltData = fltValue;
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

float RTE_Read_P25_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P25_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P25_MONITOR].fltData;
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

void RTE_Write_P25_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P25_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P25_MONITOR].fltData = fltValue;
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

float RTE_Read_P53_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P53_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P53_MONITOR].fltData;
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

void RTE_Write_P53_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P53_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P53_MONITOR].fltData = fltValue;
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

float RTE_Read_P11_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P11_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P11_MONITOR].fltData;
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

void RTE_Write_P11_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P11_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P11_MONITOR].fltData = fltValue;
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

float RTE_Read_P61_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P61_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P61_MONITOR].fltData;
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

void RTE_Write_P61_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P61_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P61_MONITOR].fltData = fltValue;
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

float RTE_Read_P52_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P52_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P52_MONITOR].fltData;
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

void RTE_Write_P52_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P52_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P52_MONITOR].fltData = fltValue;
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

float RTE_Read_P07_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P07_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P07_MONITOR].fltData;
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

void RTE_Write_P07_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P07_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P07_MONITOR].fltData = fltValue;
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

float RTE_Read_P38_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P38_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P38_MONITOR].fltData;
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

void RTE_Write_P38_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P38_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P38_MONITOR].fltData = fltValue;
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

float RTE_Read_P55_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P55_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P55_MONITOR].fltData;
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

void RTE_Write_P55_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P55_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P55_MONITOR].fltData = fltValue;
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

float RTE_Read_P30_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P30_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P30_MONITOR].fltData;
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

void RTE_Write_P30_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P30_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P30_MONITOR].fltData = fltValue;
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

float RTE_Read_P35_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_P35_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_P35_MONITOR].fltData;
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

void RTE_Write_P35_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_P35_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_P35_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test5FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].fltData;
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

void RTE_Write_DTC_Test5FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test5FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].fltData;
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

void RTE_Write_DTC_Test5FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test5War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].fltData;
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

void RTE_Write_DTC_Test5War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test4FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].fltData;
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

void RTE_Write_DTC_Test4FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test4FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].fltData;
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

void RTE_Write_DTC_Test4FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test4War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].fltData;
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

void RTE_Write_DTC_Test4War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test3FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].fltData;
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

void RTE_Write_DTC_Test3FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test3FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].fltData;
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

void RTE_Write_DTC_Test3FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test3War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].fltData;
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

void RTE_Write_DTC_Test3War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test2FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].fltData;
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

void RTE_Write_DTC_Test2FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test2FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].fltData;
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

void RTE_Write_DTC_Test2FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test2War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].fltData;
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

void RTE_Write_DTC_Test2War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test1FL2_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].fltData;
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

void RTE_Write_DTC_Test1FL2_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test1FL1_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].fltData;
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

void RTE_Write_DTC_Test1FL1_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test1War_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].fltData;
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

void RTE_Write_DTC_Test1War_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_Test5FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].fltData;
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

void RTE_Write_DTC_Test5FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL2].fltData = fltValue;
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

float RTE_Read_DTC_Test5FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].fltData;
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

void RTE_Write_DTC_Test5FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5FL1].fltData = fltValue;
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

float RTE_Read_DTC_Test5War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].fltData;
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

void RTE_Write_DTC_Test5War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST5WAR].fltData = fltValue;
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

float RTE_Read_DTC_Test4FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].fltData;
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

void RTE_Write_DTC_Test4FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL2].fltData = fltValue;
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

float RTE_Read_DTC_Test4FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].fltData;
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

void RTE_Write_DTC_Test4FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4FL1].fltData = fltValue;
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

float RTE_Read_DTC_Test4War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].fltData;
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

void RTE_Write_DTC_Test4War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST4WAR].fltData = fltValue;
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

float RTE_Read_DTC_Test3FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].fltData;
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

void RTE_Write_DTC_Test3FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL2].fltData = fltValue;
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

float RTE_Read_DTC_Test3FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].fltData;
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

void RTE_Write_DTC_Test3FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3FL1].fltData = fltValue;
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

float RTE_Read_DTC_Test3War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].fltData;
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

void RTE_Write_DTC_Test3War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST3WAR].fltData = fltValue;
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

float RTE_Read_DTC_Test2FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].fltData;
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

void RTE_Write_DTC_Test2FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL2].fltData = fltValue;
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

float RTE_Read_DTC_Test2FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].fltData;
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

void RTE_Write_DTC_Test2FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2FL1].fltData = fltValue;
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

float RTE_Read_DTC_Test2War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].fltData;
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

void RTE_Write_DTC_Test2War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST2WAR].fltData = fltValue;
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

float RTE_Read_DTC_Test1FL2(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].fltData;
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

void RTE_Write_DTC_Test1FL2(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL2].fltData = fltValue;
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

float RTE_Read_DTC_Test1FL1(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].fltData;
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

void RTE_Write_DTC_Test1FL1(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1FL1].fltData = fltValue;
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

float RTE_Read_DTC_Test1War(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].fltData;
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

void RTE_Write_DTC_Test1War(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_TEST1WAR].fltData = fltValue;
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

float RTE_Read_FLT_System_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].fltData;
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

void RTE_Write_FLT_System_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_FLT_SYSTEM_MONITOR].fltData = fltValue;
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

float RTE_Read_DTC_BMS_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].fltData;
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

void RTE_Write_DTC_BMS_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_DTC_BMS_MONITOR].fltData = fltValue;
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

float RTE_Read_Test_1ms_Manual(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].fltData;
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

void RTE_Write_Test_1ms_Manual(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS_MANUAL].fltData = fltValue;
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

float RTE_Read_Test_1ms_Monitor(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].fltData;
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

void RTE_Write_Test_1ms_Monitor(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS_MONITOR].fltData = fltValue;
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

float RTE_Read_Test_1ms(void)
{
	STATUS_t eStatus;
	float fltReturnValue = 0;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		fltReturnValue = RTE_astrData[RTE_DATA_ID_TEST_1MS].fltData;
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

void RTE_Write_Test_1ms(float fltValue)
{
	STATUS_t eStatus;
	
	if(RTE_astrData[RTE_DATA_ID_TEST_1MS].u32AccessMutex == RTE_MUTEX_FREE)
	{
		RTE_astrData[RTE_DATA_ID_TEST_1MS].fltData = fltValue;
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


