#include <iostream>
#include "CPoint.hpp"
#include "CRect.hpp"
#include "CSize.hpp"

using namespace std;

// C++でSwiftにあるCGPointなどの型を作成してみる
int main() {
    CPoint<int> cpoint = CPoint<int>::zero;  // CGPoint

    cout << cpoint.x << endl;
    cout << cpoint.y << endl;

    cpoint.x = 100;
    cpoint.y = 100;

    cout << "x: " << cpoint.x << endl;
    cout << "y: " << cpoint.y << endl;


    CRect<int> crect = CRect<int>::zero;  // CGRect
    cout << "originX: " << crect.origin.x << endl;
    cout << "sizeWidth: " << crect.size.width << endl;

    crect.origin = CPoint<int>(200, 300);  // CGPoint
    crect.size = CSize<int>(100, 200);  // CGSize
    cout << crect.origin.x << endl;
    cout << crect.size.width << endl;


    CPoint<float> origin = CPoint<float>::zero;  // CGPoint
    CSize<float> size = CSize<float>(100, 100);  // CGSize
    CRect<float> rect = CRect<float>(origin, size);  // CGRect

    cout << "rectHeight: " << rect.size.height << endl;

    CPoint<double> points = CPoint<double>();
    cout << points.x << endl;
    cout << points.y << endl;

    return 0;
}

