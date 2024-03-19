/*Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125 */
#include<stdio.h>
int main(){
    int i,a,b,line;
    printf("Input number of lines:");
    scanf("%d",&line);
    for(i=1;i<=line;i++){
        a=i*i;
        b=i*i*i;
        printf("%d\t%d\t%d\n",i,a,b);
    }
    return 0;
}