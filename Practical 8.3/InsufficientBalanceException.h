#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

// Log system
extern string logs[50];
extern int logIndex;
void addLog(string message);

// Custom Exceptions
class InsufficientBalanceException {
public:
    const char* what() const;
};

class InvalidAmountException {
public:
    const char* what() const;
};

// BankAccount Class
class BankAccount {
private:
    double balance;

public:
    BankAccount(double b);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};

// Transaction function
void performTransaction(BankAccount &acc, double amount, bool isDeposit);

#endif
