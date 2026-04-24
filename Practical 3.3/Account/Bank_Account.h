#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
    int accountNumber;
    string holderName;
    double balance;
    static int totalAccounts;

public:
    Account();

    void createAccount(int accNo,string name,double bal);
    void deposit(double amount);
    bool withdraw(double amount);
    bool transfer(Account &receiver,double amount);

    void displayAccount();

    int getAccountNumber();

    static int getTotalAccounts();
};

#endif
