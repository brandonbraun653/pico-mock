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
#include "hardware/timer.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sleep_ms(uint32_t ms);

#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_TIME_HPP */
