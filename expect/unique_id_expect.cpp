/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "unique_id_expect.hpp"

namespace expect {
MockExpectedCall& pico_get_unique_board_id(pico_unique_board_id_t * id_out)
{
    return pico_get_unique_board_id(1, id_out);
}
MockExpectedCall& pico_get_unique_board_id(unsigned int __numCalls__, pico_unique_board_id_t * id_out)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "pico_get_unique_board_id");
    __expectedCall__.withOutputParameterOfTypeReturning("pico_unique_board_id_t", "id_out", id_out);
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& pico_get_unique_board_id_string(char * id_out, size_t __sizeof_id_out, CppUMockGen::Parameter<uint> len)
{
    return pico_get_unique_board_id_string(1, id_out, __sizeof_id_out, len);
}
MockExpectedCall& pico_get_unique_board_id_string(unsigned int __numCalls__, char * id_out, size_t __sizeof_id_out, CppUMockGen::Parameter<uint> len)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "pico_get_unique_board_id_string");
    __expectedCall__.withOutputParameterReturning("id_out", id_out, __sizeof_id_out);
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("len", len.getValue()); }
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}
