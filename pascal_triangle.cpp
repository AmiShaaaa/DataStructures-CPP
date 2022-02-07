/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/
#include <iostream>
#include <math.h>

using namespace std;

int product(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << product(i) / (product(i - j) * product(j)) << " ";
        }
        cout << endl;
    }
}