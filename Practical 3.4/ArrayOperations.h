#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

#include <iostream>

using namespace std;

template <typename T>
class ArrayOperations {
private:
    T arr[100];
    int size;

public:
    ArrayOperations(T inputArr[], int s) {
        size = s;
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    T findMax() {
        T max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    void reverseArray() {
        for (int i = 0; i < size / 2; i++) {
            T temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }

    void findLeaders() {
        cout << "Leader elements: ";
        T maxFromRight = arr[size - 1];
        cout << maxFromRight << " ";
        for (int i = size - 2; i >= 0; i--) {
            if (arr[i] > maxFromRight) {
                maxFromRight = arr[i];
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

#endif
