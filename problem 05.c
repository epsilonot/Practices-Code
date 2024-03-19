/*Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/
#include <stdio.h>
int main()
{

    int hight = 5, width = 7, perimeter, area;
    perimeter = 2 * (hight + width), area = hight * width;
    printf("Perimeter of the rectangle = %d inches\n Area of the rectangle = %d squre inches\n", perimeter, area);
    return 0;
}
