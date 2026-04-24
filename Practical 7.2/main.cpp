#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    int n;

    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex c[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter real and imaginary part for complex " << i + 1 << ": ";
        c[i].input();
    }

    cout << "\nAddition Results:\n";
    for (int i = 0; i < n - 1; i++)
    {
        Complex res = c[i] + c[i + 1];
        c[i].display();
        cout << " + ";
        c[i + 1].display();
        cout << " = ";
        res.display();
        cout << endl;
    }

    cout << "\nSubtraction Results:\n";
    for (int i = 0; i < n - 1; i++)
    {
        Complex res = c[i] - c[i + 1];
        c[i].display();
        cout << " - ";
        c[i + 1].display();
        cout << " = ";
        res.display();
        cout << endl;
    }

    return 0;
}
