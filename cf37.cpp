#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
   string b={'a','b','c'};
   string x={'b','a','c'};
   string y={'a','c','b'};
   string z={'c','b','a'};

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a;
   if(a==b||a==x||a==y||a==z)
        cout<<"YES"<<endl;
   else{
    cout<<"NO"<<endl;
   }
   }
}
