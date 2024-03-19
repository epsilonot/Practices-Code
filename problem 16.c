#include <stdio.h>

int main() {

    int amount;
    printf("Test Data:\nInput the amount: ");
    scanf("%d", &amount);

    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    int count[7] = {0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 7; i++) {
        count[i] = amount / notes[i];
        amount = amount - count[i] * notes[i];
    }

    printf("Expected Output:\nThere are:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d Note(s) of %d.00\n", count[i], notes[i]);
    }

    return 0;
}
