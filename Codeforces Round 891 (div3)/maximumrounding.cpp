#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;

        long long temp=x;

        int length=0;
        while(temp!=0){
            length+=1;
            temp/=10;
        }
        temp=x;

        long long maxnum=x;
        long long check;
        long long k=1;

        for(int i=length-1;i>=0;i--){
            check=temp%10;
            if(check<5){
                x=x-(pow(10,k-1)*check);
            }
            else{
                x=x+(pow(10,k))-(pow(10,k-1)*check);
            }
            maxnum=max(maxnum,x);
            long long l=pow(10,k);
            temp=x/l;
            k+=1;
            temp%=10;
        }

        cout<<maxnum<<endl;
    }
}