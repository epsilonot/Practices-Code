#include<stdio.h>
float learge(float a[],int b){
    int i;
    float max;
    max=a[0];
    for(i=1;i<b;i++){
        if(max<a[i])
            max=a[i];
    }
    return (max);
}
int main(){
    int n;
    scanf("%d\n",&n);
    float num[100];
    for(int i=0;i<n;i++){
        scanf("%f",&num[i]);
    }
    float l_valu = learge(num,n);
    printf("%f\n",l_valu);
}
