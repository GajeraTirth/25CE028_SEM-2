#include <iostream>
#include "calculator.h"
using namespace std;

Calculator::Calculator()
{
    count = 0;
}

int Calculator::add(int a, int b)
{
    return a + b;
}

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::add(int a, double b)
{
    return a + b;
}

double Calculator::add(double a, int b)
{
    return a + b;
}

void Calculator::store(double value)
{
    results[count++] = value;
}

void Calculator::display()
{
    cout << "\nResults:\n";
    for (int i = 0; i < count; i++)
    {
        cout << "Result " << i + 1 << " = " << results[i] << endl;
    }
}
