#include<stdio.h>
int main()
{
    int unit,cust_num;
    float charges;
    printf("Enter CUSTOMER NO. and UNITS consumed\n");
    scanf("%d%d",&cust_num,&unit);
    if(unit <= 200)
        charges = 0.5*unit;
    else if (unit - 400)
        charges = 100+0.65*(unit-200);
    else if (unit<=600)
        charges=230+0.8*(unit-400);
    else charges = 390+(unit-600);
    printf("\n\nCustomer No: %d: Charges = %.2f\n",cust_num,charges);
    return 0;
}
