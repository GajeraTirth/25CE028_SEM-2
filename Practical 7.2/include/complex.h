#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double r, double i);

    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);

    void input();
    void display();
};

#endif
