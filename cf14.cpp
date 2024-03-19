#include<iostream>
#include<vector>
using namespace std;
int main(){
    int p,n,coun=0;
    cin>>p;
    vector<int>arr;
    for(int i=0;i<p;i++){
        cin>>n;
        arr.push_back(n);
    }
    for(int i=0;i<p;i++){
        if(arr[i]==1)
            coun++;
    }
    if(coun>0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
}
