
#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    char T;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the type of trigonometric function (s/c/t for sin/cos/tan): ");
    scanf(" %c", &T);

    if (T == 's' || T == 'S') {
        result = sin(x);
        printf("sin(%.2f) = %.2f\n", x, result);
    } else if (T == 'c' || T == 'C') {
        result = cos(x);
        printf("cos(%.2f) = %.2f\n", x, result);
    } else if (T == 't' || T == 'T') {
        result = tan(x);
        printf("tan(%.2f) = %.2f\n", x, result);
    } else {
        printf("Invalid input. Please enter s/c/t for sin/cos/tan.\n");
    }

    return 0;
}
