#include <iostream>
// #include <math.h>
#include <bits/stdc++.h>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    // return max value
    return maxi;
}
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // return max value
    return min;
}

int main()
{
    int size;
    cin >> size;
    // int num[size];   --> bad practice to take variable size
    int num[100];
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Max value: " << getMax(num, size) << endl;
    cout << "Min value: " << getMin(num, size) << endl;
    return 0;
}