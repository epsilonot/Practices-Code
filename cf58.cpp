
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,coun=0,flag;
    cin>>t;
    while(t--){
       cin>>n;
       vector<int>arr;
       int a;
       for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
       }
       sort(arr.begin(),arr.end());
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                coun++;
                break;
            }
        }
        if(coun>0)
            break;
       }
       if(coun>0)
        cout<<"0"<<"\n";
       else if {
           for(int i=0;i<n;i++){
               for(int j=i+1;j<n;j++){
                   if(arr[i]+1==arr[j]){
                       cout<<arr[j]-arr[i]<<"\n";
                       flag=1;
                       break;
                   }
               }
               if(flag=1)
                   break;
           }
       }
       else{
            cout<<arr[1]-arr[0]<<"\n";
       }
       arr.clear();
       coun=0;
    }
}
