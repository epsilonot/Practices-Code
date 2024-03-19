#include <stdio.h>

int main() {
    int d, y, m, remaining_d;

    printf("Enter the number of days: ");
    scanf("%d", &d);

    y = d / 365;
    remaining_d = d % 365;

    m = remaining_d / 30;
    remaining_d = remaining_d % 30;

    printf("%d Year(s)\n", y);
    printf("%d Month(s)\n", m);
    printf("%d Day(s)\n", remaining_d);

    return 0;
}

