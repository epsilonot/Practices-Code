#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int countQA(string st){
    int q,a,finalr;
     q=count(st.begin(),st.end(),"Q");
     a=count(st.begin(),st.end(),"A");
     finalr=result(q,a);
     return finalr;
}
int result(int q,int a){
    if(a==1){
        return factorial(q-1)/factorial(q-2);
    }
    else if(q==2){
        return factorial(a)/factorial(a-1);
    }
    else{
        return ((factorial(q-1)/factorial(q-2))+factorial(a)/factorial(a-1));
    }
}
int main(){
    string s;
    cin>>s;
    countQA(s);
}




