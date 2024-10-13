/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/hardware/dma.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& dma_channel_claim(CppUMockGen::Parameter<uint> channel);
MockExpectedCall& dma_channel_claim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel);
}

namespace expect {
MockExpectedCall& dma_claim_mask(CppUMockGen::Parameter<uint32_t> channel_mask);
MockExpectedCall& dma_claim_mask(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> channel_mask);
}

namespace expect {
MockExpectedCall& dma_channel_unclaim(CppUMockGen::Parameter<uint> channel);
MockExpectedCall& dma_channel_unclaim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel);
}

namespace expect {
MockExpectedCall& dma_unclaim_mask(CppUMockGen::Parameter<uint32_t> channel_mask);
MockExpectedCall& dma_unclaim_mask(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> channel_mask);
}

namespace expect {
MockExpectedCall& dma_claim_unused_channel(CppUMockGen::Parameter<_Bool> required, int __return__);
MockExpectedCall& dma_claim_unused_channel(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> required, int __return__);
}

namespace expect {
MockExpectedCall& dma_channel_is_claimed(CppUMockGen::Parameter<uint> channel, _Bool __return__);
MockExpectedCall& dma_channel_is_claimed(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel, _Bool __return__);
}

namespace expect {
MockExpectedCall& dma_timer_claim(CppUMockGen::Parameter<uint> timer);
MockExpectedCall& dma_timer_claim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer);
}

namespace expect {
MockExpectedCall& dma_timer_unclaim(CppUMockGen::Parameter<uint> timer);
MockExpectedCall& dma_timer_unclaim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer);
}

namespace expect {
MockExpectedCall& dma_claim_unused_timer(CppUMockGen::Parameter<_Bool> required, int __return__);
MockExpectedCall& dma_claim_unused_timer(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> required, int __return__);
}

namespace expect {
MockExpectedCall& dma_timer_is_claimed(CppUMockGen::Parameter<uint> timer, _Bool __return__);
MockExpectedCall& dma_timer_is_claimed(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer, _Bool __return__);
}

namespace expect {
MockExpectedCall& dma_channel_cleanup(CppUMockGen::Parameter<uint> channel);
MockExpectedCall& dma_channel_cleanup(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel);
}

