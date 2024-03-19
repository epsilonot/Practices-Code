#include<stdio.h>
int main(){
    int row,cloumn,i,j,product[5][5];
    printf("MULTIPLICATION TABLE\n\n");
    printf(" ");
    for(j=0;j<5;j++)
        printf("%4d",j+1);
    printf("\n");
    printf("_________________________\n");
    for(i=0;i<5;i++)
    {
        row=i+1;
        printf("%2d |",row);
        for(j=1;j<=5;j++){
            cloumn=j;
            product[i][j]=row*cloumn;
            printf("%4d",product[i][j]);
        }
            printf("\n");
    }

}
