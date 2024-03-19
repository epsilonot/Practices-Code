/*Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50*/
#include<stdio.h>
int main(){
    int marks,sum=0,count=0;
    float avarage=0;
    printf("Input Mathematics marks (0 to terminate):");
    while(1){
        scanf("%d",&marks);
        if(marks<=0)
        break;
        sum+=marks;
        count ++;
    }
    avarage=sum/count;
    printf("Average marks in Mathematics: %.2f\n",avarage);
    return 0;
}