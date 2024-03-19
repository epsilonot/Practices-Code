/*Write a C program to check whether a given integer is positive even, negative even, 
positive odd or negative odd. Print even if the number is 0. 
Test Data :
Input an integer: 13
Expected Output:
Positive Odd*/
#include<stdio.h>
int main (){
    int number;
    printf("Input an integer: ");
    scanf("%d",&number);
   if(number>0&&number%2==0){
    printf("Positive Even\n");
   }
   else if(number>0&&number!=0){
    printf("Positive Odd\n");
   }
   else if(number<0&&number==0){
    printf("Negative Even\n");
   }
   else if(number<0&&number!=0){
    printf("Negative Odd\n");
   }
   return 0;
}
