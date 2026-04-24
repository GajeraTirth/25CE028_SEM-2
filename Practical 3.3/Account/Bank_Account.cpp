#include "Bank_Account.h"

int Account::totalAccounts = 0;

Account::Account()
{
    accountNumber = 0;
    holderName = "";
    balance = 0;
}

void Account::createAccount(int accNo,string name,double bal)
{
    accountNumber = accNo;
    holderName = name;
    balance = bal;
    totalAccounts++;
}

void Account::deposit(double amount)
{
    balance += amount;
}

bool Account::withdraw(double amount)
{
    if(amount > balance)
    {
        cout<<"Insufficient balance"<<endl;
        return false;
    }

    balance -= amount;
    return true;
}

bool Account::transfer(Account &receiver,double amount)
{
    if(withdraw(amount))
    {
        receiver.deposit(amount);
        return true;
    }
    return false;
}

void Account::displayAccount()
{
    cout<<"Account Number : "<<accountNumber<<endl;
    cout<<"Holder Name : "<<holderName<<endl;
    cout<<"Balance : "<<balance<<endl;
    cout<<"---------------------"<<endl;
}

int Account::getAccountNumber()
{
    return accountNumber;
}

int Account::getTotalAccounts()
{
    return totalAccounts;
}
