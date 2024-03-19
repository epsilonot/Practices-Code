#include<stdio.h>
int main()
{
     printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
    int a,b,c;
    float peri;
    printf("Test Data:");
    printf("Input the first number:");
    scanf("%d",&a);
    printf("Input the seocend number:");
    scanf("%d",&b);
    printf("Input the third number:");
    scanf("%d",&c);
    peri=a+b+c;
    printf("Expected Output:\nPerimeter=%.1f",peri);
    return 0;
}
