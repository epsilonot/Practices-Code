#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the total percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 80) {
        printf("First Division\n");
    } else if (percentage >= 60) {
        printf("Second Division\n");
    } else {
        printf("Third Division\n");
    }

    return 0;
}
