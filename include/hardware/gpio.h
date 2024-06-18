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
#include "pico.h"

enum gpio_function {
    GPIO_FUNC_XIP = 0,
    GPIO_FUNC_SPI = 1,
    GPIO_FUNC_UART = 2,
    GPIO_FUNC_I2C = 3,
    GPIO_FUNC_PWM = 4,
    GPIO_FUNC_SIO = 5,
    GPIO_FUNC_PIO0 = 6,
    GPIO_FUNC_PIO1 = 7,
    GPIO_FUNC_GPCK = 8,
    GPIO_FUNC_USB = 9,
    GPIO_FUNC_NULL = 0xf,
};

enum gpio_slew_rate {
    GPIO_SLEW_RATE_SLOW = 0,  ///< Slew rate limiting enabled
    GPIO_SLEW_RATE_FAST = 1   ///< Slew rate limiting disabled
};

enum gpio_drive_strength {
    GPIO_DRIVE_STRENGTH_2MA = 0, ///< 2 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_4MA = 1, ///< 4 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_8MA = 2, ///< 8 mA nominal drive strength
    GPIO_DRIVE_STRENGTH_12MA = 3 ///< 12 mA nominal drive strength
};

#define GPIO_OUT 1
#define GPIO_IN 0

#define NUM_BANK0_GPIOS 30

void gpio_set_function(uint gpio, enum gpio_function fn);
enum gpio_function gpio_get_function(uint gpio);
void gpio_pull_up(uint gpio);
void gpio_pull_down(uint gpio);
void gpio_disable_pulls(uint gpio);
void gpio_set_pulls(uint gpio, bool up, bool down);
void gpio_set_irqover(uint gpio, uint value);
void gpio_set_outover(uint gpio, uint value);
void gpio_set_inover(uint gpio, uint value);
void gpio_set_oeover(uint gpio, uint value);
void gpio_set_input_enabled(uint gpio, bool enable);
void gpio_set_input_hysteresis_enabled(uint gpio, bool enabled);
bool gpio_is_input_hysteresis_enabled(uint gpio);
void gpio_set_slew_rate(uint gpio, enum gpio_slew_rate slew);
enum gpio_slew_rate gpio_get_slew_rate(uint gpio);
void gpio_set_drive_strength(uint gpio, enum gpio_drive_strength drive);
enum gpio_drive_strength gpio_get_drive_strength(uint gpio);
void gpio_init(uint gpio);
void gpio_init_mask(uint gpio_mask);
bool gpio_get(uint gpio);
uint32_t gpio_get_all();
void gpio_set_mask(uint32_t mask);
void gpio_clr_mask(uint32_t mask);
void gpio_xor_mask(uint32_t mask);
void gpio_put_masked(uint32_t mask, uint32_t value);
void gpio_put_all(uint32_t value);
void gpio_put(uint gpio, int value);
void gpio_set_dir_out_masked(uint32_t mask);
void gpio_set_dir_in_masked(uint32_t mask);
void gpio_set_dir_masked(uint32_t mask, uint32_t value);
void gpio_set_dir_all_bits(uint32_t value);
void gpio_set_dir(uint gpio, bool out);
void gpio_debug_pins_init();

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_GPIO_HPP */
