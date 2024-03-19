#include<stdio.h>
int get_sum(int x,int y){
    int sum=x+y;
    return sum;

}
void say_hi(){
    printf("hi\n");
}
int main(){
    printf("Code start\n");
    say_hi();
    int sum=get_sum(10,30);
    printf("Sum of two number:%d\n",sum);
    return 0;

}