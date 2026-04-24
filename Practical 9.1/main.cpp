#include <iostream>
#include <vector>
#include "VectorUtils.h"
using namespace std;

int main() {
    vector<int> v;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    cout << "\nOriginal Vector: ";
    displayVector(v);

    // Method 1
    vector<int> v1 = v;
    reverseUsingSTL(v1);
    cout << "Reversed using STL: ";
    displayVector(v1);

    // Method 2
    vector<int> v2 = v;
    reverseUsingIterators(v2);
    cout << "Reversed using Iterators: ";
    displayVector(v2);

    return 0;
}
