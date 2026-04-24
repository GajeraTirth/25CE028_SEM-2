#include "InsufficientBalanceException.h"

// Log storage
string logs[50];
int logIndex = 0;

void addLog(string message) {
    logs[logIndex++] = message;
}

// Exception definitions
const char* InsufficientBalanceException::what() const {
    return "Error: Insufficient balance!";
}

const char* InvalidAmountException::what() const {
    return "Error: Invalid amount!";
}

// Constructor
BankAccount::BankAccount(double b) {
    balance = b;
}

// Deposit
void BankAccount::deposit(double amount) {
    addLog("Entered deposit()");

    if (amount <= 0) {
        throw InvalidAmountException();
    }

    balance += amount;
    addLog("Deposit successful");
    addLog("Exiting deposit()");
}

// Withdraw
void BankAccount::withdraw(double amount) {
    addLog("Entered withdraw()");

    if (amount <= 0) {
        throw InvalidAmountException();
    }

    if (amount > balance) {
        throw InsufficientBalanceException();
    }

    balance -= amount;
    addLog("Withdrawal successful");
    addLog("Exiting withdraw()");
}

// Get Balance
double BankAccount::getBalance() {
    return balance;
}

// Perform Transaction
void performTransaction(BankAccount &acc, double amount, bool isDeposit) {
    addLog("Entered performTransaction()");

    if (isDeposit)
        acc.deposit(amount);
    else
        acc.withdraw(amount);

    addLog("Exiting performTransaction()");
}
