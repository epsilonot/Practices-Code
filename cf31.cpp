#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    vector<int>arr;
    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);
    sort(arr.begin(),arr.end());
    int rem1=arr[1]-arr[0];
    int rem2=arr[2]-arr[1];
    int result=rem1+rem2;
    cout<<result;
}
