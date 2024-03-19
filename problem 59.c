/*Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n. Go to the editor
Input any number: 1 + 1/0
Sum = 1/0 */
#include<stdio.h>
int main(){
    int n,i;
    float sum=0.00;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0){
        printf("Error: Division by zero.\n");
    }else{
    for(i=1;i<=n;i++){
        sum=+1.0/i;
    }
    
    //printf("1+");
    for(i=1;i<=n;i++){
        printf("1/%d + ",i);
    }
    printf("\nsum=%f\n",sum);
    }
    return 0;
}