#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,0,0,1,0,1,0,1,1,0};
    vector<int>::iterator it;
    int n=arr.size();
    while ( n--) {
            if ((arr[0]==0||arr[0]==1)&&(arr[n-1]==0||arr[n-1]==1)){
    arr.erase(arr.begin());
    arr.pop_back();
    }
    }
    ///int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
