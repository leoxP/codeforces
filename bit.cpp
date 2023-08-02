#include <iostream>
#include <string>

using namespace std;

int main(){
    int x=0;
    int n;
    cin>>n;
    char y[n];
    while(n--){
        cin>>y;
        if(y[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    return 0;
}