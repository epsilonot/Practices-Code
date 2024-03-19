#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    vector<int>arr;
    for(int i=0;i<t;i++){
        for(int i=0;i<3;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        cout<<arr[1]<<"\n";
        arr.clear();
    }
}
