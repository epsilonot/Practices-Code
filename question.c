#include<stdio.h>
int main(){
/*    int n,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("Sum of the number: %d",sum);
}

int n,revNum=0,r;
x:
printf("Enter a odd number:");
scanf("%d",&n);
if(n%2==0)
    goto x;
else
    while(n>0){
    r=n%10;
    revNum=revNum*10+r;
    n/=10;
    }
    printf("%d",revNum);
}
*/
int a=10,b=25;
a=b-- - a--;
b=--b - --a;
printf("%d %d",a,b);
}