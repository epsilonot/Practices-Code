#include<stdio.h>
int main(){
   int i,j,a,num=1;
   printf("Input a:");
   scanf("%d",&a);
   for(i=1;i<=a;i++){
    for(j=1;j<=8;j++){
        printf("%d\t",num);
        num+=1;
    }
    printf("\n");
   }
    return 0;
}