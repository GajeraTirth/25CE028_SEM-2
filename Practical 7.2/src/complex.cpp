#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex &c)
{
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex &c)
{
    return Complex(real - c.real, imag - c.imag);
}

void Complex::input()
{
    cin >> real >> imag;
}

void Complex::display()
{
    cout << real;
    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";
    cout << endl;
}
