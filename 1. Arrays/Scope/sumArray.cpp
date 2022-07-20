#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin >> size;
    int arr[5];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of array is: " << sumArray(arr, size) << endl;
    return 0;
}