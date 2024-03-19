//
// Created by epsilone_not on 12/23/23.
//
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a;
    int t,n;
    cin>>t;
    set<int>s;
    while(t--){
            cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            s.insert(a);
        }

        int result=s.size();
        if(n%2==0)
            cout<<result<<"\n";
        else
            cout<<result-1<<"\n";
            s.clear();
    }



}
