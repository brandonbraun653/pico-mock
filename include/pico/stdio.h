/******************************************************************************
 *  File Name:
 *    stdio.h
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

typedef struct stdio_driver stdio_driver_t;

#define STDIO_ERROR -1
#define STDIO_NO_INPUT -2

  void stdio_usb_init();
  void stdio_uart_init();
  void stdio_init_all();
  void stdio_filter_driver(stdio_driver_t *driver);
  void stdio_set_translate_crlf(stdio_driver_t *driver, bool enabled);
  bool stdio_usb_connected(void);
  int getchar_timeout_us(uint32_t timeout_us);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_STDIO_H */
