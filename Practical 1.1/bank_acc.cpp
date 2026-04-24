#include "bank_acc.h"
#include <iostream>
using namespace std;

void bank_acc::create_acc()
{
    cout<<"Enter account no. -->";
    cin>>acc_no;
    cout<<"Enter account holder name ->";
    cin>>acc_holder_name;
    cout<<"Enter balance ->";
    cin>>acc_balance;
}

int bank_acc::withdraw(long int x)
{
    int amt;

    if(acc_no==x)
    {
        cout<<"Enter amount to deduct -->";
        cin>>amt;

        if(acc_balance>=amt)
        {
            acc_balance=acc_balance-amt;
        }
        else
        {
            cout<<"ERROR : Low balance"<<endl;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int bank_acc::deposite(long int x)
{
    int amt;

    if(acc_no==x)
    {
        cout<<"Enter amount to add -->";
        cin>>amt;

        acc_balance=acc_balance+amt;
        return 1;
    }
    else
    {
        return 0;
    }
}

int bank_acc::check_balance(long int x)
{
    if(acc_no==x)
    {
        cout<<"Balance : "<<acc_balance<<endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
