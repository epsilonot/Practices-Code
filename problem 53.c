/*Write a C program that accepts the principle, rate of interest, and time and calculates simple interest. Go to the editor
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000*/
#include<stdio.h>
int main()
{
    float i,p,n,r;
    printf("Test Data:\nInput Data: p,r and t");
    scanf("%f%f%f",&p,&r,&n);
    i=p*n*r/100;
    printf("Expected Output:\nInput principal, rate of interest & time to find simple insterest:%.2f\n",i);
    return 0;
}
