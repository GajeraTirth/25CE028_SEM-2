#include <iostream>
#include "account.h"
using namespace std;

Account::Account()
{
    accNo = 0;
    balance = 0;
    top = -1;
}

Account::Account(int no, double bal)
{
    accNo = no;
    balance = bal;
    top = -1;
}

void Account::deposit(double amt)
{
    balance += amt;
    history[++top] = "Deposit " + to_string(amt);
}

void Account::withdraw(double amt)
{
    if (amt <= balance)
    {
        balance -= amt;
        history[++top] = "Withdraw " + to_string(amt);
    }
    else
    {
        cout << "Insufficient Balance\n";
    }
}

void Account::undo()
{
    if (top < 0)
    {
        cout << "No transaction to undo\n";
        return;
    }

    string last = history[top--];

    if (last.find("Deposit") != string::npos)
    {
        double amt = stod(last.substr(8));
        balance -= amt;
    }
    else if (last.find("Withdraw") != string::npos)
    {
        double amt = stod(last.substr(9));
        balance += amt;
    }
}

void Account::showHistory()
{
    cout << "\nTransaction History:\n";
    for (int i = 0; i <= top; i++)
    {
        cout << history[i] << endl;
    }
}

void Account::display()
{
    cout << "Account No: " << accNo << endl;
    cout << "Balance: " << balance << endl;
}

int Account::getAccNo()
{
    return accNo;
}

// Savings Account
SavingsAccount::SavingsAccount() : Account()
{
    interestRate = 0;
}

SavingsAccount::SavingsAccount(int no, double bal, double rate)
    : Account(no, bal)
{
    interestRate = rate;
}

void SavingsAccount::display()
{
    Account::display();
    cout << "Interest Rate: " << interestRate << endl;
}

// Current Account
CurrentAccount::CurrentAccount() : Account()
{
    overdraft = 0;
}

CurrentAccount::CurrentAccount(int no, double bal, double od)
    : Account(no, bal)
{
    overdraft = od;
}

void CurrentAccount::withdraw(double amt)
{
    if (amt <= balance + overdraft)
    {
        balance -= amt;
        history[++top] = "Withdraw " + to_string(amt);
    }
    else
    {
        cout << "Overdraft limit exceeded\n";
    }
}

void CurrentAccount::display()
{
    Account::display();
    cout << "Overdraft Limit: " << overdraft << endl;
}
