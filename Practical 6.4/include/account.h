#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
protected:
    int accNo;
    double balance;

    string history[100];
    int top;

public:
    Account();
    Account(int no, double bal);

    void deposit(double amt);
    void withdraw(double amt);
    void undo();
    void showHistory();
    void display();

    int getAccNo();
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount();
    SavingsAccount(int no, double bal, double rate);
    void display();
};

class CurrentAccount : public Account
{
private:
    double overdraft;

public:
    CurrentAccount();
    CurrentAccount(int no, double bal, double od);
    void withdraw(double amt);
    void display();
};

#endif
