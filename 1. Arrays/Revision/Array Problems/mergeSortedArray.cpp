#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy kr do first array ke elements ko
    while (i < n)
    {
        // arr[k] = arr1[i];
        // k++;
        // i++;
        arr[k++] = arr1[i++];
    }
    // copy kr do second array ke elements ko
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int arr[9] = {0};
    merge(arr1, 5, arr2, 4, arr);
    print(arr, 9);
    
    int arr3[4] = {1, 3, 5, 7};
    int arr4[5] = {0, 2, 4, 6, 8};
    int arr_res[9] = {0};
    merge(arr3, 4, arr4, 5, arr_res);
    print(arr_res, 9);

    return 0;
}