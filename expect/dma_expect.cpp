/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "dma_expect.hpp"

namespace expect {
MockExpectedCall& dma_channel_claim(CppUMockGen::Parameter<uint> channel)
{
    return dma_channel_claim(1, channel);
}
MockExpectedCall& dma_channel_claim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_channel_claim");
    if(channel.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel", channel.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_claim_mask(CppUMockGen::Parameter<uint32_t> channel_mask)
{
    return dma_claim_mask(1, channel_mask);
}
MockExpectedCall& dma_claim_mask(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> channel_mask)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_claim_mask");
    if(channel_mask.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel_mask", channel_mask.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_channel_unclaim(CppUMockGen::Parameter<uint> channel)
{
    return dma_channel_unclaim(1, channel);
}
MockExpectedCall& dma_channel_unclaim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_channel_unclaim");
    if(channel.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel", channel.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_unclaim_mask(CppUMockGen::Parameter<uint32_t> channel_mask)
{
    return dma_unclaim_mask(1, channel_mask);
}
MockExpectedCall& dma_unclaim_mask(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> channel_mask)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_unclaim_mask");
    if(channel_mask.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel_mask", channel_mask.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_claim_unused_channel(CppUMockGen::Parameter<_Bool> required, int __return__)
{
    return dma_claim_unused_channel(1, required, __return__);
}
MockExpectedCall& dma_claim_unused_channel(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> required, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_claim_unused_channel");
    if(required.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withBoolParameter("required", required.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_channel_is_claimed(CppUMockGen::Parameter<uint> channel, _Bool __return__)
{
    return dma_channel_is_claimed(1, channel, __return__);
}
MockExpectedCall& dma_channel_is_claimed(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel, _Bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_channel_is_claimed");
    if(channel.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel", channel.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_timer_claim(CppUMockGen::Parameter<uint> timer)
{
    return dma_timer_claim(1, timer);
}
MockExpectedCall& dma_timer_claim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_timer_claim");
    if(timer.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("timer", timer.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_timer_unclaim(CppUMockGen::Parameter<uint> timer)
{
    return dma_timer_unclaim(1, timer);
}
MockExpectedCall& dma_timer_unclaim(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_timer_unclaim");
    if(timer.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("timer", timer.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_claim_unused_timer(CppUMockGen::Parameter<_Bool> required, int __return__)
{
    return dma_claim_unused_timer(1, required, __return__);
}
MockExpectedCall& dma_claim_unused_timer(unsigned int __numCalls__, CppUMockGen::Parameter<_Bool> required, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_claim_unused_timer");
    if(required.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withBoolParameter("required", required.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_timer_is_claimed(CppUMockGen::Parameter<uint> timer, _Bool __return__)
{
    return dma_timer_is_claimed(1, timer, __return__);
}
MockExpectedCall& dma_timer_is_claimed(unsigned int __numCalls__, CppUMockGen::Parameter<uint> timer, _Bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_timer_is_claimed");
    if(timer.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("timer", timer.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& dma_channel_cleanup(CppUMockGen::Parameter<uint> channel)
{
    return dma_channel_cleanup(1, channel);
}
MockExpectedCall& dma_channel_cleanup(unsigned int __numCalls__, CppUMockGen::Parameter<uint> channel)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "dma_channel_cleanup");
    if(channel.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("channel", channel.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

