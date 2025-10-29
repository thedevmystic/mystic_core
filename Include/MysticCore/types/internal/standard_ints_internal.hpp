/**
 * Copyright 2025 Suryansh Singh
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ------------------------------------------------------------------------------------------------------
 *
 * @path [ROOT]/include/mystic/types/internal/standard_ints_internal.hpp
 * @file standard_ints_internal.hpp
 * @brief Internal implementation of standard ints types.
 *
 * @author TheDevMystic (Surya)
 * @copyright 2025 Suryansh Singh Apache-2.0 License
 *
 * SPDX-FileCopyrightText: 2025 Suryansh Singh
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "mystic/architecture/compiler_detection.hpp"

/**
 * @macro MYSTIC_INTERNAL_BYTE_SIZE_ONE
 * @brief One byte size data holding capacity.
 */
#define MYSTIC_INTERNAL_BYTE_SIZE_ONE 1

/**
 * @macro MYSTIC_INTERNAL_BYTE_SIZE_TWO
 * @brief Two byte size data holding capacity.
 */
#define MYSTIC_INTERNAL_BYTE_SIZE_TWO 2

/**
 * @macro MYSTIC_INTERNAL_BYTE_SIZE_FOUR
 * @brief Four byte size data holding capacity.
 */
#define MYSTIC_INTERNAL_BYTE_SIZE_FOUR 4

/**
 * @macro MYSTIC_INTERNAL_BYTE_SIZE_EIGHT
 * @brief Eight byte size data holding capacity.
 */
#define MYSTIC_INTERNAL_BYTE_SIZE_EIGHT 8

/**
 * @namespace mystic::types::internal
 * @brief Internal implementation of standard int types.
 *
 * This namespace contains internal type implementations.
 * **This header should not be used directly.** As it is
 * subjected to be changed without notice.
 */
