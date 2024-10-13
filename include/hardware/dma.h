/******************************************************************************
 *  File Name:
 *    dma.h
 *
 *  Description:
 *    Pico SDK DMA Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_DMA_H
#define PICO_MOCK_DMA_H

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
  void dma_channel_claim(uint channel);
  void dma_claim_mask(uint32_t channel_mask);
  void dma_channel_unclaim(uint channel);
  void dma_unclaim_mask(uint32_t channel_mask);
  int dma_claim_unused_channel(bool required);
  bool dma_channel_is_claimed(uint channel);
  void dma_timer_claim(uint timer);
  void dma_timer_unclaim(uint timer);
  int dma_claim_unused_timer(bool required);
  bool dma_timer_is_claimed(uint timer);
  void dma_channel_cleanup(uint channel);

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_DMA_H */
