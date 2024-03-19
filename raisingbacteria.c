#include <stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);

    while (x > 1) {
        if (x % 2 == 1) {
            count++;
        }
        x = x / 2;
    }

    printf("%d\n", count+1);

    return 0;
}
