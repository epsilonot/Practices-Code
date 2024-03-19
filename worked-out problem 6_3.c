#include<stdio.h>
#define ACCURACY 0.0001
int main()
{
    int n,count;
    float x,term,sum;
    printf("Enter value of x:");
    scanf("%f",&x);
    n=count=sum=term=1;
    while(n<=100)
    {
        term=term*x/n;
        sum=sum+term;
        count=count+1;
        if(term<ACCURACY)
            n=999;
        else
            n=n+1;
    }
    printf("Terms = %d sum = %f\n",count,sum);
    return 0;
}
