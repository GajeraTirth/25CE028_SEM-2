#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
private:
    double results[100];
    int count;

public:
    Calculator();

    int add(int a, int b);
    double add(double a, double b);
    double add(int a, double b);
    double add(double a, int b);

    void store(double value);
    void display();
};

#endif
