#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>::iterator up;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        up=upper_bound(arr.begin(),arr.end(),k);
        cout<<up-arr.begin()<<endl;
    }
    // int t;
    // cin>>t;
    // int p;
    // while(t--){
    //     cin>>p;
    //     int cnt=0;
    //     for(int i=0;i<arr.size();i++){
    //         if(p>=arr[i]){
    //             cnt++;
    //         }
    //     }
    //     cout<<cnt<<endl;
    // }
}