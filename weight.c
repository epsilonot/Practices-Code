#include<stdio.h>
int main(){
    int apple1,apple2,apple3,sum;
    apple1=10;
    apple2=20;
    apple3=30;
    sum=apple1+apple2+apple3;
    float avr,result;
    avr=(float)sum/3;
    result=avr*20;

    printf("The total mass of 20 apples = %.2f\n",result);
}

