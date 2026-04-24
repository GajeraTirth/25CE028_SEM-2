#ifndef HIERARCHY_H
#define HIERARCHY_H

#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person();
    Person(string n, int a);
    void displayPerson();
};

class Employee : public Person
{
protected:
    int empID;

public:
    Employee();
    Employee(string n, int a, int id);
    void displayEmployee();
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager();
    Manager(string n, int a, int id, string dept);
    void displayManager();
    int getID();
};

#endif
