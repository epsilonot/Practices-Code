#include<stdio.h>
#include<stdlib.h>
void selection_sort(int A[],int n);
int main()
{
    int n,i,A[100];
    printf("Enter the size of the list: ");
    scanf("%d",&n);
    if(n>100)
    {
        printf("\nSize should be less or equal to 100");
        exit(0);
    }
    printf("\nEnter the element of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter A[%d]=",i);
        scanf("%d",&A[i]);
    }
    selection_sort(A, n);
    printf("\nThe stored list is as followes:");
    for(i=0; i<n; i++)
    {
        printf("\nA[%d]=%d",i,A[i]);
    }
}
void selection_sort(int A[],int n)
{
    int i, j, position, min;
    for(i=0; i<n-1; i++)
    {
        position=i;
        min=A[i];
        for(j=i+1; j<n; j++) //A[0]=5; A[1]=3;
            if(A[j]<min) //A[0]=3; A[1]=5;
            {
                min=A[j];
                position=j;
            }
        A[position]=A[i];
        A[i]=min;
    }
}
