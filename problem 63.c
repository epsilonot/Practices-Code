/*Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 
1^4 + 2^4 + 4^4 + 7^4 + 11^4 + • • • + m^4. In this case, m is less than or equal to n. Print an appropriate 
message. 
Input a positive number less than 100: 68
Sum of the series is 37361622*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a positive integer less than 100: ");
    scanf("%d", &n);
    
    if (n < 1 || n >= 100) {
        printf("Invalid input! Please enter a positive integer less than 100.\n");
        return 0;
    }
    
   
    printf("The sum of the series is: %d\n", sum);
    
    return 0;
}//nothing to understand

