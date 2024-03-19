#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,coun=0;
    cin>>n>>t;
    int rem_t=240-t;
    for(int i=1;i<=n;i++){
        if(rem_t>=(5*i)){
            rem_t=rem_t-(5*i);
            coun++;
            //cout<<rem_t<<endl;
        }
    }
    cout<<coun<<endl;
}
