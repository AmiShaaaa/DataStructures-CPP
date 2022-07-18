#include <iostream>
using namespace std;

int main()
{
    string s1 = "Amiiesha";
    s1.erase(3, 2); // Third index --> Two characters --> To be deleted
    cout << s1 << endl;
    return 0;
}