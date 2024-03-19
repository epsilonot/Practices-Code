#include<stdio.h>
#include<math.h>
int main()
{
    int w,x,y,z;
    float a,b,c,d;
    a=1.95;
    b=2.24;
    c=3.40;
    d=4.65;
    w=ceil(a);
    x=floor(b);
    y=floor(c);
    z=ceil(d);
    printf("\n\n*(%f)\n*",a);
    printf("\n\n**\n**(%f)\n**",b);
    printf("\n\n***\n***(%f)\n***",c);
    printf("\n\n****\n****(%f)\n****",d);
    return 0;
}
