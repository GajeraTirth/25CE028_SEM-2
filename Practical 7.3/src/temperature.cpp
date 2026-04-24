#include "temperature.h"

// Celsius
Celsius::Celsius()
{
    temp = 0;
}

Celsius::Celsius(double t)
{
    temp = t;
}

double Celsius::getTemp()
{
    return temp;
}

bool Celsius::operator==(Celsius c)
{
    return temp == c.temp;
}

// Fahrenheit
Fahrenheit::Fahrenheit()
{
    temp = 0;
}

Fahrenheit::Fahrenheit(double t)
{
    temp = t;
}

double Fahrenheit::getTemp()
{
    return temp;
}

bool Fahrenheit::operator==(Fahrenheit f)
{
    return temp == f.temp;
}

// Conversion Celsius -> Fahrenheit
Celsius::operator Fahrenheit()
{
    double f = (temp * 9 / 5) + 32;
    return Fahrenheit(f);
}

// Conversion Fahrenheit -> Celsius
Fahrenheit::operator Celsius()
{
    double c = (temp - 32) * 5 / 9;
    return Celsius(c);
}
