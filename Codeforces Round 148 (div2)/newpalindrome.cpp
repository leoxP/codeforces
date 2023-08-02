#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;

    while(n--){
        cin>>s;
        if(s.length()<=3){
            cout<<"NO"<<endl;
        }
        else{
            int i=0;
            if(s[i]!=s[i+1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO";
            }
        }
    }

    return 0;
}