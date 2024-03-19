#include<stdio.h>
int main() {
    printf("Name:Afridi Alom Pranto\nID: 2102027\n\n");
    int num, sum = 0;

    printf("Data Test:\nEnter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if(num % 2 != 0) {
            sum += num;
        }
    }
    printf("Expected Output:\nSum of all odd values: %d", sum);
    return 0;
}







