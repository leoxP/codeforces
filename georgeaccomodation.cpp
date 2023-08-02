#include <iostream>
using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    int count=0;
    while(n--){
        cin>>x>>y;
        if(y-x>=2)
            count+=1;
    }
    cout<<count;
    return 0;
}