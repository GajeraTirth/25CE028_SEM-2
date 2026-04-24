#include <iostream>
#include "hierarchy.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager m[100];

    for (int i = 0; i < n; i++)
    {
        string name, dept;
        int age, id;

        cout << "\nEnter details of Manager " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Department: ";
        cin >> dept;

        m[i] = Manager(name, age, id, dept);
    }

    cout << "\n--- All Managers ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nManager " << i + 1 << endl;
        m[i].displayManager();
    }

    int searchID;
    cout << "\nEnter Employee ID to search: ";
    cin >> searchID;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (m[i].getID() == searchID)
        {
            cout << "\nManager Found:\n";
            m[i].displayManager();
            found = true;
        }
    }

    if (!found)
    {
        cout << "Manager not found\n";
    }

    return 0;
}
