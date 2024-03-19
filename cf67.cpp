
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[a][b];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[a][b]<<" ";
        }
        cout<<endl;
    }
}
