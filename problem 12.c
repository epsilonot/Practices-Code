/*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00 */
#include<stdio.h>
int main()
{
    int id,hrs;
    float salary,amount_hrs;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d",&id);
    printf("Input the working hrs: ");
    scanf("%d",&hrs);
    printf("Salary amount/hr: ");
    scanf("%f",&amount_hrs);
    printf("Expected Output:\nEmployee ID = %d\n",id);
    salary=amount_hrs*hrs;
    printf("Salary = U$%6.2f",salary);
    return 0;
    }
