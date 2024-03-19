#include<stdio.h>

int main() {
    int i, number, count = 0, sum = 0;


    printf("Enter 10 integer numbers:\n");


    for (i = 1; i <= 10; i++) {
        scanf("%d", &number);


        if (number >= 100 && number <= 200 && number % 7 == 0) {
            sum += number;
            count++;
        }
    }


    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);

    return 0;
}
