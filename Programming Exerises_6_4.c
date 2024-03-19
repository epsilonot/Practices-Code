#include <stdio.h>

int main()
{
    int marks[10];
    int count[4] = {0, 0, 0, 0};


    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        count[0] += marks[i] > 80;
        count[1] += marks[i] > 60;
        count[2] += marks[i] > 40;
        count[3] += marks[i] <= 40;
    }

    printf("Number of students:\n");
    printf("Above 80: %d\n", count[0]);
    printf("Between 61 and 80: %d\n", count[1]-count[0]);
    printf("Between 41 and 60: %d\n", count[2]-count[1]);
    printf("40 or less: %d\n", count[3]);
    printf("Between 81 and 100: %d\n", count[0]);
    printf("Between 61 and 80: %d\n", count[1]-count[0]);
    printf("Between 41 and 60: %d\n", count[2]-count[1]);
    printf("40 or less: %d\n", count[3]);

    return 0;
}
