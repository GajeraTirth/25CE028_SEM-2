#ifndef FILECOUNTER_H
#define FILECOUNTER_H

#include <string>
using namespace std;

class FileCounter
{
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileCounter();
    void processFile(const string &filename);
    void display();
};

#endif
