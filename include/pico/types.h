/******************************************************************************
 *  File Name:
 *    types.h
 *
 *  Description:
 *    Mocked types for the Pico SDK
 *
 *  2024 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef PICO_MOCK_TYPES_HPP
#define PICO_MOCK_TYPES_HPP

#ifdef __cplusplus
extern "C"
{
#endif

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include "pico/assert.h"

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef unsigned int uint;

/*! \typedef absolute_time_t
    \brief An opaque 64 bit timestamp in microseconds

    The type is used instead of a raw uint64_t to prevent accidentally passing relative times or times in the wrong
    time units where an absolute time is required. It is equivalent to uint64_t in release builds.

    \see to_us_since_boot()
    \see update_us_since_boot()
    \ingroup timestamp
*/
#ifdef NDEBUG
typedef uint64_t absolute_time_t;
#else
typedef struct {
    uint64_t _private_us_since_boot;
} absolute_time_t;
#endif


#ifdef __cplusplus
}
#endif
#endif  /* !PICO_MOCK_TYPES_HPP */
