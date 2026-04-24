#include <iostream>
#include "merge.h"
using namespace std;

int main()
{
    int n, m;

    cin >> n;
    cin >> m;

    int* arr1 = new int[n];
    int* arr2 = new int[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int* merged = mergeArrays(arr1, n, arr2, m);

    displayArray(merged, n + m);

    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}
