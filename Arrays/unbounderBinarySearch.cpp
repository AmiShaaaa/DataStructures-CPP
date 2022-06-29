// Find the point where a monotonically increasing function becomes positive first time

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int BinarySearch(int low, int high);
int f(int x) { return x * x + 10 * x - 20; }
int firstPositive()
{
    if (f(0) > 0)
        return 0;
    int i = 1; // Need to initialize the value else it'll throw garbage value
    while (f(i) <= 0)
        i = i * 2;
    return BinarySearch(i / 2, i);
}
int BinarySearch(int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (f(mid) > 0 && (f(mid - 1) < 0) || mid == low) // Checking if the mid element is the req ans
            return mid;
        // if not, check the interval in which it lies --> whether upper/lower half
        if (f(mid) <= 0)
            return BinarySearch((mid + 1), high);
        else
            return BinarySearch(low, (mid - 1));
    }
    return -1;
}

// Driver code
int main()
{
    {
        cout << "The value n where f() becomes"
             << "positive first is " << firstPositive();
        return 0;
    }
}