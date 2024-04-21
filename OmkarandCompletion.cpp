#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int result=1000-n;
        for(int j=result;j<1000;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
