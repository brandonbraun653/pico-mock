/******************************************************************************
 *  File Name:
 *    resets.h
 *
 *  Description:
 *    Pico SDK RESETS Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_RESETS_H
#define PICO_MOCK_RESETS_H

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

  void reset_block(uint32_t bits);
  void unreset_block(uint32_t bits);
  void unreset_block_wait(uint32_t bits);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_RESETS_H */
