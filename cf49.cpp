#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>arr;
        int coun=0;
        cin>>n;
        for(int i=0;i<n;i++){
                coun=0;
            cin>>a;
            arr.push_back(a);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((j-i)==(arr[j]-arr[i]))
                coun++;
            }
        }
        cout<<coun<<"\n";
        arr.clear();
    }
}
