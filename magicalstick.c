#include<stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int ans = 0;
        scanf("%d", &n);
        ans = n / 2;
        if (n % 2 == 1)
            ans++;

        printf("%d\n", ans);
    }

    return 0;
}
