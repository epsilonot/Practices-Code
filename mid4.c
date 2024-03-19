#include <stdio.h>

int main()
{
    char ope;
    float num1, num2, result=0;


    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter number-1: ");
    scanf("%f",&num1);
    getchar();
    printf("Enter the operator: ");
    scanf("%c",&ope);
    printf("Enter number-2: ");
    scanf("%f",&num2);



    switch(ope)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }


    printf("%.2f %c %.2f = %.2f\n", num1, ope, num2, result);

    return 0;
}
