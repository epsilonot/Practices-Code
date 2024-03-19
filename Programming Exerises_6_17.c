
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if (b > a) {
        printf("%d is greater than %d\n", b, a);
    } else {
        printf("%d and %d are equal\n", a, b);
    }

    return 0;
}
