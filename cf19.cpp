#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,coun1=0,coun2=0;
    cin>>p;
    vector<int>arr1;
    vector<int>arr2;
    int m,n,a,b;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        arr1.push_back(a);
    }
    cin>>n;
     for(int i=0;i<n;i++){
        cin>>b;
        arr2.push_back(b);
    }
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]==p){
            coun1++;
        }
    }
    for(int i=0;i<arr2.size();i++){
        if(arr2[i]==p){
            coun2++;
        }
    }
    if(coun1+coun2>0){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}
