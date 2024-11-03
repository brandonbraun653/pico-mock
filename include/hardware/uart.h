/******************************************************************************
 *  File Name:
 *    uart.h
 *
 *  Description:
 *    PICO SDK UART Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_UART_H
#define PICO_MOCK_UART_H

#ifdef __cplusplus
extern "C"
{
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

  /*---------------------------------------------------------------------------
  Types
  ---------------------------------------------------------------------------*/

  typedef struct uart_inst uart_inst_t;

  typedef struct
  {
    uint32_t dr;
    uint32_t rsr;
    uint32_t _pad0[ 4 ];
    uint32_t fr;
    uint32_t _pad1;
    uint32_t ilpr;
    uint32_t ibrd;
    uint32_t fbrd;
    uint32_t lcr_h;
    uint32_t cr;
    uint32_t ifls;
    uint32_t imsc;
    uint32_t ris;
    uint32_t mis;
    uint32_t icr;
    uint32_t dmacr;
  } uart_hw_t;

  typedef enum
  {
    UART_PARITY_NONE,
    UART_PARITY_EVEN,
    UART_PARITY_ODD
  } uart_parity_t;

  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
  static uart_hw_t _uart_0_inst;
  static uart_hw_t _uart_1_inst;
#pragma GCC diagnostic pop

  /*---------------------------------------------------------------------------
  Aliases
  ---------------------------------------------------------------------------*/

#define uart0_hw ( &_uart_0_inst )
#define uart1_hw ( &_uart_1_inst )

#define uart0 ( ( uart_inst_t * )&_uart_0_inst )
#define uart1 ( ( uart_inst_t * )&_uart_1_inst )

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  uint   uart_init( uart_inst_t *uart, uint baudrate );
  void   uart_deinit( uart_inst_t *uart );
  uint   uart_set_baudrate( uart_inst_t *uart, uint baudrate );
  void   uart_set_hw_flow( uart_inst_t *uart, bool cts, bool rts );
  void   uart_set_format( uart_inst_t *uart, uint data_bits, uint stop_bits, uart_parity_t parity );
  void   uart_set_irq_enables( uart_inst_t *uart, bool rx_has_data, bool tx_needs_data );
  size_t uart_is_writable( uart_inst_t *uart );
  size_t uart_is_readable( uart_inst_t *uart );
  void   uart_write_blocking( uart_inst_t *uart, const uint8_t *src, size_t len );
  void   uart_read_blocking( uart_inst_t *uart, uint8_t *dst, size_t len );
  void   uart_putc( uart_inst_t *uart, char c );
  void   uart_puts( uart_inst_t *uart, const char *s );
  char   uart_getc( uart_inst_t *uart );
  void   uart_set_break( uart_inst_t *uart, bool en );
  void   uart_default_tx_wait_blocking();

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_UART_H */
