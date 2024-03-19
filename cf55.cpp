#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int n=s.size()/2;
        if(s.substr(0,n)==s.substr(n,s.size()))
            cout<<"YES"<<"\n";
        else
           cout<<"NO"<<"\n";
    }
}
