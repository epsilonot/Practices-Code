#include <stdio.h>

#define MOD 1000000007

int countBinaryNumbers(int n) {
    int result = 1;
    int base = 2;
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        n /= 2;
    }
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int result = countBinaryNumbers(n);
    printf("%d\n", result);
    
    return 0;
}
