#include "FileProcessor.h"

int main() {
    string filename;
    char choice;

    do {
        try {
            cout << "Enter file name: ";
            cin >> filename;

            processFile(filename);
            break; // success → exit loop
        }

        catch (FileOpenException e) {
            cout << e.what() << endl;

            cout << "Try again? (y/n): ";
            cin >> choice;

            if (choice == 'n' || choice == 'N') {
                cout << "Exiting program...\n";
                return 0;
            }
        }

    } while (true);

    return 0;
}
