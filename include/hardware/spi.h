/******************************************************************************
 *  File Name:
 *    spi.h
 *
 *  Description:
 *    Pico SDK SPI Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_SPI_H
#define PICO_MOCK_SPI_H

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
  Types
  ---------------------------------------------------------------------------*/

  typedef struct spi_inst spi_inst_t;

  typedef struct
  {
    uint32_t cr0;
    uint32_t cr1;
    uint32_t dr;
    uint32_t sr;
    uint32_t cpsr;
    uint32_t imsc;
    uint32_t ris;
    uint32_t mis;
    uint32_t icr;
    uint32_t dmacr;
  } spi_hw_t;

  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
  static spi_hw_t _spi_0_inst;
  static spi_hw_t _spi_1_inst;
#pragma GCC diagnostic pop

  /*---------------------------------------------------------------------------
  Aliases
  ---------------------------------------------------------------------------*/

#define spi0_hw ( &_spi_0_inst )
#define spi1_hw ( &_spi_1_inst )

#define spi0 ( ( spi_inst_t * )&_spi_0_inst )
#define spi1 ( ( spi_inst_t * )&_spi_1_inst )

  /*---------------------------------------------------------------------------
  Mocked Functions
  ---------------------------------------------------------------------------*/

  uint spi_init( spi_inst_t *spi, uint baudrate );
  void spi_deinit( spi_inst_t *spi );
  uint spi_set_baudrate( spi_inst_t *spi, uint baudrate );
  uint spi_get_baudrate( const spi_inst_t *spi );
  int  spi_write_read_blocking( spi_inst_t *spi, const uint8_t *src, uint8_t *dst, size_t len );
  int  spi_write_blocking( spi_inst_t *spi, const uint8_t *src, size_t len );
  int  spi_read_blocking( spi_inst_t *spi, uint8_t repeated_tx_data, uint8_t *dst, size_t len );
  int  spi_write16_read16_blocking( spi_inst_t *spi, const uint16_t *src, uint16_t *dst, size_t len );
  int  spi_write16_blocking( spi_inst_t *spi, const uint16_t *src, size_t len );
  int  spi_read16_blocking( spi_inst_t *spi, uint16_t repeated_tx_data, uint16_t *dst, size_t len );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_SPI_H */
