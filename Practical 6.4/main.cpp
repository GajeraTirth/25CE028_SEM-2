#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    int choice;

    cout << "1. Savings Account\n";
    cout << "2. Current Account\n";
    cout << "Enter choice: ";
    cin >> choice;

    int accNo;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (choice == 1)
    {
        double rate;
        cout << "Enter Interest Rate: ";
        cin >> rate;

        SavingsAccount acc(accNo, balance, rate);

        int op;
        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. History\n5. Undo\n6. Exit\n";
            cout << "Enter operation: ";
            cin >> op;

            if (op == 1)
            {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                acc.deposit(amt);
            }
            else if (op == 2)
            {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                acc.withdraw(amt);
            }
            else if (op == 3)
            {
                acc.display();
            }
            else if (op == 4)
            {
                acc.showHistory();
            }
            else if (op == 5)
            {
                acc.undo();
            }

        } while (op != 6);
    }
    else if (choice == 2)
    {
        double od;
        cout << "Enter Overdraft Limit: ";
        cin >> od;

        CurrentAccount acc(accNo, balance, od);

        int op;
        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. History\n5. Undo\n6. Exit\n";
            cout << "Enter operation: ";
            cin >> op;

            if (op == 1)
            {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                acc.deposit(amt);
            }
            else if (op == 2)
            {
                double amt;
                cout << "Enter amount: ";
                cin >> amt;
                acc.withdraw(amt);
            }
            else if (op == 3)
            {
                acc.display();
            }
            else if (op == 4)
            {
                acc.showHistory();
            }
            else if (op == 5)
            {
                acc.undo();
            }

        } while (op != 6);
    }
    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}
