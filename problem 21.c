#include<stdio.h>
int main()
{
    printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
int x;
printf("Test Data:\nInput an integer:");
scanf("%d",&x);
printf("Expected Output:\n");
if (x>=0&&x<=20){
printf("Range[0,20]\n");
}

else if (x>=21&&x<=40){
printf("Range[20,40]\n");
}
else if (x>=41&&x<=60){
printf("Range[40,60]\n");
}
else if (x>=61&&x<=80){
printf("Range[60,80]\n");
}
else
{
printf("Outside The Range");
}
return 0;
}
