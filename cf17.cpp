#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int coun0=0,coun1=0;
    cin>>a;
    for (int i=0;i<a.size();i++){
            //cout<<a[i];
        if(a[i]=='0'){
            coun0++;
        }if(coun0>6){
            break;
        }
            if(a[i]=='1'){
                coun0=0;
            }

    }//cout<<coun0<<endl;
     for (int i=0;i<a.size();i++){
        if(a[i]=='1'){
            coun1++;
        }if(coun1>6){
            break;
        }
            if(a[i]=='0'){
                coun1=0;
            }

    }//cout<<coun1<<endl;
    if(coun0>=7){
        cout<<"YES"<<endl;
    }else if(coun1>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
