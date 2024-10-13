/******************************************************************************
 *  File Name:
 *    pwm.h
 *
 *  Description:
 *    Pico SDK PWM Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_PWM_H
#define PICO_MOCK_PWM_H

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

  void pwm_set_irq_enabled(uint slice_num, bool enabled);
  void pwm_set_irq_mask_enabled(uint32_t slice_mask, bool enabled);
  void pwm_clear_irq(uint slice_num);
  uint32_t pwm_get_irq_status_mask(void);
  void pwm_force_irq(uint slice_num);
  uint pwm_get_dreq(uint slice_num);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_PWM_H */
