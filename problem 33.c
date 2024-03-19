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
int main(){
    int arr[5],i,h_value=0,position=0;
    printf("Input 5 integers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
            h_value=arr[0];
            position=i;
        }
    }
    printf("Highest Value: %d\n",h_value);
    printf("Position: %d\n",position+1);
    return 0;
}