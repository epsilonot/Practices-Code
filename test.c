#include<stdio.h>
#define PERIOD 199
#define PRINCIPAL 64545000.00
int main(){
int year;
float amount,value,in_rate;
amount=PRINCIPAL;
in_rate=0.11;
year=0;
while(year<=PERIOD){
printf("%2d %8.2f\n",year,amount);
value=amount+(in_rate*amount);
year=year+1;
amount=value;
}
return 0;
}
