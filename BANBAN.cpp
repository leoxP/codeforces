#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        float x;cin>>x;
        cout<<ceil(x/2)<<endl;
        int start=1;
        int end=x*3-1;
        while(start<end){
            cout<<start+1<<" "<<end+1<<endl;
            start+=3;
            end-=3;
        }
    }
}