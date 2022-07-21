#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// given that two arrays are sorted and in increasing order.
// we need to find the intersection of the two arrays

// Time Complexity --> O(n^2) --> not good

// void findIntersection(int arr1[], int arr2[], int size1, int size2)
// {
//     vector<int> nums;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 nums.push_back(arr1[i]);
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i]<< " ";
//     }
//     cout << endl;
// }

// Time Complexity --> O(n)

void findIntersection(int arr1[], int arr2[], int size1, int size2)
{
    vector<int> temp;
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
            j--;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size1;
    cin >> size1;
    int size2;
    cin >> size2;
    int arr1[20];
    for (int i = 0; i < size1; i++)
        cin >> arr1[i];
    int arr2[20];
    for (int i = 0; i < size2; i++)
        cin >> arr2[i];
    findIntersection(arr1, arr2, size1, size2);

    return 0;
}