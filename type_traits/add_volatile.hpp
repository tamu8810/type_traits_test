#pragma once

namespace mtl { namespace internal {

template <class T>
struct add_volatile {
    using type = volatile T;
};

} // namespace mtl::internal

/// @brief T を volatile 修飾した型
/// @tparam T 型
///
/// @details 以下の場合は volatile 修飾しない
///
/// 1. T が参照型である
///
/// 2. T が関数型である
///
/// 3. T が既に volatile 修飾されている
/// 
template <class T>
using add_volatile = typename internal::add_volatile<T>::type;

} // namespace mtl
