/******************************************************************************
 *  File Name:
 *    bootrom.h
 *
 *  Description:
 *    Pico SDK BOOTROM Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_BOOTROM_H
#define PICO_MOCK_BOOTROM_H

#ifdef __cplusplus
extern "C"
{
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/

  bool rom_funcs_lookup(uint32_t *table, unsigned int count);
  void *rom_hword_as_ptr(uint16_t rom_address);
  void *rom_func_lookup_inline(uint32_t code);
  void reset_usb_boot(uint32_t usb_activity_gpio_pin_mask, uint32_t disable_interface_mask);

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_BOOTROM_H */
