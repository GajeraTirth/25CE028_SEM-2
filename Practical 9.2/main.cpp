#include <iostream>
#include "WordCounter.h"
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    map<string, int> result = countWords(sentence);

    cout << "\nWord Frequencies:\n";
    displayFrequency(result);

    return 0;
}
