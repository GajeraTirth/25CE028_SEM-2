#include <iostream>
#include "wordfreq.h"
using namespace std;

WordFrequency::WordFrequency()
{
    size = 0;
}

void WordFrequency::toLowerCase(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
}

int WordFrequency::findWord(const string &word)
{
    for (int i = 0; i < size; i++)
    {
        if (words[i] == word)
            return i;
    }
    return -1;
}

void WordFrequency::processParagraph(const string &para)
{
    string temp = "";

    for (int i = 0; i <= para.length(); i++)
    {
        char ch = para[i];

        if (ch == ' ' || ch == '\0')
        {
            if (temp.length() > 0)
            {
                toLowerCase(temp);
                int index = findWord(temp);

                if (index == -1)
                {
                    words[size] = temp;
                    counts[size] = 1;
                    size++;
                }
                else
                {
                    counts[index]++;
                }
                temp = "";
            }
        }
        else
        {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                temp += ch;
        }
    }
}

void WordFrequency::display()
{
    cout << "\nWord Frequency:\n";
    for (int i = 0; i < size; i++)
    {
        cout << words[i] << " : " << counts[i] << endl;
    }
}
