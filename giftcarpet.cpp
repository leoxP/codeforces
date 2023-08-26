#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        char e;

        vector<vector<char> > v(x);
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cin>>e;
                v[i].push_back(e);
            }
        }
        string s="vika";
        int count=0;

        for(int j=0;j<y;j++){
            for(int i=0;i<x;i++){
                    if(v[i][j]==s[count]){
                        count++;
                        break;
                    }
            }
        }

        if(count==4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
}