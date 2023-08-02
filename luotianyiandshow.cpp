#include <iostream>
#include <vector>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,a,b) for(int i=b-1;i>=a;i++)
int main(){
    int t;
    cin>>t;
    int flag;
    int j=0;
    int n,m; //number of people and number of seats 
    vector <int> numarr(t,0);
    while(t--){
        cin>>n>>m;
        int num=0;
        vector <int> arr(m,0);
        while(n--){
            flag=0;
            int x;
            cin>>x;
            if(x==-1){
                rep(i,0,arr.size()){
                    if(arr[i]==1 && arr[0]!=1 && i!=0 && arr[i-1]!=1){
                            arr[i-1]=1;
                            num++;
                            flag=1;
                            break;
                    }
                    else if(arr[0]==1){
                        break;
                    }
                }
                if(flag!=1){
                    arr[m-1]=1;
                    num++;
                }
            }
            else if(x==-2){
                for(int i=arr.size()-1;i>=0;i--){
                    if(arr[i]==1 && arr[m-1]!=1 && i!=arr.size()-1 && arr[i+1]!=1){
                        arr[i+1]=1;
                        num++;
                        flag=1;
                        break;
    
                    }
                    else if(arr[m-1]==1){
                        break;
                    }
                }
                if(flag!=1 && arr[m-1]!=1){
                    arr[0]=1;
                    num++;
                }
            }
            else{
                if(arr[x-1]!=1){
                    arr[x-1]=1;
                    num++;
                }
            }
        }
        numarr[j]=num;
        j++;
    }
    rep(i,0,numarr.size()){
       cout<<numarr[i]<<endl;
    }
    return 0;
}