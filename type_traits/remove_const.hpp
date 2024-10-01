#pragma once

namespace mtl { namespace internal {

template <class T>
struct remove_const {
    using type = T;
};

template <class T>
struct remove_const<const T> {
    using type = T;
};

} // namespace mtl::internal

/// @brief T に含まれる最上位の const 修飾子を除去した型
/// @tparam T 型
template <class T>
using remove_const = typename internal::remove_const<T>::type;

} // namespace mtl