namespace mystic::types::internal {

/**
 * @brief Exact width integer types, these are exactly specified bits.
 * For Clang/GCC/ICPX we can use compiler specific __SIZEOF_N__ for fixed width ints.
 */
#if (MYSTIC_INTERNAL_ARCH_COMPILER == MYSTIC_INTERNAL_ARCH_COMPILER_GCC) /* GCC Compiler */   \
    || (MYSTIC_INTERNAL_ARCH_COMPILER == MYSTIC_INTERNAL_ARCH_COMPILER_CLANG) /* Clang Compiler */ \
    || (MYSTIC_INTERNAL_ARCH_COMPILER == MYSTIC_INTERNAL_ARCH_COMPILER_ICPX)  /* Intel Compiler */

/**
 * @brief 8-bit integer types.
 */
# if (__SIZEOF__CHAR__ == MYSTIC_INTERNAL_BYTE_SIZE_ONE)
   using int8_t  = signed char;
   using uint8_t = unsigned char;
# else
#  error "[Mystic Framework] - Types - Fixed width 8-bit integer types is not available."
# endif

/**
 * @brief 16-bit integer types.
 */
# if (__SIZEOF__SHORT__ == MYSTIC_INTERNAL_BYTE_SIZE_TWO)
   using int16_t  = signed short;
   using uint16_t = unsigned short;
# else
#  error "[Mystic Framework] - Types - Fixed width 16-bit integer types is not available."
# endif

/**
 * @brief 32-bit integer types.
 */
# if (__SIZEOF__INT__ == MYSTIC_INTERNAL_BYTE_SIZE_FOUR)
   using int32_t  = signed int;
   using uint32_t = unsigned int;
# elif (__SIZEOF__LONG__ == MYSTIC_INTERNAL_BYTE_SIZE_FOUR)
   using int32_t  = signed long;
   using uint32_t = unsigned long;
# else
#  error "[Mystic Framework] - Types - Fixed width 32-bit integer types is not available."
# endif

/**
 * @brief 64-bit integer types.
 */
# if (__SIZEOF__LONG_LONG__ == MYSTIC_INTERNAL_BYTE_SIZE_EIGHT)
   using int64_t  = signed long long;
   using uint64_t = unsigned long long;
# elif (__SIZEOF__LONG__ == MYSTIC_INTERNAL_BYTE_SIZE_EIGHT)
   using int64_t  = signed long;
   using uint64_t = unsigned long;
# else
#  error "[Mystic Framework] - Types - Fixed width 64-bit integer types is not available."
# endif

#else /* For all other compilers */

/**
 * @brief 8-bit integer types.
 */
# if (sizeof(char) == MYSTIC_INTERNAL_BYTE_SIZE_ONE)
   using int8_t  = signed char;
   using uint8_t = unsigned char;
# else
#  error "[Mystic Framework] - Types - Fixed width 8-bit integer types is not available."
# endif
   
/**
 * @brief 16-bit integer types.
 */
# if (sizeof(short) == MYSTIC_INTERNAL_BYTE_SIZE_TWO)
   using int16_t  = signed short;
   using uint16_t = unsigned short;
# else
#  error "[Mystic Framework] - Types - Fixed width 16-bit integer types is not available."
# endif

/**
 * @brief 32-bit integer types.
 */
# if (sizeof(int) == MYSTIC_INTERNAL_BYTE_SIZE_FOUR)
   using int32_t  = signed int;
   using uint32_t = unsigned int;
# elif (sizeof(long) == MYSTIC_INTERNAL_BYTE_SIZE_FOUR)
   using int32_t  = signed long;
   using uint32_t = unsigned long;
# else
#  error "[Mystic Framework] - Types - Fixed width 32-bit integer types is not available."
# endif

/**
 * @brief 64-bit integer types.
 */
# if (sizeof(long long) == MYSTIC_INTERNAL_BYTE_SIZE_EIGHT)
   using int64_t  = signed long long;
   using uint64_t = unsigned long long;
# elif (sizeof(long) == MYSTIC_INTERNAL_BYTE_SIZE_EIGHT)
   using int64_t  = signed long;
   using uint64_t = unsigned long;
# else
#  error "[Mystic Framework] - Types - Fixed width 64-bit integer types is not available."
# endif

#endif

/**
 * @brief Minimum width integer, these are atleast specified bits.
 * On a standard platform these are mapped to exact width integers.
 */

/**
 * @brief 8-bit atleast integer types.
 */
using int_least8_t  = int8_t;
using uint_least8_t = uint8_t;

/**
 * @brief 16-bit atleast integer types.
 */
using int_least16_t  = int16_t;
using uint_least16_t = uint16_t;

/**
 * @brief 32-bit atleast integer types.
 */
using int_least32_t  = int32_t;
using uint_least32_t = uint32_t;

/**
 * @brief 64-bit atleast integer types.
 */
using int_least64_t  = int64_t;
using uint_least64_t = uint64_t;

/**
 * @brief Fast variant integer, these are fastest for specified bits.
 * Smaller 8-bit/16-bit is aliased to 32-bit, as these are the fastest.
 */

/**
 * @brief 8-bit fastest integer types.
 */
using int_fast8_t  = int32_t;
using uint_fast8_t = uint32_t;

/**
 * @brief 16-bit fastest integer types.
 */
using int_fast16_t  = int32_t;
using uint_fast16_t = uint32_t;

/**
 * @brief 32-bit fastest integer types.
 */
using int_fast32_t  = int32_t;
using uint_fast32_t = uint32_t;

/**
 * @brief 64-bit fastest integer types.
 */
using int_fast64_t  = int64_t;
using uint_fast64_t = uint64_t;

} // namespace mystic::types::internal

/**
 * @brief Clean up extra macros, so global namespace remain clean.
 */
#undef MYSTIC_INTERNAL_BYTE_SIZE_ONE
#undef MYSTIC_INTERNAL_BYTE_SIZE_TWO
#undef MYSTIC_INTERNAL_BYTE_SIZE_FOUR
#undef MYSTIC_INTERNAL_BYTE_SIZE_EIGHT

