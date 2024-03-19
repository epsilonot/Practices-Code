#include<bits/stdc++.h>
using namespace std;
int main(){
   double note[]={100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
   double coin[]={1.00, 0.50, 0.25, 0.10, 0.05,0.01};
   double amount;
   cin>>amount;
   cout<<"NOATS:"<<endl;
   for(int i=0;i<6;i++){
        int coun=amount/note[i];
        //if(coun>0){
            cout<<coun<<" nota(s) de R$ "<<note[i]<<endl;
            amount -= coun * note[i];
        //}
   }
   cout<<"MOEDAS:"<<endl;
   for(int i=0;i<6;i++){
        int coun=amount/coin[i];

            cout<<coun<<" nota(s) de R$ "<< coin[i]<<endl;
            amount -= coun * coin[i];

   }
}
