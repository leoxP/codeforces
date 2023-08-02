#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int c=0;

    while(m>n){
        if(m%2!=0){
            m+=1;
        }
        else{
            m/=2;
        }
        c++;
    }
    c+=(n-m);
    cout<<c;
}