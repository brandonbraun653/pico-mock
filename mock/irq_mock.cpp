/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

extern "C" {
#include "../include/hardware/irq.h"
}

#include <CppUTestExt/MockSupport.h>

void irq_set_priority(uint num, uint8_t hardware_priority)
{
    mock().actualCall("irq_set_priority").withUnsignedIntParameter("num", num).withUnsignedIntParameter("hardware_priority", hardware_priority);
}

uint irq_get_priority(uint num)
{
    return static_cast<uint>(mock().actualCall("irq_get_priority").withUnsignedIntParameter("num", num).returnUnsignedIntValue());
}

void irq_set_enabled(uint num, _Bool enabled)
{
    mock().actualCall("irq_set_enabled").withUnsignedIntParameter("num", num).withBoolParameter("enabled", enabled);
}

_Bool irq_is_enabled(uint num)
{
    return mock().actualCall("irq_is_enabled").withUnsignedIntParameter("num", num).returnBoolValue();
}

void irq_set_mask_enabled(uint32_t mask, _Bool enabled)
{
    mock().actualCall("irq_set_mask_enabled").withUnsignedIntParameter("mask", mask).withBoolParameter("enabled", enabled);
}

_Bool irq_has_shared_handler(uint num)
{
    return mock().actualCall("irq_has_shared_handler").withUnsignedIntParameter("num", num).returnBoolValue();
}

void irq_set_pending(uint num)
{
    mock().actualCall("irq_set_pending").withUnsignedIntParameter("num", num);
}

void irq_init_priorities()
{
    mock().actualCall("irq_init_priorities");
}

void user_irq_claim(uint irq_num)
{
    mock().actualCall("user_irq_claim").withUnsignedIntParameter("irq_num", irq_num);
}

void user_irq_unclaim(uint irq_num)
{
    mock().actualCall("user_irq_unclaim").withUnsignedIntParameter("irq_num", irq_num);
}

int user_irq_claim_unused(_Bool required)
{
    return mock().actualCall("user_irq_claim_unused").withBoolParameter("required", required).returnIntValue();
}

_Bool user_irq_is_claimed(uint irq_num)
{
    return mock().actualCall("user_irq_is_claimed").withUnsignedIntParameter("irq_num", irq_num).returnBoolValue();
}

