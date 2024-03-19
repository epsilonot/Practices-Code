
#include<math.h>
int main()
{
    int a,b,x,y,t,q,w;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    x=b%10;
    y=b/10;
    t=x*a;
    q=y*a;
    w=t+(q*10);
    printf("\n%d",a);
    printf("\n*%d\n",b);
    printf("-----\n");
    printf("%dx%d is",x,a);
    printf("%d\n",t);
    printf("%dx%d is",y,a);
    printf("%d\n",q);
    printf("-----\n");
    printf("ADD THEM %d\n",w);
    printf("---------");
   return 0;
}
