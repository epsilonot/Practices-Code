#include<stdio.h>
int main()
{

    int a[7];
    int i, max=a[0];
    printf("Enter the value of 7 integer:");
    for(i=0; i<7; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1; i<7; i++)
    {
        if(a[i]>max)
            max=a[i];

    }
    printf("Max=%d",max);

    return 0;
}
