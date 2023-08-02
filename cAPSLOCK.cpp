#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    cin>>str;
    string str1="";
    bool check=true;

    if(isupper(str[0])){
        str1+=tolower(str[0]);
    }
    if(islower(str[0])){
        str1+=toupper(str[0]);
    }
        
    for(int i=1;i<strlen(str);i++){
            if(isupper(str[i])){
                str1+=tolower(str[i]);
            }
            else{
                check=false;
                str1=str;
                break;
            }
    }
    cout<<str1;
    return 0;
}