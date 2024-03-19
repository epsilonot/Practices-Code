#include<stdio.h>
float add(int a, int b){
    return a+b;
}
float substract(int a, int b){
    return a-b;
}
float multiply(int a, int b){
    return a*b;
}
float devide(int a, int b){
    return a/b;
}
int main(){
    float a,b;
    printf("Enter the value of A and B:");
    scanf("%f%f",&a,&b);
    float add_result=add(a,b);
    float substract_result=substract(a,b);
    float multiply_result=multiply(a,b);
    float devide_result=devide(a,b);
    printf("Add\tSubs\tMulti\tDevide\n%.0f\t%.0f\t%.0f\t%.3f\n",add_result,substract_result,multiply_result,devide_result);
    return 0;
}