#include <bits/stdc++.h>
using namespace std;
// considering negative sign -->
// Time complexity: O(n)
int myAtoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
        // Ascii for 1 --> 49; 0 --> 48
        // 48 ---> so if we want to print 1, we'll subtract 49-48=> 1 as output in form of integer.
    return sign*res;
}

int main()
{
    char str[] = "-89789";

    int val = myAtoi(str);
    cout << val << endl;
    cout << val + 10 << endl;

    return 0;
}