/*Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places. Go to the editor
Input value of x: .6235
Value of sin(1/x) is 0.9995*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x, value;
    printf("Input the value:");
    scanf("%f",&x);
    value=sin(1/x);
    printf("Value of sin(1/x) is %.4f",value);
    return 0;
}
