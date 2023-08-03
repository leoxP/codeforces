//Using manhattan formula
//Distance from A-B + B-C = Common points + Non Common Points
//Distance from B-C = Non common points + 1 common point
//Manhattan distance 1 must be added to result as point A is being considered as one step also
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y; //a
        int a,b;
        cin>>a>>b; //b
        int c,d;
        cin>>c>>d; //c

        if(a<=x && x<=c && b<=y && y<=d || a>=x && x>=c && b>=y && y>=d){
            cout<<1<<endl;
        }
        else{
            cout<<((abs(a-x)+abs(c-x))+(abs(b-y)+abs(d-y))-(abs(c-a)+abs(b-d))+1)/2+1<<endl;
        }
    }
}