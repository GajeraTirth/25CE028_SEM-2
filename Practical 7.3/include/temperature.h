#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Fahrenheit;

class Celsius
{
private:
    double temp;

public:
    Celsius();
    Celsius(double t);

    double getTemp();

    operator Fahrenheit();
    bool operator==(Celsius c);
};

class Fahrenheit
{
private:
    double temp;

public:
    Fahrenheit();
    Fahrenheit(double t);

    double getTemp();

    operator Celsius();
    bool operator==(Fahrenheit f);
};

#endif
