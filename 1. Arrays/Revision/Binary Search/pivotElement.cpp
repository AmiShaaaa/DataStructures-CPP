#include <iostream>
using namespace std; 

int getPivot(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = lo + (hi - lo) / 2;
    while (lo < hi)
    {
        // int mid = lo + (hi - lo) / 2;
        if (arr[mid] >= arr[0])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
        mid = lo + (hi - lo) / 2;
    }
    return lo;
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Pivot index is: " << getPivot(arr, size) << endl;

    return 0;
}