#ifndef FILE_PROCESSOR_H
#define FILE_PROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Custom Exception
class FileOpenException {
public:
    const char* what() const;
};

// Function to process file
void processFile(string filename);

#endif
