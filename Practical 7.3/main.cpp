#include <iostream>
#include "temperature.h"
using namespace std;

int main()
{
int choice;

    cout << "1. Static Array\n";
    cout << "2. Dynamic Queue\n";
    cout << "Enter choice: ";
    cin >> choice;

    int n;
    cout << "Enter number of values: ";
    cin >> n;


    if (choice == 1)
    {
        Celsius c[100];

        for (int i = 0; i < n; i++)
        {
            double val;
            cout << "Enter Celsius value: ";
            cin >> val;
            c[i] = Celsius(val);
        }

        cout << "\nConverted to Fahrenheit:\n";
        for (int i = 0; i < n; i++)
        {
            Fahrenheit f = c[i];
            cout << c[i].getTemp() << " C = " << f.getTemp() << " F\n";
        }

        if (c[0] == c[1])
            cout << "\nFirst two Celsius values are equal\n";
        else
            cout << "\nFirst two Celsius values are NOT equal\n";
    }
    else if (choice == 2)
    {
        Celsius* queue = new Celsius[n];

        for (int i = 0; i < n; i++)
        {
            double val;
            cout << "Enter Celsius value: ";
            cin >> val;
            queue[i] = Celsius(val);
        }

        cout << "\nFIFO Conversion (Queue):\n";
        for (int i = 0; i < n; i++)
        {
            Fahrenheit f = queue[i];
            cout << queue[i].getTemp() << " C = " << f.getTemp() << " F\n";
        }

        delete[] queue;
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
