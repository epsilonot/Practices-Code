/* Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50. Go to the editor
Expected Output:
Value of S: 4.50*/
#include<stdio.h>
int main(){
    double i,j=1,d,sum=0;
    for(i=1;i<=50;i++){
        d=(j/i);
        sum=sum+d;
    }
    printf("Value of S: %.2lf\n",sum);
    return 0;
}