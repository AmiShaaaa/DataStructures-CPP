#include <iostream>
#include<algorithm> // For sort func
using namespace std;

int main()
{
    string s1 = "xyrhfbvjd";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}