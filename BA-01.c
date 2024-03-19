/*1. Write a C program to compute the sum of the two input values. If the two values are the same, then return 
triple their sum.
Expected Output:
3
12
*/
#include<stdio.h>
int main(){
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=(a!=b)?(a+b):(a+b)*3;
    printf("Sum= %d\n",sum);
    return 0;
}