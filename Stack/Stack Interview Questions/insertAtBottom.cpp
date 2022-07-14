#include<iostream>
#include<stack>
using namespace std;
// insert an element at the bottom of the stack 

void solve(stack<int>& s, int x){
    // base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    // recursive call 
    solve(s, x);
    s.push(num);
}

int main(){
    
return 0;
}