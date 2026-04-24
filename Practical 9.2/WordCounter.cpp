#include "WordCounter.h"
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

// Convert string to lowercase
string toLowerCase(string word) {
    for (char &c : word) {
        c = tolower(c);
    }
    return word;
}

// Count words
map<string, int> countWords(string sentence) {
    map<string, int> wordMap;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        word = toLowerCase(word); // optional case handling
        wordMap[word]++;
    }

    return wordMap;
}

// Display frequencies
void displayFrequency(const map<string, int>& wordMap) {
    for (map<string, int>::const_iterator it = wordMap.begin(); it != wordMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
}
