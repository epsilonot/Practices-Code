//
// Created by epsilone_not on 12/23/23.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%7==0)
            cout<<n<<"\n";
        else{
             for(int i=1;i<=7;i++){
                 if((n+i)%7==0){
                     cout<<n+i<<"\n";
                     break;
                 }
             }
        }
    }
}
