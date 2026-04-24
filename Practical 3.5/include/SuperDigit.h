#ifndef SUPERDIGIT_H
#define SUPERDIGIT_H

#include <string>
using namespace std;

class SuperDigit {
public:
    int calculateSuperDigit(string n, int k);

private:
    int recursiveDigit(long long num);
    long long initialSum(string n);
};

#endif
