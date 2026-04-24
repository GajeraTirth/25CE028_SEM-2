#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual double area() = 0;
    virtual void input() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    void input();
    double area();
    void display();
};

class Circle : public Shape
{
private:
    double radius;

public:
    void input();
    double area();
    void display();
};

#endif
