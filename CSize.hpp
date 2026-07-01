#ifndef CSIZE_H
#define CSIZE_H

// swiftでいうCGSizeを実装
template <typename T>
struct CSize {
    T width;
    T height;

    CSize(T width, T height): width(width), height(height) {}

    // SwiftでいうCGSize.zeroの定義
    static const CSize<T> zero;

};


#endif