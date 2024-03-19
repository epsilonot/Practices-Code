#include<iostream>
using namespace std;
int main(){
    int t,result,a,b,sub;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>b){
             sub=a-b;
        }else{
             sub=b-a;
        }
        result=sub/10;
        cout<<result+1<<endl;
    }

}
