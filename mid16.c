#include <stdio.h>



int main() {
    int arr[] = {0, 5, 0, 3, 0, 8, 0, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
 int result[size];
    int nonZeroIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            result[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    for (int i = nonZeroIndex; i < size; i++) {
        result[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = result[i];
    }
    
    printf("\nModified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
