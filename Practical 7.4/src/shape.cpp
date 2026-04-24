#include <iostream>
#include "shape.h"
using namespace std;

// Rectangle
void Rectangle::input()
{
    cout << "Enter length and width: ";
    cin >> length >> width;
}

double Rectangle::area()
{
    return length * width;
}

void Rectangle::display()
{
    cout << "Rectangle Area = " << area() << endl;
}

// Circle
void Circle::input()
{
    cout << "Enter radius: ";
    cin >> radius;
}

double Circle::area()
{
    return 3.14159 * radius * radius;
}

void Circle::display()
{
    cout << "Circle Area = " << area() << endl;
}
