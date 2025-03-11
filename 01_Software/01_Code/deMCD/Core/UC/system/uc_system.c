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

File Name: uc_system.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_system_cfg.h"
#include "uc_system.h"
#include "uc_header.h"

#ifdef UC_SYSTEM_MODULE_ENABLE

uint32_t UC_SYSTEM_STOP_u32Signal = 0;
uint32_t UC_SYSTEM_STOP_u32Address = 0x000000;
p_intr_hadler_t * const IntTable =  (p_intr_hadler_t *)&VIM_RAM_BASE;

__arm extern int __low_level_init(void);

#if 0
p_intr_hadler_t IntTable[95] =
{
  NULL, // 0
  NULL, // 1
  NULL, // 2
  VIM_RTIC0_Handler, // 3
  NULL, // 4
  NULL, // 5
  NULL, // 6
  NULL, // 7
  NULL, // 8
  NULL, // 9
  NULL, // 10
  NULL, // 11
  NULL, // 12
  NULL, // 13
  NULL, // 14
  NULL, // 15
  NULL, // 16
  NULL, // 17
  NULL, // 18
  NULL, // 19
  NULL, // 20
  NULL, // 21
  NULL, // 22
  NULL, // 23
  NULL, // 24
  NULL, // 25
  NULL, // 26
  NULL, // 27
  NULL, // 28
  NULL, // 29
  NULL, // 30
  NULL, // 31
  NULL, // 32
  NULL, // 33
  NULL, // 34
  NULL, // 35
  NULL, // 36
  NULL, // 37
  NULL, // 38
  NULL, // 39
  NULL, // 40
  NULL, // 41
  NULL, // 42
  NULL, // 43
  NULL, // 44
  NULL, // 45
  NULL, // 46
  NULL, // 47
  NULL, // 48
  NULL, // 49
  NULL, // 50
  NULL, // 51
  NULL, // 52
  NULL, // 53
  NULL, // 54
  NULL, // 55
  NULL, // 56
  NULL, // 57
  NULL, // 58
  NULL, // 59
  NULL, // 60
  NULL, // 61
  NULL, // 62
  NULL, // 63
  NULL, // 64
  NULL, // 65
  NULL, // 66
  NULL, // 67
  NULL, // 68
  NULL, // 69
  NULL, // 70
  NULL, // 71
  NULL, // 72
  NULL, // 73
  NULL, // 74
  NULL, // 75
  NULL, // 76
  NULL, // 77
  NULL, // 78
  NULL, // 79
  NULL, // 80
  NULL, // 81
  NULL, // 82
  NULL, // 83
  NULL, // 84
  NULL, // 85
  NULL, // 86
  NULL, // 87
  NULL, // 88
  NULL, // 89
  NULL, // 80
  NULL, // 91
  NULL, // 92
  NULL, // 93
  NULL, // 94
};
#endif

void UC_SYS_vdRegisterISR(uint8_t u8IdVim, p_intr_hadler_t p2fISR)
{
  if(p2fISR != NULL)
  {
    IntTable[u8IdVim+1] = p2fISR;
  }
}

void UC_SYS_vdEnableISR(uint8_t u8IdVim)
{
  if((u8IdVim>=2) && (u8IdVim<=31))
  {
    REQENASET0 = 1<<u8IdVim;
  }
  else if((u8IdVim>=32) && (u8IdVim<=63))
  {
    REQENASET1 = 1<<(u8IdVim-32);
  }
  else if((u8IdVim>=64) && (u8IdVim<=95))
  {
    REQENASET2 = 1<<(u8IdVim-64);
  }
  else
  {
    /*Error; exception should be handled*/
  }
}

void UC_SYS_vdDisableISR(uint8_t u8IdVim)
{
  if((u8IdVim>=2) && (u8IdVim<=31))
  {
    REQENACLR0 = 1<<u8IdVim;
  }
  else if((u8IdVim>=32) && (u8IdVim<=63))
  {
    REQENACLR1 = 1<<(u8IdVim-32);
  }
  else if((u8IdVim>=64) && (u8IdVim<=95))
  {
    REQENACLR2 =  1<<(u8IdVim-64);
  }
  else
  {
    /*Error; exception should be handled*/
  }
}

void UC_SYS_vdEnableInterrupts(void)
{
  __enable_interrupt();
}

void UC_SYS_vdDisableInterrupts(void)
{
  __disable_interrupt();
}


void UC_SYS_vdInit(void)
{
   MINITGCR_bit.MINITGENA = 0x0A;
  /* Initialize the RAM and PLL*/
  __low_level_init();
  /* Initialize the  VIM */
  /* Disable all interrupts */
  REQENACLR0  = 0xFFFFFFFC;
  REQENACLR1  = 0xFFFFFFFF;
  /* Disable wakeups */
  WAKEENACLR0 = 0xFFFFFFFF;
  WAKEENACLR1 = 0xFFFFFFFF;
  /* Assign all interrupts to IRQ handler */
  FIRQPR0     = 0;
  FIRQPR1     = 0;
  /*Unlocking IOMMUX register*/
  IOMM_KICK_REG0 = 0x83E70B13;
  IOMM_KICK_REG1 = 0x95A4F1E0;
 
}

uint8_t UC_SYS_u8IsExReset(void)
{
  return SYSESR_bit.EXTRST;
}

void UC_SYS_vdClearExReset(void)
{
  SYSESR_bit.EXTRST = 1;
}

uint8_t UC_SYS_u8IsPowReset(void)
{
  return SYSESR_bit.PORST;
}

void UC_SYS_vdClearPowReset(void)
{
  SYSESR_bit.PORST  = 1;
}

uint8_t UC_SYS_u8IsSwReset(void)
{
  return SYSESR_bit.SWRST;
}

void UC_SYS_vdClearSwReset(void)
{
  SYSESR_bit.SWRST  = 1;
}

void UC_SYS_vdSwReset(void)
{
  SYSECR_bit.RESET = 0x02;
}

void UC_SYS_vdSleep(void)
{
  /* Sleep Mode to be implemented*/
  
  while(1)
  {
    /*Sleep Mode is implemented on hardware level*/
    /*Sleep Mode is not implemented yet, the ECU wait here, doing nothing*/
  }
}

__ramfunc void UC_SYS_vdJumpToAddress(uint32_t u32Address)
{
  asm("mov r0,%0 \n\t" :: "r" (u32Address) );
  asm("bx r0");
}

void Abort_Handler(void)
{
 UC_SYS_vdJumpToAddress(UC_SYSTEM_STOP_u32Address);
}

void FIQ_Handler(void)
{
  UC_SYSTEM_STOP_u32Signal = 1;
  Abort_Handler();
}

void IRQ_Handler(void)
{
  UC_SYSTEM_STOP_u32Signal = 2;
  Abort_Handler();
}

void Prefetch_Handler(void)
{
  UC_SYSTEM_STOP_u32Signal = 3;
  Abort_Handler();
}

void SWI_Handler(void)
{
  UC_SYSTEM_STOP_u32Signal = 4;
  Abort_Handler();
}

void Undefined_Handler(void)
{
  UC_SYSTEM_STOP_u32Signal = 5;
  Abort_Handler();
}

#endif /*UC_SYSTEM_MODULE_ENABLE*/
