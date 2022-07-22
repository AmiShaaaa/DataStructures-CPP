#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size){
    int lo = 0, hi = size;
    while(lo<=hi){
        if(arr[lo] == 1 && arr[hi] == 0 && lo<hi){
            // swap[arr[lo], arr[hi]];
            int temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
            lo++;
            hi--;
        }
        else if(arr[lo] == 1 && lo<hi)
            hi--;
        else
            lo++;
    }
}

int main(){
    int size;
    cin>>size;
    int arr[20];
    for(int i = 0;i<size;i++)
        cin>>arr[i];
    sortZeroOne(arr,size);
    for(int i = 0;i<size;i++)
        cout<<arr[i];
return 0;
}