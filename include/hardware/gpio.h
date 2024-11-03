/******************************************************************************
 *  File Name:
 *    gpio.h
 *
 *  Description:
 *    Mocked gpio.h file for testing
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_GPIO_HPP
#define PICO_MOCK_GPIO_HPP

#ifdef __cplusplus
extern "C"
{
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include "pico.h"


  typedef void ( *gpio_irq_callback_t )( uint gpio, uint32_t event_mask );

  enum gpio_function
  {
    GPIO_FUNC_XIP  = 0,
    GPIO_FUNC_SPI  = 1,
    GPIO_FUNC_UART = 2,
    GPIO_FUNC_I2C  = 3,
    GPIO_FUNC_PWM  = 4,
    GPIO_FUNC_SIO  = 5,
    GPIO_FUNC_PIO0 = 6,
    GPIO_FUNC_PIO1 = 7,
    GPIO_FUNC_GPCK = 8,
    GPIO_FUNC_USB  = 9,
    GPIO_FUNC_NULL = 0xf,
  };

  enum gpio_slew_rate
  {
    GPIO_SLEW_RATE_SLOW = 0,    ///< Slew rate limiting enabled
    GPIO_SLEW_RATE_FAST = 1     ///< Slew rate limiting disabled
  };

  enum gpio_drive_strength
  {
    GPIO_DRIVE_STRENGTH_2MA  = 0,    ///< 2 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_4MA  = 1,    ///< 4 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_8MA  = 2,    ///< 8 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_12MA = 3     ///< 12 mA nominal drive strength
  };

  enum gpio_irq_level
  {
    GPIO_IRQ_LEVEL_LOW  = 0x1u,
    GPIO_IRQ_LEVEL_HIGH = 0x2u,
    GPIO_IRQ_EDGE_FALL  = 0x4u,
    GPIO_IRQ_EDGE_RISE  = 0x8u,
  };

#define GPIO_OUT 1
#define GPIO_IN 0

#define NUM_BANK0_GPIOS 30

  bool                     gpio_get( uint gpio );
  bool                     gpio_is_input_hysteresis_enabled( uint gpio );
  enum gpio_drive_strength gpio_get_drive_strength( uint gpio );
  enum gpio_function       gpio_get_function( uint gpio );
  enum gpio_slew_rate      gpio_get_slew_rate( uint gpio );
  uint32_t                 gpio_get_all();
  void                     gpio_clr_mask( uint32_t mask );
  void                     gpio_debug_pins_init();
  void                     gpio_disable_pulls( uint gpio );
  void                     gpio_init( uint gpio );
  void                     gpio_init_mask( uint gpio_mask );
  void                     gpio_pull_down( uint gpio );
  void                     gpio_pull_up( uint gpio );
  void                     gpio_put( uint gpio, int value );
  void                     gpio_put_all( uint32_t value );
  void                     gpio_put_masked( uint32_t mask, uint32_t value );
  void                     gpio_set_dir( uint gpio, bool out );
  void                     gpio_set_dir_all_bits( uint32_t value );
  void                     gpio_set_dir_in_masked( uint32_t mask );
  void                     gpio_set_dir_masked( uint32_t mask, uint32_t value );
  void                     gpio_set_dir_out_masked( uint32_t mask );
  void                     gpio_set_drive_strength( uint gpio, enum gpio_drive_strength drive );
  void                     gpio_set_function( uint gpio, enum gpio_function fn );
  void                     gpio_set_inover( uint gpio, uint value );
  void                     gpio_set_input_enabled( uint gpio, bool enable );
  void                     gpio_set_input_hysteresis_enabled( uint gpio, bool enabled );
  void                     gpio_set_irq_enabled( uint gpio, uint32_t event_mask, bool enabled );
  void gpio_set_irq_enabled_with_callback( uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback );
  void gpio_set_irqover( uint gpio, uint value );
  void gpio_set_mask( uint32_t mask );
  void gpio_set_oeover( uint gpio, uint value );
  void gpio_set_outover( uint gpio, uint value );
  void gpio_set_pulls( uint gpio, bool up, bool down );
  void gpio_set_slew_rate( uint gpio, enum gpio_slew_rate slew );
  void gpio_xor_mask( uint32_t mask );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_GPIO_HPP */
