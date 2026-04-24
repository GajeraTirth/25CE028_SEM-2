#include <iostream>
#include "NegativeNumberException.h"

using namespace std;

// Function declaration
double calculateSquareRoot(double);

int main() {
    double num;

    try {
        cout << "Enter a number: ";
        cin >> num;

        // Check invalid input
        if (cin.fail()) {
            throw "Invalid input! Please enter a numeric value.";
        }

        // Call function (processing immediately)
        double result = calculateSquareRoot(num);

        cout << "Square root = " << result << endl;
    }

    catch (NegativeNumberException e) {
        cout << e.what() << endl;
    }

    catch (const char* msg) {
        cout << msg << endl;
    }

    catch (...) {
        cout << "Unexpected error occurred!" << endl;
    }

    return 0;
}
