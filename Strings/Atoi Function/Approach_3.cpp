#include <bits/stdc++.h>
using namespace std;
// Four corner cases needs to be handled -->
// 1. Discards all leading whitespaces
// 2. Sign of the number
// 3. Overflow
// 4. Invalid input

// Time complexity: O(n)

int myAtoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    // if whitespaces, ignore them
    while (str[i] == ' ')
    {
        i++;
    }

    // sign of number
    if (str[i] == '-' || str[i] == '+')
    {
        sign = 1 - 2 * (str[i++] == '-');
    }

    // checking valid input
    while (str[i] >= '0' && str[i] <= '9')
    {
        // handling overflow test case
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        res = 10 * res + (str[i++] - '0');
    }
    return res * sign;
}

int main()
{
    char str[] = "  -123";

    int val = myAtoi(str);
    cout << " " << val;

    return 0;
}