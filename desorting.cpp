#include <iostream>
#include <vector>
using namespace std;
#define MAX 1e9

int main(){
    int t,x,n;
    cin>>t;
    bool check=true;
    while(t--){
        check=true;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        int diff=MAX;
        for(int i=0;i<n-1;i++){
            if(diff>v[i+1]-v[i]){
                diff=v[i+1]-v[i];
            }
            if(v[i]>v[i+1]){
                check=false;
                cout<<0<<endl;
                break;
            }
        }

        if(check)
            cout<<(diff/2)+1<<endl;
    }
}