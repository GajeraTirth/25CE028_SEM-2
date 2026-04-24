#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& os)
{
    os << "₹";
    return os;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[100];
    int marks[100];
    double fees[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];

        cout << "Fees: ";
        cin >> fees[i];
    }

    cout << endl;

    cout << setfill('=') << setw(55) << "" << endl;

    cout << setfill(' ')
         << setw(15) << "Name"
         << setw(15) << "Marks"
         << setw(20) << "Fees" << endl;

    cout << setfill('=') << setw(55) << "" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << setfill(' ')
             << setw(15) << name[i]
             << setw(15) << marks[i]
             << setw(10) << currency << fixed << setprecision(2) << fees[i]
             << endl;
    }

    cout << setfill('=') << setw(55) << "" << endl;

    return 0;
}
