
#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Input value for x & y : ");
    scanf("%d%d",&x,&y);
    printf("Before swapping the value of x & y: %d\t%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After swapping the value of x & y: %d\t%d\n",x,y);
    return 0;
}