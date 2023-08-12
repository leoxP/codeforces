#include <iostream>
using namespace std;

int main(){
    int t;cin>>t;
    int max=0;
    int x=0;
    while(t--){
        cin>>x;
        if(x>max) 
            max=x;
    }
    if(max-25<0)
        cout<<0;
    else
        cout<<max-25;
}