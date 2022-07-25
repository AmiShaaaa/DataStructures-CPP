// 5 4 3 2 1 --> 4 5 3 2 1 --> 4 3 5 2 1 --> 4 3 2 5 1 --> 4 3 2 1 5
// 4 3 2 1 5 --> 3 4 2 1 5 --> 3 2 4 1 5 --> 3 2 1 4 5
// 3 2 1 4 5 --> 2 3 1 4 5 --> 2 1 3 4 5 
// 2 1 3 4 5 --> 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
// Best Case -> Already sorted -> TC: O(n)
// Worst Case -> Reversed array

void bubbleSort(int arr[], int n)
{
    // count for number of rounds
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n - 1
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            // process elements till (n-i) th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) // already sorted
            break; 
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

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}