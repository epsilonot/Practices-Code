#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,coun=0,coun1=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    sort(arr,arr+n);
    //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<endl;
    for(int i=0;i<(n/3);i++){
        for(int j=(3*i);j<=((3*i)+2);j++){
            if(arr[j]+k<6){
                coun++;
            }else{
                coun=0;
            }
        }//cout<<coun<<endl;;
        if(coun==3){
            coun1++;
        }
        coun=0;
    }
    cout<<coun1;
}


