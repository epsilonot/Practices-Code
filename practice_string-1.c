#include<stdio.h>

    int main(){
        char a[]={'a','b','c','d','e','f'};
        int i;
        i=0;
        while(1){
            printf("%d-%c\n",i,a[i]);
            if(a[i]=='\0'){
            break;
            }
            i++;
        }
        
          return 0;
    }
  
