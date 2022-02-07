#include <iostream>
#include <math.h>

using namespace std;

// O(1) Solution:

int main()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << sum;
    return 0;
}

//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// O(n) Solution:

// int sumPrint(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     // cout<<sum;
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << sumPrint(n);
// }
