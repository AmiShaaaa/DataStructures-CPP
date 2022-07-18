#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    string s3 = "abc";

    cout << s2.compare(s1) << endl;
    cout << s1.compare(s2) << endl;
    if (s1.compare(s3) == 0)
        cout << "strings are equal" << endl;
    if (!s1.compare(s3) == 0)
        cout << "strings are equal" << endl;
    return 0;
}