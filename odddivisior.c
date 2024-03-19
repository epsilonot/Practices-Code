#include <stdio.h>
#include <stdbool.h>

bool hasOddDivisor(long long int n) {
    // Check if n has a prime divisor greater than 2
    while (n % 2 == 0) {
        n /= 2;
    }
    
    // At this point, n is an odd number
    // Check if n is greater than 1 (i.e., n has an odd divisor)
    if (n > 1) {
        return true;
    }
    
    return false;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long int n;
        scanf("%lld", &n);

        if (hasOddDivisor(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
