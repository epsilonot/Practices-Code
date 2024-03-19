#include<stdio.h>
int main(){
    int i,h,m,t,f_m;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&h,&m);
        h=24-(h+1);
        int m_l=h*60;
        m=60-m;
        f_m=m_l+m;
        printf("%d\n",f_m);
    }
}
