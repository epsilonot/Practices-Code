#include <stdio.h>
int main(){
    int a=10,b=20,c=30;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    if(*ptr1>*ptr2 && *ptr1>*ptr3){
        printf("The large number is= %d",*ptr1);
    }else if(*ptr2>*ptr3 && *ptr2>*ptr1)
        printf("The large number is= %d",*ptr2);
     else(*ptr3>*ptr2 && *ptr3>*ptr1){
        printf("The large number is= %d",*ptr1);
    }
}
