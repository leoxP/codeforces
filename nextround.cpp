#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m; 
    cin>>n>>m;
    vector<int> scores(n); 
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    int x=scores[m-1]; 
    int num=0; 
    for(int i=0;i<n;i++){
        if(scores[i]>=x && scores[i]>0){
            num+=1;
        }
    }
    cout<<num;
}
