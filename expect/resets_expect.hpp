/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/hardware/resets.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& reset_block(CppUMockGen::Parameter<uint32_t> bits);
MockExpectedCall& reset_block(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> bits);
}

namespace expect {
MockExpectedCall& unreset_block(CppUMockGen::Parameter<uint32_t> bits);
MockExpectedCall& unreset_block(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> bits);
}

namespace expect {
MockExpectedCall& unreset_block_wait(CppUMockGen::Parameter<uint32_t> bits);
MockExpectedCall& unreset_block_wait(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> bits);
}

