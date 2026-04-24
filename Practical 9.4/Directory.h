#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <map>
#include <vector>
#include <string>
using namespace std;

// Add folder
void addFolder(map<string, vector<string>>& dir, const string& folderName);

// Add file to folder
void addFile(map<string, vector<string>>& dir, const string& folderName, const string& fileName);

// Display directory
void displayDirectory(const map<string, vector<string>>& dir);

#endif
