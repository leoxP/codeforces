#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;

    vector<int> v;

    int x,high,low;

    while(n--){        
        cin>>x;
        v.push_back(x);
    }


    high=v[0];
    low=v[0];

    for(int i=0;i<v.size();i++){
        if(v[i]>high){
            high=v[i];
            count+=1;
        }
        if(v[i]<low){
            low=v[i];
            count+=1;
        }
    }


    cout<<count;
}