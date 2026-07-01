#include "CPoint.hpp"

// swiftでいうCGPoint.zeroの値を定義
// template <typename T>
// const CPoint<T> CPoint<T>::zero = CPoint<T>(0, 0);

// リンカエラーが発生してしまうため、下のように明示的に型を宣言する
// swiftでいうCGPoint.zeroの値を定義
/* int型 */
template<>
const CPoint<int> CPoint<int>::zero = CPoint<int>(0, 0);

/* float型 */
template<>
const CPoint<float> CPoint<float>::zero = CPoint(0.0f, 0.0f);

/* double型 */
template<>
const CPoint<double> CPoint<double>::zero = CPoint(0.0, 0.0);


