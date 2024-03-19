#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,mini,maxi;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t-1;i++){
        mini=abs(arr[i]-arr[i+1]);
        maxi=abs(arr[i]-arr[t-1]);
        cout<<mini<<" "<<maxi<<endl;
    }
}
