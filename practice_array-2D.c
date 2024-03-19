#include<stdio.h>
int main()
{
    int i,j;
    int x[2][3];
    printf("Enter the value:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&x[i]);
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[j]);
        }
    }
    for(i=0;i<2;i++)
    {
        printf("%d",x[i]);
        for(j=0; j<3; j++)
        {
            printf("%d",x[j]);
        }
    }
    return 0;
}
