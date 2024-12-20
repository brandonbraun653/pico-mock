/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "spi_expect.hpp"

namespace expect {
MockExpectedCall& spi_init(spi_inst_t * spi, CppUMockGen::Parameter<uint> baudrate, uint __return__)
{
    return spi_init(1, spi, baudrate, __return__);
}
MockExpectedCall& spi_init(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<uint> baudrate, uint __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_init");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(baudrate.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("baudrate", baudrate.getValue()); }
    __expectedCall__.andReturnValue(static_cast<unsigned int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_deinit(spi_inst_t * spi)
{
    return spi_deinit(1, spi);
}
MockExpectedCall& spi_deinit(unsigned int __numCalls__, spi_inst_t * spi)
{
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_deinit");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_set_baudrate(spi_inst_t * spi, CppUMockGen::Parameter<uint> baudrate, uint __return__)
{
    return spi_set_baudrate(1, spi, baudrate, __return__);
}
MockExpectedCall& spi_set_baudrate(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<uint> baudrate, uint __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_set_baudrate");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(baudrate.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("baudrate", baudrate.getValue()); }
    __expectedCall__.andReturnValue(static_cast<unsigned int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_get_baudrate(CppUMockGen::Parameter<const spi_inst_t *> spi, uint __return__)
{
    return spi_get_baudrate(1, spi, __return__);
}
MockExpectedCall& spi_get_baudrate(unsigned int __numCalls__, CppUMockGen::Parameter<const spi_inst_t *> spi, uint __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_get_baudrate");
    if(spi.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("spi_inst_t", "spi", spi.getValue()); }
    __expectedCall__.andReturnValue(static_cast<unsigned int>(__return__));
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_write_read_blocking(spi_inst_t * spi, CppUMockGen::Parameter<const uint8_t *> src, uint8_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_write_read_blocking(1, spi, src, dst, __sizeof_dst, len, __return__);
}
MockExpectedCall& spi_write_read_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<const uint8_t *> src, uint8_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_write_read_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(src.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("src", src.getValue()); }
    __expectedCall__.withOutputParameterReturning("dst", dst, __sizeof_dst);
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_write_blocking(spi_inst_t * spi, CppUMockGen::Parameter<const uint8_t *> src, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_write_blocking(1, spi, src, len, __return__);
}
MockExpectedCall& spi_write_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<const uint8_t *> src, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_write_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(src.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("src", src.getValue()); }
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_read_blocking(spi_inst_t * spi, CppUMockGen::Parameter<uint8_t> repeated_tx_data, uint8_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_read_blocking(1, spi, repeated_tx_data, dst, __sizeof_dst, len, __return__);
}
MockExpectedCall& spi_read_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<uint8_t> repeated_tx_data, uint8_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_read_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(repeated_tx_data.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("repeated_tx_data", repeated_tx_data.getValue()); }
    __expectedCall__.withOutputParameterReturning("dst", dst, __sizeof_dst);
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_write16_read16_blocking(spi_inst_t * spi, CppUMockGen::Parameter<const uint16_t *> src, uint16_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_write16_read16_blocking(1, spi, src, dst, __sizeof_dst, len, __return__);
}
MockExpectedCall& spi_write16_read16_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<const uint16_t *> src, uint16_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_write16_read16_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(src.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("src", src.getValue()); }
    __expectedCall__.withOutputParameterReturning("dst", dst, __sizeof_dst);
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_write16_blocking(spi_inst_t * spi, CppUMockGen::Parameter<const uint16_t *> src, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_write16_blocking(1, spi, src, len, __return__);
}
MockExpectedCall& spi_write16_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<const uint16_t *> src, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_write16_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(src.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("src", src.getValue()); }
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

namespace expect {
MockExpectedCall& spi_read16_blocking(spi_inst_t * spi, CppUMockGen::Parameter<uint16_t> repeated_tx_data, uint16_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    return spi_read16_blocking(1, spi, repeated_tx_data, dst, __sizeof_dst, len, __return__);
}
MockExpectedCall& spi_read16_blocking(unsigned int __numCalls__, spi_inst_t * spi, CppUMockGen::Parameter<uint16_t> repeated_tx_data, uint16_t * dst, size_t __sizeof_dst, CppUMockGen::Parameter<size_t> len, int __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "spi_read16_blocking");
    __expectedCall__.withOutputParameterOfTypeReturning("spi_inst_t", "spi", spi);
    if(repeated_tx_data.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedIntParameter("repeated_tx_data", repeated_tx_data.getValue()); }
    __expectedCall__.withOutputParameterReturning("dst", dst, __sizeof_dst);
    if(len.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withUnsignedLongIntParameter("len", len.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
}

