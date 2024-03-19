#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // i=0;j=1,j=2,
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]); // i=0;j=1,j=2,
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all the values: %d\n",sum);
    float avarage=sum/9.00;
    printf("Avarage of all the values: %.2f\n",avarage);
    return 0;
}