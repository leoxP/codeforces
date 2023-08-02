#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long x,y,a;
    cin>>x>>y>>a;
    if(a*a>x*y)
        cout<<1;
    else{
        cout<<(long long)ceil((double)x/a)*(long long)ceil((double)y/a);
    }
    return 0;
}