#include<stdio.h>
    struct personal{
        char name[20];
        int day;
        int year;
        char month[10];
        float salary;
    };
    int main(){
    struct personal person;
    printf("Input values:\n");
    scanf("%s %d %d %s %f",person.name,&person.day,&person.year,person.month,&person.salary);
    printf("%s \n%d \n%d \n%s \n%f\n",person.name,person.day,person.year,person.month,person.salary);
}