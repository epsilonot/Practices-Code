#include <stdio.h>

int main() {
    char str[100];
    int i, small=0, capital=0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z')
            small++;
        else if(str[i]>='A' && str[i]<='Z')
            capital++;
    }

    printf("Number of small alphabets: %d\n", small);
    printf("Number of capital alphabets: %d\n", capital);

    return 0;
}
