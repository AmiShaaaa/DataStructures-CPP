#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++)
        count++;
    return count;
}

int main(){

    char name[20];
    cin>>name; 
    cout<<getLength(name)<<endl; 
}

// int main()
// {
//     string s1 = "Amisha";
//     // using method -->
//     // cout << s1.size() << endl;
//     // cout << s1.length() << endl;

//     for (int i = 0; i < s1.length(); i++)
//         cout << s1[i] << endl;
//     return 0;
// }