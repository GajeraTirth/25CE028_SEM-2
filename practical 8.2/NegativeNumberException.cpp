#include <cmath>
#include "NegativeNumberException.h"

double calculateSquareRoot(double num) {
    if (num < 0) {
        throw NegativeNumberException();
    }
    return sqrt(num);
}
#include "NegativeNumberException.h"

