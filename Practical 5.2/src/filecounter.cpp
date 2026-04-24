#include <iostream>
#include <fstream>
#include "filecounter.h"
using namespace std;

FileCounter::FileCounter()
{
    charCount = 0;
    wordCount = 0;
    lineCount = 0;
}

void FileCounter::processFile(const string &filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error: Unable to open file\n";
        return;
    }

    string line;

    while (getline(file, line))
    {
        lineCount++;

        bool inWord = false;

        for (int i = 0; i < line.length(); i++)
        {
            char ch = line[i];
            charCount++;

            if (ch == ' ' || ch == '\t')
            {
                inWord = false;
            }
            else
            {
                if (!inWord)
                {
                    wordCount++;
                    inWord = true;
                }
            }
        }
    }

    file.close();
}

void FileCounter::display()
{
    cout << "\nFile Analysis:\n";
    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;
}
