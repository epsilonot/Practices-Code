#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b,c,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>x>>y;
        int temp=c-1;
        int left=(x+y)-1;
        int right=a+b+temp;
        if(c<x)
            cout<<"NO"<<"\n";
        else {
            if(left>right)
                cout<<"NO"<<"\n";
            else
                cout<<"Yes"<<"\n";
        }

    }
}
