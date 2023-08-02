#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    long int n,t;
    cin>>n>>t;

    vector<long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > t) {
            break;
        }
        t-=v[i];
        c++;
    }
    cout << c;
    return 0;
}