#include<stdio.h>
int main(){
    int i,m;
    long long int a,b,c,n;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%lld%lld%lld%lld",&a,&b,&c,&n);
        int sum=a+b+c+n;
        if(sum%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
