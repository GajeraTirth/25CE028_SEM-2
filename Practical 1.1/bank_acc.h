#ifndef BANK_ACC_H
#define BANK_ACC_H

#include<iostream>
using namespace std;

class bank_acc
{
private:
    long int acc_no;
    char acc_holder_name[25];
    long long acc_balance;

public:
    void create_acc();
    int withdraw(long int);
    int deposite(long int);
    int check_balance(long int);
};

#endif
