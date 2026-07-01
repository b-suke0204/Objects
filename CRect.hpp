#ifndef CRECT_H
#define CRECT_H

#include "CSize.hpp"
#include "CPoint.hpp"

// SwiftでいうCGRectを実装
template <typename T>
struct CRect {
    T x;
    T y;
    T width;
    T height;

    CRect(T x, T y, T width, T height): x(x), y(y), width(width), height(height) {}

    CRect(CPoint<T> origin, CSize<T> size): origin(origin), size(size) {}

    CSize<T> size = CSize<T>(width, height);
    CPoint<T> origin = CPoint<T>(x, y);

    // swiftでいうCGRect.zeroの定義
    static const CRect<T> zero;

};

#endif
