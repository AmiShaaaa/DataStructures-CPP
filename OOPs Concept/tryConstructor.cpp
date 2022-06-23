#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
    string Name, OwnerName;
    public:
    YouTubeChannel(void){
        cin>>Name;
        cin>>OwnerName;
        // printData();
    };
    void printData(){
        cout<<Name<<" "<<OwnerName<<endl;
    }
};
int main(){
    YouTubeChannel c, d;
    c.printData();
    d.printData();
}