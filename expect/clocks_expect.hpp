/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/hardware/clocks.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& clocks_init();
MockExpectedCall& clocks_init(unsigned int __numCalls__);
}

namespace expect {
MockExpectedCall& clock_configure(CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint32_t> src, CppUMockGen::Parameter<uint32_t> auxsrc, CppUMockGen::Parameter<uint32_t> src_freq, CppUMockGen::Parameter<uint32_t> freq, _Bool __return__);
MockExpectedCall& clock_configure(unsigned int __numCalls__, CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint32_t> src, CppUMockGen::Parameter<uint32_t> auxsrc, CppUMockGen::Parameter<uint32_t> src_freq, CppUMockGen::Parameter<uint32_t> freq, _Bool __return__);
}

namespace expect {
MockExpectedCall& clock_stop(CppUMockGen::Parameter<enum clock_index> clk_index);
MockExpectedCall& clock_stop(unsigned int __numCalls__, CppUMockGen::Parameter<enum clock_index> clk_index);
}

namespace expect {
MockExpectedCall& clock_get_hz(CppUMockGen::Parameter<enum clock_index> clk_index, uint32_t __return__);
MockExpectedCall& clock_get_hz(unsigned int __numCalls__, CppUMockGen::Parameter<enum clock_index> clk_index, uint32_t __return__);
}

namespace expect {
MockExpectedCall& frequency_count_khz(CppUMockGen::Parameter<uint> src, uint32_t __return__);
MockExpectedCall& frequency_count_khz(unsigned int __numCalls__, CppUMockGen::Parameter<uint> src, uint32_t __return__);
}

namespace expect {
MockExpectedCall& clock_set_reported_hz(CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint> hz);
MockExpectedCall& clock_set_reported_hz(unsigned int __numCalls__, CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint> hz);
}

namespace expect {
MockExpectedCall& clock_gpio_init_int_frac(CppUMockGen::Parameter<uint> gpio, CppUMockGen::Parameter<uint> src, CppUMockGen::Parameter<uint32_t> div_int, CppUMockGen::Parameter<uint8_t> div_frac);
MockExpectedCall& clock_gpio_init_int_frac(unsigned int __numCalls__, CppUMockGen::Parameter<uint> gpio, CppUMockGen::Parameter<uint> src, CppUMockGen::Parameter<uint32_t> div_int, CppUMockGen::Parameter<uint8_t> div_frac);
}

namespace expect {
MockExpectedCall& clock_configure_gpin(CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint> gpio, CppUMockGen::Parameter<uint32_t> src_freq, CppUMockGen::Parameter<uint32_t> freq, _Bool __return__);
MockExpectedCall& clock_configure_gpin(unsigned int __numCalls__, CppUMockGen::Parameter<enum clock_index> clk_index, CppUMockGen::Parameter<uint> gpio, CppUMockGen::Parameter<uint32_t> src_freq, CppUMockGen::Parameter<uint32_t> freq, _Bool __return__);
}

