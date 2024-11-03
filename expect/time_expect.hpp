/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include <CppUMockGen.hpp>

extern "C" {
#include "../include/pico/time.h"
}

#include <CppUTestExt/MockSupport.h>

namespace expect {
MockExpectedCall& sleep_ms(CppUMockGen::Parameter<uint32_t> ms);
MockExpectedCall& sleep_ms(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> ms);
}

namespace expect {
MockExpectedCall& get_absolute_time(absolute_time_t &__return__);
MockExpectedCall& get_absolute_time(unsigned int __numCalls__, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& us_to_ms(CppUMockGen::Parameter<uint64_t> us, uint32_t __return__);
MockExpectedCall& us_to_ms(unsigned int __numCalls__, CppUMockGen::Parameter<uint64_t> us, uint32_t __return__);
}

namespace expect {
MockExpectedCall& to_ms_since_boot(CppUMockGen::Parameter<absolute_time_t&> t, uint32_t __return__);
MockExpectedCall& to_ms_since_boot(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> t, uint32_t __return__);
}

namespace expect {
MockExpectedCall& delayed_by_us(CppUMockGen::Parameter<const absolute_time_t&> t, CppUMockGen::Parameter<uint64_t> us, absolute_time_t &__return__);
MockExpectedCall& delayed_by_us(unsigned int __numCalls__, CppUMockGen::Parameter<const absolute_time_t&> t, CppUMockGen::Parameter<uint64_t> us, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& delayed_by_ms(CppUMockGen::Parameter<const absolute_time_t&> t, CppUMockGen::Parameter<uint32_t> ms, absolute_time_t &__return__);
MockExpectedCall& delayed_by_ms(unsigned int __numCalls__, CppUMockGen::Parameter<const absolute_time_t&> t, CppUMockGen::Parameter<uint32_t> ms, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& make_timeout_time_us(CppUMockGen::Parameter<uint64_t> us, absolute_time_t &__return__);
MockExpectedCall& make_timeout_time_us(unsigned int __numCalls__, CppUMockGen::Parameter<uint64_t> us, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& make_timeout_time_ms(CppUMockGen::Parameter<uint32_t> ms, absolute_time_t &__return__);
MockExpectedCall& make_timeout_time_ms(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> ms, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& absolute_time_diff_us(CppUMockGen::Parameter<absolute_time_t&> from, CppUMockGen::Parameter<absolute_time_t&> to, int64_t __return__);
MockExpectedCall& absolute_time_diff_us(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> from, CppUMockGen::Parameter<absolute_time_t&> to, int64_t __return__);
}

namespace expect {
MockExpectedCall& absolute_time_min(CppUMockGen::Parameter<absolute_time_t&> a, CppUMockGen::Parameter<absolute_time_t&> b, absolute_time_t &__return__);
MockExpectedCall& absolute_time_min(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> a, CppUMockGen::Parameter<absolute_time_t&> b, absolute_time_t &__return__);
}

namespace expect {
MockExpectedCall& is_at_the_end_of_time(CppUMockGen::Parameter<absolute_time_t&> t, _Bool __return__);
MockExpectedCall& is_at_the_end_of_time(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> t, _Bool __return__);
}

namespace expect {
MockExpectedCall& is_nil_time(CppUMockGen::Parameter<absolute_time_t&> t, _Bool __return__);
MockExpectedCall& is_nil_time(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> t, _Bool __return__);
}

namespace expect {
MockExpectedCall& sleep_until(CppUMockGen::Parameter<absolute_time_t&> target);
MockExpectedCall& sleep_until(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> target);
}

namespace expect {
MockExpectedCall& sleep_us(CppUMockGen::Parameter<uint64_t> us);
MockExpectedCall& sleep_us(unsigned int __numCalls__, CppUMockGen::Parameter<uint64_t> us);
}

namespace expect {
MockExpectedCall& best_effort_wfe_or_timeout(CppUMockGen::Parameter<absolute_time_t&> timeout_timestamp, _Bool __return__);
MockExpectedCall& best_effort_wfe_or_timeout(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> timeout_timestamp, _Bool __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_init_default();
MockExpectedCall& alarm_pool_init_default(unsigned int __numCalls__);
}

namespace expect {
MockExpectedCall& alarm_pool_get_default(alarm_pool_t * __return__);
MockExpectedCall& alarm_pool_get_default(unsigned int __numCalls__, alarm_pool_t * __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_create(CppUMockGen::Parameter<uint> hardware_alarm_num, CppUMockGen::Parameter<uint> max_timers, alarm_pool_t * __return__);
MockExpectedCall& alarm_pool_create(unsigned int __numCalls__, CppUMockGen::Parameter<uint> hardware_alarm_num, CppUMockGen::Parameter<uint> max_timers, alarm_pool_t * __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_create_with_unused_hardware_alarm(CppUMockGen::Parameter<uint> max_timers, alarm_pool_t * __return__);
MockExpectedCall& alarm_pool_create_with_unused_hardware_alarm(unsigned int __numCalls__, CppUMockGen::Parameter<uint> max_timers, alarm_pool_t * __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_hardware_alarm_num(alarm_pool_t * pool, size_t __sizeof_pool, uint __return__);
MockExpectedCall& alarm_pool_hardware_alarm_num(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, uint __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_core_num(alarm_pool_t * pool, size_t __sizeof_pool, uint __return__);
MockExpectedCall& alarm_pool_core_num(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, uint __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_destroy(alarm_pool_t * pool, size_t __sizeof_pool);
MockExpectedCall& alarm_pool_destroy(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool);
}

namespace expect {
MockExpectedCall& alarm_pool_add_alarm_at(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& alarm_pool_add_alarm_at(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_add_alarm_at_force_in_context(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, alarm_id_t __return__);
MockExpectedCall& alarm_pool_add_alarm_at_force_in_context(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_add_alarm_in_us(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<uint64_t> us, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& alarm_pool_add_alarm_in_us(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<uint64_t> us, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_add_alarm_in_ms(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<uint32_t> ms, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& alarm_pool_add_alarm_in_ms(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<uint32_t> ms, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_cancel_alarm(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<alarm_id_t> alarm_id, _Bool __return__);
MockExpectedCall& alarm_pool_cancel_alarm(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<alarm_id_t> alarm_id, _Bool __return__);
}

namespace expect {
MockExpectedCall& add_alarm_at(CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& add_alarm_at(unsigned int __numCalls__, CppUMockGen::Parameter<absolute_time_t&> time, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& add_alarm_in_us(CppUMockGen::Parameter<uint64_t> us, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& add_alarm_in_us(unsigned int __numCalls__, CppUMockGen::Parameter<uint64_t> us, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& add_alarm_in_ms(CppUMockGen::Parameter<uint32_t> ms, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
MockExpectedCall& add_alarm_in_ms(unsigned int __numCalls__, CppUMockGen::Parameter<uint32_t> ms, CppUMockGen::Parameter<alarm_callback_t> callback, CppUMockGen::Parameter<void *> user_data, CppUMockGen::Parameter<_Bool> fire_if_past, alarm_id_t __return__);
}

namespace expect {
MockExpectedCall& cancel_alarm(CppUMockGen::Parameter<alarm_id_t> alarm_id, _Bool __return__);
MockExpectedCall& cancel_alarm(unsigned int __numCalls__, CppUMockGen::Parameter<alarm_id_t> alarm_id, _Bool __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_add_repeating_timer_us(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<int64_t> delay_us, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
MockExpectedCall& alarm_pool_add_repeating_timer_us(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<int64_t> delay_us, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
}

namespace expect {
MockExpectedCall& alarm_pool_add_repeating_timer_ms(alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<int32_t> delay_ms, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
MockExpectedCall& alarm_pool_add_repeating_timer_ms(unsigned int __numCalls__, alarm_pool_t * pool, size_t __sizeof_pool, CppUMockGen::Parameter<int32_t> delay_ms, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
}

namespace expect {
MockExpectedCall& add_repeating_timer_us(CppUMockGen::Parameter<int64_t> delay_us, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
MockExpectedCall& add_repeating_timer_us(unsigned int __numCalls__, CppUMockGen::Parameter<int64_t> delay_us, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
}

namespace expect {
MockExpectedCall& add_repeating_timer_ms(CppUMockGen::Parameter<int32_t> delay_ms, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
MockExpectedCall& add_repeating_timer_ms(unsigned int __numCalls__, CppUMockGen::Parameter<int32_t> delay_ms, CppUMockGen::Parameter<repeating_timer_callback_t> callback, CppUMockGen::Parameter<void *> user_data, repeating_timer_t * out, size_t __sizeof_out, _Bool __return__);
}

namespace expect {
MockExpectedCall& cancel_repeating_timer(repeating_timer_t * timer, size_t __sizeof_timer, _Bool __return__);
MockExpectedCall& cancel_repeating_timer(unsigned int __numCalls__, repeating_timer_t * timer, size_t __sizeof_timer, _Bool __return__);
}

