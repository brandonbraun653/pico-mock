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
#include "pico.h"
#include <stdint.h>

  /*-----------------------------------------------------------------------------
  Enumerations
  -----------------------------------------------------------------------------*/

  enum pwm_clkdiv_mode
  {
    PWM_DIV_FREE_RUNNING = 0,    ///< Free-running counting at rate dictated by fractional divider
    PWM_DIV_B_HIGH       = 1,    ///< Fractional divider is gated by the PWM B pin
    PWM_DIV_B_RISING     = 2,    ///< Fractional divider advances with each rising edge of the PWM B pin
    PWM_DIV_B_FALLING    = 3     ///< Fractional divider advances with each falling edge of the PWM B pin
  };

  enum pwm_chan
  {
    PWM_CHAN_A = 0,
    PWM_CHAN_B = 1
  };

  /*-----------------------------------------------------------------------------
  Structures
  -----------------------------------------------------------------------------*/
  typedef struct
  {
    uint32_t csr;
    uint32_t div;
    uint32_t top;
  } pwm_config;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/

  pwm_config pwm_get_default_config( void );
  uint       pwm_get_dreq( uint slice_num );
  uint       pwm_gpio_to_channel( uint gpio );
  uint       pwm_gpio_to_slice_num( uint gpio );
  uint16_t   pwm_get_counter( uint slice_num );
  uint32_t   pwm_get_irq_status_mask( void );
  void       check_slice_num_param( uint slice_num );
  void       pwm_advance_count( uint slice_num );
  void       pwm_clear_irq( uint slice_num );
  void       pwm_config_set_clkdiv( pwm_config *c, float div );
  void       pwm_config_set_clkdiv_int( pwm_config *c, uint div );
  void       pwm_config_set_clkdiv_int_frac( pwm_config *c, uint8_t integer, uint8_t fract );
  void       pwm_config_set_clkdiv_mode( pwm_config *c, enum pwm_clkdiv_mode mode );
  void       pwm_config_set_output_polarity( pwm_config *c, bool a, bool b );
  void       pwm_config_set_phase_correct( pwm_config *c, bool phase_correct );
  void       pwm_config_set_wrap( pwm_config *c, uint16_t wrap );
  void       pwm_force_irq( uint slice_num );
  void       pwm_init( uint slice_num, pwm_config *c, bool start );
  void       pwm_retard_count( uint slice_num );
  void       pwm_set_both_levels( uint slice_num, uint16_t level_a, uint16_t level_b );
  void       pwm_set_chan_level( uint slice_num, uint chan, uint16_t level );
  void       pwm_set_clkdiv( uint slice_num, float divider );
  void       pwm_set_clkdiv_int_frac( uint slice_num, uint8_t integer, uint8_t fract );
  void       pwm_set_clkdiv_mode( uint slice_num, enum pwm_clkdiv_mode mode );
  void       pwm_set_counter( uint slice_num, uint16_t c );
  void       pwm_set_enabled( uint slice_num, bool enabled );
  void       pwm_set_gpio_level( uint gpio, uint16_t level );
  void       pwm_set_irq_enabled( uint slice_num, bool enabled );
  void       pwm_set_irq_mask_enabled( uint32_t slice_mask, bool enabled );
  void       pwm_set_mask_enabled( uint32_t mask );
  void       pwm_set_output_polarity( uint slice_num, bool a, bool b );
  void       pwm_set_phase_correct( uint slice_num, bool phase_correct );
  void       pwm_set_wrap( uint slice_num, uint16_t wrap );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_PWM_H */
