#include "Directory.h"
#include <iostream>
using namespace std;

// Add folder
void addFolder(map<string, vector<string>>& dir, const string& folderName) {
    if (dir.find(folderName) == dir.end()) {
        dir[folderName] = vector<string>();
        cout << "Folder added successfully!\n";
    } else {
        cout << "Folder already exists!\n";
    }
}

// Add file
void addFile(map<string, vector<string>>& dir, const string& folderName, const string& fileName) {
    if (dir.find(folderName) != dir.end()) {
        dir[folderName].push_back(fileName);
        cout << "File added successfully!\n";
    } else {
        cout << "Folder not found!\n";
    }
}

// Display directory
void displayDirectory(const map<string, vector<string>>& dir) {
    if (dir.empty()) {
        cout << "Directory is empty.\n";
        return;
    }

    cout << "\nDirectory Contents:\n";

    // Map iterator (automatically sorted by folder name)
    for (map<string, vector<string>>::const_iterator it = dir.begin(); it != dir.end(); ++it) {
        cout << "Folder: " << it->first << endl;

        const vector<string>& files = it->second;

        if (files.empty()) {
            cout << "  (No files)\n";
        } else {
            for (vector<string>::const_iterator fit = files.begin(); fit != files.end(); ++fit) {
                cout << "  - " << *fit << endl;
            }
        }
    }
}
