#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
// Best Case -> Already sorted -> TC: O(n^2)
// Worst Case -> Reversed array -> TC: O(n^2)
/* Use Case:
    Selection sort is used for small Size array */

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}