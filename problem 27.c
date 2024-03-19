/*Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2 */
#include <stdio.h>
int main()
{
    printf("Name:Afridi Alom Pranto\nID: 2102027\n");
    printf("Test data:\n");
    int num, pos_num = 0, neg_num = 0, i;
    for (i = 1; i <= 5; i++)n
    {
        printf("%d. ", i);
        
        scanf("%d", &num);
        if (num > 0)
        {
            pos_num = pos_num + 1;
        }
        else if (num < 0)
        {
            neg_num = neg_num + 1;
        }
    }
    printf("Number of positive numbers:%d\n", pos_num);
    printf("Number of negative numbers:%d", neg_num);
    return 0;
}
