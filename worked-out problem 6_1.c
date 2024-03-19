#include<stdio.h>
int main()
{
    int a,b,c,d;
    float ratio;
    printf("Enter four integer valus\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c-d!=0)
    {
        ratio=(a+b)/(c-d);
        printf("Ratio = %f",ratio);
    }
    return 0;
}
