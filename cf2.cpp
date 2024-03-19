#include<iostream>
using namespace std;
int main(){
    int a;
    double sum=0.000000000000000000;
    cin>>a;
    double arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long double result=sum/a;
    cout<<result<<endl;
}
