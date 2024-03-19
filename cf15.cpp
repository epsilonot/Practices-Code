#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,coun1=0,coun2=0;
    char c;
    vector<char>arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        arr.push_back(c);
    }

    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            coun1++;
        }else{
            coun2++;
        }
    }
    if(coun1>coun2)
        cout<<"Anton"<<endl;
    if(coun2>coun1)
        cout<<"Danik"<<endl;
    if(coun1==coun2)
        cout<<"Friendship"<<endl;
}
