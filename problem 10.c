/*Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375 */
#include <stdio.h>
int main()
{

    int a, b, product;
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);
    product = a * b;
    printf("Expected Output:\nProduct of the above two integer = %d", product);
    return 0;
}
