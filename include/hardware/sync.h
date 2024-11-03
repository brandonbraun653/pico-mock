/******************************************************************************
 *  File Name:
 *    sync.h
 *
 *  Description:
 *    Pico SDK Hardware Sync Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_HARDWARE_SYNC_H
#define PICO_MOCK_HARDWARE_SYNC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*---------------------------------------------------------------------------
Includes
---------------------------------------------------------------------------*/
#include <stdint.h>
#include "pico.h"

  uint32_t save_and_disable_interrupts( void );
  void     restore_interrupts( uint32_t status );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_HARDWARE_SYNC_H */
