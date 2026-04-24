#ifndef WORD_COUNTER_H
#define WORD_COUNTER_H

#include <map>
#include <string>
using namespace std;

// Function to count word frequency
map<string, int> countWords(string sentence);

// Function to display result
void displayFrequency(const map<string, int>& wordMap);

#endif
