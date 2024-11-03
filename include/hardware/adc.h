/******************************************************************************
 *  File Name:
 *    adc.h
 *
 *  Description:
 *    Simulated interface for the Pico ADC peripheral
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef SIM_PICO_ADC_HPP
#define SIM_PICO_ADC_HPP

#ifdef __cplusplus
extern "C"
{
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include "pico.h"

  bool     adc_fifo_is_empty( void );
  uint     adc_get_selected_input( void );
  uint16_t adc_fifo_get( void );
  uint16_t adc_fifo_get_blocking( void );
  uint16_t adc_read( void );
  uint8_t  adc_fifo_get_level( void );
  void     adc_fifo_drain( void );
  void     adc_fifo_setup( bool en, bool dreq_en, uint16_t dreq_thresh, bool err_in_fifo, bool byte_shift );
  void     adc_gpio_init( uint gpio );
  void     adc_init( void );
  void     adc_irq_set_enabled( bool enabled );
  void     adc_run( bool run );
  void     adc_select_input( uint input );
  void     adc_set_clkdiv( float clkdiv );
  void     adc_set_round_robin( uint input_mask );
  void     adc_set_temp_sensor_enabled( bool enable );

#ifdef __cplusplus
}
#endif
#endif /* !SIM_PICO_ADC_HPP */
