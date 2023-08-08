#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    string news="";

    if(n>2){
        if(n%2!=0){
            for(int i=n-2;i>=0;i-=2){
                news.push_back(s[i]);
            }
            news.push_back(s[0]);
            for(int j=2;j<=n-1;j+=2){
                news.push_back(s[j]);
            }
        }
        else{
            for(int i=n-2;i>=0;i-=2){
                news.push_back(s[i]);
            }
            for(int j=1;j<=n-1;j+=2){
                news.push_back(s[j]);
            }
        }
        cout<<news;
    }
    else{
        cout<<s;
    }
}