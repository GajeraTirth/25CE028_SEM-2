#ifndef SET_UTILS_H
#define SET_UTILS_H

#include <set>
#include <vector>
using namespace std;

// Function to remove duplicates
set<int> removeDuplicates(const vector<int>& v);

// Function to display set
void displaySet(const set<int>& s);

// Optional: convert set to vector
vector<int> setToVector(const set<int>& s);

#endif
