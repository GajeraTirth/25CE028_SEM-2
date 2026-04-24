#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    int choice;

    cout << "1. Static Storage\n";
    cout << "2. Dynamic Storage\n";
    cout << "Enter choice: ";
    cin >> choice;

    int n;
    cout << "Enter number of shapes: ";
    cin >> n;

    if (choice == 1)
    {
        Shape* shapes[100];

        for (int i = 0; i < n; i++)
        {
            int type;
            cout << "\n1. Rectangle  2. Circle\n";
            cout << "Choose shape: ";
            cin >> type;

            if (type == 1)
                shapes[i] = new Rectangle();
            else
                shapes[i] = new Circle();

            shapes[i]->input();
        }

        cout << "\n--- Areas (Static) ---\n";
        for (int i = 0; i < n; i++)
        {
            shapes[i]->display();
        }

        for (int i = 0; i < n; i++)
            delete shapes[i];
    }
    else if (choice == 2)
    {
        Shape** shapes = new Shape*[n];

        for (int i = 0; i < n; i++)
        {
            int type;
            cout << "\n1. Rectangle  2. Circle\n";
            cout << "Choose shape: ";
            cin >> type;

            if (type == 1)
                shapes[i] = new Rectangle();
            else
                shapes[i] = new Circle();

            shapes[i]->input();
        }

        cout << "\n--- Areas (Dynamic) ---\n";
        for (int i = 0; i < n; i++)
        {
            shapes[i]->display();
        }

        for (int i = 0; i < n; i++)
            delete shapes[i];

        delete[] shapes;
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
