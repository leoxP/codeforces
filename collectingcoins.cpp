#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int a,b,c,n;

    while(t--){
        int sum=0;
        cin>>a>>b>>c>>n;
        sum+=n+a+b+c;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c){
            cout<<"NO"<<endl;
        }
        else    
            cout<<"YES"<<endl;
    }
}