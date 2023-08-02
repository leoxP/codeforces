#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int c1=0,c2=0;

    for(int i=0; i<3; i++){
        if(v[i]%2==0){
            c1+=1;
        }
        else{
            c2+=1;
        }
    }

    if(c1>c2){
        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }

    else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
    
    return 0;
}