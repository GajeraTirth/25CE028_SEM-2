#include <iostream>
#include "car.h"
using namespace std;

Fuel::Fuel()
{
    fuelType = "";
}

Fuel::Fuel(string f)
{
    fuelType = f;
}

Brand::Brand()
{
    brandName = "";
}

Brand::Brand(string b)
{
    brandName = b;
}

Car::Car() : Fuel(), Brand()
{
}

Car::Car(string f, string b) : Fuel(f), Brand(b)
{
}

void Car::display()
{
    cout << "Brand: " << brandName << endl;
    cout << "Fuel Type: " << fuelType << endl;
}
