#include<stdio.h>
int main()
{
printf("The numbers are:\n");
    int i,summation=0;
    i=30;
    do
    {
        if(i%3==0&&i%5==0)
        {
        printf("%d\n",i);
            summation=summation+i;
        }

    }while(i<=150);
    printf("Summation:\n%d is the summation of that's number.",summation);
    return 0;

}


