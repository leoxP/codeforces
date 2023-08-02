#include <iostream>
using namespace std;

int main(){
    int a[]={100,20,10,5,1};

    int n,x=0;
    cin>>n;

    for(int i=0;i<5;i++){
        x+=n/a[i];
        n=n%a[i];
    }

    cout<<x;
}