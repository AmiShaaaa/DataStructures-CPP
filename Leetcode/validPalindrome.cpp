#include <iostream>
using namespace std;

class Solution
{
public:
    bool solution(string str)
    {
        int start = 0;
        int end = str.length() - 1;
        while (start < end)
        {
            if (str[start] != str[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(string s)
    {
        string str = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                str += tolower(s[i]);
            }
            else if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
            {
                str += s[i];
            }
        }
        return solution(str);
    }
};

// int start = 0;
// int end = n-1;
// while(s<=e){
//     if(str[s]!=str[e])
//         return 0;
//     else{
//         s++;
//         e--;
//     }
// }