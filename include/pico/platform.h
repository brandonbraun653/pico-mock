/******************************************************************************
 *  File Name:
 *    platform.h
 *
 *  Description:
 *    Pico SDK PLATFORM Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_PLATFORM_H
#define PICO_MOCK_PLATFORM_H

#ifdef __cplusplus
extern "C" {
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include "pico.h"
#include <stdint.h>

/*---------------------------------------------------------------------------
Public Functions
---------------------------------------------------------------------------*/

void panic_unsupported(void);
void panic(const char *fmt, ...);
bool running_on_fpga(void);
uint8_t rp2040_chip_version(void);
void busy_wait_at_least_cycles(uint32_t minimum_cycles);
uint get_core_num(void);
bool running_on_fpga(void);
uint8_t rp2040_rom_version(void);
void tight_loop_contents(void);

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_PLATFORM_H */
