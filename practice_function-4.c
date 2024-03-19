#include<stdio.h>
void print_divisor(int x){
    int i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            printf("The number is:%d\n",i);
        }
    }
}
int main(){
    print_divisor(40);
    return 0;
}