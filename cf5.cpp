#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,sum1=0,sum2=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        for(int j=0;j<(a/2);j++){
            sum1=sum1+pow(2,j+1);
        }
        for(int j=(a/2);j<a;j++){
            sum2=sum2+pow(2,j);
        }
        int sub=abs(sum1-sum2);
        cout<<sub<<endl;
    }
}
