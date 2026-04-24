#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel();
    Fuel(string f);
};

class Brand
{
protected:
    string brandName;

public:
    Brand();
    Brand(string b);
};

class Car : public Fuel, public Brand
{
public:
    Car();
    Car(string f, string b);
    void display();
};

#endif
