#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n,p,q,coun=0,sub;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> p>>q;
        sub=abs(p-q);
        if(sub>0){
            coun++;
        }
    }
    cout<<coun<<endl;
}
