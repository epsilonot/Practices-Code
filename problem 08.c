/* Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3 */
#include <stdio.h>
int main()
{
    int in_days, year, weeks, days;

    printf("Enter the number of days:");
    scanf("%d", &in_days);

    year = in_days / 365;
    weeks = (in_days - (year * 365)) / 7;
    days = in_days - ((year * 365) + (weeks * 7));


   /* #include<stdio.h>
int main()
{
    int days,week,year;
    printf("Enter the number of days:");
    scanf("%d",&days);
    year=days/365;
    week=(days%365)/7;
    days=days-((year*365)+(week*7));
    printf("Years: %d\nWeeks: %d\nDays: %d\n",year,week,days);
    return 0;
}*/

    printf("Years:%d\nWeeks:%d\nDays:%d\n", year, weeks, days);
    return 0;
}