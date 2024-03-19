#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0,n;
    cin>>a>>b;
    vector<int> arr;
    for(int i=0;i<a;i++){
            cin>>n;
        arr.push_back(n);
    }
    //cout<<(a+b)<<"\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<b;i++){
        if(arr[i]<=0){
            arr[i]=-arr[i];
            sum=sum+arr[i];
        }
    }
    cout<<sum<<"\n";
    arr.clear();
}
