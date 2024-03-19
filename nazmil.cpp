
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,maxi,mun;
    cin>>a>>b>>c;
    if(a>b){
        maxi=a;
    }
    else if(b>c) maxi=b;
    else if(c>a) maxi=c;
    cout<<maxi;
    if(a<b) mun=a;
    else if(b<c) mun=b;
    else if(c<a) mun=c;
    cout<<mun;
}
