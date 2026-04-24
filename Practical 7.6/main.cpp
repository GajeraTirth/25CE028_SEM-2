#include <iostream>
using namespace std;

// -------- Case 1: WITHOUT virtual destructor --------
class Base1
{
public:
    ~Base1()
    {
        cout << "Base1 Destructor called\n";
    }
};

class Derived1 : public Base1
{
private:
    int* data;

public:
    Derived1()
    {
        data = new int[5];
        cout << "Derived1 Constructor: Memory allocated\n";
    }

    ~Derived1()
    {
        delete[] data;
        cout << "Derived1 Destructor: Memory freed\n";
    }
};

// -------- Case 2: WITH virtual destructor --------
class Base2
{
public:
    virtual ~Base2()
    {
        cout << "Base2 Destructor called\n";
    }
};

class Derived2 : public Base2
{
private:
    int* data;

public:
    Derived2()
    {
        data = new int[5];
        cout << "Derived2 Constructor: Memory allocated\n";
    }

    ~Derived2()
    {
        delete[] data;
        cout << "Derived2 Destructor: Memory freed\n";
    }
};

int main()
{
    cout << "----- Case 1: Without Virtual Destructor -----\n";
    Base1* ptr1 = new Derived1();
    delete ptr1;

    cout << "\n----- Case 2: With Virtual Destructor -----\n";
    Base2* ptr2 = new Derived2();
    delete ptr2;

    return 0;
}
