#ifndef NEGATIVE_NUMBER_EXCEPTION_H
#define NEGATIVE_NUMBER_EXCEPTION_H

#include <iostream>
using namespace std;

// Custom Exception Class
class NegativeNumberException {
public:
    const char* what() const {
        return "Error: Negative number entered. Square root not possible.";
    }
};

#endif
