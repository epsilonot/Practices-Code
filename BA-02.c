/*Write a C program that will take a number as input and find the absolute difference between the input number 
and 51. If the input number is greater than 51, it will return triple the absolute difference.
Expected Output:
6
21
0
*/
#include<stdio.h>
#define NUM 51
int main(){
    int a,dif_ab,dif3;
    scanf("%d",&a);
    dif_ab=(a-NUM);
    if(a>NUM){
    dif3=dif_ab*3;
    printf("%d\n",dif3);
    }else
    printf("%d\n",dif_ab);
}
/*
int main (void){
    printf("%d",test(51));
    printf("%d\n",test(30));
    printf("%d\n",test(12));
}
int test (int n){
    const int x=51;
    if(n>x){
    return (n-x)*3;
    }
    return x-n
}
*/