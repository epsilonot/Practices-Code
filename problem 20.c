#include <stdio.h>
#include <math.h>

int main() {
    printf("Name:Afrin Jahan\nID: 2102075\n\n");
    float a, b, c, discriminant, r_1, r_2;

    printf("Enter the coefficients of the quadratic equation:\n");
    printf("Input the first number(a) = ");
    scanf("%f", &a);
    printf("Input the second number(b) = ");
    scanf("%f", &b);
    printf("Input the third number(c) = ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        r_1 = (-b + sqrt(discriminant)) / (2 * a);
        r_2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Expected Output:\n");
        printf("root1 = %.5f\n", r_1);
        printf("root2 = %.5f\n", r_2);
    }
    else {
        printf("The roots are imaginary.\n");
    }

    return 0;
}

