#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] >= arr[0])
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo;
}

int binarySearch(int arr[], int lo, int hi, int key)
{
    int start = lo;
    int end = hi;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return lo;
}

int main()
{
    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    int arr[20];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int key;
    cout << "Enter key: " << endl;
    cin >> key;

    int pivot = getPivot(arr, size);

    if (arr[size-1] <= key && arr[pivot] >= key)
        cout << "Key present at index: " << binarySearch(arr, pivot, size-1, key) << endl;
    else
        cout << "Key present at index: " << binarySearch(arr, 0, pivot - 1, key) << endl;

    return 0;
}