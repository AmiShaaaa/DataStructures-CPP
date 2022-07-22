#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(int arr[], int size)
{
    int prev = -1, lo = 0, hi = size;
    while (lo <= hi)
    {
        if (arr[lo] < arr[hi] && lo < hi)
        {
            // swap[arr[lo], arr[hi]];
            int temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
            lo++;
            hi--;
            prev++;
            if (arr[prev] > arr[lo])
            {
                int temp = arr[prev];
                arr[prev] = arr[lo];
                arr[lo] = temp;
                lo++;
                prev++;
            }
        }
        else if (arr[lo] > arr[prev] && arr[lo] < arr[hi] && lo < hi)
        {
            lo++;
            prev++;
        }
        else
            hi--;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    sortZeroOneTwo(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i];
    return 0;
}