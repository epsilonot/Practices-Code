/*Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include <stdio.h>
#define PI 3.1416
int main()
{

    int radius;
    printf("Enter the radius of the circle:");
    scanf("%d", &radius);
    double perimeter, area;
    perimeter = 2 * PI * radius, area = PI * radius * radius;
    printf("Perimeter of the Circle = %lf inches\nArea of the Circle = %lf square inches\n", perimeter, area);
    return 0;
}
