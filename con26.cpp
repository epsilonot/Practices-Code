
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,t;
    set<int>arr;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>x;
       arr.insert(x);
    }
    int result=arr.size();
    cout<<result;
    arr.clear();
}
