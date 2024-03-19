#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    int a;
    for(int i=0;i<8;i++){
        cin>>a;
        vec.push_back(a);
    }
    int k,l,m;
    k=(vec[1]*vec[2])/vec[0];
    l=vec[3]/vec[4];
    m=vec[5]/vec[7];
    if(k>l)
        l=k;
    if(l>m)
        m=l;
    int result=k/vec[6];
    cout<<result<<endl;
}
