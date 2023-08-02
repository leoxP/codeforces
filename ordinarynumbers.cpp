#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long x,check;
    while(n--){
        cin>>x;
        int count=0;
        for(int i=1;i<=9;i++){
            check=i;
            while(check<=x){
                count++;
                check=(check*10)+i;
            }
        }
        cout<<count<<endl;
    }
}