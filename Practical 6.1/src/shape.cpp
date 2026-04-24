#include "shape.h"

void Shape::setRadius(double r)
{
    radius = r;
}

double Shape::getRadius()
{
    return radius;
}

double Circle::area()
{
    return 3.14159 * radius * radius;
}
