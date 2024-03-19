#include<stdio.h>
int main()
{
    int i,count;
    float weight,hight;
    count=0;
    printf("Enter weight and hight for 10 boys\n");
    for(i=1; i<=10; i++)
    {
        scanf("%f%f",&weight,&hight);
        if(weight<50&&hight>170)
            count=count+1;
    }
    printf("Number of boys with weight<50kg\nand hight>170 cm=%d\n",count);
    return 0;
}
