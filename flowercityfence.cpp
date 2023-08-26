#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        vector<int> v;
        for(int i=0;i<x;i++){ //inserting values
            int e;cin>>e;
            v.push_back(e);
        }
        if(v[0]!=x){
            cout<<"NO\n";
            continue;
        }
        
        vector<int> v1=v;
        vector<int> res(x,0);

        /*for(int i=0;i<x;i++){
            for(int j=x-1;j>=0;j--){
                if(v[j]>0){
                    v[j]-=1;
                    res[i]+=1;
                }
            }
        }*/

        for(int i=0;i<x;i++){
            res[v[i]-1]++;
        }

        for(int i=x-1;i>=1;i--){
            res[i-1]+=res[i];
        }

        (v1==res)? cout<<"YES\n":cout<<"NO\n";
    }
}