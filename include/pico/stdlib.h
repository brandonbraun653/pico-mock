/******************************************************************************
 *  File Name:
 *    stdlib.h
 *
 *  Description:
 *    Pico SDK STDIO Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_STDIO_H
#define PICO_MOCK_STDIO_H

#ifdef __cplusplus
extern "C"
{
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

void setup_default_uart(void);
void set_sys_clock_48mhz(void);
void set_sys_clock_pll(uint32_t vco_freq, uint post_div1, uint post_div2);
bool check_sys_clock_khz(uint32_t freq_khz, uint *vco_freq_out,
                         uint *post_div1_out, uint *post_div2_out);
bool set_sys_clock_khz(uint32_t freq_khz, bool required);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_STDIO_H */
