#include<iostream>
#include<vector>
#include <numeric>
#include<cmath>
#include <algorithm>
using namespace std;

vector<long long> op1(vector<long long> v){
    vector<long long> v1=v;
    sort(v1.begin(),v1.end());
    v1.erase(v1.begin());
    v1.erase(v1.begin());
    return v1;
}

vector<long long> op2(vector<long long> v){
    vector<long long> v2=v;
    sort(v2.begin(),v2.end());
    v2.pop_back();
    return v2;
}

long long maxsum(vector<long long> v,int k){
    long long sum = 0;
    if(k == 0) {
           for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        return accumulate(v.begin(), v.end(), 0);
    }
    vector<long long> x,y;
    x=op1(v);
    y=op2(v);
    if(accumulate(x.begin(), x.end(), 0)>accumulate(y.begin(), y.end(), 0)){
        v=x;
        return maxsum(x,k-1);
    }
    else{
        v=y;
        return maxsum(y,k-1);
    }
}

long long main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> num;
        while(n--){
            int x;
            cin>>x;
            num.push_back(x);
        }
        cout<<"sum: "<<maxsum(num,k)<<endl;
    }
    return long long 0;
}