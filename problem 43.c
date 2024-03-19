/*Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line. Go to the editor
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30*/
#include<stdio.h>
int main(){
    int p,q,i,j,num=1;
    printf("Input number of lines:");
    scanf("%d",&p);
    printf("Number of characters in a line:");
    scanf("%d",&q);
    for(i=1;i<=p;i++){
        for(j=1;j<=q;j++){
            num+=1;
            printf("%d\t",num);
        }
        printf("\n");
    }
    return 0;
}