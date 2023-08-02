#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    string s;
    bool check;

    while(n--){
        check=true;
        cin>>x>>s;
        for(int i=0;i<x;i++){
            for(int j=i+1;j<x;j++){
                if(s[i]==s[j] && check){
                    if(s[j-1]!=s[i]){
                        cout<<"NO"<<endl;
                        check=false;
                        break;
                    }
                }
            }
        }
        if(check)
            cout<<"YES"<<endl;
    }
}