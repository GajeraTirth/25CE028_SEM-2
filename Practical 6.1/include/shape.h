#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    double radius;

public:
    void setRadius(double r);
    double getRadius();
};

class Circle : public Shape
{
public:
    double area();
};

#endif
