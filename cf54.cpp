#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        int re=a/3;
        if(a%3==0){
            cout<<re<<" "<<re<<"\n";
        }else{
            if(((re+1)+re*2)==a)
                cout<<re+1<<" "<<re<<"\n";
            else
                cout<<re<<" "<<re+1<<"\n";
        }
    }
}
