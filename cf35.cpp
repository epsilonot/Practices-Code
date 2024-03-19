#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //char a[100];
    int coun=0,coun1=0;
    string ab;
    getline(cin,ab);
    vector<char>arr;
    for(int i=0;i<ab.size();i++){
            //cin>>a;
        if(isalpha(ab[i])!=0){
           arr.push_back(ab[i]);
            //coun++;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=arr[i+1])
            coun++;
            else if(arr[i]==arr[i+1])
               coun1++;
    }
    //cout<<coun1<<endl;

    int n=arr.size();
    //cout<<n<<endl;;
    if(coun1==n && coun1!=0)
        cout<<"1";

        else
            cout<<coun;

arr.clear();
}
