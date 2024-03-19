#include <stdio.h>

int main() {
   printf("Name:Afrin Jahan\nID: 2102075\n\n");
    int p, q, r, s;
    printf("Test Data:\n");
    printf("Input the first integers: ");
     scanf("%d", &p);
    printf("Input the second integers: ");
     scanf("%d", &q);
    printf("Input the third integers: ");
     scanf("%d", &r);
    printf("Input the fourth integers: ");
    scanf("%d", &s);

    if ((q > r) && (s > p) && ((r + s) > (p + q)) && (p % 2 == 0)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }

    return 0;
}

