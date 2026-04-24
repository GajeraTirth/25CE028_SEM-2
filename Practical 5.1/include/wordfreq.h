#ifndef WORDFREQ_H
#define WORDFREQ_H

#include <string>
using namespace std;

class WordFrequency
{
private:
    string words[1000];
    int counts[1000];
    int size;

public:
    WordFrequency();
    void toLowerCase(string &s);
    int findWord(const string &word);
    void processParagraph(const string &para);
    void display();
};

#endif
