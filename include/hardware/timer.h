/******************************************************************************
 *  File Name:
 *    timer.h
 *
 *  Description:
 *    Pico SDK Timer Mocking
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_TIMER_H
#define PICO_MOCK_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/

#include "pico.h"

/*---------------------------------------------------------------------------
Macros
---------------------------------------------------------------------------*/
#ifndef PARAM_ASSERTIONS_ENABLED_TIMER
#define PARAM_ASSERTIONS_ENABLED_TIMER 0
#endif

/*---------------------------------------------------------------------------
Types
---------------------------------------------------------------------------*/

typedef void (*hardware_alarm_callback_t)(uint alarm_num);

/*---------------------------------------------------------------------------
Public Functions
---------------------------------------------------------------------------*/
uint32_t time_us_32();
uint64_t time_us_64();
void busy_wait_us_32(uint32_t delay_us);
void busy_wait_us(uint64_t delay_us);
void busy_wait_until(absolute_time_t t);
bool time_reached(absolute_time_t t);
void hardware_alarm_claim(uint alarm_num);
void hardware_alarm_unclaim(uint alarm_num);
int hardware_alarm_claim_unused(bool required);
bool hardware_alarm_set_target(uint alarm_num, absolute_time_t t);
void hardware_alarm_cancel(uint alarm_num);
void hardware_alarm_force_irq(uint alarm_num);

#ifdef __cplusplus
}
#endif
#endif /* !PICO_MOCK_TIMER_H */
