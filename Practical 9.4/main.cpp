#include <iostream>
#include "Directory.h"
using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;
    string folderName, fileName;

    do {
        cout << "\n===== DIRECTORY MENU =====\n";
        cout << "1. Add Folder\n";
        cout << "2. Add File\n";
        cout << "3. Display Directory\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter folder name: ";
                cin >> folderName;
                addFolder(directory, folderName);
                break;

            case 2:
                cout << "Enter folder name: ";
                cin >> folderName;
                cout << "Enter file name: ";
                cin >> fileName;
                addFile(directory, folderName, fileName);
                break;

            case 3:
                displayDirectory(directory);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
