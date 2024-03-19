#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s,n;
    cin>>t;
    map<string,int>mp;
    for(int i=0;i<t;i++){
        cin>>s>>n;
        mp.insert(pair<int,string>(n,s));
        int largele=(mp.rbegin()->frist);
        cout<<largele<<endl;
    }

}
