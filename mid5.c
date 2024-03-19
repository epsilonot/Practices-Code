#include <stdio.h>
int sum_f(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
       sum = sum + arr[i];
    }
    return sum;
}
int main()
{

    int arr[5] ;
    printf("Input the element of the array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Sum of all the elements of an array: %d\n", sum_f(arr,5));
    return 0;
}
