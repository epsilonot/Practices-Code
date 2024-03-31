#include <bits/stdc++.h>
#include <functional>
using namespace std;
void show(int arr[],int asize);
int main(){
    int arr[]={50,45,54,86,34,0,5,4,54,564,54,8,69,4,13,48,5};
    int asize=sizeof(arr)/sizeof(arr[0]);
    show(arr,asize);
    cout<<endl;
    sort(arr+(asize/2),arr+asize);
    show(arr,asize );
}
void show(int arr[],int asize){
    for (int i=0;i<asize;i++){
        cout<<arr[i]<<" ";
    }
}
