#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int w,x,y,z;

    while(t--){
        cin>>w>>x>>y>>z;
        if(min(w,x)>max(y,z) || max(w,x)<min(y,z)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}