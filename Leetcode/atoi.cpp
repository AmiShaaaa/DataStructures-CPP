#include <bits/stdc++.h>
using namespace std;

int atio(string s)
{

    int res = 0;
    int sign = 1;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    if(s[i] = '-')
    for (; i < s.size(); i++)
        res = res * 10 + s[i] - '0';
    return sign*res;
}
int main()
{
    char str[] = "-89789";

    int val = atoi(str);
    cout << val << endl;
    cout << val + 10 << endl;

    return 0;
}