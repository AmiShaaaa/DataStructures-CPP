#include <iostream>
using namespace std;

// Given that one pair exists who are duplicates of each other, rest all are unique
// array of size N with numbers 1 to N-1

int findDuplicates(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans = ans ^ arr[i];
    for (int i = 1; i < size; i++)
        ans = ans ^ i;
    return ans;
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "The duplicate value is: " << findDuplicates(arr, size) << endl;
    return 0;
}