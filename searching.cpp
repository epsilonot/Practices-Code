#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
void show(int arr[],int n);
void show(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Without sorting this array:"<<endl;
    show(arr,n);
    sort(arr,arr+n);
    cout<<"By sorting this array:"<<endl;
    show(arr,n);
    cout<<"\n";
    if(binary_search(arr,arr+n,17))
        cout<<"The number is in the array"<<"\n";
    else
        cout<<"The number is not in the array"<<"\n";
}
