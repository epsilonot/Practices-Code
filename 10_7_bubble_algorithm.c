#include <stdio.h>
void sort(int a[],int n);

/*void bubbleSort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {//0
        for (j = 0; j < size - i - 1; j++) {//0- 2   ;1- 5    ;2- 8    ;3- 12    ;4- 3;
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/
int main()
{
    int i,marks[5];
    printf("Enter the marks:\n");
    for(i=0; i<5; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&marks[i]);
    }
    printf("\nMarks before sorting:\n");
    for(i=0; i<5; i++)
        printf("A[%d]=%d\n",i,marks[i]);


    sort(marks,5);

    printf("Marks after sorting:\n");
    for(i=0; i<5; i++)
        printf("A[%d]=%d\n",i,marks[i]);
    return 0;
}

void sort(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
}

