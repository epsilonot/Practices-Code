#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,c,d,p,nl,np,con1,con2,con3,result;
    cin>>n>>k>>i>>c>>d>>p>>nl>>np;
    con1=(k*i)/nl;
    con2=c*d;
    con3=p/np;
   int mini = min({con1,con2,con3});
    result=mini/n;
    cout<<result;
}