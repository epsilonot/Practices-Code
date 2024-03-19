#include<stdio.h>
#define PERIOD 10
int main(){
    int i,year=0;
    float pric=5000.00,rate,incri=0;
    printf("Enter the value of Interest rate:");
    scanf("%f",&rate);
    printf("Year\tIncriment\n");
    for(i=0;i<=PERIOD;i++){
      incri=pric*year*rate;
      if(incri==0){
        printf("%d\t%f",year,pric);
      }
      printf("%d\t%.2f\n",year,incri);
      year=year+1; 
    }
    return 0;
}