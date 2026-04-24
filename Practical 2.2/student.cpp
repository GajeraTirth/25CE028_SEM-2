#include "student.h"

void student::new_student()
{
    cout << "Enter student name -> ";
    cin >> name;

    cout << "Enter student ID -> ";
    cin >> id;

    cout << "Enter mark of subject 1 -> ";
    cin >> m1;

    cout << "Enter mark of subject 2 -> ";
    cin >> m2;

    cout << "Enter mark of subject 3 -> ";
    cin >> m3;
}

int student::student_result(int x)
{
    if (id == x)
    {
        cout << "\nStudent Name -> " << name << endl;
        cout << "Marks of s1 -> " << m1 << endl;
        cout << "Marks of s2 -> " << m2 << endl;
        cout << "Marks of s3 -> " << m3 << endl;

        avg = (m1 + m2 + m3) / 3.0;

        cout << "Average mark -> " << avg << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
