/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/pico/unique_id.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& pico_get_unique_board_id(pico_unique_board_id_t * id_out);
MockExpectedCall& pico_get_unique_board_id(unsigned int __numCalls__, pico_unique_board_id_t * id_out);
}

namespace expect {
MockExpectedCall& pico_get_unique_board_id_string(char * id_out, size_t __sizeof_id_out, CppUMockGen::Parameter<uint> len);
MockExpectedCall& pico_get_unique_board_id_string(unsigned int __numCalls__, char * id_out, size_t __sizeof_id_out, CppUMockGen::Parameter<uint> len);
}
