#include "CRect.hpp"

// CRect(0, 0, 0, 0)でもいい
// template <typename T>
// const CRect<T> CRect<T>::zero = CRect<T>(CPoint<T>::zero, CSize<T>::zero);

/* int型 */
template<>
const CRect<int> CRect<int>::zero = CRect<int>(CPoint<int>::zero, CSize<int>::zero);

/* float型 */
template<>
const CRect<float> CRect<float>::zero = CRect<float>(CPoint<float>::zero, CSize<float>::zero);

/* double型 */
template<>
const CRect<double> CRect<double>::zero = CRect<double>(CPoint<double>::zero, CSize<double>::zero);



