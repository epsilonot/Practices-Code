#include<stdio.h>
int main(){
    long long int a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b==c){
            printf("+\n");
        }else
            printf("-\n");
    }
}
