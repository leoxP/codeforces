#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0;
        vector<int> v1,v2;
        int x,maxnum=0;

        for(int i=0;i<n;i++){
            cin>>x;
            v1.push_back(x);
        }
        for(int j=0;j<n;j++){
            cin>>x;
            v2.push_back(x);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater <>());

        for(int i=0;i<n;i++){
            if(v2[i]>v1[i] && k!=0){
                sum+=v2[i];
                k--;
            }
            else{
                sum+=v1[i];
            }
        }
        cout<<sum<<endl;
    }
}