
#include<stdio.h>
int main()
{
  int *p,sum,i;
  int x[5]={5,9,6,3,7};
  i = 0;
  p = x;
  printf("Element value Address\n\n");

  while(i<5){
   printf("x[%d] %d u\n",i,*p,p);
   sum = sum + *p;
   i++,p++;
  }
 printf("\n Sum   = %d\n",sum);
 printf("\n &x[0] = %p\n",&x[0]);
 printf("\n p.    = %p\n",p);
}
