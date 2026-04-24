#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

Point& Point::move(int dx, int dy) {
    this->x += dx;
    this->y += dy;
    return *this;
}

void Point::display() const {
    cout << "Point (" << x << ", " << y << ")" << endl;
}

void updatePoint(Point* p, int dx, int dy) {
    if (p != nullptr) {
        p->move(dx, dy);
    }
}
