/*Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers. Go to the editor
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380*/
#include<stdio.h>
int main(){
    float a[4],min_num,maxi_num,diffrence;
    printf("Input four numbers:");
    int i;
    for(i=0;i<4;i++){
        scanf("%f",&a[i]);

    }
    maxi_num=a[0];
    for(i=1;i<4;i++){
        if(maxi_num<a[i]){
            maxi_num=a[i];
        }
    }
    min_num=a[0];
    for(i=1;i<4;i++){
        if(min_num>a[i]){
            min_num=a[i];
        }
    }
    diffrence=maxi_num-min_num;
    printf("Diffrence is: %.4f\n",diffrence);
    return 0;
}