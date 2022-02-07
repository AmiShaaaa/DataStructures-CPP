#include <iostream>
#include <math.h>

using namespace std;

void factorial(int n){
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    cout<<product;
}

int main(){
    int n;
    cin>>n;
    factorial(n);
}