#ifndef CPOINT_H
#define CPOINT_H

// CPoint型のクラス定義
template <typename T>
struct CPoint {
    T x;
    T y;

    // 構造体の初期化
    CPoint(T x, T y): x(x), y(y) {}
    CPoint(): x(0), y(0) {}  // インスタンスを作成するだけで呼び出せるようにする

    // swiftでいうCGPoint.zeroを実装
    static const CPoint<T> zero;  // 静的定数として宣言
    
};


#endif
