/*Write a C program to compute the sum of the three integers. Do not count a value that is 13 and add it to the
 sum.
Expected Output:
16
23
10
0*/
#include <stdio.h>
int main()
{
    int a, b, c, sum = 0, i;
    for (i = 1; i < 5; i++)
    {
        sum = 0;
        scanf("%d%d%d", &a, &b, &c);
        if (a == 13)
            a = 0;
        if (b == 13)
            b = 0;
        if (c == 13)
            c = 0;
        sum = a + b + c;
        printf("sum[%d]= %d\n", i, sum);
    }
}