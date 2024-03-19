#include <stdio.h>

int main()
{
    float x, y ;
    printf("Enter a value for x: ");
    scanf("%f", &x);
    y=(x>0)? 1:((x==0)? 0:-1);


    printf("The value of y is: %f\n", y);
    return 0;
}
