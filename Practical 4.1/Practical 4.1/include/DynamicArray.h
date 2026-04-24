#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <iostream>

using namespace std;



class DynamicArray
{
     private:
        int* arr;
        int capacity;
        int currentSize;
        void resize();
    public:
        ~DynamicArray();

        DynamicArray(int initialCapacity = 2);
        void insertElement(int value);
        void deleteElementAt(int index);
        void display();
};

#endif
