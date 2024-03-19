 /*Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number. Go to the editor
Input a positive number less than 500:
Sum of the digits of 347 is 14*/
#include<stdio.h>
int main(){
    int num,digit,r_num=0,sum=0;
    printf("Inter the positive number less than 500:");
    scanf("%d",&num);
    if(num<1||num>500){
        printf("It's an error value\n");
    }else{
        printf("The original number is %d\n",num);
        while(num>0){
            digit=num%10;
            r_num=r_num*10+digit;
            sum+=digit;
            num/=10;
        }
        printf("The reverse number is %d\n",r_num);
        printf("Sum of the number is %d\n",sum);
    }
    return 0;
}