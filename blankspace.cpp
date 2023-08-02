#include <iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v(n);
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> v1(n,0);
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                cnt++;
            }
            else{
                v1[j]=cnt;
                cnt=0;
                j++;
            }
        }
        int max = *max_element(v1.begin(), v1.end());
        if(v.size()==1 && v[0]==0){
            cout<<1<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }

    return 0;
}