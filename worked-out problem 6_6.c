#include<stdio.h>
int main()
{

    char month[12][20]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    printf("Enter the month value:");
    scanf("%d",&i);
    if(i<1||i>12)
    {
        printf("Incorrect value!!\nPress any key to terminate the program...");

    }
    if(i!=12)
        printf("%s followed by %s",month[i-1],month[i]);
    else
        printf("%s followed by %s",month[i-1],month[0]);
    return 0;

}
