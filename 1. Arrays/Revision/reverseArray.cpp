#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    // for (int start = 0; start < size; start++)
    // {
    //     for (int j = 0; j > start; j--)
    //     {
    //         int temp = arr[start];
    //         arr[start] = arr[j];
    //         arr[j] = temp;
    //     }
    // }
    int lo = 0;
    int hi = size - 1;
    while (lo <= hi)
    {
        int temp = arr[lo];
        arr[lo] = arr[hi];
        arr[hi] = temp;
        // swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}