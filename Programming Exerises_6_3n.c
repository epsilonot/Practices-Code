#include <stdio.h>

int main()
{
    int marks[100];
    int count[4] = {0, 0, 0, 0}; //initialize count array to 0

    // Read in the marks
    printf("Enter the marks of 100 students:\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Calculate the counts
    for (int i = 0; i < 100; i++)
    {
        count[0] += marks[i] > 80;  // (a)
        count[1] += marks[i] > 60;  // (b)
        count[2] += marks[i] > 40;  // (c)
        count[3] += marks[i] <= 40; // (d)
    }

    // Print the counts
    printf("Number of students:\n");
    printf("Above 80: %d\n", count[0]); // (a)
    printf("Between 61 and 80: %d\n", count[1]-count[0]); // (f)
    printf("Between 41 and 60: %d\n", count[2]-count[1]); // (g)
    printf("40 or less: %d\n", count[3]); // (d)
    printf("Between 81 and 100: %d\n", count[0]); // (e)
    printf("Between 61 and 80: %d\n", count[1]-count[0]); // (f)
    printf("Between 41 and 60: %d\n", count[2]-count[1]); // (g)
    printf("40 or less: %d\n", count[3]); // (d)

    return 0;
}
