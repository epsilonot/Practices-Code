#include<stdio.h>
int main(){
    int number,i;
    printf("Input the first number of the array: ");
    scanf("%d",&number);
    printf("Expected output: \nn[0] = %d\n",number);
    for(i=1;i<5;i++){
        number=number*3;
        printf("n[%d] = %d\n",i,number);
    }
    return 0;
}
