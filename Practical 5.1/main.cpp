#include <iostream>
#include "wordfreq.h"
using namespace std;

int main()
{
    string paragraph;

    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);

    WordFrequency wf;
    wf.processParagraph(paragraph);
    wf.display();

    return 0;
}
