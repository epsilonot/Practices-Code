#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,coun=0,result=0;
    int num;int num1;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        vector<int>arr;
        vector<int>arr1;
        for(int i=0;i<a;i++){

            cin>>num;
            arr.push_back(num);
        }
        for(int i=0;i<a;i++){

            cin>>num1;
            arr1.push_back(num1);
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());

        for(int i=0;i<a;i++){
            if(arr[i]<arr1[(a-1)-i]){
                    if(b==0)
                        break;
                arr[i]=arr1[(a-1)-i];
                coun++;
                if(coun>=b)
                break;
            }

        }


        for(int i=0;i<a;i++){
            result=result+arr[i];
        }
        cout<<result<<"\n";
        arr.clear();
        arr1.clear();
        coun=0;
        result=0;
    }
}
