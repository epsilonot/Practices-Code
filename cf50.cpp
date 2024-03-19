#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,number,temp,result=0,coun=0,result1=0,sum;
    cin>>t;
    for(int i=0;i<t;i++){
            result=0;result1=0;coun=0,temp=0,sum=0;
            cin>>number;
            vector<int>s;
            while(number>0){
                int digit=number%10;
                number=number/10;
                s.push_back(digit);
            }
            //string s;

        temp=s[0];
            result=(temp-1)*10;
    //cout<<result<<endl;







        for(int i=1;i<=s.size();i++){
            result1=result1+i;
        }
       sum=result1+result;
       cout<<sum<<"\n";
       s.clear();
    }
}
