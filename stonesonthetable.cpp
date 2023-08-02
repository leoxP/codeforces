#include<iostream>
using namespace std;

int main(){
    int n;
    int num=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            num++;
        }
    }
    cout<<num;
    return 0;
}