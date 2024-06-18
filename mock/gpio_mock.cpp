/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

extern "C" {
#include "../include/hardware/gpio.h"
}

#include <CppUTestExt/MockSupport.h>

void gpio_set_function(uint gpio, enum gpio_function fn)
{
    mock().actualCall("gpio_set_function").withUnsignedIntParameter("gpio", gpio).withIntParameter("fn", static_cast<int>(fn));
}

enum gpio_function gpio_get_function(uint gpio)
{
    return static_cast<enum gpio_function>(mock().actualCall("gpio_get_function").withUnsignedIntParameter("gpio", gpio).returnIntValue());
}

void gpio_pull_up(uint gpio)
{
    mock().actualCall("gpio_pull_up").withUnsignedIntParameter("gpio", gpio);
}

void gpio_pull_down(uint gpio)
{
    mock().actualCall("gpio_pull_down").withUnsignedIntParameter("gpio", gpio);
}

void gpio_disable_pulls(uint gpio)
{
    mock().actualCall("gpio_disable_pulls").withUnsignedIntParameter("gpio", gpio);
}

void gpio_set_pulls(uint gpio, _Bool up, _Bool down)
{
    mock().actualCall("gpio_set_pulls").withUnsignedIntParameter("gpio", gpio).withBoolParameter("up", up).withBoolParameter("down", down);
}

void gpio_set_irqover(uint gpio, uint value)
{
    mock().actualCall("gpio_set_irqover").withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("value", value);
}

void gpio_set_outover(uint gpio, uint value)
{
    mock().actualCall("gpio_set_outover").withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("value", value);
}

void gpio_set_inover(uint gpio, uint value)
{
    mock().actualCall("gpio_set_inover").withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("value", value);
}

void gpio_set_oeover(uint gpio, uint value)
{
    mock().actualCall("gpio_set_oeover").withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("value", value);
}

void gpio_set_input_enabled(uint gpio, _Bool enable)
{
    mock().actualCall("gpio_set_input_enabled").withUnsignedIntParameter("gpio", gpio).withBoolParameter("enable", enable);
}

void gpio_set_input_hysteresis_enabled(uint gpio, _Bool enabled)
{
    mock().actualCall("gpio_set_input_hysteresis_enabled").withUnsignedIntParameter("gpio", gpio).withBoolParameter("enabled", enabled);
}

_Bool gpio_is_input_hysteresis_enabled(uint gpio)
{
    return mock().actualCall("gpio_is_input_hysteresis_enabled").withUnsignedIntParameter("gpio", gpio).returnBoolValue();
}

void gpio_set_slew_rate(uint gpio, enum gpio_slew_rate slew)
{
    mock().actualCall("gpio_set_slew_rate").withUnsignedIntParameter("gpio", gpio).withIntParameter("slew", static_cast<int>(slew));
}

enum gpio_slew_rate gpio_get_slew_rate(uint gpio)
{
    return static_cast<enum gpio_slew_rate>(mock().actualCall("gpio_get_slew_rate").withUnsignedIntParameter("gpio", gpio).returnIntValue());
}

void gpio_set_drive_strength(uint gpio, enum gpio_drive_strength drive)
{
    mock().actualCall("gpio_set_drive_strength").withUnsignedIntParameter("gpio", gpio).withIntParameter("drive", static_cast<int>(drive));
}

enum gpio_drive_strength gpio_get_drive_strength(uint gpio)
{
    return static_cast<enum gpio_drive_strength>(mock().actualCall("gpio_get_drive_strength").withUnsignedIntParameter("gpio", gpio).returnIntValue());
}

void gpio_init(uint gpio)
{
    mock().actualCall("gpio_init").withUnsignedIntParameter("gpio", gpio);
}

void gpio_init_mask(uint gpio_mask)
{
    mock().actualCall("gpio_init_mask").withUnsignedIntParameter("gpio_mask", gpio_mask);
}

_Bool gpio_get(uint gpio)
{
    return mock().actualCall("gpio_get").withUnsignedIntParameter("gpio", gpio).returnBoolValue();
}

uint32_t gpio_get_all()
{
    return static_cast<uint32_t>(mock().actualCall("gpio_get_all").returnUnsignedIntValue());
}

void gpio_set_mask(uint32_t mask)
{
    mock().actualCall("gpio_set_mask").withUnsignedIntParameter("mask", mask);
}

void gpio_clr_mask(uint32_t mask)
{
    mock().actualCall("gpio_clr_mask").withUnsignedIntParameter("mask", mask);
}

void gpio_xor_mask(uint32_t mask)
{
    mock().actualCall("gpio_xor_mask").withUnsignedIntParameter("mask", mask);
}

void gpio_put_masked(uint32_t mask, uint32_t value)
{
    mock().actualCall("gpio_put_masked").withUnsignedIntParameter("mask", mask).withUnsignedIntParameter("value", value);
}

void gpio_put_all(uint32_t value)
{
    mock().actualCall("gpio_put_all").withUnsignedIntParameter("value", value);
}

void gpio_put(uint gpio, int value)
{
    mock().actualCall("gpio_put").withUnsignedIntParameter("gpio", gpio).withIntParameter("value", value);
}

void gpio_set_dir_out_masked(uint32_t mask)
{
    mock().actualCall("gpio_set_dir_out_masked").withUnsignedIntParameter("mask", mask);
}

void gpio_set_dir_in_masked(uint32_t mask)
{
    mock().actualCall("gpio_set_dir_in_masked").withUnsignedIntParameter("mask", mask);
}

void gpio_set_dir_masked(uint32_t mask, uint32_t value)
{
    mock().actualCall("gpio_set_dir_masked").withUnsignedIntParameter("mask", mask).withUnsignedIntParameter("value", value);
}

void gpio_set_dir_all_bits(uint32_t value)
{
    mock().actualCall("gpio_set_dir_all_bits").withUnsignedIntParameter("value", value);
}

void gpio_set_dir(uint gpio, _Bool out)
{
    mock().actualCall("gpio_set_dir").withUnsignedIntParameter("gpio", gpio).withBoolParameter("out", out);
}

void gpio_debug_pins_init()
{
    mock().actualCall("gpio_debug_pins_init");
}
