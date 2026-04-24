#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    int choice;

    cout << "1. Static Array\n";
    cout << "2. Dynamic Array\n";
    cout << "Enter choice: ";
    cin >> choice;

    int n;
    cout << "Enter number of circles: ";
    cin >> n;

    if (choice == 1)
    {
        Circle c[100];

        for (int i = 0; i < n; i++)
        {
            double r;
            cout << "Enter radius of circle " << i + 1 << ": ";
            cin >> r;
            c[i].setRadius(r);
        }

        cout << "\nAreas (Static):\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Circle " << i + 1 << " Area = " << c[i].area() << endl;
        }
    }
    else if (choice == 2)
    {
        Circle* c = new Circle[n];

        for (int i = 0; i < n; i++)
        {
            double r;
            cout << "Enter radius of circle " << i + 1 << ": ";
            cin >> r;
            c[i].setRadius(r);
        }

        cout << "\nAreas (Dynamic):\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Circle " << i + 1 << " Area = " << c[i].area() << endl;
        }

        delete[] c;
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
