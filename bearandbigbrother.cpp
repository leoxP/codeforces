#include <iostream>
using namespace std;

int main(){
    int x,y,n=0;
    cin>>x>>y;
    do{
        n++;
        x*=3;
        y*=2;
    }while(x<=y);
    cout<<n;
}