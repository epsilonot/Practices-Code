
#include <stdio.h>


struct Result {
    int sum;
    int product;
};


struct Result calculate(int a,int b){
    struct Result result;
    result.sum=a+b;
    result.product=a*b;
    return result;
}

int main() {
    int num1, num2;
    struct Result result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = calculate(num1, num2);

    printf("Sum: %d\n", result.sum);
    printf("Product: %d\n", result.product);

    return 0;
}

