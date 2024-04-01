#include <algorithm>
#include<bits/stdc++.h>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;
void show(vector<int>a,int n);
void show(vector<int>a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]={11,24,01,2,7,65,125,39,75,11,12,65,16,19,58,2,6,7,55,6,63,431,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    cout<<"Before sorting: "<<"\n";
    show(a,n);
    sort(a.begin(),a.end());
    cout<<"\n"<<"After sorting: "<<"\n";
    show(a,n);
    cout<<"\n"<<"After reverse with sorting: "<<"\n";
    sort(a.begin(),a.end(),greater<int>());
    show(a,n );
    cout<<"\n"<<"After reverse without sorting: "<<"\n";
    reverse(a.begin(),a.end());
    show(a,n );
    cout<<"\n"<<"Max element: "<< *max_element(a.begin(),a.end());
    cout<<"\n"<<"Minimun element: "<< *min_element(a.begin(),a.end())<<"\n";
    cout<<"\n"<<"Sum of the  element: "<< accumulate(a.begin(),a.end(),0)<<"\n";
}
