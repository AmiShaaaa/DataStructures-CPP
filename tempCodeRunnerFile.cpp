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
    int n, r;
    cin >> n >> r;
    int nCr = product(n) / (product(n - r) * product(r));
    // product(n, r);
    cout << nCr;
}