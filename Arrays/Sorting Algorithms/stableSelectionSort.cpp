#include <iostream>
using namespace std;

int stableSelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int min = i;
            if (a[min] > a[j])
            {
                min = j;
            }

            int key = a[i];
            while (min > i)
            {
                a[min] = a[min - 1];
                min--;
            }
            a[i] = key;
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int a[] = {4, 5, 3, 2, 4, 1};
    int n = sizeof(a) / sizeof(a[0]);
    stableSelectionSort(a, n);
    printArray(a, n);
    return 0;
}