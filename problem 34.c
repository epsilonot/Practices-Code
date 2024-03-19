/*Write a C program to compute the sum of consecutive odd numbers from a given pair of integers. 
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24*/
#include<stdio.h>
int main(){
    int a,b,i,sum=0;
    printf("Input a pair of numbers \n");
    printf("Input first number of the pair: ");
    scanf("%d",&a);
    printf("Input second number of the pair: ");
    scanf("%d",&b);
    printf("List of odd numbers:\n");
    for(i=b;i<=a;i++){
        if(i%2!=0){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("Sum=%d\n",sum);
    return 0;
}