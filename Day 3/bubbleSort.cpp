/* Repeatedly swap two adjacent elements if they are in wrong order
12, 45, 23, 51, 19, 8
12, 45, 23, 51, 19, 8
12, 23, 45, 51, 19, 8
12, 23, 45, 19, 51, 8
12, 23, 45, 19, 8, 51

12. 23, 45, 19, 8
12, 23, 45, 19, 8
12, 23, 19, 45, 8
12, 23, 19, 8, 45

1st iteration --> n-1
2nd iteration --> n-2
ith iteration --> n-i
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < (n - counter); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}