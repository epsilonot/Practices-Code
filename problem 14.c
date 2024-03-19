/*Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000 */
#include <stdio.h>

int main() {
    int dis;
    float fuel, consumption;
    printf("Input total distance in km: ");
    scanf("%d", &dis);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);
    consumption = dis / fuel;
    printf("Average consumption (km/lt): %.3f\n", consumption);
    return 0;
}

