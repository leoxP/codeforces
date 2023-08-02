#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int y=n;
    string x[n];

    while (n--){
        cin>>x[n];
    }
    n=y;

    while(n--){
        if(x[n].length()>10){
            cout<<x[n][0]<<x[n].length()-2<<x[n][x[n].length()-1]<<endl;
        }
        else{
            cout<<x[n]<<endl;
        }
    }
    return 0;
}
