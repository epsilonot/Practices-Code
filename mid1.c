

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of element:\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the element of the array:\n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int even[a],odd[a];
    int even_num=0,odd_num=0;
    int even_sum=0, odd_sum=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            even[even_num]=arr[i];
            even_sum=even_sum+arr[i];
            even_num++;
        }else{
          odd[odd_num]=arr[i];
            odd_sum=odd_sum+arr[i];
            odd_num++;
        }
    }
     printf("Even numbers are:");
    for(int i=0;i<even_num;i++){
       printf("%d",even[i]);
       printf(",");
    }
    printf("\nOdd numbers are:");
    for(int i=0;i<odd_num;i++){
       printf("%d",odd[i]);
       printf(",");
    }printf("\n");
    printf("The sum of even numbers: %d\n",even_sum);
    printf("The sum of odd numbers: %d\n",odd_sum);
}
