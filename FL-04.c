/* Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/
#include<stdio.h>
int main(){
    int i,num;
    double aver=0,sum=0;
    printf("Input the 10 numbers: \n");
    for(i=1;i<=10;i++){
        printf("Number-%d :",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("The Sum of 10 no is : %lf\n",sum);
    aver=sum/10;
    printf("The Average is : %lf\n",aver);
}