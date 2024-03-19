#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;

    cin>>t;
    for(int i=0;i<t;i++){
            string s;
            int f=0;
        cin>>n>>s;

        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                            f=1;
                        //break;
                    }
                }
            }

        }
            if(f)
                cout<<"NO"<<"\n";
            else
                cout<<"YES"<<"\n";
    }
    //s.clear();
}
