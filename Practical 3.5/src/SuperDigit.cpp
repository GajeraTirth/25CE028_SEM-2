#include "SuperDigit.h"

long long SuperDigit::initialSum(string n) {
    long long sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    return sum;
}

int SuperDigit::recursiveDigit(long long num) {
    if (num < 10)
        return num;

    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return recursiveDigit(sum);
}

int SuperDigit::calculateSuperDigit(string n, int k) {
    long long sum = initialSum(n);
    long long total = sum * k;
    return recursiveDigit(total);
}
