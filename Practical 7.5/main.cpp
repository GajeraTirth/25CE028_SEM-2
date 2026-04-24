#include <iostream>
#include "grading.h"
using namespace std;

int main()
{
    int choice;

    cout << "1. Static Storage\n";
    cout << "2. Dynamic Storage\n";
    cout << "Enter choice: ";
    cin >> choice;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (choice == 1)
    {
        Grading* students[100];

        for (int i = 0; i < n; i++)
        {
            int type;
            cout << "\n1. Undergraduate  2. Postgraduate\n";
            cout << "Enter type: ";
            cin >> type;

            if (type == 1)
                students[i] = new Undergraduate();
            else
                students[i] = new Postgraduate();

            students[i]->input();
            students[i]->computeGrade();
        }

        cout << "\n--- Results (Static) ---\n";
        for (int i = 0; i < n; i++)
        {
            students[i]->display();
        }

        for (int i = 0; i < n; i++)
            delete students[i];
    }
    else if (choice == 2)
    {
        Grading** students = new Grading*[n];

        for (int i = 0; i < n; i++)
        {
            int type;
            cout << "\n1. Undergraduate  2. Postgraduate\n";
            cout << "Enter type: ";
            cin >> type;

            if (type == 1)
                students[i] = new Undergraduate();
            else
                students[i] = new Postgraduate();

            students[i]->input();
            students[i]->computeGrade();
        }

        cout << "\n--- Results (Dynamic) ---\n";
        for (int i = 0; i < n; i++)
        {
            students[i]->display();
        }

        for (int i = 0; i < n; i++)
            delete students[i];

        delete[] students;
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
