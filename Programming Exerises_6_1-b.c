#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("NUMBER IS EVEN\n");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    return 0;
}
