#include "VectorUtils.h"
#include <algorithm>
#include <iostream>
using namespace std;

// Method 1: Using STL reverse()
void reverseUsingSTL(vector<int>& v) {
    reverse(v.begin(), v.end());
}

// Method 2: Manual reversal using iterators
void reverseUsingIterators(vector<int>& v) {
    vector<int>::iterator start = v.begin();
    vector<int>::iterator end = v.end() - 1;

    while (start < end) {
        // swap elements
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

// Display function
void displayVector(const vector<int>& v) {
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
