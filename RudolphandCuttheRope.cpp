#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,coun=0;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
        cin>>a>>b;
        if(a<=b){
            coun++;
        }

        }
        int result=n-coun;
        cout<<result<<"\n";
    }
}
