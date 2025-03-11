
#include "uc_header.h"
#include "uc.h"

#define TIMER0_TICK_PER_SEC   10

/** @enum flashWPowerModes
*   @brief Alias names for flash bank power modes
*
*   This enumeration is used to provide alias names for the flash bank power modes:
*     - sleep
*     - standby
*     - active
*/

enum flashWPowerModes
{
    SYS_SLEEP   = 0U, /**< Alias for flash bank power mode sleep   */
    SYS_STANDBY = 1U, /**< Alias for flash bank power mode standby */
    SYS_ACTIVE  = 3U  /**< Alias for flash bank power mode active  */
};

/** @enum systemClockSource
*   @brief Alias names for clock sources
*
*   This enumeration is used to provide alias names for the clock sources:
*     - Oscillator
*     - Pll
*     - 32 kHz Oscillator
*     - External
*     - Low Power Oscillator Low
*     - Low Power Oscillator High
*     - Flexray Pll
*     - Synchronous VCLK1
*/

enum systemClockSource
{
    SYS_OSC      = 0, /**< Alias for oscillator clock Source                */
    SYS_PLL      = 1, /**< Alias for Pll clock Source                       */
    SYS_O32      = 2, /**< Alias for 32 kHz oscillator clock Source         */
    SYS_EXTERNAL = 3, /**< Alias for external clock Source                  */
    SYS_LPO_LOW  = 4, /**< Alias for low power oscillator low clock Source  */
    SYS_LPO_HIGH = 5, /**< Alias for low power oscillator high clock Source */
    SYS_FR_PLL   = 6, /**< Alias for flexray pll clock Source               */
    SYS_VCLK     = 9  /**< Alias for synchronous VCLK1 clock Source         */
};

/*************************************************************************
 * Function Name: main
 * Parameters: none
 *
 * Return: none
 *
 * Description: main
 *
 *************************************************************************/
__arm int __low_level_init(void)
{
  /** - Setup flash read mode, address wait states and data wait states */
  FRDCNTL_bit.ASWSTEN = 1;  /* 1 wait state */
  FRDCNTL_bit.ENPIPE  = 1;  /* enable pipe line */
  FRDCNTL_bit.RWAIT   = 3;  /* 3 wait state - data flash*/

  /** - Setup flash bank power modes - all back are active */
  FBFALLBACK = 0xFF;
             ;
  /* init LPO - set dafult state */
  LPOMONCTL = (1U  << 24U)
            | (16U << 8U )
            |  16U
            ;
  /** Initialize @b Pll: */
  /* Before initializing the PLL make sure that we are not running on the PLL clock */
  {
    volatile unsigned long Status;

    do
    {
      /* Enable all clock sources, except the ones which are not implemented */
      CSDIS  = 0x0000008C;
      Status = CSVSTAT;
    } while ((Status & 1) == 0);  /* Check if main oscillator clock is stable */
    /* Use clock source 0 (main Oscillator) as clock source for GCLK, HCLK, VCLK, VCLK2 */
    GHVSRC = 0;
  }

  /* Disable slip*/
  CLKSLIP = 5;
//  /* OSC - 16MHz, mul 90, post div - 2, pre_div - 4 = 180MHz (HCLK) */
//  /** - Setup pll control register 1:
//  *     - Setup reset on oscillator slip
//  *     - Setup bypass on pll slip
//  *     - Setup Pll output clock divider
//  *     - Setup reset on oscillator fail
//  *     - Setup reference clock divider
//  *     - Setup Pll multiplier
//  */
//  PLLCTL1 =  0x20000000U
//          | (1U << 24U)
//          | (4U << 16U)
//          | (89U  << 8U)
//          ;
//
//  /** - Setup pll control register 1
//  *     - Enable/Disable frequency modulation
//  *     - Setup spreading rate
//  *     - Setup bandwidth adjustment
//  *     - Setup internal Pll output divider
//  *     - Setup spreading amount
//  */
//  PLLCTL2 = 0;

    PLLCTL1 =  0x00000000U
            |  0x20000000U
            |  ((2U - 1U) << 24U)
            |  0x00000000U
            |  ((4U - 1U)<< 16U)
            |  ((UC_SYSTEM_FREQUENCY_MHZ - 1U)<< 8U);
    PLLCTL2 =  ((20U-1U) << 22U)
            |  (184U << 12U)
            |  ((2U - 1U) << 9U)
            |  184U;

  /** @b Initialize @b Clock @b Tree: */
  /** - Start clock source lock */
  CSDIS = 0x00000000U
        | 0x00000000U
        | 0x00000000U
        | 0x00000008U
        | 0x00000004U
        | 0x00000000U
        | 0x00000000U
        ;

  /** - Wait for until clocks are locked */
  while ((CSVSTAT & ((CSDIS ^ 0xFF) & 0xFF)) != ((CSDIS ^ 0xFF) & 0xFF));

  /** - Setup GCLK, HCLK and VCLK clock source for normal operation, power down mode and after wakeup */
  GHVSRC = (SYS_PLL << 24U)
         | (SYS_PLL << 16U)
         |  SYS_PLL
         ;

  /** - Power-up all peripharals */
  PSPWRDWNCLR0 = 0xFFFFFFFFU;
  PSPWRDWNCLR1 = 0xFFFFFFFFU;
  PSPWRDWNCLR2 = 0xFFFFFFFFU;
  PSPWRDWNCLR3 = 0xFFFFFFFFU;

  /* VCLK = HCLK/2 = 90MHz */
  /** - Setup synchronous peripheral clock dividers for VCLK1 and VCLK2 */
  //CLKCNTL_bit.VCLKR  = 15U;
  CLKCNTL_bit.VCLK2R = 1U;
  CLKCNTL_bit.VCLKR  = 1U;

  /* RTICLK1 = VCLK/2 = 45MHz */
  /** - Setup RTICLK1 clocks */
  RCLKSRC = (1U << 8U)
          |  SYS_VCLK
          ;

  /* AVCLK1 = AVCLK2  = VCLK = 90MHz */
  /** - Setup asynchronous peripheral clock sources for AVCLK1 and AVCLK2 */
  VCLKASRC = (SYS_VCLK << 8U)
           |  SYS_VCLK;

  /** - Enable Peripherals */
  CLKCNTL_bit.PENA = 1U;


  /** @note: HCLK >= VCLK2 >= VCLK_sys */
  return(1);
}
