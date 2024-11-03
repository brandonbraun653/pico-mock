/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/hardware/adc.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& adc_fifo_is_empty(_Bool __return__);
MockExpectedCall& adc_fifo_is_empty(unsigned int __numCalls__, _Bool __return__);
}

namespace expect {
MockExpectedCall& adc_get_selected_input(uint __return__);
MockExpectedCall& adc_get_selected_input(unsigned int __numCalls__, uint __return__);
}

namespace expect {
MockExpectedCall& adc_fifo_get(uint16_t __return__);
MockExpectedCall& adc_fifo_get(unsigned int __numCalls__, uint16_t __return__);
}

namespace expect {
MockExpectedCall& adc_fifo_get_blocking(uint16_t __return__);
MockExpectedCall& adc_fifo_get_blocking(unsigned int __numCalls__, uint16_t __return__);
}

namespace expect {
MockExpectedCall& adc_read(uint16_t __return__);
MockExpectedCall& adc_read(unsigned int __numCalls__, uint16_t __return__);
}

namespace expect {
MockExpectedCall& adc_fifo_get_level(uint8_t __return__);
MockExpectedCall& adc_fifo_get_level(unsigned int __numCalls__, uint8_t __return__);
}

namespace expect {
MockExpectedCall& adc_fifo_drain();
MockExpectedCall& adc_fifo_drain(unsigned int __numCalls__);
}

namespace expect {
MockExpectedCall& adc_fifo_setup(CppUMockGen::Parameter<_Bool> en, CppUMockGen::Parameter<_Bool> dreq_en, CppUMockGen::Parameter<uint16_t> dreq_thresh, CppUMockGen::Parameter<_Bool> err_in_fifo, CppUMockGen::Parameter<_Bool> byte_shift);
MockExpectedCall& adc_fifo_setup(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> en, CppUMockGen::Parameter<_Bool> dreq_en, CppUMockGen::Parameter<uint16_t> dreq_thresh, CppUMockGen::Parameter<_Bool> err_in_fifo, CppUMockGen::Parameter<_Bool> byte_shift);
}

namespace expect {
MockExpectedCall& adc_gpio_init(CppUMockGen::Parameter<uint> gpio);
MockExpectedCall& adc_gpio_init(unsigned int __numCalls__, CppUMockGen::Parameter<uint> gpio);
}

namespace expect {
MockExpectedCall& adc_init();
MockExpectedCall& adc_init(unsigned int __numCalls__);
}

namespace expect {
MockExpectedCall& adc_irq_set_enabled(CppUMockGen::Parameter<_Bool> enabled);
MockExpectedCall& adc_irq_set_enabled(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> enabled);
}

namespace expect {
MockExpectedCall& adc_run(CppUMockGen::Parameter<_Bool> run);
MockExpectedCall& adc_run(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> run);
}

namespace expect {
MockExpectedCall& adc_select_input(CppUMockGen::Parameter<uint> input);
MockExpectedCall& adc_select_input(unsigned int __numCalls__, CppUMockGen::Parameter<uint> input);
}

namespace expect {
MockExpectedCall& adc_set_clkdiv(CppUMockGen::Parameter<float> clkdiv);
MockExpectedCall& adc_set_clkdiv(unsigned int __numCalls__, CppUMockGen::Parameter<float> clkdiv);
}

namespace expect {
MockExpectedCall& adc_set_round_robin(CppUMockGen::Parameter<uint> input_mask);
MockExpectedCall& adc_set_round_robin(unsigned int __numCalls__, CppUMockGen::Parameter<uint> input_mask);
}

namespace expect {
MockExpectedCall& adc_set_temp_sensor_enabled(CppUMockGen::Parameter<_Bool> enable);
MockExpectedCall& adc_set_temp_sensor_enabled(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> enable);
}

