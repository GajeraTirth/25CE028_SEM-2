#include "RMS.h"

RMS::RMS(float l, float w)
{
    length = l;
    width = w;
}

float RMS::Area()
{
    return length * width;
}

float RMS::Perimeter()
{
    return 2 * (length + width);
}

void RMS::updatedimensions(float l, float w)
{
    length = l;
    width = w;
}

void RMS::display(int num)
{
    cout << "\nRectangle " << num + 1 << endl;
    cout << "Length     : " << length << endl;
    cout << "Width      : " << width << endl;
    cout << "Area       : " << Area() << endl;
    cout << "Perimeter  : " << Perimeter() << endl;
}
