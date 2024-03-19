/*Annual examination result*/
#include<stdio.h>
#define FIRST 360
#define SECOND 240
int main(){
    int i,j,stu,sub,total=0,roll_number,marks;
    printf("Enter number of students:");
    scanf("%d",&stu);
    printf("Enter number of subjects:");
    scanf("%d",&sub);
    printf("\n");
    for(i=1;i<=stu;i++){
        printf("Enter roll_number:");
        scanf("%d",&roll_number);
        printf("Enter marks of %d subjects for ROLL NO %d\n",sub,roll_number);
        for(j=1;j<=sub;j++){
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("TOTAL MARKS = %d",total);
        if(total>=FIRST){
            printf("(FRIST DIVISION)\n\n");
        }else if(total>=SECOND){
            printf("(SEOCEND DIVISION)\n\n");
        }else{
            printf("(******FAIL******)");
        }
        total=0;
    }
    return 0;
}