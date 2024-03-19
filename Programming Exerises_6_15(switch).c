
#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    char T;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the type of trigonometric function (s/c/t for sin/cos/tan): ");
    scanf(" %c", &T);

    switch (T) {
        case 's':
        case 'S':
            result = sin(x);
            printf("sin(%.2f) = %.2f\n", x, result);
            break;
        case 'c':
        case 'C':
            result = cos(x);
            printf("cos(%.2f) = %.2f\n", x, result);
            break;
        case 't':
        case 'T':
            result = tan(x);
            printf("tan(%.2f) = %.2f\n", x, result);
            break;
        default:
            printf("Invalid input. Please enter s/c/t for sin/cos/tan.\n");
            break;
    }

    return 0;
}
