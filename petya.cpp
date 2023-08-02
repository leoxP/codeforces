#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char x[100],y[100];
    char z;
    cin>>x;
    cin>>y;
    int n=0;
    for(int i=0;i<strlen(x);i++){
        x[i]=tolower(x[i]);
        y[i]=tolower(y[i]);
    }
    int r=strcmp(x,y);
    if(r==0)
        cout<<r;
    else if(r<0)
        cout<<-1;
    else
        cout<<1;
}