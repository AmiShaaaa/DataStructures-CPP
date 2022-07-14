#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();
    cout << "Printing top element " << s.top() << endl;

    // check if empty or not
    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Not empty" << endl;

    // size of stack
    cout << "Size of stack is " << s.size() << endl;
    
    return 0;
}