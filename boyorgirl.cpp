#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-97]+=1;
        if(arr[s[i]-97]==1)
            flag++;
    }
    if(flag%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}