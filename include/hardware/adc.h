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
extern "C" {
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include "pico.h"

void adc_init(void);
void adc_gpio_init(uint gpio);
void adc_select_input(uint input);
uint16_t adc_read(void);

#ifdef __cplusplus
}
#endif
#endif  /* !SIM_PICO_ADC_HPP */
