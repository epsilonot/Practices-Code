#include<stdio.h>
int main(){
    int a[6];
    int i;
    printf("Input the 5 members of the array:\n");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    a[0]=a[5];
    a[1]=a[4];
    a[2]=a[3];
    printf("\nExpected Output:");
    for(i=0;i<6;i++){
        printf("array_n[%d] = %d\n",i,a[i]);
    }
    return 0;
}