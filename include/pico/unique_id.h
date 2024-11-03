/******************************************************************************
 *  File Name:
 *    unique_id.h
 *
 *  Description:
 *    Pico SDK UNIQUE_ID Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_UNIQUE_ID_H
#define PICO_MOCK_UNIQUE_ID_H

#ifdef __cplusplus
extern "C"
{
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

#define PICO_UNIQUE_BOARD_ID_SIZE_BYTES 8

  typedef struct
  {
    uint8_t id[ PICO_UNIQUE_BOARD_ID_SIZE_BYTES ];
  } pico_unique_board_id_t;

  void pico_get_unique_board_id( pico_unique_board_id_t *id_out );
  void pico_get_unique_board_id_string( char *id_out, uint len );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_UNIQUE_ID_H */
