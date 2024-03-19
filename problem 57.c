/*Write a C program to reverse and print a given number. Go to the editor
Input a number:
The original number = 234
The reverse of the said number = 432 */
#include<stdio.h>
int main(){
    int num,reminder,reverse_number=0;
    printf("Input a number:\nThe original number = ");
    scanf("%d",&num);
    while (num!=0)
    {
        reminder = num % 10;
        reverse_number = reverse_number * 10 + reminder;
        num = num /10;
    }
    printf("The reverse of the said number = %d\n",reverse_number);
    return 0;
    

}