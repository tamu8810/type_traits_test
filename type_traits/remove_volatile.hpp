#pragma once

namespace mtl { namespace internal {

template <class T>
struct remove_volatile {
    using type = T;
};

template <class T>
struct remove_volatile<volatile T> {
    using type = T;
};

} // namespace mtl::internal

/// @brief T に含まれる最上位の volatile 修飾子を除去した型
/// @tparam T 型
template <class T>
using remove_volatile = typename internal::remove_volatile<T>::type;

} // namespace mtl
