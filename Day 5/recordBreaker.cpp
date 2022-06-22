// 1. Strictly greater than all the previous values
// 2. Strictly greater than following value.

// Brute Force: Iterate over all the elements and check if it is record breaking day or not.
// To check if a[i] is a record breaking day, we have to iterate over a[0], a[1],...,a[i-1].

// Time Complexity for this operation: O(n)
// Overall Time complexity: O(n^2)

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for(int j=0;j<n;j++){
    //     if(a[j]>a[j-1]&&a[j]<a[j+1]){
    //         // Other Operations
    //     }
    // } --> Brute Force

    // Optimized Approach:
    // a[i]>mx
    // a[i]>a[i+1], {if i+1 < n}
    // update mx, mx = max(mx, a[i]) -- Reduces the time complexity of Step(1) to O(1)
    // Therefore, Overall time complexity: O(n)
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    return 0;
}