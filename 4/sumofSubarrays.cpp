/* Subarray: Continous part of array.
   Number of arrays of an elements = nC2 + n = n*(n+1)/2

   Subsequence: Sequence that can be derived from an array by selecting zero or more elements, without changing the order of the elements.

   Every subarray is a subsequence but reverse not true */

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n - 1; j++)
        {
            curr += a[j];
            cout << curr << endl;
        }
    }
    return 0;
}