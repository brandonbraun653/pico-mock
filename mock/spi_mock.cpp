/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

extern "C" {
#include "../include/hardware/spi.h"
}

#include <CppUTestExt/MockSupport.h>

uint spi_init(spi_inst_t * spi, uint baudrate)
{
    return static_cast<uint>(mock().actualCall("spi_init").withOutputParameterOfType("spi_inst_t", "spi", spi).withUnsignedIntParameter("baudrate", baudrate).returnUnsignedIntValue());
}

void spi_deinit(spi_inst_t * spi)
{
    mock().actualCall("spi_deinit").withOutputParameterOfType("spi_inst_t", "spi", spi);
}

uint spi_set_baudrate(spi_inst_t * spi, uint baudrate)
{
    return static_cast<uint>(mock().actualCall("spi_set_baudrate").withOutputParameterOfType("spi_inst_t", "spi", spi).withUnsignedIntParameter("baudrate", baudrate).returnUnsignedIntValue());
}

uint spi_get_baudrate(const spi_inst_t * spi)
{
    return static_cast<uint>(mock().actualCall("spi_get_baudrate").withParameterOfType("spi_inst_t", "spi", spi).returnUnsignedIntValue());
}

int spi_write_read_blocking(spi_inst_t * spi, const uint8_t * src, uint8_t * dst, size_t len)
{
    return mock().actualCall("spi_write_read_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withConstPointerParameter("src", src).withOutputParameter("dst", dst).withUnsignedLongIntParameter("len", len).returnIntValue();
}

int spi_write_blocking(spi_inst_t * spi, const uint8_t * src, size_t len)
{
    return mock().actualCall("spi_write_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withConstPointerParameter("src", src).withUnsignedLongIntParameter("len", len).returnIntValue();
}

int spi_read_blocking(spi_inst_t * spi, uint8_t repeated_tx_data, uint8_t * dst, size_t len)
{
    return mock().actualCall("spi_read_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withUnsignedIntParameter("repeated_tx_data", repeated_tx_data).withOutputParameter("dst", dst).withUnsignedLongIntParameter("len", len).returnIntValue();
}

int spi_write16_read16_blocking(spi_inst_t * spi, const uint16_t * src, uint16_t * dst, size_t len)
{
    return mock().actualCall("spi_write16_read16_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withConstPointerParameter("src", src).withOutputParameter("dst", dst).withUnsignedLongIntParameter("len", len).returnIntValue();
}

int spi_write16_blocking(spi_inst_t * spi, const uint16_t * src, size_t len)
{
    return mock().actualCall("spi_write16_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withConstPointerParameter("src", src).withUnsignedLongIntParameter("len", len).returnIntValue();
}

int spi_read16_blocking(spi_inst_t * spi, uint16_t repeated_tx_data, uint16_t * dst, size_t len)
{
    return mock().actualCall("spi_read16_blocking").withOutputParameterOfType("spi_inst_t", "spi", spi).withUnsignedIntParameter("repeated_tx_data", repeated_tx_data).withOutputParameter("dst", dst).withUnsignedLongIntParameter("len", len).returnIntValue();
}

