#include<bits/stdc++.h>
using namespace std;
void solve(int n);
void solve(int n){
if (n % 10 == 0 && n % 100 != 0)
    cout<<"Dashak."<<"\n";
else if (n % 100 == 0 && n % 1000 != 0)
    cout<< "Shatak."<<"\n";
else if (n % 10 != 0)
    cout<< "Ekok."<<"\n";
else
    cout<< "Counterfeit."<<"\n";
}
int main(){
    int t,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>b;
        solve(b);
    }
}
