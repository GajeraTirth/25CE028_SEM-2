#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
    Calculator calc;

    int choice;

    do
    {
        cout << "\n1. Add int + int\n";
        cout << "2. Add double + double\n";
        cout << "3. Add int + double\n";
        cout << "4. Add double + int\n";
        cout << "5. Display Results\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int a, b;
            cin >> a >> b;
            double res = calc.add(a, b);
            calc.store(res);
        }
        else if (choice == 2)
        {
            double a, b;
            cin >> a >> b;
            double res = calc.add(a, b);
            calc.store(res);
        }
        else if (choice == 3)
        {
            int a;
            double b;
            cin >> a >> b;
            double res = calc.add(a, b);
            calc.store(res);
        }
        else if (choice == 4)
        {
            double a;
            int b;
            cin >> a >> b;
            double res = calc.add(a, b);
            calc.store(res);
        }
        else if (choice == 5)
        {
            calc.display();
        }

    } while (choice != 6);

    return 0;
}
