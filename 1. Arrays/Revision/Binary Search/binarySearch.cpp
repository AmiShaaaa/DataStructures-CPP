#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int lo = 0;
    int hi = size;
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
    return -1;
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
    int index = binarySearch(arr, size, key);
    if(index = -1)
        cout<<"Key not present!"<<endl;
    else
        cout << "Index of key is: " << index << endl;

    return 0;
}