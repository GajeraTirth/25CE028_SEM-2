#include "FileProcessor.h"

// Exception message
const char* FileOpenException::what() const {
    return "Error: Unable to open file!";
}

// Function to process file
void processFile(string filename) {
    ifstream file(filename);

    if (!file) {
        throw FileOpenException();
    }

    string line;
    int lineNumber = 0;
    double sum = 0;
    int count = 0;

    cout << "\nProcessing file...\n";

    // Read line-by-line
    while (getline(file, line)) {
        lineNumber++;

        try {
            // Convert string to number
            double value = stod(line);

            sum += value;
            count++;

            cout << "Line " << lineNumber << ": " << value << endl;
        }

        catch (...) {
            cout << "Line " << lineNumber << " is invalid: " << line << endl;
        }
    }

    // Final result
    if (count > 0) {
        cout << "\nSum = " << sum << endl;
        cout << "Average = " << (sum / count) << endl;
    } else {
        cout << "No valid numeric data found.\n";
    }

    file.close();
}
