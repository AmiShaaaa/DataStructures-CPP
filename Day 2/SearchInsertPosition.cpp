#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (target > arr[i])
        {
            cout << int(i) + 1;
        }
    }
}