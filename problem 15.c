/*Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803 */
#include <stdio.h>
#include <math.h>

int main() {

    float x1, y1, x2, y2, dis;

    printf("Input x1: ");
    scanf("%f", &x1);

    printf("Input y1: ");
    scanf("%f", &y1);

    printf("Input x2: ");
    scanf("%f", &x2);

    printf("Input y2: ");
    scanf("%f", &y2);

    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the said points: %.4f\n", dis);

    return 0;
}

