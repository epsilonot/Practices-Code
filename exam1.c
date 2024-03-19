


#include <stdio.h>
double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;
    double sum = 0.0;

    printf("Enter a value for N: ");
    scanf("%d", &N);


    for (int i = 1; i <= N; i++) {
        sum += (double)i / (double)factorial(i);
    }

    printf("Sum of the series 1/1! + 2/2! + 3/3! + ... + %d/%d! = %lf\n", N, N, sum);

    return 0;
}
