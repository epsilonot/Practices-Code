
#include <stdio.h>

void main(){
    int num,i,strt,end, ctr;

    printf("Input starting number of range: ");
    scanf("%d",&strt);

    printf("Input ending number of range : ");
    scanf("%d",&end);
    printf("The prime numbers between %d and %d are : \n",strt,end);
  
    for(num = strt;num<=end;num++)
       {
        
        ctr=0;
         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 ctr++;
                 
             }
        }
        
         if(ctr==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n");  
}