/*Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:*/
#include <stdio.h>

int main()
{
    printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
    int num1, num2, num3, num4, num5, sum = 0;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    printf("Input the third number: ");
    scanf("%d", &num3);

    printf("Input the fourth number: ");
    scanf("%d", &num4);

    printf("Input the fifth number: ");
    scanf("%d", &num5);

    if (num1 % 2 != 0)
    {
        sum += num1;
    }
    if (num2 % 2 != 0)
    {
        sum += num2;
    }
    if (num3 % 2 != 0)
    {
        sum += num3;
    }
    if (num4 % 2 != 0)
    {
        sum += num4;
    }
    if (num5 % 2 != 0)
    {
        sum += num5;
    }

    printf("Sum of all odd values: %d", sum);

    return 0;
}
