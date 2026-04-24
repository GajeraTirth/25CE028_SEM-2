#include "SetUtils.h"
#include <iostream>
using namespace std;

// Remove duplicates using set
set<int> removeDuplicates(const vector<int>& v) {
    set<int> s(v.begin(), v.end()); // automatically removes duplicates
    return s;
}

// Display set using iterator
void displaySet(const set<int>& s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Convert set to vector
vector<int> setToVector(const set<int>& s) {
    vector<int> v(s.begin(), s.end());
    return v;
}
