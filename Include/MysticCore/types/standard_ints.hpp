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
 * @path [ROOT]/include/mystic/types/standard_ints.hpp
 * @file standard_ints.hpp
 * @brief Defines fixed-width integers.
 *
 * @details
 * This header provides fixed-width, minimum-width and fast variant of fundamental integral
 * primitives. This header is similar to `cstdint` but for Mystic Framework.
 * 
 * This header file provides,
 * 1. Fixed-width integers.
 * 2. Minimum width integers.
 * 3. Fast variant integers.
 *
 * Fixed-width integers are named,
 * `mystic::types::intN_t` & `mystic::types::uintN_t`.
 * Minimum width integers are named,
 * `mystic::types::int_leastN_t` & `mystic::types::uint_leastN_t`.
 * Fast variant integers are named,
 * `mystic::types::int_fastN_t` & `mystic::types::uint_fastN_t`.
 *
 * @code {.cpp}
 * // Example
 * #include "mystic/types/standard_ints.hpp"
 *
 * int main() {
 *     // Fixed widths
 *     mystic::types::int32_t value1 = 1234;
 *     mystic::types::uint32_t value2 = 2025;
 *
 *     // Minimum widths
 *     mystic::types::int_least32_t value3 = 8910;
 *     mystic::types::uint_least32_t value4 = 2344;
 *
 *     // Fast variants
 *     mystic::types::int_fast32_t value5 = 8888;
 *     mystic::types::uint_fast32_t value6 = 6969;
 *     
 *     return 0;
 * }
 * @endcode
 *
 * @author TheDevMystic (Surya)
 * @copyright 2025 Suryansh Singh Apache-2.0 License
 *
 * SPDX-FileCopyrightText: 2025 Suryansh Singh
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "mystic/types/internal/standard_ints_internal.hpp"

/**
 * @namespace mystic::types
 * @ingroup Types
 * @brief Basic and high level data types.
 *
 * This namespace contains all data types from low level
 * to high level.
 */
namespace mystic::types {

/**
 * @brief Signed fixed-width integers types.
 */
using int8_t  = ::mystic::types::internal::int8_t;
using int16_t = ::mystic::types::internal::int16_t;
using int32_t = ::mystic::types::internal::int32_t;
using int64_t = ::mystic::types::internal::int64_t;

/**
 * @brief Unsigned fixed-width integers types.
 */
using uint8_t  = ::mystic::types::internal::uint8_t;
using uint16_t = ::mystic::types::internal::uint16_t;
using uint32_t = ::mystic::types::internal::uint32_t;
using uint64_t = ::mystic::types::internal::uint64_t;

/**
 * @brief Signed minimum-width integers types.
 */
using int_least8_t  = ::mystic::types::internal::int_least8_t;
using int_least16_t = ::mystic::types::internal::int_least16_t;
using int_least32_t = ::mystic::types::internal::int_least32_t;
using int_least64_t = ::mystic::types::internal::int_least64_t;

/**
 * @brief Unsigned minimum-width integers types.
 */
using uint_least8_t  = ::mystic::types::internal::uint8_t;
using uint_least16_t = ::mystic::types::internal::uint_least16_t;
using uint_least32_t = ::mystic::types::internal::uint_least32_t;
using uint_least64_t = ::mystic::types::internal::uint_least64_t;

/**
 * @brief Signed fast variant integers types.
 */
using int_fast8_t  = ::mystic::types::internal::int_fast8_t;
using int_fast16_t = ::mystic::types::internal::int_fast16_t;
using int_fast32_t = ::mystic::types::internal::int_fast32_t;
using int_fast64_t = ::mystic::types::internal::int_fast64_t;

/**
 * @brief Unsigned fast variant integers types.
 */
using uint_fast8_t  = ::mystic::types::internal::uint8_t;
using uint_fast16_t = ::mystic::types::internal::uint_fast16_t;
using uint_fast32_t = ::mystic::types::internal::uint_fast32_t;
using uint_fast64_t = ::mystic::types::internal::uint_fast64_t;

} // namespace mystic::types

