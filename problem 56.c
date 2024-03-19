/*Write a C program to shift given data by two bits to the left. Go to the editor
Input value : 2
Read the integer from keyboard-
Integer value = 2
The left shifted data is = 16*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Input Value:");
    scanf("%d",&a);
    printf("Read the integer from keybord-\nInteger value = %d\n",a);
    a<<=2;/*For example, if "a" has a binary value of 01010110, 
    then "a <<= 2" would shift the value two bits to the left to give 01011000,
    which is 88 in decimal.
    Therefore, after executing this statement, the value of "a" would be 88.*/
    b=a;
    printf("The left shifted data is = %d\n",b);
    return 0;
}