#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    int n,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>a>>b;
        if(n%2==0){
            if(b>2*a){
                cout<<a*n<<"\n";
            }else{
                cout<<b*(n/2)<<"\n";
            }
        }else {
            if(b>2*a)
                 cout<<a*n<<"\n";
            else
                cout<<((n/2)*b)+a<<"\n";
        }
    }
}
