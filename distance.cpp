#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;
void show(vector<int>a, int n);
int size(vector<int>a);
void show(vector<int>a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int size(vector<int>a){
    int n=a.size();
    return n;
}
int main(){
    int arr[]={1,4,3,43,21,6,4,3,2,42,4,65,0,7,67,87,87,9,7656,445,34,34,2,2343,54,456};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    cout<<"Before sorting: "<<"\n";
    show(a,size(a));
    cout<<"\n"<<"Distance between first to max element: "<<distance(a.begin(),max_element(a.begin(),a.end()))<<"\n";
    cout<<"Distance between first to min element: "<<distance(a.begin(),min_element(a.begin(),a.end()))<<endl;
    a.erase(max_element(a.begin(),a.end()));
    show(a,size(a));
    cout<<endl;
    a.erase(unique(a.begin(),a.end()),a.end());
    show(a,size(a) );
    sort(a.begin(),a.end());
    cout<<"\n"<<"After sorting: "<<"\n";
    show(a, size(a));
     cout<<"\n"<<"Distance between first to max element: "<<distance(a.begin(),max_element(a.begin(),a.end()))<<"\n";
    cout<<"Distance between first to min element: "<<distance(a.begin(),min_element(a.begin(),a.end()))<<endl;

    a.erase(min_element(a.begin(),a.end()));
    show(a,size(a));
    cout<<endl;
    a.erase(unique(a.begin(),a.end()),a.end());
    show(a,size(a) );
}
