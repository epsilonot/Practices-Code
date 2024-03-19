/*Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444*/
#include<stdio.h>
int main()
{
    printf("Name:Afrin Jahan\nID: 2102075\n\n");
    float a,b,average;
    int item_i,item_ii;
    printf("Waight_Item1: ");
    scanf("%f",&a);
    printf("No. of item1: ");
    scanf("%d",&item_i);
    printf("Waight_Item2: ");
    scanf("%f",&b);
    printf("No. of item2: ");
    scanf("%d",&item_ii);
    average=((a*item_i)+(b*item_ii))/(item_i+item_ii);
    printf("Expected Output:\nAverage Value = %f",average);
    return 0;
}
