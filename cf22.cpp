#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        //int siz=a.size();
        if(a.size()==2){
            cout<<a;
        }else{
        for(int i=0;i<a.size();i++){
                if(i%2!=0)
               cout<<a[i-1];

        }
        //char s=a.back();
            cout<<a.back();
        }cout<<endl;
    }
}
