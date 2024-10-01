#pragma once

namespace mtl { namespace internal {

template <class T>
struct add_const {
    using type = const T;
};

} // namespace mtl::internal

/// @brief T を const 修飾した型
/// @tparam T 型
///
/// @details 以下の場合は const 修飾しない
///
/// 1. T が参照型である
///
/// 2. T が関数型である
///
/// 3. T が既に const 修飾されている
/// 
template <class T>
using add_const = typename internal::add_const<T>::type;

} // namespace mtl
