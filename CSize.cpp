#include "CSize.hpp"

// swiftでいうCGSize.zeroを定義
// template <typename T>
// const CSize<T> CSize<T>::zero = CSize<T>(0, 0);

/* int型 */
template <>
const CSize<int> CSize<int>::zero = CSize<int>(0,0);

/* float型 */
template <>
const CSize<float> CSize<float>::zero = CSize<float>(0,0);

/* double型 */
template <>
const CSize<double> CSize<double>::zero = CSize<double>(0.0, 0.0);

