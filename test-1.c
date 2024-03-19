#include<stdio.h>
int main(){
    int a,b;
    a=4;
    b=++a + ++a + ++a;
    //b=a++ + a++;
    printf("%d\n%d",b,a);
    return 0;
}
