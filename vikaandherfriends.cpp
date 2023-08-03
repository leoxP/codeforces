//Divide the tiles into white and black alternating
//If the sum of the differences between any friend and Vika is even then Vika cannot escape
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        bool check=true;
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        int a,b;
        while(k--){
            cin>>a>>b;
            if((abs(x-a)+abs(y-b))%2==0)
                check=false;
        }
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}