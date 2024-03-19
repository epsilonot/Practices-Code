#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    if(s[0]==s[1]){
        if(s[0]==s[2])
            cout<<s[1];
        else
            cout<<s[0];
    }
    else{
        cout<<s[2];
    }
    return 0;
}
