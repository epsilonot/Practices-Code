/*Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00 */
#include <stdio.h>

int main()
{
    printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
    int num1, num2, num3, num4, num5;
    int positive_count = 0;
    double sum = 0, average = 0;

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

    if (num1 > 0)
    {
        positive_count++;
        sum += num1;
    }
    if (num2 > 0)
    {
        positive_count++;
        sum += num2;
    }
    if (num3 > 0)
    {
        positive_count++;
        sum += num3;
    }
    if (num4 > 0)
    {
        positive_count++;
        sum += num4;
    }
    if (num5 > 0)
    {
        positive_count++;
        sum += num5;
    }

    if (positive_count > 0)
    {
        average = sum / positive_count;
        printf("Number of positive numbers: %d\n", positive_count);
        printf("Average value of the said positive numbers: %.2lf", average);
    }
    else
    {
        printf("No positive numbers were entered.");
    }

    return 0;
}
