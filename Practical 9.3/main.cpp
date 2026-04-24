#include <iostream>
#include <vector>
#include "SetUtils.h"
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

    cout << "\nOriginal List: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Remove duplicates
    set<int> uniqueSet = removeDuplicates(v);

    cout << "\nUnique Elements (sorted): ";
    displaySet(uniqueSet);

    // Optional: convert back to vector
    vector<int> uniqueVector = setToVector(uniqueSet);

    cout << "Converted back to vector: ";
    for (int i = 0; i < uniqueVector.size(); i++) {
        cout << uniqueVector[i] << " ";
    }

    return 0;
}
