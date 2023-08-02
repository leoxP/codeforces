#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost=k;

    for(int i=2;i<=w;i++){
        cost+=i*k;
    }

    if(cost-n<=0)
        cout<<0;
    else
        cout<<cost-n;

    return 0;
}

