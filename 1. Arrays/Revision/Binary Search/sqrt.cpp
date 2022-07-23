#include <iostream>
#include <vector>
using namespace std;

int findSqrt(int key)
{
    int lo = 0, hi = key, ans = -1;
    int mid;
    int square = mid * mid;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (square == key)
            return mid;
        if (square < key)
        {
            ans = mid;     // Because it can be a possible solution
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main()
{
    // int size;
    // cout << "Enter size: " << endl;
    // cin >> size;
    // int arr[20];
    // cout << "Enter array elements: " << endl;
    // for (int i = 0; i < size; i++)
    //     cin >> arr[i];
    int key;
    cout << "Enter key: " << endl;
    cin >> key;
    cout << "Square root of the given number is: " << findSqrt(key) << endl;

    return 0;
}