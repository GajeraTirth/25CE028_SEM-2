#include <iostream>
#include "merge.h"
using namespace std;

int* mergeArrays(int* arr1, int n, int* arr2, int m)
{
    int* merged = new int[n + m];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        merged[k++] = arr1[i++];
    }

    while (j < m)
    {
        merged[k++] = arr2[j++];
    }

    return merged;
}

void displayArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
