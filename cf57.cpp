#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n/2;
    cout<<t<<"\n";
    if(2*t==n){
        for(int i=0;i<t;i++){
            cout<<"2 ";
        }
    }else{
        for(int i=0;i<t-1;i++){
            cout<<"2 ";
        }
        cout<<"3";
    }
}
