/******************************************************************************
 *  File Name:
 *    irq.h
 *
 *  Description:
 *    Pico SDK IRQ Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_IRQ_H
#define PICO_MOCK_IRQ_H

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

  typedef void (*irq_handler_t)(void);

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void irq_set_priority(uint num, uint8_t hardware_priority);
  uint irq_get_priority(uint num);
  void irq_set_enabled(uint num, bool enabled);
  bool irq_is_enabled(uint num);
  void irq_set_mask_enabled(uint32_t mask, bool enabled);
  bool irq_has_shared_handler(uint num);
  void irq_set_pending(uint num);
  void irq_init_priorities(void);
  void user_irq_claim(uint irq_num);
  void user_irq_unclaim(uint irq_num);
  int user_irq_claim_unused(bool required);
  bool user_irq_is_claimed(uint irq_num);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_IRQ_H */
