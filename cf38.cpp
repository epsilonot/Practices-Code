#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int t,n,a;
    long long product=1;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        int temp=arr[0];
        temp=temp+1;
        arr[0]=temp;
        for(int i=0;i<n;i++){
            product=product*arr[i];
        }
        cout<<product<<endl;
        arr.clear();
        product=1;
    }
}
