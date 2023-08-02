#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2){
            num+=1;
        }
    }
    cout<<num;
    return 0;
}