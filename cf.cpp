#include<iostream>
using namespace std;
int main(){
    int a,b,bin,sub;
    cin>>a>>b;
    if(a>b){
        bin=b;

    }else{
        bin=a;

    }
    if(a>b){
        sub=((a-b)/2);
    }else{
        sub=((b-a)/2);
    }
    cout<<bin<<" "<<sub<<endl;

}
