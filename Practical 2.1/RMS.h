#ifndef RMS_H
#define RMS_H

#include <iostream>
using namespace std;

class RMS
{
private:
    float length;
    float width;

public:
    RMS(float l = 0.0, float w = 0.0);

    float Area();
    float Perimeter();
    void updatedimensions(float l, float w);
    void display(int num);
};

#endif
