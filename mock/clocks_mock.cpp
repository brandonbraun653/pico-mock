/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

extern "C" {
#include "../include/hardware/clocks.h"
}

#include <CppUTestExt/MockSupport.h>

void clocks_init()
{
    mock().actualCall("clocks_init");
}

_Bool clock_configure(enum clock_index clk_index, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t freq)
{
    return mock().actualCall("clock_configure").withIntParameter("clk_index", static_cast<int>(clk_index)).withUnsignedIntParameter("src", src).withUnsignedIntParameter("auxsrc", auxsrc).withUnsignedIntParameter("src_freq", src_freq).withUnsignedIntParameter("freq", freq).returnBoolValue();
}

void clock_stop(enum clock_index clk_index)
{
    mock().actualCall("clock_stop").withIntParameter("clk_index", static_cast<int>(clk_index));
}

uint32_t clock_get_hz(enum clock_index clk_index)
{
    return static_cast<uint32_t>(mock().actualCall("clock_get_hz").withIntParameter("clk_index", static_cast<int>(clk_index)).returnUnsignedIntValue());
}

uint32_t frequency_count_khz(uint src)
{
    return static_cast<uint32_t>(mock().actualCall("frequency_count_khz").withUnsignedIntParameter("src", src).returnUnsignedIntValue());
}

void clock_set_reported_hz(enum clock_index clk_index, uint hz)
{
    mock().actualCall("clock_set_reported_hz").withIntParameter("clk_index", static_cast<int>(clk_index)).withUnsignedIntParameter("hz", hz);
}

void clock_gpio_init_int_frac(uint gpio, uint src, uint32_t div_int, uint8_t div_frac)
{
    mock().actualCall("clock_gpio_init_int_frac").withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("src", src).withUnsignedIntParameter("div_int", div_int).withUnsignedIntParameter("div_frac", div_frac);
}

_Bool clock_configure_gpin(enum clock_index clk_index, uint gpio, uint32_t src_freq, uint32_t freq)
{
    return mock().actualCall("clock_configure_gpin").withIntParameter("clk_index", static_cast<int>(clk_index)).withUnsignedIntParameter("gpio", gpio).withUnsignedIntParameter("src_freq", src_freq).withUnsignedIntParameter("freq", freq).returnBoolValue();
}

