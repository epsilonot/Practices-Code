#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,count=0;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    //int result=n/2;
    for(int i=0;i<n;i++){
        if(vec[i]!=vec[i+1])
            count++
    }
    //int result=n-position;
    cout<<count<<endl;
}