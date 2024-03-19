#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r,
    result;
    cin>>k>>r;
    for(int i=1;i<=k;i++){
     if(((k*i)+r)%10==0){
        result=i;
     }
    }
    cout<<result;
}
