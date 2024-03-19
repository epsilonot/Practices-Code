#include<stdio.h>
int main()
{
    printf("The numbers are:\n");
    int i,summation=0;
    i=30;
    while(i<=120)
    {
        if(i%3==0&&i%5==0)
        {
            printf("%d\n",i);
            summation=summation+i;
        }
        i++;
    }
    printf("Summation:\n%d is the summation of that's number.",summation);
    return 0;

}


