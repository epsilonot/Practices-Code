#include <stdio.h>

void findMinMax(int values[], int size, int *maxValues, int *minValues) {
    for (int i = 0; i < size; i++) {
        if (values[i] > maxValues[0]) {
            maxValues[2] = maxValues[1];
            maxValues[1] = maxValues[0];
            maxValues[0] = values[i];
        } else if (values[i] > maxValues[1]) {
            maxValues[2] = maxValues[1];
            maxValues[1] = values[i];
        } else if (values[i] > maxValues[2]) {
            maxValues[2] = values[i];
        }

        if (values[i] < minValues[0]) {
            minValues[2] = minValues[1];
            minValues[1] = minValues[0];
            minValues[0] = values[i];
        } else if (values[i] < minValues[1]) {
            minValues[2] = minValues[1];
            minValues[1] = values[i];
        } else if (values[i] < minValues[2]) {
            minValues[2] = values[i];
        }
    }
}

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int maxValues[3] = {values[0], values[0], values[0]};
    int minValues[3] = {values[0], values[0], values[0]};

    findMinMax(values, n, maxValues, minValues);

    printf("Three maximum values: %d, %d, %d\n", maxValues[0], maxValues[1], maxValues[2]);
    printf("Three minimum values: %d, %d, %d\n", minValues[0], minValues[1], minValues[2]);

    return 0;
}
