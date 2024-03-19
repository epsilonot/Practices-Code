
#include <stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Input the 5 members of array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] <= 5)
        {
            printf("Expected Output:\nA[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}
