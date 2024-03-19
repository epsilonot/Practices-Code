#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,x;
    vector<int>arr;
    cin>>t;
    while(t--){
        cin>>a;
        for(int i=0;i<a;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        int comon=arr[0];
        int maxi=1;
        int curr=1;
        for(int i=1;i<a;i++){
            if(comon==arr[i-1])
                curr++;
            else{
                if(curr>maxi){
                     maxi=curr;
                     comon=arr[i-1];
                }else{
                    curr=1;
                }
            }
        }
        if(curr>maxi){
            maxi=curr;
            comon=arr.back();
        }
        cout<<comon<<"\n";
        arr.clear();
    }
}
