/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

extern "C" {
#include "../include/pico/time.h"
}

#include <CppUTestExt/MockSupport.h>

void sleep_ms(uint32_t ms)
{
    mock().actualCall("sleep_ms").withUnsignedIntParameter("ms", ms);
}

