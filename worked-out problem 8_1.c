#include<stdio.h>
int main()
{
    int i;
    float x[10],value,total=0.00;
    printf("ENTER 10 REAL NUMBERS: \n");
    for(i=0; i<10; i++)
    {
        scanf("%f",&value);
        x[i]=value;
    }
    for(i=0;i<10;i++){
        total=total +x[i]*x[i];
    }
        printf("\n");
        for(i=0;i<10;i++){
            printf("x[%2d] = %5.2f\n",i+1,x[i]);
        }
    printf("\n total = %.2f\n",total);
    return 0;
}
