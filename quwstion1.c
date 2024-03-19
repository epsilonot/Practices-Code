#include<stdio.h>
int main(){
    /*int x=100;
    printf("%d\n",10+x++);
    printf("%d\n",10+ ++x);
}
int x=5,y=10,z=10;
x=y==z;
printf("%d",x);
}

for(int m=0;m<3;m++)
    printf("%d\n",(m%2)?m:m+2);
    int m=0;
    do{
        if(m>10)
            continue;
        m=m+10;
    }while(m<50);
    printf("%d",m);*/
    char string[]="HELLO WORLD";
    int m;
    for(m=0;string[m]!='\0';m++)
    if((m%2)==0)
    printf("%c\n",string[m]);
}
