#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        float a,b,c,d;
        cin>>a>>b>>c>>d;

        cout<<max(a+b,c+d)<<endl;
    }
}