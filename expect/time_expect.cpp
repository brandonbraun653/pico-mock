/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "time_expect.hpp"

namespace expect {
MockExpectedCall& sleep_ms(CppUMockGen::Parameter<uint32_t> ms)
{
    return sleep_ms(1, ms);
}
MockExpectedCall& sleep_ms(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> ms)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "sleep_ms");
    if(ms.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("ms", ms.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}
