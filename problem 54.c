#include<stdio.h>
int main(){
    float dis_cm,dis_inch;
    printf("Test Data:\nInput Data:");
    scanf("%f",&dis_cm);
    dis_inch=dis_cm/2.54;
    printf("Input the distance in cm:\nDastance of %.2f cms is = %.2f inches\n",dis_cm,dis_inch);
    return 0;

}