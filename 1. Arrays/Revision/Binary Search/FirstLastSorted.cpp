#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int lo = 0;
    int hi = size;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == key)
        {
            // -----------
            ans = mid;
            hi = mid - 1;
            // -----------
        }
        else if (arr[mid] < key)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int lo = 0;
    int hi = size;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == key)
        {
            // -----------
            ans = mid;
            lo = mid + 1;
            // -----------
        }
        else if (arr[mid] < key)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << "First Occurence of key is at Index: " << firstOcc(arr, size, key) << endl;
    cout << "Last Occurence of key is at Index: " << lastOcc(arr, size, key) << endl;

    return 0;
}