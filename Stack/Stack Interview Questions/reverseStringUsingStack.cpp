// Reverse a string using stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "amisha";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        // char ch = str[i];
        s.push(str[i]);
    }
    string ans = "";
    // stack<char> ans;
    while (!s.empty())
    {
        // char ch = s.top();
        ans.push_back(s.top());
        // ans.push(s.top());
        s.pop();
    }
    cout << "Answer is " << ans << endl;
    return 0;
}