#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "786";
    // String to Integer
    int x = stoi(s1);
    cout << x << endl;
    cout << x + 2 << endl;

    // Integer to String
    int n = 786;
    cout<<to_string(n) + "2"<<endl;
    // cout<<to_string(n) + 2<<endl;  
    // Gives error as, n has now been converted to string so 2 as an integer can not be added but appended
    return 0;
}