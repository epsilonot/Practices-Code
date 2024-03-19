#include<stdio.h>
int main(){
    int size,i;
    
    printf("Input the length of the array:");
    scanf("%d",&size);
    int a[size];
    printf("\nInput thr array elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int smallest=0,position;
    smallest=a[0];
    for(i=1;i<size;i++){
    if(a[i]<smallest){
        smallest=a[i];
        position=i;
    }
    

    }
    printf("Expected Output:\n");
    printf("Smallest value: %d\n",smallest);
    printf("Positision of element: %d\n",position);
    return 0;
}