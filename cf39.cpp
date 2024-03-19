#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;

    cin>>a>>b;
    int arr[a][a];
    int coun=0;
    for(int i=1;i<=a;i++){
        if(b%i==0&&b/i<=a)
            coun++;
    }
    cout<<coun<<endl;
}
