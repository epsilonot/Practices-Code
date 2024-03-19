#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,coun=0;
    string s;
    cin>>a;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            coun++;
        }
    }
   // cout<<coun<<endl;
    if(coun==26){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
