#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    int x, y;
    cout << "Enter initial x and y: ";
    cin >> x >> y;

    Point p(x, y);

    int dx1, dy1, dx2, dy2;
    cout << "Enter dx1 dy1: ";
    cin >> dx1 >> dy1;
    cout << "Enter dx2 dy2: ";
    cin >> dx2 >> dy2;

    p.move(dx1, dy1).move(dx2, dy2);

    cout << "After chaining: ";
    p.display();

    int dx3, dy3;
    cout << "Enter dx and dy for pointer update: ";
    cin >> dx3 >> dy3;

    updatePoint(&p, dx3, dy3);

    cout << "Final: ";
    p.display();

    return 0;
}
