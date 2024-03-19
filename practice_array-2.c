#include<stdio.h>
int main()
{
    int i,sum_odd=0,sum_even=0;
    int a[5];

    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Values in array:");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);


        if(a[i]%2==0)
        {
            sum_even=sum_even+a[i];
        }
        else
        {
            sum_odd=sum_odd+a[i];
        }


    }
    printf("\nSum of odd values:%d\n",sum_odd);
    printf("Sum of even values:%d\n",sum_even);

    return 0;
}
