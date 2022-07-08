#include <iostream>
using namespace std;

int main()
{
    string s1 = "nincompoop";
    s1.insert(2, "lol"); // Index at which to insert --> String to insert
    cout << s1 << endl;
    return 0;
}