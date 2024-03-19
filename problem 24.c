/*Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied! */
#include <stdio.h>
int main()
{
    printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
    int a, b;
    printf("Test Data:");
    printf("Input the first number:");
    scanf("%d", &a);
    printf("Input the second number:");
    scanf("%d", &b);
    printf("Expected Output:");
    if (a > b)
    {
        int Temp;
        Temp = a;
        a = b;
        b = Temp;
    }
    if ((b % a) == 0)
    {
        printf("Multiplied!");
    }
    else
    {
        printf("Not Multiplied:(");
    }
    return 0;
}
