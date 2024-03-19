#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n][n];
    for(int j=0;j<n;j++)
        arr[0][j]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
           sum=sum+arr[i-1][j];
            arr[i][j]=sum;
        }
        sum=0;
    }cout<<arr[n-1][n-1];
}

