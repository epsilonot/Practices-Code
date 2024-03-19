#include<stdio.h>
#define PRINCIPAL 5000.00
#define PERIOD 10
int main(){
    float amount,inrate=0.11,value=0;
    int year=0;
    amount=PRINCIPAL;
    while(year<=PERIOD){
        printf("%d\t%.2f\n",year,amount);
        value=amount+inrate*amount;
        year++;
        amount=value;
    }
}
