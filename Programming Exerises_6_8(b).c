#include <stdio.h>

int main()
{
    float x, y ;
    printf("Enter a value for x: ");
    scanf("%f", &x);
    if (x > 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }


    printf("The value of y is: %f\n", y);
    return 0;
}
