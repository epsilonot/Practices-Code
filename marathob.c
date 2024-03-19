#include<stdio.h>
void test(void);
int main(){
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        test();
    }
}
void test(void){
    int i,count=0;
    long long int num[4],temp;
    for(i=0;i<4;i++){
        scanf("%lld",&num[i]);

    }
    temp=num[0];
    for(i=1;i<4;i++){
    if(num[i]>temp)
        count++;
    }
    printf("%d\n",count);
}
