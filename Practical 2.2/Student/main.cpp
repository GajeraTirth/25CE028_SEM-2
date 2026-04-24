#include "../student.h"

int main()
{
    student s[100];
    int last = 0, n, ID, i;

M:
    cout << "\n1. Enter student detail\n";
    cout << "2. Show Result\n";
    cout << "3. Exit\n";
    cout << "Enter your choice -> ";
    cin >> n;

    switch(n)
    {
        case 1:
            s[last].new_student();
            last++;
            goto M;

        case 2:
            if (last == 0)
            {
                cout << "\nNo student result available\n";
                goto M;
            }

            cout << "\nEnter student ID -> ";
            cin >> ID;

            for(i = 0; i < last; i++)
            {
                if(s[i].student_result(ID) == 1)
                {
                    break;
                }
            }

            if(i == last)
            {
                cout << "\nStudent result not found\n";
            }

            goto M;

        case 3:
            goto N;

        default:
            cout << "\nNo such choice is available\n";
            goto M;
    }

N:
    cout << "\nThank you for visiting\n";
    return 0;
}
