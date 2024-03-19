#include<stdio.h>
int main(){
int p,r,n,i;
printf("Enter the Principal amount:\n");
scanf("%d",&p);
printf("Enter the rate of interest:\n");
scanf("%d",&r);
printf("Enter the time:\n");
scanf("%d",&n);
i=(p*r*n)/100;
printf("Simple interest:%d",i);
return 0;
}
