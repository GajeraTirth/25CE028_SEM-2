#include <iostream>
#include "filecounter.h"
using namespace std;

int main()
{
    string filename;

    cout << "Enter file name: ";
    cin >> filename;

    FileCounter fc;
    fc.processFile(filename);
    fc.display();

    return 0;
}
