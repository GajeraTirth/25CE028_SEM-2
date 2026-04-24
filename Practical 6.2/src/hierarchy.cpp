#include <iostream>
#include "hierarchy.h"
using namespace std;

Person::Person()
{
    name = "";
    age = 0;
}

Person::Person(string n, int a)
{
    name = n;
    age = a;
}

void Person::displayPerson()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

Employee::Employee() : Person()
{
    empID = 0;
}

Employee::Employee(string n, int a, int id) : Person(n, a)
{
    empID = id;
}

void Employee::displayEmployee()
{
    displayPerson();
    cout << "Employee ID: " << empID << endl;
}

Manager::Manager() : Employee()
{
    department = "";
}

Manager::Manager(string n, int a, int id, string dept)
    : Employee(n, a, id)
{
    department = dept;
}

void Manager::displayManager()
{
    displayEmployee();
    cout << "Department: " << department << endl;
}

int Manager::getID()
{
    return empID;
}
