#include <stdio.h>

int main()
{
    int a, b, c, d, m, n;
    float x1, x2, det;

    printf("Enter the values of a, b, c, d, m, and n: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

    det = a*d - b*c;

    if (det == 0)
    {
        printf("Error: The denominator (ad - bc) is equal to zero.\n");
    }
    else
    {
        x1 = (m*d - b*n) / det;
        x2 = (n*a - m*c) / det;
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }

    return 0;
}
