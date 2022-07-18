// Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

/*
Explainantion -->

A[] = {10, 20, 35, 50, 75, 80}
X = =70
i = 0
j = 5

A[i] + A[j] = 10 + 80 = 90
Since A[i] + A[j] > X, j--
i = 0
j = 4

A[i] + A[j] = 10 + 75 = 85
Since A[i] + A[j] > X, j--
i = 0
j = 3

A[i] + A[j] = 10 + 50 = 60
Since A[i] + A[j] < X, i++
i = 1
j = 3
m
A[i] + A[j] = 20 + 50 = 70
Thus this signifies that Pair is Found.

*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> // for two pointer
using namespace std;

// ------------ Naive approach ------------

// bool isPairSum(int A[], int n, int sum)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//                 continue;
//             if (A[i] + A[j] == sum)
//                 return true;
//             // as the array is sorted
//             if (A[i] + A[j] > sum)
//                 break;
//         }
//     }
//     return false;
// }

// ------------- Two Pointers approach ---------------
int isPairSum(int A[], int n, int sum)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (A[i] + A[j] == sum)
            return 1;
        if (A[i] + A[j] < sum)
            i++;
        else
            j--;
    }
    return 0;
}

int main()
{
    int arr[] = {2, 3, 5, 8, 9, 10, 11};
    int val = 17;
    int arrSize = *(&arr + 1) - arr;
    sort(arr, arr + arrSize); // Sort the array
    // Function call
    cout << isPairSum(arr, arrSize, val);

    return 0;
}