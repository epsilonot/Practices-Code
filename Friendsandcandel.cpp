#include <algorithm>
#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int>arr(n);
        int sum=0;
        int coun=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];

        }
        sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%n==0){
            int result=sum/n;
            coun=count_if(arr.begin(),arr.end(),[result](int element)
            {
                return element>result;
            }
            );

            cout<<coun<<"\n";
        }
        else
            cout<<"-1"<<"\n";

        arr.clear();
    }
}
