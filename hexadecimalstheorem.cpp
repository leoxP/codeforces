#include <iostream>
#include <tuple>
using namespace std;

tuple<int,int> fib(int n){
    int a=0;
    int b=1;
    int temp=0;
    while(b<=n){
        temp=a;
        a=b;
        b=temp+a;
        if(b==n){
            return {temp,a};
        }
    }
    return {0,0};
}

int main(){
    int n;cin>>n;
    auto[a,b]=fib(n);
    auto[c,d]=fib(b);
    cout<<a<<" "<<c<<" "<<d;
}