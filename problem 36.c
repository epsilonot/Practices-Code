/* Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and
 for correct password print, "Correct password" and quit the program. The correct password is 1234. Go to the editor
Test Data :
Input the password: 1234
Expected Output:
Correct password*/
#include<stdio.h>
int main(){
    int pass;
    printf("Input the passward:");
    scanf("%d",&pass);
    if(pass==1234){
        printf("Correct password\n");
    }else{
        printf("Incorrect passward\n");
    }
    return 0;
}