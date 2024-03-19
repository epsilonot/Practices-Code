#include<stdio.h>
int main()
{
    int n,i;
    while(1)
    {
        printf("Enter an integer Value:");
        scanf("%d",&n);
        if(n==-1)
            break;
        if(n<=-32)
        {
            for(i=n; i<=-32; i++)
            {
                printf("%d\n",i);
            }
        }
        else
        {
            for(i=n; i>=-32; i--)
            {
                printf("%d\n",i);
            }
        }

    }
    return 0;
}
