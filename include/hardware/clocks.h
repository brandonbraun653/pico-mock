/******************************************************************************
 *  File Name:
 *    clocks.h
 *
 *  Description:
 *    Mocking interface for the Pico SDK clocks driver
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_HARDWARE_CLOCKS_HPP
#define PICO_MOCK_HARDWARE_CLOCKS_HPP

#ifdef __cplusplus
extern "C"
{
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

/*-----------------------------------------------------------------------------
Aliases
-----------------------------------------------------------------------------*/

typedef void (*resus_callback_t)(void);

/*-----------------------------------------------------------------------------
Enumerations
-----------------------------------------------------------------------------*/

enum clock_index {
    clk_gpout0 = 0,     ///< GPIO Muxing 0
    clk_gpout1,         ///< GPIO Muxing 1
    clk_gpout2,         ///< GPIO Muxing 2
    clk_gpout3,         ///< GPIO Muxing 3
    clk_ref,            ///< Watchdog and timers reference clock
    clk_sys,            ///< Processors, bus fabric, memory, memory mapped registers
    clk_peri,           ///< Peripheral clock for UART and SPI
    clk_usb,            ///< USB clock
    clk_adc,            ///< ADC clock
    clk_rtc,            ///< Real time clock
    CLK_COUNT
};

/*-----------------------------------------------------------------------------
Mocked Functions
-----------------------------------------------------------------------------*/
void clocks_init(void);
bool clock_configure(enum clock_index clk_index, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t freq);
void clock_stop(enum clock_index clk_index);
uint32_t clock_get_hz(enum clock_index clk_index);
uint32_t frequency_count_khz(uint src);
void clock_set_reported_hz(enum clock_index clk_index, uint hz);
void clock_gpio_init_int_frac(uint gpio, uint src, uint32_t div_int, uint8_t div_frac);
bool clock_configure_gpin(enum clock_index clk_index, uint gpio, uint32_t src_freq, uint32_t freq);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_HARDWARE_CLOCKS_HPP */
