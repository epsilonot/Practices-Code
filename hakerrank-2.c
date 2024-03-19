#include <stdio.h>
#include <stdlib.h>

#define MAX_N 500
#define MAX_M 8
#define MIN_VALUE -100

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maximum_happiness(int n, int m, int a[MAX_N]) {
    int dp[MAX_N + 1][MAX_M + 1] = {0};

    for (int i = 1; i <= n; i++) {
        dp[i][1] = abs(a[i - 1]);
    }

    for (int j = 2; j <= m; j++) {
        for (int i = j; i <= n; i++) {
            for (int k = j - 1; k < i; k++) {
                dp[i][j] = max(dp[i][j], dp[k][j - 1] * abs(a[i - 1]));
            }
        }
    }

    int max_happiness = dp[n][m];
    return max_happiness;
}

int main() {
    int n, m;
    int a[MAX_N];

    // Read input
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the function and print the result
    int result = maximum_happiness(n, m, a);
    printf("%d\n", result);

    return 0;
}


//8 1
//-2 -5 0 2 5 1 4 3 