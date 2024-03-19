/*Read integers A and B from input file and write their sum in output file.
Input
Input file contains A and B (0<A,B<10001).
Output
Write answer in output file.
Sample Input
5 3
Sample Output
8*/
#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Input A and B:\n");
    scanf("%d %d", &a, &b);

    if ((a < 0 || a > 100) || (b < 0 || b > 100)) {
        printf("A and B should be between 0 and 100 (inclusive).");
        return 0;
    }

    sum = a + b;
    printf("Sum of A and B: %d", sum);
    return 0;
}
