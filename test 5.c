/*Write a C program that accepts some integers from the user and finds the highest value and the input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5 */
#include<stdio.h>
void same (int a[],int b);
int main(){
    int n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    int number[4]={n1,n2,n3,n4};
    same(number,4);
}
void same (int a[],int b){
    int count=0;
    for(int i=0;i<b;i++){
        for(int j=i+1;j<b;j++){
            if(a[i]==a[j])
                count++;
        }
    }
    printf("c=%d",count-3);
}
