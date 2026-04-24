#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    int choice;

    cout << "1. Static Method\n";
    cout << "2. Dynamic Method\n";
    cout << "Enter choice: ";
    cin >> choice;

    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    if (choice == 1)
    {
        Car cars[100];

        for (int i = 0; i < n; i++)
        {
            string fuel, brand;

            cout << "\nEnter details of Car " << i + 1 << endl;

            cout << "Brand: ";
            cin >> brand;

            cout << "Fuel Type: ";
            cin >> fuel;

            cars[i] = Car(fuel, brand);
        }

        cout << "\n--- Car Details (Static) ---\n";

        for (int i = 0; i < n; i++)
        {
            cout << "\nCar " << i + 1 << endl;
            cars[i].display();
        }
    }
    else if (choice == 2)
    {
        Car* cars = new Car[n];

        for (int i = 0; i < n; i++)
        {
            string fuel, brand;

            cout << "\nEnter details of Car " << i + 1 << endl;

            cout << "Brand: ";
            cin >> brand;

            cout << "Fuel Type: ";
            cin >> fuel;

            cars[i] = Car(fuel, brand);
        }

        cout << "\n--- Car Details (Dynamic) ---\n";

        for (int i = 0; i < n; i++)
        {
            cout << "\nCar " << i + 1 << endl;
            cars[i].display();
        }

        delete[] cars;
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
