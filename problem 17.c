
#include <stdio.h>

int main() {
    int s, h, m, remaining_s;

    printf("Enter the number of seconds: ");
    scanf("%d", &s);

    h = s / 3600;
    remaining_s = s % 3600;
    m = remaining_s / 60;
    remaining_s = remaining_s % 60;

    printf("H:M:S = %d:%d:%d\n", h, m, remaining_s);

    return 0;
}
