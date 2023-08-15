#include <iostream>
using namespace std;

int main(){
    long long a,b,k,m;
    cin>>a>>b;
    cin>>k>>m;
    long long x,y;
    long long temp1,temp2;
    for(int i=0;i<a;i++){
        cin>>x;
        if(i==k-1)
            temp1=x;
    }
    for(int i=0;i<b;i++){
        cin>>y;
        if(i==b-m && i!=b){
            temp2=y;
        }
        else if(i==0){
            temp2=y;
        }
    }
    if(temp1<temp2)
        cout<<"YES";
    else
        cout<<"NO";
}