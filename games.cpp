#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> v;

    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    int count=0;

    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(v[i].first == v[j].second){
                count+=1;
            }
        }
    }

    cout<<count;
}