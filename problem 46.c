/*Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8. Go to the editor
Expected Output:
Value of series: 4.62*/
#include<stdio.h>
int main(){
double i,j=1,d,sum=0;
    for(i=1;i<=7;i+=2){
        d=(i/j);
        sum+=d;
        j*=2;
    }
    printf("\nValue of series:%.2lf\n",sum);
    return 0;
}