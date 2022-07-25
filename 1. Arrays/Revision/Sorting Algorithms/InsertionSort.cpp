// 10 1 7 4 8 2 11
// 1 10 7 4 8 2 11
// 1 7 10 4 8 2 11
// 1 4 7 10 8 2 11
// 1 4 7 8 10 2 11
// 1 2 4 7 8 10 11
// 1 2 4 7 8 10 11

#include <iostream>
using namespace std;

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
// Best Case -> Already sorted -> TC: O(n)
// Worst Case -> Reversed array -> TC: O(n^2)

void insertionSort(int n, int arr[])
{
    // Ex: 10 1 7 4 8 2 11
    // considering the first element already sorted
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j]; // shift
            else
                break; // ruk jao
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[30];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    insertionSort(size, arr);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}