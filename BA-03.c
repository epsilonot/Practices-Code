/*Write a C program that checks two given integers and returns true if at least one of them is 30 or if their 
sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, the program will 
return true.
Expected Output:
1
1
0
#include<stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    sum=a+b;
    if(a==30||b==30||sum==30){
        printf("1\n");
    }else{
        printf("0\n");
    }
    
}*/
#include<stdio.h>
int main(void){
    printf("%d\n",test(25,5));
    printf("%d\n",test(30,5));
    printf("%d\n",test(25,25));
}
int test(int x, int y){
    return (x==30||y==30||(x+y)==30);
}