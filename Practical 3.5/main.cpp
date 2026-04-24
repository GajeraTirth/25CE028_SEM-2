#include <iostream>
#include "SuperDigit.h"
using namespace std;

int main() {
    string n;
    int k;

    cout << "Enter number (as string): ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    SuperDigit obj;
    int result = obj.calculateSuperDigit(n, k);

    cout << "Super Digit: " << result << endl;

    return 0;
}
