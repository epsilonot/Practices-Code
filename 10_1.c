#include<stdio.h>
int main(){
    printline();
    in_prin();
    printline();
    return 0;
}
void printline(void){
    int i;
    for(i=1;i<=35;i++)
    printf("%c",'-');
    printf("\n");
}

void in_prin(void){
    float in_rate;
    float total=0,principal;
    int period,year;
    printf(" Principal amount?\t");
    scanf("%f",&principal);
    printf(" Interest rate?\t");
    scanf("%f",&in_rate);
    printf(" Period?\t");
    scanf("%d",&period);
    year=1;
    total=principal;
    while(year<=period){
        total=total*(1+in_rate);
        year++;
    }
    
    printf(" %.2f\t%.2f\t%d\t%.2f\n",principal,in_rate,period,total);
//done
}