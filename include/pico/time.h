/******************************************************************************
 *  File Name:
 *    time.h
 *
 *  Description:
 *    Mocked time.h file for testing
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_TIME_HPP
#define PICO_MOCK_TIME_HPP

#include "pico.h"
#include "types.h"
#include "hardware/timer.h"

#ifdef __cplusplus
extern "C"
{
#endif


  typedef uint32_t alarm_pool_t;
  typedef int32_t  alarm_id_t;
  typedef int64_t ( *alarm_callback_t )( alarm_id_t id, void *user_data );

  typedef uint32_t repeating_timer_t;
  typedef bool ( *repeating_timer_callback_t )( repeating_timer_t *rt );

  void            sleep_ms( uint32_t ms );
  absolute_time_t get_absolute_time( void );
  uint32_t        us_to_ms( uint64_t us );
  uint32_t        to_ms_since_boot( absolute_time_t t );
  absolute_time_t delayed_by_us( const absolute_time_t t, uint64_t us );
  absolute_time_t delayed_by_ms( const absolute_time_t t, uint32_t ms );
  absolute_time_t make_timeout_time_us( uint64_t us );
  absolute_time_t make_timeout_time_ms( uint32_t ms );
  int64_t         absolute_time_diff_us( absolute_time_t from, absolute_time_t to );
  absolute_time_t absolute_time_min( absolute_time_t a, absolute_time_t b );
  bool            is_at_the_end_of_time( absolute_time_t t );
  bool            is_nil_time( absolute_time_t t );
  void            sleep_until( absolute_time_t target );
  void            sleep_us( uint64_t us );
  void            sleep_ms( uint32_t ms );
  bool            best_effort_wfe_or_timeout( absolute_time_t timeout_timestamp );
  void            alarm_pool_init_default( void );
  alarm_pool_t   *alarm_pool_get_default( void );
  alarm_pool_t   *alarm_pool_create( uint hardware_alarm_num, uint max_timers );
  alarm_pool_t   *alarm_pool_create_with_unused_hardware_alarm( uint max_timers );
  uint            alarm_pool_hardware_alarm_num( alarm_pool_t *pool );
  uint            alarm_pool_core_num( alarm_pool_t *pool );
  void            alarm_pool_destroy( alarm_pool_t *pool );
  alarm_id_t      alarm_pool_add_alarm_at( alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback, void *user_data,
                                           bool fire_if_past );
  alarm_id_t      alarm_pool_add_alarm_at_force_in_context( alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback,
                                                            void *user_data );
  alarm_id_t      alarm_pool_add_alarm_in_us( alarm_pool_t *pool, uint64_t us, alarm_callback_t callback, void *user_data,
                                              bool fire_if_past );
  alarm_id_t      alarm_pool_add_alarm_in_ms( alarm_pool_t *pool, uint32_t ms, alarm_callback_t callback, void *user_data,
                                              bool fire_if_past );
  bool            alarm_pool_cancel_alarm( alarm_pool_t *pool, alarm_id_t alarm_id );
  alarm_id_t      add_alarm_at( absolute_time_t time, alarm_callback_t callback, void *user_data, bool fire_if_past );
  alarm_id_t      add_alarm_in_us( uint64_t us, alarm_callback_t callback, void *user_data, bool fire_if_past );
  alarm_id_t      add_alarm_in_ms( uint32_t ms, alarm_callback_t callback, void *user_data, bool fire_if_past );
  bool            cancel_alarm( alarm_id_t alarm_id );
  bool            alarm_pool_add_repeating_timer_us( alarm_pool_t *pool, int64_t delay_us, repeating_timer_callback_t callback,
                                                     void *user_data, repeating_timer_t *out );
  bool            alarm_pool_add_repeating_timer_ms( alarm_pool_t *pool, int32_t delay_ms, repeating_timer_callback_t callback,
                                                     void *user_data, repeating_timer_t *out );
  bool add_repeating_timer_us( int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out );
  bool add_repeating_timer_ms( int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out );
  bool cancel_repeating_timer( repeating_timer_t *timer );

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_TIME_HPP */
