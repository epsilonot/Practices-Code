#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    double a;
    double pi=2*acos(0.0);
    double area_sq=0,result=0;
    double area_cir=0;
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>a;
        area_sq=4*a*a;
        area_cir=pi*a*a;
        result=area_sq-area_cir;
        result=result+1e-9;
        printf("Case %d: %.2lf\n",i,result);
    }
}
